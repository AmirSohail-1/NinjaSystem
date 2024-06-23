#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestTable.generated.h"

USTRUCT(BlueprintType)
struct QUESTSYSTEM_API FQuestTable : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool bIsCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FString> Objectives;

	// New properties for timed quests
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool bIsTimed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	float TimeLimit;

	UPROPERTY(BlueprintReadOnly)
	float RemainingTime;  // Add this line to store remaining time

	// Default constructor
	FQuestTable()
		: Name(TEXT("Default Quest From QuestTable C++")), Description(TEXT("Default Description C++  ")), bIsCompleted(false), bIsTimed(false), TimeLimit(0.0f), RemainingTime(0.0f) {}
};
