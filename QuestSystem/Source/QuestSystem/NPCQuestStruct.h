#pragma once

#include "CoreMinimal.h"
#include "QuestTable/QuestTable.h"
#include "NPCQuestStruct.generated.h"

USTRUCT(BlueprintType)
struct QUESTSYSTEM_API FNPCQuestStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString NPCName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FQuestTable> Quests;

	// Default constructor
	FNPCQuestStruct()
		: NPCName(TEXT("Default NPC"))
	{}

	// Constructor with parameters
	FNPCQuestStruct(const FString& InNPCName, const TArray<FQuestTable>& InQuests)
		: NPCName(InNPCName), Quests(InQuests)
	{}
};

USTRUCT(BlueprintType)
struct QUESTSYSTEM_API FNPCQuestHolder
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FQuestTable> Quests;

	// Default constructor
	FNPCQuestHolder()
	{}

	// Constructor with parameters
	FNPCQuestHolder(const TArray<FQuestTable>& InQuests)
		: Quests(InQuests)
	{}
};
