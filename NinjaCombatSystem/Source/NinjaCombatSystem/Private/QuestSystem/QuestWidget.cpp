// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/QuestWidget.h"
 
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

void UQuestWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

// Updates the quest list in the UI
// void UQuestWidget::void UpdateQuestList(const FQuest& Quest);
// {
// 	if (QuestScrollBox)
// 	{
// 		QuestScrollBox->ClearChildren();
//
// 		for (const FQuest& Quest : ActiveQuests)
// 		{
// 			UE_LOG(LogTemp, Warning, TEXT("Updating Quest: %s"), *Quest.Name);
// 			UTextBlock* QuestText = NewObject<UTextBlock>(QuestScrollBox);
// 			QuestText->SetText(FText::FromString(Quest.Name + TEXT(": ") + Quest.Description));
// 			QuestScrollBox->AddChild(QuestText);
// 		}
// 	}
// }


void UQuestWidget::UpdateQuestList(const FQuest& Quest)
{
	if (QuestScrollBox)
	{
		QuestScrollBox->ClearChildren();

		UTextBlock* QuestText = NewObject<UTextBlock>(QuestScrollBox);
		if (QuestText)
		{
			QuestText->SetText(FText::FromString(FString::Printf(TEXT("%s: %s"), *Quest.Name, *Quest.Description)));
			QuestScrollBox->AddChild(QuestText);
		}
	}
}