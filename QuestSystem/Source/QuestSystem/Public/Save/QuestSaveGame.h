#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "QuestTable/QuestTable.h"
#include "QuestSaveGame.generated.h"

UCLASS()
class QUESTSYSTEM_API UQuestSaveGame : public USaveGame
{
	GENERATED_BODY()
 
public:
	UQuestSaveGame();
	
	UPROPERTY(VisibleAnywhere, Category = "Quests")
	TArray<FQuestTable> SavedQuests;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	FString CurrentQuestName;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	bool bCanChangeQuest;

	// Player Data
	UPROPERTY(VisibleAnywhere, Category = Basic)
	FVector PlayerLocation;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FRotator PlayerRotation;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int32 PlayerHealth;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	int32 PlayerExperience;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString CheckpointName;

 

	
};
