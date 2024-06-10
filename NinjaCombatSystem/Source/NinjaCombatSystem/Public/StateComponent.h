// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StateComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class NINJACOMBATSYSTEM_API UStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStateComponent();

	UFUNCTION()
	void SetCombatState(const FGameplayTag& NewState);
	UFUNCTION()
	void RemoveCombatState(const FGameplayTag& StateToRemove);
	UFUNCTION()
	bool HasCombatState(const FGameplayTag& StateToCheck) const;

protected:
	
	
	UFUNCTION()
	void AddCombatState(const FGameplayTag& NewState);
	
	UFUNCTION()
	void ClearCombatStates();

 


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY()
	FGameplayTagContainer CombatStates;

	virtual void BeginPlay() override;
};
