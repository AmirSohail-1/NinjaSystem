#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"  // Include GameplayStatics for save/load functions

#include "NinjaSaveGame.h"
#include "NinjaSaveSystemComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NINJACOMBATSYSTEM_API UNinjaSaveSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public: 
	UNinjaSaveSystemComponent();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category="SaveSystemComp")
	void SaveGame(UNinjaSaveGame* SaveGameData);

	UFUNCTION(BlueprintCallable, Category="SaveSystemComp")
	UNinjaSaveGame* LoadGame();

	UFUNCTION(BlueprintCallable, Category="SaveSystemComp")
	UNinjaSaveGame* CreateSaveGameObject();

	

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="SaveSystemComp", meta=(AllowPrivateAccess="true"))
    FString SaveSlotName; // Define a variable to hold the save slot name
	
	UFUNCTION(BlueprintCallable, Category="SaveSystemComp" , meta=(DisplayName="Save Game Data"))
	bool SaveGameData(UNinjaSaveGame* SaveGameData);

	UNinjaSaveGame* LoadGameData();
	
};
