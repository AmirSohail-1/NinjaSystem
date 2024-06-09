#include "FocusActor.h"

AFocusActor::AFocusActor()
{
    PrimaryActorTick.bCanEverTick = true;
    bIsFocused = false;
}

void AFocusActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

bool AFocusActor::ShouldBeFocused_Implementation() const
{
    // Implement custom logic to determine if this actor should be focused
    return true; // For example, always return true for demonstration purposes
}

void AFocusActor::Focus()
{
    if (!bIsFocused)
    {
        bIsFocused = true;
        OnFocus.Broadcast();
    }
}

void AFocusActor::ReturnFromFocus()
{
    if (bIsFocused)
    {
        bIsFocused = false;
        OnUnfocus.Broadcast();
    }
}
