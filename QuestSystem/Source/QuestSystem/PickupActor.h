// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestInteractionInterface.h"
#include "PickupActor.generated.h"
 
 

UCLASS()
class QUESTSYSTEM_API APickupActor : public AActor  , public IQuestInteractionInterface
{
	GENERATED_BODY()
    
public:    
	APickupActor();

	UPROPERTY( EditAnywhere, BlueprintReadWrite,   Category = "Quest name Setting Variable", meta = (AllowPrivateAccess = "true") )
	FString  QuestName;


protected:
	virtual void BeginPlay() override;

public:    
	virtual void Tick(float DeltaTime) override;
	virtual void Interact(AActor* Interactor) override;
};
