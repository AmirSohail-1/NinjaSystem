#include "Component/QuestManager.h"
#include "Save/QuestSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

UQuestManager::UQuestManager()
{
	PrimaryComponentTick.bCanEverTick = true;
	SaveSlotName = TEXT("QuestSaveSlot");
}

void UQuestManager::BeginPlay()
{
	Super::BeginPlay();
	LoadQuestProgress();
}

void UQuestManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	SaveQuestProgress();
	Super::EndPlay(EndPlayReason);
}

void UQuestManager::AddQuest(const FQuestTable& NewQuest)
{
	ActiveQuests.Add(NewQuest);
	CacheQuest(NewQuest);
	UE_LOG(LogTemp, Warning, TEXT("Quest Added: %s"), *NewQuest.Name);
	UpdateCurrentQuest();
}

void UQuestManager::CompleteQuest(const FString& QuestName)
{
	for (FQuestTable& Quest : ActiveQuests)
	{
		if (Quest.Name == QuestName)
		{
			Quest.bIsCompleted = true;
			UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %s"), *Quest.Name);
			break;
		}
	}
	UpdateCurrentQuest();
}

void UQuestManager::AddAllQuestsFromDataTable()
{
	if (QuestDataTable)
	{
		static const FString ContextString(TEXT("QuestDataContext"));
		TArray<FName> RowNames = QuestDataTable->GetRowNames();
		for (const FName& RowName : RowNames)
		{
			FQuestTable* Quest = QuestDataTable->FindRow<FQuestTable>(RowName, ContextString);
			if (Quest)
			{
				AddQuest(*Quest);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("QuestDataTable is not assigned."));
	}
	UpdateCurrentQuest();
}

void UQuestManager::UpdateCurrentQuest()
{
	bool bFoundNextQuest = false;

	for (const FQuestTable& Quest : ActiveQuests)
	{
		if (!Quest.bIsCompleted)
		{
			if (!bFoundNextQuest || Quest.Name == CurrentQuest.Name)
			{
				CurrentQuest = Quest;
				OnQuestUpdated.Broadcast(CurrentQuest);
				bFoundNextQuest = true;

				// Start the timer if the quest is a timed quest
				if (CurrentQuest.bIsTimed)
				{
					GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::OnTimedQuestCompleted, CurrentQuest.TimeLimit, false);
				}
				break;
			}
		}
	}
}

void UQuestManager::CacheQuest(FQuestTable Quest)
{
	QuestCache.Add(Quest.Name, Quest);
}

FQuestTable* UQuestManager::GetCachedQuest(FString QuestName)
{
	return QuestCache.Find(QuestName);
}

void UQuestManager::OnTimedQuestCompleted()
{
	UE_LOG(LogTemp, Warning, TEXT("Timed Quest Completed: %s"), *CurrentQuest.Name);
	CompleteQuest(CurrentQuest.Name);
}

void UQuestManager::StartTimedQuest(const FString& QuestName)
{
	FQuestTable* Quest = GetCachedQuest(QuestName);
	if (Quest && Quest->bIsTimed)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::OnTimedQuestCompleted, Quest->TimeLimit, false);
	}
}

void UQuestManager::UpdateCache()
{
	// Implement cache update logic here
}

void UQuestManager::SaveQuestProgress()
{
	UQuestSaveGame* SaveGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::CreateSaveGameObject(UQuestSaveGame::StaticClass()));
	if (SaveGameInstance)
	{
		SaveGameInstance->SavedQuests = ActiveQuests;
		SaveGameInstance->CurrentQuestName = CurrentQuest.Name;
		SaveGameInstance->bCanChangeQuest = CurrentQuest.bIsCompleted;

		UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveSlotName, 0);
		UE_LOG(LogTemp, Warning, TEXT("Quest progress saved."));
	}
}

void UQuestManager::LoadQuestProgress()
{
	UQuestSaveGame* LoadGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	if (LoadGameInstance)
	{
		ActiveQuests = LoadGameInstance->SavedQuests;
		FQuestTable* LoadedQuest = GetCachedQuest(LoadGameInstance->CurrentQuestName);
		if (LoadedQuest)
		{
			CurrentQuest = *LoadedQuest;
			CurrentQuest.bIsCompleted = LoadGameInstance->bCanChangeQuest;
		}
		UE_LOG(LogTemp, Warning, TEXT("Quest progress loaded."));
	}
	else
	{
		AddAllQuestsFromDataTable();
	}
}
