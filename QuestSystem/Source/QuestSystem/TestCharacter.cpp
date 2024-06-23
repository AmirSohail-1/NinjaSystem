#include "TestCharacter.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/QuestWidgetShow.h"
#include "QuestTable/QuestTable.h"

ATestCharacter::ATestCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize the QuestManagerComponent
    QuestManager = CreateDefaultSubobject<UQuestManager>(TEXT("QuestManager"));

    // Assume that QuestWidget is assigned through the Blueprint

    // Set up character movement
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 600.f;
    GetCharacterMovement()->AirControl = 0.2f;
}

void ATestCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (QuestManager)
    {
        QuestManager->OnQuestUpdated.AddDynamic(this, &ATestCharacter::OnQuestCompleted);
        // Load the first quest from the data table when the game starts
        StartQuest(TEXT("Quest 1"));
        
        
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestManager is not initialized"));
    }

    // Check if the widget is valid
    if (QuestWidget)
    {
        UE_LOG(LogTemp, Warning, TEXT("QuestWidget is valid"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestWidget is not assigned or invalid"));
    }

    // Find the QuestWidget in the UI and bind it to the QuestManager
    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (PC->IsLocalController() && QuestWidgetClass)
        {
            UUserWidget* Widget = CreateWidget<UUserWidget>(PC, QuestWidgetClass);
            if (Widget)
            {
                QuestWidget = Cast<UQuestWidgetShow>(Widget);
                if (QuestWidget)
                {
                    QuestWidget->QuestManager = QuestManager;
                    QuestWidget->AddToViewport();
                }
                
                // Update QuestWidget with current quest data
                const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
                if (CurrentQuest)
                {
                    // Update the quest widget
                    QuestWidget->UpdateQuestList(*CurrentQuest);
                }
            }
        }
    }
}



void ATestCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind movement inputs
    PlayerInputComponent->BindAxis("MoveForward", this, &ATestCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ATestCharacter::MoveRight);

    // Bind interaction input
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ATestCharacter::Interact);
}

void ATestCharacter::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void ATestCharacter::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorRightVector(), Value);
    }
}



void ATestCharacter::Interact()
{
    FVector Start = GetActorLocation();
    FVector ForwardVector = GetActorForwardVector();
    FVector End = ((ForwardVector * 600.f) + Start);
    
    // Add this line for drawing the debug line
    DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 2.0f, 0, 2.0f);

    FHitResult HitResult;

    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(this);

    bool bIsHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams);

    if (bIsHit)
    {
        UE_LOG(LogTemp, Warning, TEXT("Interact with %s"), *HitResult.GetActor()->GetName());
        
        AActor* Interactable = HitResult.GetActor();
        if (Interactable && Interactable->GetClass()->ImplementsInterface(UQuestInteractionInterface::StaticClass()))
        {
            UE_LOG(LogTemp, Warning, TEXT("Interact with %s"), *Interactable->GetName());
            
            IQuestInteractionInterface* QuestInterface = Cast<IQuestInteractionInterface>(Interactable);
            if (QuestInterface)
            {
                QuestInterface->Interact(this);
            }
        }
    }
}


void ATestCharacter::StartQuest(const FString& QuestName)
{
    if (QuestManager)
    {
        QuestManager->StartTimedQuest(QuestName);
    }

    if (QuestWidget)
    {
        // Assuming QuestWidget->UpdateQuestList takes a list of quests or a single quest
        const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
        if (CurrentQuest)
        {
            QuestWidget->UpdateQuestList(*CurrentQuest);
        }
    }
}

void ATestCharacter::CompleteQuest(const FString& QuestName)
{
    if (QuestManager)
    {
        QuestManager->CompleteQuest(QuestName);
    }

    if (QuestWidget)
    {
        const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
        if (CurrentQuest)
        {
            UE_LOG(LogTemp, Warning, TEXT("Updating widget with current quest: %s"), *CurrentQuest->Name);
            QuestWidget->UpdateQuestList(*CurrentQuest);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No current quest data found"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("QuestWidget is not assigned or invalid"));
    }
}



void ATestCharacter::OnQuestCompleted(const FQuestTable& CompletedQuest)
{
    if (CompletedQuest.Name == TEXT("Quest 1"))
    {
        StartQuest(TEXT("Quest 2"));
    }

    if (CompletedQuest.Name == TEXT("Quest 2"))
    {
        StartQuest(TEXT("Quest 3"));
    }

    if (CompletedQuest.Name == TEXT("Quest 3"))
    {
        // StartQuest(TEXT("Quest 4"));
    }

    // Update the widget with the current quest
    if (QuestWidget)
    {
        // Fetch the updated quest data from the QuestManager and update the widget
        const FQuestTable* CurrentQuest = QuestManager->GetCurrentQuestData();
        if (CurrentQuest)
        {
            QuestWidget->UpdateQuestList(*CurrentQuest);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No current quest found after completing quest: %s: Description %s"), *CompletedQuest.Name, *CompletedQuest.Description);
        }
        
    }
    
}



 