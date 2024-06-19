#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Quest.generated.h"



USTRUCT(BlueprintType)
struct FQuest : public FTableRowBase
{
	GENERATED_BODY()

	// The name of the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Name;

	// A description of the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString Description;

	// Whether the quest is completed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	bool bIsCompleted;

	// The list of objectives for the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FString> Objectives;

	// Default constructor
	FQuest()
		: Name(TEXT("Default Quest")), Description(TEXT("Default Description")), bIsCompleted(false) {}
};

 