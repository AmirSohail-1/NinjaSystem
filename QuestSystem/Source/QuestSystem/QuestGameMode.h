// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "QuestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API AQuestGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	// Constructor
	AQuestGameMode();
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Save")
	void SaveGame();

	UFUNCTION(BlueprintCallable, Category = "Save")
	void LoadGame();

	// Track the current checkpoint name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Checkpoint")
	FString CurrentCheckpointName;
	
};
