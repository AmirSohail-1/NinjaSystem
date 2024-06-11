#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestGiverComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NINJACOMBATSYSTEM_API UQuestGiverComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UQuestGiverComponent();

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Quest")
	// FName QuestID;
	//
	// UFUNCTION(BlueprintCallable, Category="Quest")
	// void GiveQuest(AActor* Player);
	//
	// DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuestGiven, const FString&, Narration, const FString&, PlayerName);
	// UPROPERTY(BlueprintAssignable, Category="Quest")
	// FOnQuestGiven OnQuestGiven;
	
};
