// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrinterTest.generated.h"

UCLASS()
class NINJACOMBATSYSTEM_API APrinterTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APrinterTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Printer", meta = (Keywords = "Print", DisplayName = "Print Function"))
	void PrintFunction();


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
