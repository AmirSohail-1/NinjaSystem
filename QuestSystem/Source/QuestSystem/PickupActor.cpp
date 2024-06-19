// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupActor.h"

// Sets default values
APickupActor::APickupActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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
	// AMyCharacter* Character = Cast<AMyCharacter>(Interactor);
	// if (Character && Character->QuestManager)
	// {
	// 	Character->QuestManager->CompleteQuest(TEXT("FirstQuest"));
	// 	Destroy();
	// }
		UE_LOG( LogTemp, Warning, TEXT("Pickup Interacted") );	
}