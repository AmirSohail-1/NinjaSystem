// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestInteractionInterface.h"
#include "PickupActor.generated.h"
 
//  inherit , public IQuestInteractionInterface
// public:    
// virtual void Tick(float DeltaTime) override;
// virtual void Interact(AActor* Interactor) override;

UCLASS()
class QUESTSYSTEM_API APickupActor : public AActor  , public IQuestInteractionInterface
{
	GENERATED_BODY()
    
public:    
	APickupActor();

protected:
	virtual void BeginPlay() override;

public:    
	virtual void Tick(float DeltaTime) override;
	virtual void Interact(AActor* Interactor) override;
};