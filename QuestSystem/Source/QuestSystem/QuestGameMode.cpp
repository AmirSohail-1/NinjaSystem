// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestGameMode.h"

#include "TestCharacter.h"
#include "Component//QuestManager.h"
#include "Kismet/GameplayStatics.h"

void AQuestGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadGame();
}

void AQuestGameMode::SaveGame()
{
	ATestCharacter* MyCharacter = Cast<ATestCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (MyCharacter && MyCharacter->QuestManager)
	{
		MyCharacter->QuestManager->SaveQuestProgress();
	}
}

void AQuestGameMode::LoadGame()
{
	ATestCharacter* MyCharacter = Cast<ATestCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (MyCharacter && MyCharacter->QuestManager)
	{
		MyCharacter->QuestManager->LoadQuestProgress();
	}
}