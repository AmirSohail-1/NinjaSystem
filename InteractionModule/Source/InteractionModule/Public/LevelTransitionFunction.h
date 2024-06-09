// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelTransitionInterface.h"
#include "LevelTransitionFunction.generated.h"

UCLASS()
class INTERACTIONMODULE_API ALevelTransitionFunction : public AActor 
{
	GENERATED_BODY()
	
public:
    ALevelTransitionFunction();

    // Function to transition to the level
    UFUNCTION(BlueprintCallable, Category = "Level Transition")
    void TransitionToLevel();

    // Exposed parameter to set level name in Blueprint
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Level Transition")
    FName LevelNameToTransition;

    // Singleton instance accessor
    static ALevelTransitionFunction* GetInstance();

    // Called when the game starts or when spawned
    

protected:
    

private:
    // Singleton instance
    static ALevelTransitionFunction* Instance;

};
