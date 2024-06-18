// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/QuestManagerComponent.h"
 
 
UQuestManagerComponent::UQuestManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UQuestManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	AddAllQuestsFromDataTable();
}

void UQuestManagerComponent::AddQuest(const FQuest& NewQuest)
{
	ActiveQuests.Add(NewQuest);
	UE_LOG(LogTemp, Warning, TEXT("Quest Added: %s"), *NewQuest.Name);
	UpdateCurrentQuest();
}


void UQuestManagerComponent::CompleteQuest(const FString& QuestName)
{
	for (FQuest& Quest : ActiveQuests)
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


void UQuestManagerComponent::AddAllQuestsFromDataTable()
{
	if (QuestDataTable)
	{
		static const FString ContextString(TEXT("QuestDataContext"));
		TArray<FName> RowNames = QuestDataTable->GetRowNames();
		for (const FName& RowName : RowNames)
		{
			FQuest* Quest = QuestDataTable->FindRow<FQuest>(RowName, ContextString);
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

void UQuestManagerComponent::UpdateCurrentQuest()
{
	bool bFoundNextQuest = false;

	for (const FQuest& Quest : ActiveQuests)
	{
		if (!Quest.bIsCompleted)
		{
			if (!bFoundNextQuest || Quest.Name == CurrentQuest.Name)
			{
				CurrentQuest = Quest;
				OnQuestUpdated.Broadcast(CurrentQuest);
				bFoundNextQuest = true;
				break;
			}
		}
	}
}


FQuest* UQuestManagerComponent::FindQuestByName(const FString& QuestName)
{
	if (!QuestDataTable) return nullptr;

	static const FString ContextString(TEXT("QuestDataContext"));
	return QuestDataTable->FindRow<FQuest>(*QuestName, ContextString);
}
