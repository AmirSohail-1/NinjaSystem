// Fill out your copyright notice in the Description page of Project Settings.

 
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest.h"
#include "QuestWidget.generated.h"

UCLASS()
class NINJACOMBATSYSTEM_API UQuestWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Reference to the scroll box in the widget
	UPROPERTY(meta = (BindWidget))
	class UScrollBox* QuestScrollBox;

	// Updates the quest list in the UI
	UFUNCTION(BlueprintCallable, Category = "Quest")
	void UpdateQuestList(const FQuest& Quest);
	// void UpdateQuestList(const TArray<FQuest>& ActiveQuests);

protected:
	virtual void NativeConstruct() override;
};
