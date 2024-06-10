// Fill out your copyright notice in the Description page of Project Settings.


#include "PrinterTest.h"


// Sets default values
APrinterTest::APrinterTest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APrinterTest::BeginPlay()
{
	Super::BeginPlay();

	PrintFunction();
	
}

void APrinterTest::PrintFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("PrintFunction"));
	UE_LOG(LogTemp, Warning, TEXT("PrintFunction 22222222"));
	
}

// Called every frame
void APrinterTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

