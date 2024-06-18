#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Quest.h"
#include "QuestManagerComponent.generated.h"

// Delegate for quest updates
// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestUpdated, const TArray<FQuest>&, ActiveQuests);

// single quest purpose only update
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestUpdated, const FQuest&, Quest);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NINJACOMBATSYSTEM_API UQuestManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:    
	UQuestManagerComponent();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "Quest")
	FOnQuestUpdated OnQuestUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	TArray<FQuest> ActiveQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UDataTable* QuestDataTable;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void AddQuest(const FQuest& NewQuest);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(const FString& QuestName);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void AddAllQuestsFromDataTable();

	FQuest* FindQuestByName(const FString& QuestName);
	
	FQuest GetCurrentQuest() const { return CurrentQuest; }

private:
	UFUNCTION()
	void UpdateCurrentQuest();
	 
	FQuest CurrentQuest;
	
};
