// SpatialAudioActor.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundAttenuation.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "SpatialAudioActor.generated.h"

UCLASS()
class INTERACTIONMODULE_API ASpatialAudioActor : public AActor
{
    GENERATED_BODY()

public:
    ASpatialAudioActor();

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void PlaySound(USoundBase* SoundToPlay, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void SetSoundWave(USoundBase* SoundWave);

    UFUNCTION(BlueprintCallable, Category = "Audio")
    void SetPitchController(float PitchValue);
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UAudioComponent* AudioComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    USoundBase* SoundWave;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    float PitchController;

    
protected:
    virtual void BeginPlay() override;

 

};