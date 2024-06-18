// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystem/QuestWidget.h"
 
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

void UQuestWidget::NativeConstruct()
{
	Super::NativeConstruct();
}
 


void UQuestWidget::UpdateQuestList(const FQuest& Quest)
{
	if (QuestScrollBox)
	{
		QuestScrollBox->ClearChildren();

		UTextBlock* QuestText = NewObject<UTextBlock>(QuestScrollBox);
		if (QuestText)
		{
			QuestText->SetText(FText::FromString(FString::Printf(TEXT("%s: %s"), *Quest.Name, *Quest.Description )));
			QuestScrollBox->AddChild(QuestText);
		}
	}
}