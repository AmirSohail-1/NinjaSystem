#include "TestCharacter.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h" 
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"

ATestCharacter::ATestCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize the QuestManagerComponent
    QuestManager = CreateDefaultSubobject<UQuestManager>(TEXT("QuestManager"));

    // Set up character movement
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 600.f;
    GetCharacterMovement()->AirControl = 0.2f;
}

void ATestCharacter::BeginPlay()
{
    Super::BeginPlay();
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
}

void ATestCharacter::CompleteQuest(const FString& QuestName)
{
    if (QuestManager)
    {
        QuestManager->CompleteQuest(QuestName);
    }
}