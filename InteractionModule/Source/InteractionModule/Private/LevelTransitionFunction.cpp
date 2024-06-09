#include "LevelTransitionFunction.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h" 

// Initialize the singleton instance to nullptr
ALevelTransitionFunction* ALevelTransitionFunction::Instance = nullptr;

ALevelTransitionFunction::ALevelTransitionFunction()
{
    // Set up your actor here if needed
    Instance = this;
}

 

void ALevelTransitionFunction::TransitionToLevel()
{
    // Check if the game world is valid
    if (GetWorld() == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: GetWorld() returned nullptr."));
        return;
    }

    // Check if the level name is valid
    if (LevelNameToTransition != NAME_None)
    {
        // Transition to the specified level
        UGameplayStatics::OpenLevel(GetWorld(), LevelNameToTransition);
    }
    else
    {
        // Log an error and display a screen message if the level name is not set
        UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: Level name is not set."));
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Level name is not set!"));
        }
    }
}


ALevelTransitionFunction* ALevelTransitionFunction::GetInstance()
{
    // Return the singleton instance
    return Instance;
}