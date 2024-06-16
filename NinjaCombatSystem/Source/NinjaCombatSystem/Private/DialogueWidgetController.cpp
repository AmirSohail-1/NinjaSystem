// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidgetController.h"


#include "DialogueWidgetController.h"

void UDialogueWidgetController::StartDialogue(int32 DialogueID)
{
	// Trigger the OnDialogueStarted event with the provided DialogueID
	OnDialogueStarted.Broadcast(DialogueID);
}
