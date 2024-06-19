// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/QuestWidgetShow.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

void UQuestWidgetShow::NativeConstruct()
{
	Super::NativeConstruct();
}

void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
{
	if (QuestScrollBox)
	{
		QuestScrollBox->ClearChildren();

		// Add quest name and description
		UTextBlock* QuestText = NewObject<UTextBlock>(QuestScrollBox);
		if (QuestText)
		{
			QuestText->SetText(FText::FromString(FString::Printf(TEXT("%s: %s"), *Quest.Name, *Quest.Description)));
			QuestScrollBox->AddChild(QuestText);
		}

		// If the quest is timed, add a timer display
		if (Quest.bIsTimed)
		{
			UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
			if (TimerText)
			{
				TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %f seconds"), Quest.TimeLimit)));
				QuestScrollBox->AddChild(TimerText);
			}
		}
	}
}
