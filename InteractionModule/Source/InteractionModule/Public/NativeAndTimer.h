// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NativeAndTimer.generated.h"

UCLASS()
class INTERACTIONMODULE_API ANativeAndTimer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANativeAndTimer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
 
	//How long, in seconds, the countdown will run
	UPROPERTY(EditAnywhere)
	int32 CountdownTime;
 
	 class UTextRenderComponent* CountdownText;
 
	void UpdateTimerDisplay();
 
	void AdvanceTimer();
 
	UFUNCTION(BlueprintNativeEvent, Category="NativeAndTimer")
	void CountdownHasFinished();
	virtual void CountdownHasFinished_Implementation();
 
	FTimerHandle CountdownTimerHandle;
	
};
