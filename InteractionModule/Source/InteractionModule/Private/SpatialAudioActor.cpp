// SpatialAudioActor.cpp
#include "SpatialAudioActor.h"

ASpatialAudioActor::ASpatialAudioActor()
{
    // Create and attach an audio component
    AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    AudioComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void ASpatialAudioActor::BeginPlay()
{
    Super::BeginPlay();

    // Play the sound when the actor begins play
    PlaySound(SoundWave, PitchController, 0.0f, nullptr);
}

void ASpatialAudioActor::PlaySound(USoundBase* SoundToPlay, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings)
{
    if (AudioComponent && SoundToPlay)
    {
        // Set the sound and attenuation settings
        AudioComponent->SetSound(SoundToPlay);
        AudioComponent->AttenuationSettings = AttenuationSettings;

        // Set the pitch multiplier
        AudioComponent->PitchMultiplier = PitchMultiplier;

        // Play the sound
        AudioComponent->Play();
        UE_LOG(LogTemp, Warning, TEXT("Sound playback finished"));
    }
}

void ASpatialAudioActor::SetSoundWave(USoundBase* NewSoundWave)
{
    SoundWave = NewSoundWave;
}

void ASpatialAudioActor::SetPitchController(float PitchValue)
{
    PitchController = PitchValue;
}
