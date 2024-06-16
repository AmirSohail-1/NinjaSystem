// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
// #include "NinjaCharacterMovementComponent.h" // Include your custom movement component

#include "NinjaSaveSystemComponent.h" // Include the save system component header
#include "NinjaSaveGame.h" // Include the save game class header

// Quest System
#include "QuestSystem//QuestManagerComponent.h"
#include "QuestSystem/QuestWidget.h"

#include "NinjaCombatCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UCombatComponent;
class UGeneralStateManagerComponent;
class UNinjaSaveSystemComponent;



UCLASS()
class NINJACOMBATSYSTEM_API ANinjaCombatCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANinjaCombatCharacter();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UCameraComponent* CameraComponent;
	
	// Combat component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	class UCombatComponent* CombatComponent;

	// State component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	class UGeneralStateManagerComponent* StateComponents;

	// Save system component Ref
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	UNinjaSaveSystemComponent* SaveSystemComponent;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	// UNinjaCharacterMovementComponent* NinjaMovementComponent; // Pointer to your custom movement component


public:
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Light Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LightAttackAction;

	/** Air Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* AirAttackAction;

	/** Heavy Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* HeavyAttackAction;

	/** Dash Attack Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DashAttackAction;

	
	// Input handlers
	UFUNCTION(BlueprintCallable, Category = "Input")
	void Move(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Look(const FInputActionValue& Value);

	

	// Combat actions ---------------------------
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void LightAttack();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void AirAttack();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void HeavyAttack();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void DashAttack();

	

	//  character state ---------------------------
	UFUNCTION(BlueprintCallable, Category = "Character State")
	void UpdateCharacterState();


	//  Save Component & SaveData.h  ---------------------------

	UFUNCTION(BlueprintCallable, Category="Save")	
	void SaveGameData();

	UFUNCTION(BlueprintCallable, Category="Save")
	void LoadGameData();

	// Quest Widget & QuestManagerComponent ---------------------------
	// Reference to the quest manager component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Quest", meta = (AllowPrivateAccess = "true"))
	UQuestManagerComponent* QuestManagerComponent;

	// Reference to the quest widget
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = "Quest", meta = (AllowPrivateAccess = "true"))
	UQuestWidget* QuestWidget;

 	// Editable property to set the widget class in the editor
    UPROPERTY(EditAnywhere, Category = "Quest UI")
    TSubclassOf<UUserWidget> QuestWidgetClass;
	
	UFUNCTION(BlueprintCallable, Category="Quest")	
	void HandleQuestCompleted();

	UFUNCTION(BlueprintCallable, Category = "Quest", meta = (Keywords = "AddQuestsFromDataTable", DisplayName = "AddQuestsFromDataTable"))
	void AddQuestsFromDataTable();

	UPROPERTY(BlueprintReadOnly, Category = "Quest")
	FQuest CurrentQuest;

	 

	
};
