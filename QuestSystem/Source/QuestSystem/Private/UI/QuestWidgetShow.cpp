#include "UI/QuestWidgetShow.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "Component/QuestManager.h"
#include "TimerManager.h"


void UQuestWidgetShow::NativeConstruct()
{
    Super::NativeConstruct();

    // Check if the QuestManager is assigned
    if (QuestManager)
    {
        // Bind event listeners for quest updates and completion
        QuestManager->OnQuestUpdated.AddDynamic(this, &UQuestWidgetShow::OnQuestUpdated);
        QuestManager->OnTimedQuestTick.AddDynamic(this, &UQuestWidgetShow::OnTimedQuestTick);
        QuestManager->OnQuestCompleted.AddDynamic(this, &UQuestWidgetShow::OnQuestCompleted);

        // Initialize the UI with the current quest data if available
        const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
        if (CurrentQuest)
        {
            UpdateQuestList(*CurrentQuest);
            UE_LOG(LogTemp, Warning, TEXT("Native Widget Current quest: %s"), *CurrentQuest->Name);
        }
        else
        {
            ClearQuestDetails();
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestManager is not assigned."));
    }

    // Hide the mission complete text initially
    if (MissionCompleteText)
    {
        MissionCompleteText->SetVisibility(ESlateVisibility::Hidden);
    }
}

void UQuestWidgetShow::OnQuestCompleted(const FString& QuestName)
{
    // Show the mission complete message
    ShowMissionComplete(QuestName);

    // Clear the quest details from the UI
    ClearQuestDetails();
}

void UQuestWidgetShow::ShowMissionComplete(const FString& QuestName)
{
    if (MissionCompleteText)
    {
        // Set the mission complete text
        MissionCompleteText->SetText(FText::FromString(FString::Printf(TEXT("Mission Complete: %s"), *QuestName)));

        // Play the animation for mission complete text
        PlayAnimation(MissionCompleteAnimation);
    }
}

void UQuestWidgetShow::HideMissionCompleteText()
{
    // Nothing to do here for now, as the text visibility is managed by the animation
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

void UQuestWidgetShow::OnQuestUpdated(const FQuestTable& UpdatedQuest)
{
    // Update the quest list in the UI with the updated quest data
    UpdateQuestList(UpdatedQuest);
}

void UQuestWidgetShow::OnTimedQuestTick(float RemainingTimeSeconds)
{
    // Update the timer display in the UI with the remaining time
    UpdateTimerDisplay(RemainingTimeSeconds);
}

void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
{
    if (QuestScrollBox)
    {
        // Update existing quest details or add new ones if they don't exist
        UTextBlock* QuestNameText = nullptr;
        UTextBlock* QuestDescriptionText = nullptr;
        UTextBlock* TimerText = nullptr;

        for (UWidget* Child : QuestScrollBox->GetAllChildren())
        {
            UTextBlock* TextBlock = Cast<UTextBlock>(Child);
            if (TextBlock)
            {
                if (TextBlock->GetText().ToString().Contains(TEXT("Quest:")))
                {
                    QuestNameText = TextBlock;
                }
                else if (TextBlock->GetText().ToString().Contains(TEXT("Description:")))
                {
                    QuestDescriptionText = TextBlock;
                }
                else if (TextBlock->GetText().ToString().Contains(TEXT("Time Limit:")))
                {
                    TimerText = TextBlock;
                }
            }
        }

        if (!QuestNameText)
        {
            QuestNameText = NewObject<UTextBlock>(QuestScrollBox);
            QuestScrollBox->AddChild(QuestNameText);
        }
        if (!QuestDescriptionText)
        {
            QuestDescriptionText = NewObject<UTextBlock>(QuestScrollBox);
            QuestScrollBox->AddChild(QuestDescriptionText);
        }
        if (Quest.bIsTimed && !TimerText)
        {
            TimerText = NewObject<UTextBlock>(QuestScrollBox);
            QuestScrollBox->AddChild(TimerText);
        }

        // Set the quest details
        QuestNameText->SetText(FText::FromString(FString::Printf(TEXT("Quest: %s"), *Quest.Name)));
        QuestDescriptionText->SetText(FText::FromString(FString::Printf(TEXT("Description: %s"), *Quest.Description)));

        // Set the timer text if the quest is timed
        if (Quest.bIsTimed && TimerText)
        {
            TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), Quest.TimeLimit)));
        }

        // Ensure the quest scroll box is visible if there's an active quest
        QuestScrollBox->SetVisibility(ESlateVisibility::Visible);
    }
}


void UQuestWidgetShow::ClearQuestDetails()
{
    if (QuestScrollBox)
    {
        // Set the text of existing text blocks to empty
        for (UWidget* Child : QuestScrollBox->GetAllChildren())
        {
            UTextBlock* TextBlock = Cast<UTextBlock>(Child);
            if (TextBlock)
            {
                TextBlock->SetText(FText::GetEmpty());
            }
        }
    }
}


