#include "NinjaSaveSystemComponent.h"

UNinjaSaveSystemComponent::UNinjaSaveSystemComponent()
{
	// Set default save slot name (you can customize this as needed)
	SaveSlotName = TEXT("DefaultSaveSlot");
}

void UNinjaSaveSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	// Additional initialization logic if needed
}

void UNinjaSaveSystemComponent::SaveGame(UNinjaSaveGame* SaveGameData)
{
	if (SaveGameData)
	{
		bool bSaved = UGameplayStatics::SaveGameToSlot(SaveGameData, SaveSlotName, 0);
		if (bSaved)
		{
			UE_LOG(LogTemp, Log, TEXT("Game data saved successfully to slot '%s'."), *SaveSlotName);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to save game data to slot '%s'."), *SaveSlotName);
		}
	}
}

UNinjaSaveGame* UNinjaSaveSystemComponent::LoadGame()
{
	UNinjaSaveGame* LoadedGameData = Cast<UNinjaSaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	if (LoadedGameData)
	{
		UE_LOG(LogTemp, Log, TEXT("Game data loaded successfully from slot '%s'."), *SaveSlotName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load game data from slot '%s'."), *SaveSlotName);
	}
	return LoadedGameData;
}

UNinjaSaveGame* UNinjaSaveSystemComponent::CreateSaveGameObject()
{
	return NewObject<UNinjaSaveGame>();
}


bool UNinjaSaveSystemComponent::SaveGameData(UNinjaSaveGame* SaveGameData)
{
	if (SaveGameData)
	{
		// Save game data logic here
		// Return true if successful, false otherwise
		return true;
	}
	return false;
}

UNinjaSaveGame* UNinjaSaveSystemComponent::LoadGameData()
{
	// Load game data logic here
	return nullptr;  // Replace with actual implementation
}
