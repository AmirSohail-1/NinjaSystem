#include "Component/QuestManager.h"
#include "Save/QuestSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


 UQuestManager::UQuestManager()
 {
     PrimaryComponentTick.bCanEverTick = true;
     SaveSlotName = TEXT("QuestSaveSlot");           // Set the save slot name      

 }

 void UQuestManager::BeginPlay()
 {
     Super::BeginPlay();
     LoadQuestProgress();            // Load quest progress when the game starts
 }



 void UQuestManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
 {
     SaveQuestProgress();           // Save quest progress when the game ends
     Super::EndPlay(EndPlayReason);
 }

 void UQuestManager::AddQuest(const FQuestTable& NewQuest)
 {
     ActiveQuests.Add(NewQuest);
     CacheQuest(NewQuest);
      UpdateCurrentQuest();							// Ensure this updates the current quest appropriately
     UE_LOG(LogTemp, Warning, TEXT("Quest Added: %s"), *NewQuest.Name);
     OnQuestUpdated.Broadcast(NewQuest);            // Broadcast quest update
 }

 

 void UQuestManager::CompleteQuest(const FString& QuestName)
 {
     for (FQuestTable& Quest : ActiveQuests)
     {
         if (Quest.Name == QuestName)
         {
             Quest.bIsCompleted = true;
             UE_LOG(LogTemp, Warning, TEXT("Quest Completed: %s"), *Quest.Name);
             OnQuestCompleted.Broadcast(QuestName); // Broadcast the quest completion event with the name of the completed quest
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
     //
     bool bFoundNextQuest = false;

     for (const FQuestTable& Quest : ActiveQuests)
     {
         UE_LOG(LogTemp, Warning, TEXT("Updating quest: %s, Description: %s"), *Quest.Name, *Quest.Description);
         
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

 
// Timed Quest timing update for UI. logic start     ---------------------------------------------
 

float UQuestManager::GetRemainingTime() const
 {
     return CurrentTimeRemaining;
 }

// void UQuestManager::StartTimedQuest(const FString& QuestName)
//  {
//      FQuestTable* Quest = GetCachedQuest(QuestName);
//      if (Quest && Quest->bIsTimed)
//      {
//          CurrentQuest = *Quest;
//          CurrentTimeRemaining = Quest->TimeLimit;
//          OnQuestUpdated.Broadcast(CurrentQuest);
//
//          // Set timer to update remaining time
//          GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::UpdateQuestTimer, 1.0f, true);
//      }
//  }


// void UQuestManager::UpdateQuestTimer()
//  {
//      if (CurrentTimeRemaining > 0)
//      {
//          CurrentTimeRemaining -= 1.0f; // Decrease remaining time by 1 second
//          OnTimedQuestTick.Broadcast(CurrentTimeRemaining); // Broadcast updated time remaining
//          OnQuestUpdated.Broadcast(CurrentQuest); // Broadcast updated quest data
//      }
//      else
//      {
//          // Handle completion or failure of timed quest
//          GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
//          OnTimedQuestCompleted();
//      }
//  }

/** 
 */
void UQuestManager::StartTimedQuest(const FString& QuestName)
 {
     FQuestTable* Quest = GetCachedQuest(QuestName);
     if (Quest && Quest->bIsTimed)
     {
         // Clear any existing timer
         GetWorld()->GetTimerManager().ClearTimer(TimerHandle);

         CurrentQuest = *Quest;
         CurrentTimeRemaining = Quest->TimeLimit;
         OnQuestUpdated.Broadcast(CurrentQuest);

         // Set timer to update remaining time
         GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestManager::UpdateQuestTimer, 1.0f, true);
     }
     else
     {
         UE_LOG(LogTemp, Error, TEXT("Quest %s not found or is not timed."), *QuestName);
     }
 }

void UQuestManager::UpdateQuestTimer()
 {
     if (CurrentTimeRemaining > 0)
     {
         CurrentTimeRemaining -= 1.0f; // Decrease remaining time by 1 second
         OnTimedQuestTick.Broadcast(CurrentTimeRemaining); // Broadcast updated time remaining
     }
     else
     {
         // Handle completion or failure of timed quest
         GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
         OnTimedQuestCompleted();
     }
 }
 

const FQuestTable* UQuestManager::GetCurrentQuestData() const
 {
     return ActiveQuests.IsValidIndex(0) ? &ActiveQuests[0] : nullptr;
 }
// const FQuestTable* UQuestManager::GetCurrentQuestData() const                // old way
//  {
//      return &CurrentQuest;
//  }


void UQuestManager::OnTimedQuestCompleted()
 {
     UE_LOG(LogTemp, Warning, TEXT("Timed Quest Completed: %s"), *CurrentQuest.Name);
     CompleteQuest(CurrentQuest.Name);
     OnQuestUpdated.Broadcast(CurrentQuest);
 }


// void UQuestManager::OnTimedQuestCompleted()
//  {
//      UE_LOG(LogTemp, Warning, TEXT("Timed Quest Completed: %s"), *CurrentQuest.Name);
//      CompleteQuest(CurrentQuest.Name);
//  }



// Timed Quest timing update for UI. logic end ---------------------------------------------

 void UQuestManager::UpdateCache()
 {
     QuestCache.Empty();					// Clear the cache than how will NextQuest taken from Cache ? 
     for (const FQuestTable& Quest : ActiveQuests)
     {
         if(!Quest.bIsCompleted)
         {
             CacheQuest(Quest);
         }
     }
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
 


 
 