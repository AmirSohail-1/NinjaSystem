// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelTransitionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULevelTransitionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INTERACTIONMODULE_API ILevelTransitionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:
	// BlueprintCallable function for level transition
	//UFUNCTION(BlueprintCallable, Category = "Level Transition")
	//virtual void TransitionToLevel() = 0;

};