////////////////////////////////////////////////////// old version 3        // CLEAR TEXT WIDGET
///
// void UQuestWidgetShow::NativeConstruct()
// {
//     Super::NativeConstruct();
//
//     // Check if the QuestManager is assigned
//     if (QuestManager)
//     {
//         // Bind event listeners for quest updates and completion
//         QuestManager->OnQuestUpdated.AddDynamic(this, &UQuestWidgetShow::OnQuestUpdated);
//         QuestManager->OnTimedQuestTick.AddDynamic(this, &UQuestWidgetShow::OnTimedQuestTick);
//         QuestManager->OnQuestCompleted.AddDynamic(this, &UQuestWidgetShow::OnQuestCompleted);
//
//         // Initialize the UI with the current quest data if available
//         const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
//         if (CurrentQuest)
//         {
//             UpdateQuestList(*CurrentQuest);
//             UE_LOG(LogTemp, Warning, TEXT("Native Widget Current quest: %s"), *CurrentQuest->Name);
//         }
//         else
//         {
//             ClearQuestDetails();
//         }
//     }
//     else
//     {
//         UE_LOG(LogTemp, Error, TEXT("QuestManager is not assigned."));
//     }
//
//     // Hide the mission complete text initially
//     if (MissionCompleteText)
//     {
//         MissionCompleteText->SetVisibility(ESlateVisibility::Hidden);
//     }
// }
//
// void UQuestWidgetShow::OnQuestCompleted(const FString& QuestName)
// {
//     // Clear the quest details from the UI
//     ClearQuestDetails();
//
//     // Show the mission complete message
//     ShowMissionComplete(QuestName);
// }
//
// void UQuestWidgetShow::ShowMissionComplete(const FString& QuestName)
// {
//     if (MissionCompleteText)
//     {
//         // Set the mission complete text and make it visible
//         MissionCompleteText->SetText(FText::FromString(FString::Printf(TEXT("Mission Complete: %s"), *QuestName)));
//         MissionCompleteText->SetVisibility(ESlateVisibility::Visible);
//
//         // Play the animation for mission complete text
//         PlayAnimation(MissionCompleteAnimation);
//
//         // Set a timer to hide the mission complete text after 3 seconds
//         GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestWidgetShow::HideMissionCompleteText, 3.0f, false);
//     }
// }
//
// void UQuestWidgetShow::HideMissionCompleteText()
// {
//     if (MissionCompleteText)
//     {
//         // Hide the mission complete text after delay
//         MissionCompleteText->SetVisibility(ESlateVisibility::Hidden);
//     }
// }
//
// void UQuestWidgetShow::UpdateTimerDisplay(float RemainingTimeSeconds)
// {
//     if (QuestScrollBox)
//     {
//         // Ensure other quest details are preserved when updating timer display
//         for (UWidget* Child : QuestScrollBox->GetAllChildren())
//         {
//             UTextBlock* TextBlock = Cast<UTextBlock>(Child);
//             if (TextBlock && TextBlock->GetText().ToString().Contains(TEXT("Time Limit:")))
//             {
//                 TextBlock->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
//                 return;
//             }
//         }
//
//         // Add a new timer display if it doesn't exist
//         UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
//         if (TimerText)
//         {
//             TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
//             QuestScrollBox->AddChild(TimerText);
//         }
//     }
// }
//
// void UQuestWidgetShow::OnQuestUpdated(const FQuestTable& UpdatedQuest)
// {
//     // Update the quest list in the UI with the updated quest data
//     UpdateQuestList(UpdatedQuest);
// }
//
// void UQuestWidgetShow::OnTimedQuestTick(float RemainingTimeSeconds)
// {
//     // Update the timer display in the UI with the remaining time
//     UpdateTimerDisplay(RemainingTimeSeconds);
// }
//
// void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
// {
//     if (QuestScrollBox)
//     {
//         QuestScrollBox->ClearChildren(); // Clear previous quest details
//
//         // Add quest name
//         UTextBlock* QuestNameText = NewObject<UTextBlock>(QuestScrollBox);
//         if (QuestNameText)
//         {
//             QuestNameText->SetText(FText::FromString(FString::Printf(TEXT("Quest: %s"), *Quest.Name)));
//             QuestScrollBox->AddChild(QuestNameText);
//         }
//
//         // Add quest description
//         UTextBlock* QuestDescriptionText = NewObject<UTextBlock>(QuestScrollBox);
//         if (QuestDescriptionText)
//         {
//             QuestDescriptionText->SetText(FText::FromString(FString::Printf(TEXT("Description: %s"), *Quest.Description)));
//             QuestScrollBox->AddChild(QuestDescriptionText);
//         }
//
//         // Add timer display if the quest is timed
//         if (Quest.bIsTimed)
//         {
//             UpdateTimerDisplay(Quest.TimeLimit);
//         }
//
//         // Ensure the quest scroll box is visible if there's an active quest
//         QuestScrollBox->SetVisibility(ESlateVisibility::Visible);
//     }
// }
//
// void UQuestWidgetShow::ClearQuestDetails()
// {
//     if (QuestScrollBox)
//     {
//         QuestScrollBox->ClearChildren(); // Clear quest details
//         // QuestScrollBox->SetVisibility(ESlateVisibility::Hidden); // Hide quest scroll box
//     }
// }
//
//

