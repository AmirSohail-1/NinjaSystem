 
#include "QuestGameMode.h"
#include "TestCharacter.h"
#include "Component//QuestManager.h"
#include "Kismet/GameplayStatics.h"

AQuestGameMode::AQuestGameMode()
{
	CurrentCheckpointName = TEXT("DefaultCheckpoint");
}

void AQuestGameMode::BeginPlay()
{
	Super::BeginPlay();
	LoadGame();
}

void AQuestGameMode::SaveGame()
{
    ATestCharacter* MyCharacter = Cast<ATestCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
    if (MyCharacter)
    {
        // Save Quest Progress
        if (MyCharacter->QuestManager)
        {
            MyCharacter->QuestManager->SaveQuestProgress();
        }

        // Save Player Data
        UQuestSaveGame* SaveGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::CreateSaveGameObject(UQuestSaveGame::StaticClass()));
        if (SaveGameInstance)
        {
            SaveGameInstance->PlayerLocation = MyCharacter->GetActorLocation();
            SaveGameInstance->PlayerRotation = MyCharacter->GetActorRotation();
            SaveGameInstance->PlayerHealth = MyCharacter->GetHealth();
            SaveGameInstance->PlayerExperience = MyCharacter->GetExperience();
            SaveGameInstance->CheckpointName = CurrentCheckpointName;

            UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("PlayerSaveSlot"), 0);
            UE_LOG(LogTemp, Warning, TEXT("Player data saved."));
        }
    }
}

void AQuestGameMode::LoadGame()
{
    ATestCharacter* MyCharacter = Cast<ATestCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
    if (MyCharacter)
    {
        // Load Quest Progress
        if (MyCharacter->QuestManager)
        {
            MyCharacter->QuestManager->LoadQuestProgress();
        }

        // Load Player Data
        UQuestSaveGame* LoadGameInstance = Cast<UQuestSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("PlayerSaveSlot"), 0));
        if (LoadGameInstance)
        {
            MyCharacter->SetActorLocation(LoadGameInstance->PlayerLocation);
            MyCharacter->SetActorRotation(LoadGameInstance->PlayerRotation);
            MyCharacter->SetHealth(LoadGameInstance->PlayerHealth);
            MyCharacter->SetExperience(LoadGameInstance->PlayerExperience);
            CurrentCheckpointName = LoadGameInstance->CheckpointName;

            UE_LOG(LogTemp, Warning, TEXT("Player data loaded."));
        }
        else
        {
            // Create a new save file if it doesn't exist
            SaveGame();
        }
    }
}