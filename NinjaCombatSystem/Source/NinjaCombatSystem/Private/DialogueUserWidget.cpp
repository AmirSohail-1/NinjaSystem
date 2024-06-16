#include "DialogueUserWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "DialogueWidgetController.h"
#include "QuestComponent.h"

UDialogueUserWidget::UDialogueUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UDialogueUserWidget::SetDialogueWidgetController(UDialogueWidgetController* InDialogueWidgetController)
{
	DialogueWidgetController = InDialogueWidgetController;
	if (DialogueWidgetController)
	{
		DialogueWidgetController->OnDialogueStarted.AddDynamic(this, &UDialogueUserWidget::OnDialogueStarted);
	}
}

void UDialogueUserWidget::SetDialogueManagerComponent(UQuestComponent* InDialogueManagerComponent)
{
	DialogueManagerComponent = InDialogueManagerComponent;
}

void UDialogueUserWidget::SetDialogue(int32 DialogueID)
{
	if (DialogueManagerComponent)
	{
		FDialogue Dialogue = DialogueManagerComponent->GetDialogue(DialogueID);
		if (DialogueTextBlock)
		{
			DialogueTextBlock->SetText(Dialogue.DialogueText);
		}

		// Clear existing options
		if (DialogueOptionsBox)
		{
			DialogueOptionsBox->ClearChildren();
		}

		// Add new dialogue options
		for (const FText& Option : Dialogue.DialogueOptions)
		{
			AddDialogueOption(Option);
		}
	}
}

void UDialogueUserWidget::AddDialogueOption(const FText& DialogueOptionText)
{
	if (DialogueOptionWidgetClass && DialogueOptionsBox)
	{
		UUserWidget* OptionWidget = CreateWidget<UUserWidget>(this, DialogueOptionWidgetClass);
		if (OptionWidget)
		{
			// Assuming the DialogueOptionWidgetClass has a TextBlock named "OptionTextBlock"
			UTextBlock* OptionTextBlock = Cast<UTextBlock>(OptionWidget->GetWidgetFromName(TEXT("OptionTextBlock")));
			if (OptionTextBlock)
			{
				OptionTextBlock->SetText(DialogueOptionText);
			}

			// Add OptionWidget to DialogueOptionsBox
			DialogueOptionsBox->AddChild(OptionWidget);
		}
	}
}

void UDialogueUserWidget::OnDialogueStarted(int32 DialogueID)
{
	SetDialogue(DialogueID);
}

void UDialogueUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	// Additional setup if needed
}
