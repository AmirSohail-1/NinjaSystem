#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Camera/CameraComponent.h"
#include "SplineCameraActor.generated.h"

UCLASS()
class INTERACTIONMODULE_API ASplineCameraActor : public AActor
{
    GENERATED_BODY()

public:
    ASplineCameraActor();

protected:
    virtual void BeginPlay() override;

    // BlueprintNativeEvent for checking if the camera is at the end of the spline
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Spline")
    bool IsAtEndOfSpline() const;



public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, Category = "Level Transition")
    FName NextLevelName = "NextLevel";

    UFUNCTION(BlueprintCallable, Category = "Spline Camera")
    void SetCameraAsViewTarget();

    UPROPERTY(EditAnywhere, Category = "Spline Camera")
    float InitialDelay = 0.0f; // New property for initial delaY TO SET IN LEVEL

private:
    UPROPERTY(EditAnywhere)
    USplineComponent* SplineComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera_ Components", meta = (AllowPrivateAccess = "true"))
    UCameraComponent* CameraComponent;

    UPROPERTY(EditAnywhere)
    float CameraSpeed = 100.0f;

    float DistanceAlongSpline;

    void MoveCameraAlongSpline(float DeltaTime);
};
