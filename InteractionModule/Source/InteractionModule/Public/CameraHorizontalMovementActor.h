// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "CameraHorizontalMovementActor.generated.h"

UCLASS()
class INTERACTIONMODULE_API ACameraHorizontalMovementActor : public AActor
{
	GENERATED_BODY()
	
public:
    ACameraHorizontalMovementActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraMoveHorizontal")
    float MovementSpeed = 100.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraMoveHorizontal")
    float LeftLimit = -1000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraMoveHorizontal")
    float RightLimit = 1000.f;

private:
    UPROPERTY()
    UCameraComponent* CameraComponent;

    FVector InitialCameraLocation;

};
