#include "UI/QuestWidgetShow.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "Component/QuestManager.h"

// void UQuestWidgetShow::NativeConstruct()
// {
// 	Super::NativeConstruct();
//
// 	if (QuestManager)
// 	{
// 		QuestManager->OnQuestUpdated.AddDynamic(this, &UQuestWidgetShow::OnQuestUpdated);
// 		QuestManager->OnTimedQuestTick.AddDynamic(this, &UQuestWidgetShow::OnTimedQuestTick);
// 		// Ensure the quest data is being fetched and used to update the UI
// 		const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
// 		if (CurrentQuest)
// 		{
// 			UpdateQuestList(*CurrentQuest);
// 			UE_LOG(LogTemp, Warning, TEXT("Native Widget Current quest: %s"), *CurrentQuest->Name);
// 		}
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("QuestManager is not assigned."));
// 	}
// }
//
//
// void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
// {
// 	if (QuestScrollBox)
// 	{
// 		QuestScrollBox->ClearChildren();
//
// 		// Add quest name
// 		UTextBlock* QuestNameText = NewObject<UTextBlock>(QuestScrollBox);
// 		if (QuestNameText)
// 		{
// 			QuestNameText->SetText(FText::FromString(FString::Printf(TEXT("Quest: %s"), *Quest.Name)));
// 			QuestScrollBox->AddChild(QuestNameText);
// 		}
//
// 		// Add quest description
// 		UTextBlock* QuestDescriptionText = NewObject<UTextBlock>(QuestScrollBox);
// 		if (QuestDescriptionText)
// 		{
// 			QuestDescriptionText->SetText(FText::FromString(FString::Printf(TEXT("Description: %s"), *Quest.Description)));
// 			QuestScrollBox->AddChild(QuestDescriptionText);
// 		}
//
// 		// // If the quest is timed, add a timer display
// 		// if (Quest.bIsTimed)
// 		// {
// 		// 	UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
// 		// 	if (TimerText)
// 		// 	{
// 		// 		// Update UI elements based on the current quest data
// 		// 		float RemainingTime = QuestManager->GetRemainingTime();
// 		// 		TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %f seconds"), RemainingTime )));
// 		// 		QuestScrollBox->AddChild(TimerText);
// 		// 	}
//  	//
// 		//  
// 		// 	
// 		// }
//  
// 		// Update timer display if quest is timed
// 		if (Quest.bIsTimed)
// 		{
// 			UpdateTimerDisplay(QuestManager->GetRemainingTime());
// 		}
// 	}
// }
//
//
// void UQuestWidgetShow::UpdateTimerDisplay(float RemainingTimeSeconds)
// {
// 	if (QuestScrollBox)
// 	{
// 		// Ensure other quest details are preserved when updating timer display
// 		for (UWidget* Child : QuestScrollBox->GetAllChildren())
// 		{
// 			UTextBlock* TextBlock = Cast<UTextBlock>(Child);
// 			if (TextBlock && TextBlock->GetText().ToString().Contains(TEXT("Time Limit:")))
// 			{
// 				TextBlock->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
// 				return;
// 			}
// 		}
//
// 		// Add a new timer display if it doesn't exist
// 		UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
// 		if (TimerText)
// 		{
// 			TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
// 			QuestScrollBox->AddChild(TimerText);
// 		}
// 	}
// }



void UQuestWidgetShow::NativeConstruct()
{
    Super::NativeConstruct();

    if (QuestManager)
    {
        QuestManager->OnQuestUpdated.AddDynamic(this, &UQuestWidgetShow::OnQuestUpdated);
        QuestManager->OnTimedQuestTick.AddDynamic(this, &UQuestWidgetShow::OnTimedQuestTick);

        const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
        if (CurrentQuest)
        {
            UpdateQuestList(*CurrentQuest);
            UE_LOG(LogTemp, Warning, TEXT("Native Widget Current quest: %s"), *CurrentQuest->Name);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestManager is not assigned."));
    }
}

void UQuestWidgetShow::OnQuestUpdated(const FQuestTable& UpdatedQuest)
{
    UpdateQuestList(UpdatedQuest);
}

void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
{
    if (QuestScrollBox)
    {
        QuestScrollBox->ClearChildren();

        // Add quest name
        UTextBlock* QuestNameText = NewObject<UTextBlock>(QuestScrollBox);
        if (QuestNameText)
        {
            QuestNameText->SetText(FText::FromString(FString::Printf(TEXT("Quest: %s"), *Quest.Name)));
            QuestScrollBox->AddChild(QuestNameText);
        }

        // Add quest description
        UTextBlock* QuestDescriptionText = NewObject<UTextBlock>(QuestScrollBox);
        if (QuestDescriptionText)
        {
            QuestDescriptionText->SetText(FText::FromString(FString::Printf(TEXT("Description: %s"), *Quest.Description)));
            QuestScrollBox->AddChild(QuestDescriptionText);
        }

        // Update timer display if quest is timed
        if (Quest.bIsTimed)
        {
            UpdateTimerDisplay(QuestManager->GetRemainingTime());
        }
    }
}

void UQuestWidgetShow::UpdateTimerDisplay(float RemainingTimeSeconds)
{
    if (QuestScrollBox)
    {
        // Ensure other quest details are preserved when updating timer display
        for (UWidget* Child : QuestScrollBox->GetAllChildren())
        {
            UTextBlock* TextBlock = Cast<UTextBlock>(Child);
            if (TextBlock && TextBlock->GetText().ToString().Contains(TEXT("Time Limit:")))
            {
                TextBlock->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
                return;
            }
        }

        // Add a new timer display if it doesn't exist
        UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
        if (TimerText)
        {
            TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
            QuestScrollBox->AddChild(TimerText);
        }
    }
}

void UQuestWidgetShow::OnTimedQuestTick(float RemainingTimeSeconds)
{
    UpdateTimerDisplay(RemainingTimeSeconds);
}




 




// void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
// {
// 	if (QuestScrollBox)
// 	{
// 		QuestScrollBox->ClearChildren();
//
// 		// Add quest name and description
// 		UTextBlock* QuestText = NewObject<UTextBlock>(QuestScrollBox);
// 		if (QuestText)
// 		{
// 			QuestText->SetText(FText::FromString(FString::Printf(TEXT("%s: %s"), *Quest.Name, *Quest.Description)));
// 			QuestScrollBox->AddChild(QuestText);
// 		}
//
// 		// If the quest is timed, add a timer display
// 		if (Quest.bIsTimed)
// 		{
// 			UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
// 			if (TimerText)
// 			{
// 				TimerText->SetText(FText::FromString(FString::Printf(TEXT("%s:%s Time Limit: %f seconds"), *Quest.Name, *Quest.Description , Quest.TimeLimit)));
// 				QuestScrollBox->AddChild(TimerText);
// 			}
// 		}
// 	}
// }
