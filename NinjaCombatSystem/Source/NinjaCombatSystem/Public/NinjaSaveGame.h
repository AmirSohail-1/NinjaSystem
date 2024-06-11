#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "NinjaSaveGame.generated.h"

UCLASS()
class NINJACOMBATSYSTEM_API UNinjaSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UNinjaSaveGame();

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	int32 PlayerLevel;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FVector PlayerLocation;

	UPROPERTY(VisibleAnywhere, Category="SaveGameData")
	FRotator PlayerRotation;

	// Add other properties as needed
};
