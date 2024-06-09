// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"
#include "Components/TextBlock.h"
#include "ArchVizFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIONMODULE_API UArchVizFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ArchViz")
	static void TransitionToLevel(const FString& LevelName);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	static void PlayAudio(USoundBase* Sound, UAudioComponent* AudioComponent);

	UFUNCTION(BlueprintCallable, Category = "Audio")
	static void StopAllAudio(UAudioComponent* AudioComponent);


// public:
// 	// Function to start the typewriter effect
// 	UFUNCTION(BlueprintCallable, Category = "UI")
// 	static void StartTypewriterEffect(UTextBlock* TextBlock, const FString& Text, float TypeSpeed, USoundBase* TypeSound);
//
// 	// Function to change text content
// 	UFUNCTION(BlueprintCallable, Category = "UI")
// 	static void ChangeTextContent(UTextBlock* TextBlock, const FString& NewText, float TypeSpeed, USoundBase* TypeSound);
//  
// 	static void TypewriterCallback(UTextBlock* TextBlock, const FString& Text, int32 Index, float TypeSpeed, USoundBase* TypeSound);


 ////////////////////
	// Function to start the typewriter effect
	UFUNCTION(BlueprintCallable, Category = "UI")
	static void StartTypewriterEffect(UTextBlock* TextBlock, const FString& Text, float TypeSpeed, USoundBase* TypeSound, bool bPauseAtQuestionMark);

	UFUNCTION(BlueprintCallable, Category = "UI")
	static void StopTypewriterEffect();

	UFUNCTION(BlueprintCallable, Category = "UI")
	static void PauseTypewriterEffect(UTextBlock* TextBlock);

	UFUNCTION(BlueprintCallable, Category = "UI")
	static void Pause2TypewriterEffect(UTextBlock* TextBlock);

private:
	static void TypewriterCallback(UTextBlock* TextBlock, const FString& Text, int32 Index, float TypeSpeed, USoundBase* TypeSound);

	static TMap<TWeakObjectPtr<UTextBlock>, struct FTypewriterState> TypewriterStates;
 
};
