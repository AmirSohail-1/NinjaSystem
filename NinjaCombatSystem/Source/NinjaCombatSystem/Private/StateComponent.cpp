// Fill out your copyright notice in the Description page of Project Settings.


#include "StateComponent.h"


// Sets default values for this component's properties
UStateComponent::UStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStateComponent::SetCombatState(const FGameplayTag& NewState)
{
	// Clear existing states before setting the new state
	ClearCombatStates();

	// Add the new state
	AddCombatState(NewState);
}

void UStateComponent::RemoveCombatState(const FGameplayTag& StateToRemove)
{
	CombatStates.RemoveTag(StateToRemove);
}

bool UStateComponent::HasCombatState(const FGameplayTag& StateToCheck) const
{
	return CombatStates.HasTag(StateToCheck);
}

void UStateComponent::AddCombatState(const FGameplayTag& NewState)
{
	CombatStates.AddTag(NewState);
}

void UStateComponent::ClearCombatStates()
{
	CombatStates.Reset();
}

