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
	UPROPERTY(VisibleAnywhere, Category = "Quests")
	TArray<FQuestTable> SavedQuests;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	FString CurrentQuestName;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	bool bCanChangeQuest;

	UQuestSaveGame();
};
