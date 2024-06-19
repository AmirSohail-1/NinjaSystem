#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "QuestTable/QuestTable.h"
#include "Save/QuestSaveGame.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestUpdated, const FQuestTable&, CurrentQuest);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class QUESTSYSTEM_API UQuestManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UQuestManager();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestUpdated OnQuestUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FQuestTable> ActiveQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UDataTable* QuestDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	FString SaveSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UQuestSaveGame* QuestSaveGame;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void AddQuest(const FQuestTable& NewQuest);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(const FString& QuestName);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void AddAllQuestsFromDataTable();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void StartTimedQuest(const FString& QuestName);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void SaveQuestProgress();

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void LoadQuestProgress();

private:
	TMap<FString, FQuestTable> QuestCache;
	FQuestTable CurrentQuest;
	FTimerHandle TimerHandle;

	void UpdateCurrentQuest();
	void CacheQuest(FQuestTable Quest);
	FQuestTable* GetCachedQuest(FString QuestName);
	void OnTimedQuestCompleted();
	void UpdateCache();
};
