#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "QuestComponent.generated.h"

USTRUCT(BlueprintType)
struct NINJACOMBATSYSTEM_API FQuestData : public FTableRowBase
{
	GENERATED_BODY()

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// FString QuestName;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// FString Description;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// FString Narration;
	//
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// bool bIsCompleted;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NINJACOMBATSYSTEM_API UQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UQuestComponent();

protected:
	virtual void BeginPlay() override;

public:
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// UDataTable* QuestDataTable;
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// void LoadQuestData();
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// void AddQuest(FName QuestID);
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// void CompleteQuest(FName QuestID);
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// bool IsQuestCompleted(FName QuestID) const;
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// const FQuestData& GetQuestData(FName QuestID) const;

private:
	// TMap<FName, FQuestData> ActiveQuests;
};
