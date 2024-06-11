#include "QuestGiverComponent.h"
#include "QuestComponent.h"
#include "NinjaCombatCharacter.h"

UQuestGiverComponent::UQuestGiverComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

//
// void UQuestGiverComponent::GiveQuest(AActor* Player)
// {
// 	if (!Player) return;
//
// 	ANinjaCombatCharacter* NinjaCharacter = Cast<ANinjaCombatCharacter>(Player);
// 	if (!NinjaCharacter) return;
//
// 	UQuestComponent* QuestComponent = NinjaCharacter->FindComponentByClass<UQuestComponent>();
// 	if (!QuestComponent)
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("Quest Component not found in player character."));
// 		return;
// 	}
//
// 	QuestComponent->AddQuest(QuestID);
//     
// 	const FQuestData* QuestData = QuestComponent->GetQuestData(QuestID);
// 	if (QuestData)
// 	{
// 		OnQuestGiven.Broadcast(QuestData->Narration, NinjaCharacter->GetName());
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Error, TEXT("Failed to find quest data for Quest ID: %s"), *QuestID.ToString());
// 	}
// }
