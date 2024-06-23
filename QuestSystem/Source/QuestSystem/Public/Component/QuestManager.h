#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "QuestTable/QuestTable.h"
#include "Save/QuestSaveGame.h"
#include "QuestManager.generated.h"



 

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestUpdated, const FQuestTable&, CurrentQuest);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedQuestTickDelegate, float, RemainingTimeSeconds);


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
    // Delegates
    UPROPERTY(BlueprintAssignable, Category = "Quest")
    FOnQuestUpdated OnQuestUpdated;

    // Delegate to broadcast timed quest tick updates
    UPROPERTY(BlueprintAssignable, Category = "Quest")
    FTimedQuestTickDelegate OnTimedQuestTick;

 
    // Variables
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    TArray<FQuestTable> ActiveQuests;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    UDataTable* QuestDataTable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    FString SaveSlotName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    UQuestSaveGame* QuestSaveGame;

    // Functions
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

    const FQuestTable* GetCurrentQuestData() const;

    // Timer functions for UI updates
    UFUNCTION(BlueprintCallable, Category = "Quest")
    float GetRemainingTime() const;
    
     

private:
    TMap<FString, FQuestTable> QuestCache;
    FQuestTable CurrentQuest;

    // Timer variables for UI updates
    FTimerHandle TimerHandle;
    float CurrentTimeRemaining;
    
    void UpdateQuestTimer();
    
    void UpdateCurrentQuest();
    void CacheQuest(FQuestTable Quest); 
    FQuestTable* GetCachedQuest(FString QuestName);
    void OnTimedQuestCompleted();
    void UpdateCache();
};


 