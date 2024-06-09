// InteractActorPrinter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractActorPrinter.generated.h"

UCLASS()
class INTERACTIONMODULE_API AInteractActorPrinter : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AInteractActorPrinter();

    // Function to print a message with a specified color
    UFUNCTION(BlueprintCallable, Category = "Interaction Printer BP and C++")
    void PrintMessageWithColor(const FString& Message, FLinearColor TextColor);
 
    // Get the number of player pawns from the game state
    UFUNCTION(BlueprintPure, Category = "Gameplay Utilities")
    static int32 GetNumPlayerPawns(const UObject* WorldContextObject);

 
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
    USoundBase* WaveAudio;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
 
};
