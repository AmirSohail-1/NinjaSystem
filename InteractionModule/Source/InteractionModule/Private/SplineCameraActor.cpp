 



// SplineCameraActor.cpp
#include "SplineCameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

ASplineCameraActor::ASplineCameraActor()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create spline component
    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    RootComponent = SplineComponent;

    // Create camera component
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);

    // Initialize distance along spline
    DistanceAlongSpline = 0.0f;

    InitialDelay = 2.0f;

    SetCameraAsViewTarget();

    
}

void ASplineCameraActor::BeginPlay()
{
    Super::BeginPlay();

    SetCameraAsViewTarget();
    MoveCameraAlongSpline(0.0f);                  //  uncomment if don't need  delay function

    // Set camera as the view target in BeginPlay
    // Debug message to check the value of InitialDelay
    UE_LOG(LogTemp, Warning, TEXT("Initial Delay: %f"), InitialDelay);

    //if (InitialDelay > 0.0f)
    //{
    //    FTimerHandle DelayTimerHandle;

    //    // Check if GetWorld() returns a valid world
    //    if (GetWorld())
    //    {
    //        // Check if GetTimerManager() returns a valid timer manager
    //        if (GetWorld()->GetTimerManager())
    //        {
    //            // Set the timer
    //            GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, this, &ASplineCameraActor::MoveCameraAlongSpline, InitialDelay, false);

    //            // Debug message to indicate that the timer is set
    //            UE_LOG(LogTemp, Warning, TEXT("Timer is set with an initial delay of %f seconds"), InitialDelay);
    //        }
    //        else
    //        {
    //            // Debug message if the timer manager is null
    //            UE_LOG(LogTemp, Error, TEXT("Timer Manager is null"));
    //        }
    //    }
    //    else
    //    {
    //        // Debug message if the world is null
    //        UE_LOG(LogTemp, Error, TEXT("World is null"));
    //    }
    //}
    //else
    //{
    //    // Call the function immediately if InitialDelay is 0 or less
    //    MoveCameraAlongSpline(0.0f);
    //}

   
     

}

void ASplineCameraActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    MoveCameraAlongSpline(DeltaTime);

    // Update camera location and rotation
    if (SplineComponent && CameraComponent)
    {
        FVector CameraLocation = SplineComponent->GetLocationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);
        FRotator CameraRotation = SplineComponent->GetRotationAtDistanceAlongSpline(DistanceAlongSpline, ESplineCoordinateSpace::World);

        CameraComponent->SetWorldLocationAndRotation(CameraLocation, CameraRotation);
    }
}

void ASplineCameraActor::MoveCameraAlongSpline(float DeltaTime)
{
    if (!SplineComponent) return;

    // Calculate the distance to move along the spline
    float MoveDistance = CameraSpeed * DeltaTime;

    // Move the camera along the spline
    DistanceAlongSpline += MoveDistance;

    // Check if we've reached the end of the spline
    if (IsAtEndOfSpline())
    {
        UGameplayStatics::OpenLevel(GetWorld(), NextLevelName);
    }
}

 

bool ASplineCameraActor::IsAtEndOfSpline_Implementation() const
{
    return SplineComponent && DistanceAlongSpline >= SplineComponent->GetSplineLength();
}


void ASplineCameraActor::SetCameraAsViewTarget()
{
    // Set player view target to the actor itself
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PlayerController)
    {
        PlayerController->SetViewTarget(this);
        UE_LOG(LogTemp, Warning, TEXT("Camera set as view target for actor: %s"), *GetName() );
    }
}
 