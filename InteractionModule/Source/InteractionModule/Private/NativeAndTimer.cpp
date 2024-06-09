// Fill out your copyright notice in the Description page of Project Settings.


#include "NativeAndTimer.h"
#include "Components/TextRenderComponent.h"


// Sets default values
ANativeAndTimer::ANativeAndTimer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CountdownText"));
	CountdownText->SetHorizontalAlignment(EHTA_Center);
	CountdownText->SetWorldSize(150.0f);
	RootComponent = CountdownText;

	CountdownTime = 3;
	
}

// Called when the game starts or when spawned
void ANativeAndTimer::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateTimerDisplay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ANativeAndTimer::AdvanceTimer, 1.0f, true);
	
}

// Called every frame
void ANativeAndTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ANativeAndTimer::UpdateTimerDisplay()
{
	CountdownText->SetText(FText::FromString(FString::FromInt(FMath::Max(CountdownTime, 0))));
}


void ANativeAndTimer::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimerDisplay();
	if (CountdownTime < 1)
	{
		// We're done counting down, so stop running the timer.
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		//Perform any special actions we want to do when the timer ends.
		CountdownHasFinished();
	}
}

void  ANativeAndTimer::CountdownHasFinished_Implementation()
{
	//Change to a special readout
	CountdownText->SetText(FText::FromString(FString::FromInt(FMath::Max(CountdownTime, 0))));
	UE_LOG(LogTemp, Warning, TEXT("Countdown has finished!  ---------------  "));
}
