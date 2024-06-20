#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "QuestInteractionInterface.h"
#include "Component/QuestManager.h"
#include "TestCharacter.generated.h"

class UQuestManager;
class UQuestWidgetShow;

UCLASS()
class QUESTSYSTEM_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATestCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
	UQuestManager* QuestManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UQuestWidgetShow> QuestWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category = "UI")
	UQuestWidgetShow* QuestWidget;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void StartQuest(const FString& QuestName);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(const FString& QuestName);
	
	UFUNCTION()
	void OnQuestCompleted(const FQuestTable& CompletedQuest);

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void Interact();

	
};
