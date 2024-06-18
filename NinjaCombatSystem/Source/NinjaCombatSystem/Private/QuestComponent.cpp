#include "QuestComponent.h"
#include "Engine/DataTable.h"

UQuestComponent::UQuestComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	DialogueDataTable = nullptr; // Initialize DialogueTable to nullptr
	
}

void UQuestComponent::BeginPlay()
{
	Super::BeginPlay();
	// LoadQuestData();
	
}


// void UQuestComponent::LoadQuestData()
// {
// 	if (!QuestDataTable) return;
//
// 	static const FString ContextString(TEXT("Quest Data Context"));
// 	TArray<FName> RowNames = QuestDataTable->GetRowNames();
//     
// 	for (const FName& RowName : RowNames)
// 	{
// 		FQuestData* QuestData = QuestDataTable->FindRow<FQuestData>(RowName, ContextString);
// 		if (QuestData)
// 		{
// 			ActiveQuests.Add(RowName, *QuestData);
// 		}
// 	}
// }
//
// void UQuestComponent::AddQuest(FName QuestID)
// {
// 	if (ActiveQuests.Contains(QuestID))
// 	{
// 		ActiveQuests[QuestID].bIsCompleted = false;
// 	}
// }
//
// void UQuestComponent::CompleteQuest(FName QuestID)
// {
// 	if (ActiveQuests.Contains(QuestID))
// 	{
// 		ActiveQuests[QuestID].bIsCompleted = true;
// 	}
// }
//
// bool UQuestComponent::IsQuestCompleted(FName QuestID) const
// {
// 	const FQuestData* QuestData = ActiveQuests.Find(QuestID);
// 	return QuestData ? QuestData->bIsCompleted : false;
// }
//
// const FQuestData& UQuestComponent::GetQuestData(FName QuestID) const
// {
// 	const FQuestData* QuestData = ActiveQuests.Find(QuestID);
// 	check(QuestData); // Ensure the quest data exists; you may adjust error handling here
// 	return *QuestData;
// }


FDialogue UQuestComponent::GetDialogue(int32 DialogueID)
{
	FDialogue Dialogue;

	if (DialogueDataTable)
	{
		FString ContextString;
		FDialogue* DialogueData = DialogueDataTable->FindRow<FDialogue>(FName(*FString::FromInt(DialogueID)), ContextString);
		if (DialogueData)
		{
			Dialogue = *DialogueData;
		}
	}

	return Dialogue;
}

void UQuestComponent::SetDialogueTable(UDataTable* NewDialogueTable)
{
	DialogueDataTable = NewDialogueTable;
}