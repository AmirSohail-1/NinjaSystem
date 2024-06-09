// InteractActorPrinter.cpp

#include "InteractActorPrinter.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"

// Sets default values
AInteractActorPrinter::AInteractActorPrinter()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = false;
    
}

// Called when the game starts or when spawned
void AInteractActorPrinter::BeginPlay()
{
    Super::BeginPlay();

    GetNumPlayerPawns(this);

   
    // bool bIsPaused = true;
    // UGameplayStatics::SetGamePaused(this, bIsPaused);
    // UGameplayStatics::SetGlobalTimeDilation(this,0.3f);
    // float TimeDilation = UGameplayStatics::GetGlobalTimeDilation(this)

    // float PitchMultiplier = 1.0f;  
    // float StartTime = 0.0f;        
    // USoundAttenuation* AttenuationSettings = nullptr;  
    // UGameplayStatics::SpawnSound2D(this, WaveAudio ,  PitchMultiplier, StartTime);

    FString Message = "Hello, world! from C++ Interaction Module Update From Rider ";
    FLinearColor TextColor = FLinearColor::Green;

    PrintMessageWithColor(Message, TextColor);
}

// Function to print a message with a specified color
void AInteractActorPrinter::PrintMessageWithColor(const FString& Message, FLinearColor TextColor)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, TextColor.ToFColor(true), Message);
    }
}

int32 AInteractActorPrinter::GetNumPlayerPawns(const UObject* WorldContextObject)
{
    UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (World)
    {
        int PlayerNum = World->GetGameState()->PlayerArray.Num();         

        if(GEngine)
        {
            // Create a formatted string with the number of players
            FString NumOfPlayersString = FString::Printf(TEXT("Num of Players: %d"), PlayerNum);

            // Display the message on screen using GEngine->AddOnScreenDebugMessage
            GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, NumOfPlayersString); 
            
        }
    }
    return 0;
}

 