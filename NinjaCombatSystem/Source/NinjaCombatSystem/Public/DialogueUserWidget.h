#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestComponent.h"
#include "DialogueWidgetController.h"
#include "DialogueUserWidget.generated.h"

class UTextBlock;
class UUserWidget;
class UVerticalBox;

/**
 * 
 */
UCLASS()
class NINJACOMBATSYSTEM_API UDialogueUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UDialogueUserWidget(const FObjectInitializer& ObjectInitializer);

	// Sets the reference to the DialogueWidgetController
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void SetDialogueWidgetController(UDialogueWidgetController* InDialogueWidgetController);

	// Sets the reference to the QuestComponent acting as the dialogue manager
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void SetDialogueManagerComponent(UQuestComponent* InDialogueManagerComponent);

	// Sets the dialogue ID and displays the dialogue text
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void SetDialogue(int32 DialogueID);

protected:
	// Reference to the Dialogue Widget Controller
	UPROPERTY()
	UDialogueWidgetController* DialogueWidgetController;

	// Reference to the QuestComponent acting as the dialogue manager
	UPROPERTY()
	UQuestComponent* DialogueManagerComponent;

	// The text block widget to display dialogue text
	UPROPERTY(meta = (BindWidget))
	UTextBlock* DialogueTextBlock;

	// The class of the widget used for dialogue options
	UPROPERTY(EditDefaultsOnly, Category = "Dialogue")
	TSubclassOf<UUserWidget> DialogueOptionWidgetClass;

	// Vertical box widget to hold dialogue options
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* DialogueOptionsBox;

	// Create widget for dialogue option and add to vertical box
	void AddDialogueOption(const FText& DialogueOptionText);

	// Event handler for when dialogue starts
	UFUNCTION()
	void OnDialogueStarted(int32 DialogueID);

	virtual void NativeConstruct() override;
};
