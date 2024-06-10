// Fill out your copyright notice in the Description page of Project Settings.

#include "GeneralStateManagerComponent.h"

// Sets default values for this component's properties
UGeneralStateManagerComponent::UGeneralStateManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UGeneralStateManagerComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UGeneralStateManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UGeneralStateManagerComponent::SetCombatState(const FGameplayTag& NewState)
{
	// Clear existing states before setting the new state
	ClearCombatStates();

	// Add the new state
	AddCombatState(NewState);
}

void UGeneralStateManagerComponent::RemoveCombatState(const FGameplayTag& StateToRemove)
{
	CombatStates.RemoveTag(StateToRemove);
}

bool UGeneralStateManagerComponent::HasCombatState(const FGameplayTag& StateToCheck) const
{
	return CombatStates.HasTag(StateToCheck);
}

void UGeneralStateManagerComponent::AddCombatState(const FGameplayTag& NewState)
{
	CombatStates.AddTag(NewState);
}

void UGeneralStateManagerComponent::ClearCombatStates()
{
	CombatStates.Reset();
}
