// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "QuestInteractionInterface.h"
#include "Component//QuestManager.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"

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

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void StartQuest(const FString& QuestName);

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void CompleteQuest(const FString& QuestName);

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void Interact();
	
};
