// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMap.h"


// Sets default values
AMyMap::AMyMap()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyMap::BeginPlay()
{
	Super::BeginPlay();

	TMap<int32, FString> FruitMap;

	FruitMap.Add(1, "Apple");
	FruitMap.Add(2, "Orange");
	FruitMap.Add(3, "Grape");
	FruitMap.Add(2, "Grape");

	for (auto& Pair : FruitMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("Key %d : Value %s"), Pair.Key, *Pair.Value);
	}
	
	
}

// Called every frame
void AMyMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