////////////////////////////////////////////////////// old version 2

// void UQuestWidgetShow::NativeConstruct()
// {
//     Super::NativeConstruct();
//
//     if (QuestManager)
//     {
//         // Check if the QuestManager is assigned
//         QuestManager->OnQuestUpdated.AddDynamic(this, &UQuestWidgetShow::OnQuestUpdated);
//         QuestManager->OnTimedQuestTick.AddDynamic(this, &UQuestWidgetShow::OnTimedQuestTick);
//         QuestManager->OnQuestCompleted.AddDynamic(this, &UQuestWidgetShow::OnQuestCompleted); // Listen for quest completion
//
//         // initialize the UI with the current quest if it exists
//         const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
//         if (CurrentQuest)
//         {
//             UpdateQuestList(*CurrentQuest);
//             UE_LOG(LogTemp, Warning, TEXT("Native Widget Current quest: %s"), *CurrentQuest->Name);
//         }
//     }
//     else
//     {
//         UE_LOG(LogTemp, Error, TEXT("QuestManager is not assigned."));
//     }
//
//     // Hide the mission complete text initially
//     if (MissionCompleteText)
//     {
//         MissionCompleteText->SetVisibility(ESlateVisibility::Hidden); // Hide mission complete text initially
//     }
// }
//
// void UQuestWidgetShow::OnQuestUpdated(const FQuestTable& UpdatedQuest)
// {
//     UpdateQuestList(UpdatedQuest);
// }
//
// void UQuestWidgetShow::UpdateQuestList(const FQuestTable& Quest)
// {
//     if (QuestScrollBox)
//     {
//         QuestScrollBox->ClearChildren();
//
//         // Add quest name
//         UTextBlock* QuestNameText = NewObject<UTextBlock>(QuestScrollBox);
//         if (QuestNameText)
//         {
//             QuestNameText->SetText(FText::FromString(FString::Printf(TEXT("Quest: %s"), *Quest.Name)));
//             QuestScrollBox->AddChild(QuestNameText);
//         }
//
//         // Add quest description
//         UTextBlock* QuestDescriptionText = NewObject<UTextBlock>(QuestScrollBox);
//         if (QuestDescriptionText)
//         {
//             QuestDescriptionText->SetText(FText::FromString(FString::Printf(TEXT("Description: %s"), *Quest.Description)));
//             QuestScrollBox->AddChild(QuestDescriptionText);
//         }
//
//         // Update timer display if quest is timed
//         if (Quest.bIsTimed)
//         {
//             UpdateTimerDisplay(QuestManager->GetRemainingTime());
//         }
//     }
// }
//
// void UQuestWidgetShow::UpdateTimerDisplay(float RemainingTimeSeconds)
// {
//     if (QuestScrollBox)
//     {
//         // Ensure other quest details are preserved when updating timer display
//         for (UWidget* Child : QuestScrollBox->GetAllChildren())
//         {
//             UTextBlock* TextBlock = Cast<UTextBlock>(Child);
//             if (TextBlock && TextBlock->GetText().ToString().Contains(TEXT("Time Limit:")))
//             {
//                 TextBlock->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
//                 return;
//             }
//         }
//
//         // Add a new timer display if it doesn't exist
//         UTextBlock* TimerText = NewObject<UTextBlock>(QuestScrollBox);
//         if (TimerText)
//         {
//             TimerText->SetText(FText::FromString(FString::Printf(TEXT("Time Limit: %.0f seconds"), RemainingTimeSeconds)));
//             QuestScrollBox->AddChild(TimerText);
//         }
//     }
// }
//
// void UQuestWidgetShow::OnTimedQuestTick(float RemainingTimeSeconds)
// {
//     UpdateTimerDisplay(RemainingTimeSeconds);
// }
//
// void UQuestWidgetShow::OnQuestCompleted(const FString& QuestName)
// {
//     if (QuestScrollBox)
//     {
//         QuestScrollBox->ClearChildren(); // Clear quest details
//     }
//
//   
//
//     ShowMissionComplete(QuestName);
// }
//
// void UQuestWidgetShow::ShowMissionComplete(const FString& QuestName)
// {
//     if (MissionCompleteText)
//     {
//         // Set the mission complete text and make it visible
//         MissionCompleteText->SetText(FText::FromString(FString::Printf(TEXT("Mission Complete: %s"), *QuestName)));
//         MissionCompleteText->SetVisibility(ESlateVisibility::Visible);
//
//         // Play the animation for mission complete text
//         PlayAnimation(MissionCompleteAnimation);
//
//         // Set a timer to hide the mission complete text after 3 seconds
//         GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UQuestWidgetShow::HideMissionCompleteText, 3.0f, false);
//     }
// }
//
// void UQuestWidgetShow::HideMissionCompleteText()
// {
//     if (MissionCompleteText)
//     {
//         MissionCompleteText->SetVisibility(ESlateVisibility::Hidden); // Hide mission complete text after delay
//     }
// }
//
//  


////////////////////////////////////////////////////// old version 1

 
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


///////////////////////////////////////////////////// basic version

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
