// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckpointBase.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TestCharacter.h"
#include "QuestGameMode.h"


// Sets default values
ACheckpointBase::ACheckpointBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = BoxComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACheckpointBase::OnOverlapBegin );
}

// Called when the game starts or when spawned
void ACheckpointBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACheckpointBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ATestCharacter* MyCharacter = Cast<ATestCharacter>(OtherActor);
	if (MyCharacter)
	{
		AQuestGameMode* GameMode = Cast<AQuestGameMode>(UGameplayStatics::GetGameMode(this));
		if (GameMode)
		{
			GameMode->CurrentCheckpointName = CheckpointName;
			GameMode->SaveGame();
			UE_LOG(LogTemp, Warning, TEXT("Checkpoint reached: %s"), *CheckpointName);
		}
	}
}

// Called every frame
void ACheckpointBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

