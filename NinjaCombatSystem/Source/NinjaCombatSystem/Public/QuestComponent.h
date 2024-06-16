#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "QuestComponent.generated.h"

class UDataTable; // Forward declaration of UDataTable


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

USTRUCT(BlueprintType)
struct FDialogue : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FText DialogueText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	TArray<FText> DialogueOptions;
};


// Define the FDialgoue struct
// USTRUCT(BlueprintType)
// struct FDialogue
// {
// 	GENERATED_BODY()
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	int32 DialogueID;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	FString DialogueText;
// };


USTRUCT(BlueprintType)
struct NINJACOMBATSYSTEM_API FDialogueData : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY( EditAnywhere, BlueprintReadWrite , Category = "DA Dialogue", DisplayName = "Dialogue")
	FDialogue Dialogue;
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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* DialogueDataTable;

	// Fetches the dialogue with the specified ID
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FDialogue GetDialogue(int32 DialogueID);

	// Sets the dialogue table (can be called dynamically at runtime)
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void SetDialogueTable(UDataTable* NewDialogueTable);
	 
	
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
