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

	UFUNCTION(BlueprintCallable, Category = "Quest")
	void UpdateQuestList(const FQuestTable& Quest);

	// Make the QuestManager a UPROPERTY to ensure it is not garbage collected
	UPROPERTY(BlueprintReadWrite, Category = "Quest")
	class UQuestManager* QuestManager;

protected:
	virtual void NativeConstruct() override;
};
