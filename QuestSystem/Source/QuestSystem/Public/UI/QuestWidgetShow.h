#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestTable/QuestTable.h"
#include "QuestWidgetShow.generated.h"

UCLASS()
class QUESTSYSTEM_API UQuestWidgetShow : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* QuestScrollBox;

	// Make the QuestManager a UPROPERTY to ensure it is not garbage collected
	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	class UQuestManager* QuestManager;

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void UpdateQuestList(const FQuestTable& Quest);

	UFUNCTION()
	 void OnTimedQuestTick(float RemainingTimeSeconds); // Delegate callback function // of DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedQuestTickDelegate, float, RemainingTimeSeconds);
	

	

protected:
	virtual void NativeConstruct() override;
	

private:
	// Function to update the timer display
	UFUNCTION()
	void UpdateTimerDisplay(float RemainingTimeSeconds);
	UFUNCTION()
	void OnQuestUpdated(const FQuestTable& UpdatedQuest);
};
