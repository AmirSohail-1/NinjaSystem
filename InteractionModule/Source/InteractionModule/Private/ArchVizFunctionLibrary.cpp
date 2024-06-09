 
#include "ArchVizFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Engine/World.h"


void UArchVizFunctionLibrary::TransitionToLevel(const FString& LevelName)
{
    if (UWorld* World = GEngine->GetWorldContextFromGameViewport(GEngine->GameViewport)->World())
    {
        if ( LevelName.IsEmpty() )
        {
            UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: Level name is not specified."));
            return;
        }

        UGameplayStatics::OpenLevel(World, FName(*LevelName));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("TransitionToLevel: Unable to get valid game world."));
    }
}
 

void UArchVizFunctionLibrary::PlayAudio(USoundBase* Sound, UAudioComponent* AudioComponent)
{
    if (!AudioComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("AudioComponent is null!"));
        return;
    }

    if (Sound)
    {
        AudioComponent->SetSound(Sound);
        AudioComponent->Play();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Sound is null!"));
    }
}

void UArchVizFunctionLibrary::StopAllAudio(UAudioComponent* AudioComponent)
{
    if (AudioComponent)
    {
        AudioComponent->Stop();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AudioComponent is null!"));
    }
}

 


struct FTypewriterState
{
    bool bIsTyping;
    bool bIsPaused;
    bool bPauseAtQuestion;
    bool bShouldPauseAtQuestionMark;
    FString Text;
    float TypeSpeed;
    USoundBase* TypeSound;
    FTimerHandle TimerHandle;

    FTypewriterState() : bIsTyping(false), bIsPaused(false), bPauseAtQuestion(false), bShouldPauseAtQuestionMark(false), TypeSpeed(0.05f), TypeSound(nullptr) {}
};

TMap<TWeakObjectPtr<UTextBlock>, FTypewriterState> UArchVizFunctionLibrary::TypewriterStates;

void UArchVizFunctionLibrary::StartTypewriterEffect(UTextBlock* TextBlock, const FString& Text, float TypeSpeed, USoundBase* TypeSound, bool bPauseAtQuestionMark)
{
    if (!TextBlock || Text.IsEmpty())
        return;

    if (TypewriterStates.Contains(TextBlock) && TypewriterStates[TextBlock].bIsTyping)
        return;

    FTypewriterState TypewriterState;
    TypewriterState.bIsTyping = true;
    TypewriterState.Text = Text;
    TypewriterState.TypeSpeed = TypeSpeed;
    TypewriterState.TypeSound = TypeSound;
    TypewriterState.bShouldPauseAtQuestionMark = bPauseAtQuestionMark;
    TypewriterStates.Add(TextBlock, TypewriterState);

    TextBlock->SetText(FText::GetEmpty());

    TypewriterCallback(TextBlock, Text, 0, TypeSpeed, TypeSound);
}

void UArchVizFunctionLibrary::StopTypewriterEffect()
{
    for (auto& Entry : TypewriterStates)
    {
        TWeakObjectPtr<UTextBlock> TextBlock = Entry.Key;
        FTypewriterState& State = Entry.Value;

        State.bIsTyping = false;
        if (TextBlock.IsValid() && TextBlock->GetWorld())
        {
            TextBlock->GetWorld()->GetTimerManager().ClearTimer(State.TimerHandle);
        }
    }

    TypewriterStates.Empty();
}

void UArchVizFunctionLibrary::PauseTypewriterEffect(UTextBlock* TextBlock)
{
    if (TypewriterStates.Contains(TextBlock))
    {
        FTypewriterState& State = TypewriterStates[TextBlock];
        if (State.bIsTyping)
        {
            State.bIsPaused = !State.bIsPaused;
            if (!State.bIsPaused)
            {
                TypewriterCallback(TextBlock, State.Text, TextBlock->GetText().ToString().Len(), State.TypeSpeed, State.TypeSound);
            }
        }
    }
}

void UArchVizFunctionLibrary::Pause2TypewriterEffect(UTextBlock* TextBlock)
{
    if (TypewriterStates.Contains(TextBlock))
    {
        FTypewriterState& State = TypewriterStates[TextBlock];
        if (State.bIsTyping)
        {
            State.bPauseAtQuestion = !State.bPauseAtQuestion;
            if (!State.bPauseAtQuestion)
            {
                TypewriterCallback(TextBlock, State.Text, TextBlock->GetText().ToString().Len(), State.TypeSpeed, State.TypeSound);
            }
        }
    }
}

void UArchVizFunctionLibrary::TypewriterCallback(UTextBlock* TextBlock, const FString& Text, int32 Index, float TypeSpeed, USoundBase* TypeSound)
{
    if (TypewriterStates.Contains(TextBlock))
    {
        FTypewriterState& State = TypewriterStates[TextBlock];

        if (!State.bIsTyping || State.bIsPaused || (State.bPauseAtQuestion && Text[Index - 1] == '?'))
            return;

        if (Index >= Text.Len())
        {
            State.bIsTyping = false;
            return;
        }

        FString CurrentText = Text.Mid(0, Index + 1);
        TextBlock->SetText(FText::FromString(CurrentText));

        if (TypeSound)
        {
            UGameplayStatics::PlaySound2D(TextBlock->GetWorld(), TypeSound);
        }

        if (State.bShouldPauseAtQuestionMark && Text[Index] == '?')
        {
            State.bPauseAtQuestion = true;
            return;
        }

        State.TimerHandle.Invalidate();
        UWorld* World = TextBlock->GetWorld();
        if (World)
        {
            World->GetTimerManager().SetTimer(State.TimerHandle, [TextBlock, Text, Index, TypeSpeed, TypeSound]()
            {
                TypewriterCallback(TextBlock, Text, Index + 1, TypeSpeed, TypeSound);
            }, TypeSpeed, false);
        }
    }
}