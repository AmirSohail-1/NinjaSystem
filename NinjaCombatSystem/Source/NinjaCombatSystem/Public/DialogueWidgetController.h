// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogueWidgetController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueStartedSignature, int32, DialogueID);


/**
 * 
 */
UCLASS()
class NINJACOMBATSYSTEM_API UDialogueWidgetController : public UObject
{
	GENERATED_BODY()

public:
	// Event broadcasted when a dialogue starts
	UPROPERTY(BlueprintAssignable, Category = "Dialogue Events")
	FDialogueStartedSignature OnDialogueStarted;

	// Start dialogue with the specified ID
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void StartDialogue(int32 DialogueID);
};
