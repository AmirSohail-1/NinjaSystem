// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraHorizontalMovementActor.h"

// Sets default values
ACameraHorizontalMovementActor::ACameraHorizontalMovementActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera component and attach it to the root
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	RootComponent = CameraComponent;
}

// Called when the game starts or when spawned
void ACameraHorizontalMovementActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AActorPrinter has begun playing!"));


	// Store the initial camera location
	InitialCameraLocation = CameraComponent->GetComponentLocation();
	
}

void ACameraHorizontalMovementActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Get input axis value
	float InputValue = InputComponent->GetAxisValue("Horizontal");

	// Calculate new camera location
	FVector NewLocation = CameraComponent->GetComponentLocation() + FVector(InputValue * MovementSpeed * DeltaTime, 0.f, 0.f);

	// Clamp the new location within the limits
	NewLocation.X = FMath::Clamp(NewLocation.X, LeftLimit, RightLimit);

	// Set the new camera location
	CameraComponent->SetWorldLocation(NewLocation);
}
