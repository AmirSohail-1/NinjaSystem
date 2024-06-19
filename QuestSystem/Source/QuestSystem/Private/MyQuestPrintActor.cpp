// Fill out your copyright notice in the Description page of Project Settings.


#include "MyQuestPrintActor.h"

// Sets default values
AMyQuestPrintActor::AMyQuestPrintActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyQuestPrintActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("qUEST PRINT ACTOR"));
	UE_LOG(LogTemp, Warning, TEXT("qUEST PRINT ACTOR"));
	UE_LOG(LogTemp, Warning, TEXT("qUEST PRINT ACTOR"));
	UE_LOG(LogTemp,Warning, TEXT("Hello Test Complete"));
	
	
}

// Called every frame
void AMyQuestPrintActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

