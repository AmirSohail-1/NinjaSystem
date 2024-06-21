// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupActor.h"
#include "TestCharacter.h"

// Sets default values
APickupActor::APickupActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APickupActor::BeginPlay()
{
	Super::BeginPlay();
}

void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APickupActor::Interact(AActor* Interactor)
{
	ATestCharacter* Character = Cast<ATestCharacter>(Interactor);
	if (Character && Character->QuestManager)
	{
		Character->QuestManager->CompleteQuest(TEXT("Find Sphere"));
		UE_LOG( LogTemp, Warning, TEXT("Pickup Interacted WITH CHARACTER CLASS") );
		Destroy();
	}
		UE_LOG( LogTemp, Warning, TEXT("Pickup Interacted and char not found") );	
}






