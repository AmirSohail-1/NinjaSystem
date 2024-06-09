// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyArray.generated.h"

UCLASS()
class INTERACTIONMODULE_API AMyArray : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyArray();

	
	TArray<FString> StrArr;

	TArray <FString> StrArr2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
