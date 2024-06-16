 
#include "NinjaCombatCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
// #include "Engine/LocalPlayer.h"

#include "CombatComponent.h"
// #include "StateComponent.h"
#include "GeneralStateManagerComponent.h"

#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
// #include "GameFramework/CharacterMovementComponent.h"


#include "GameFramework/PlayerController.h"

// Sets default values
ANinjaCombatCharacter::ANinjaCombatCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Set up the components Save, State, Combat etc.
    CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
    StateComponents = CreateDefaultSubobject<UGeneralStateManagerComponent>(TEXT("StateComponents"));
    SaveSystemComponent = CreateDefaultSubobject<UNinjaSaveSystemComponent>(TEXT("SaveSystemComponent"));

    // Create and attach the quest manager component
    QuestManagerComponent = CreateDefaultSubobject<UQuestManagerComponent>(TEXT("QuestManagerComponent"));
 

    // Set up the camera system
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
    SpringArmComponent->bEnableCameraLag = true;
    SpringArmComponent->CameraLagSpeed = 1.0f;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);

    // NinjaMovementComponent = CreateDefaultSubobject<UNinjaCharacterMovementComponent>(TEXT("NinjaMovementComponent")); // Initialize custom movement component

    // Set the custom movement component as the character's movement component
    // GetCharacterMovement()->SetMovementComponent(NinjaMovementComponent);

    

    // Ensure these are set correctly
    DefaultMappingContext = nullptr;
    LightAttackAction = nullptr;
    AirAttackAction = nullptr;
    HeavyAttackAction = nullptr;
    DashAttackAction = nullptr;
 
}

// Called when the game starts or when spawned
void ANinjaCombatCharacter::BeginPlay()
{
    Super::BeginPlay();

    // save test
     

    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            if (DefaultMappingContext)
            {
                Subsystem->AddMappingContext(DefaultMappingContext, 0);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("DefaultMappingContext is not set"));
            }
        }
    }

 

    // Quest system ---------------
    // if (QuestManagerComponent)
    // {
    //     // Create the quest widget and add it to the viewport
    //     QuestWidget = CreateWidget<UQuestWidget>(GetWorld(), UQuestWidget::StaticClass());
    //     if (QuestWidget)
    //     {
    //         QuestWidget->AddToViewport();
    //         // Bind the widget to the quest manager's update event
    //         QuestManagerComponent->OnQuestUpdated.AddDynamic(QuestWidget, &UQuestWidget::UpdateQuestList);
    //     }
    // }

    // Setup Quest Widget
    if (QuestManagerComponent && QuestWidgetClass)
    {
        QuestWidget = CreateWidget<UQuestWidget>(GetWorld(), QuestWidgetClass);
        if (QuestWidget)
        {
            QuestWidget->AddToViewport();
            QuestManagerComponent->OnQuestUpdated.AddDynamic(QuestWidget, &UQuestWidget::UpdateQuestList);
            
            // Adding all quests from the DataTable at the start
            AddQuestsFromDataTable();
        }
    }
 
    
}

// void ANinjaCombatCharacter::HandleQuestCompleted()
// {
//     QuestManagerComponent->CompleteQuest(TEXT("Find the Lost Sword")); 
// }
//
// void ANinjaCombatCharacter::AddQuestsFromDataTable()
// {
//     if (QuestManagerComponent)
//     {
//         QuestManagerComponent->AddAllQuestsFromDataTable();
//     }
// }

void ANinjaCombatCharacter::AddQuestsFromDataTable()
{
    if (QuestManagerComponent)
    {
        QuestManagerComponent->AddAllQuestsFromDataTable();
    }
}

void ANinjaCombatCharacter::HandleQuestCompleted()
{
    if (QuestManagerComponent && !CurrentQuest.Name.IsEmpty())
    {
        QuestManagerComponent->CompleteQuest(CurrentQuest.Name);
    }
}
 

void ANinjaCombatCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // Jumping
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
        EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

        // Moving
        EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::Move);

        // Looking
        EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::Look);

         

        // Bind to input actions inside C++ , not need to bind in blueprint below attacks.
        if (LightAttackAction)
        {
            EnhancedInputComponent->BindAction(LightAttackAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::LightAttack);
        }

        if (AirAttackAction)
        {
            EnhancedInputComponent->BindAction(AirAttackAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::AirAttack);
        }

        if (HeavyAttackAction)
        {
            EnhancedInputComponent->BindAction(HeavyAttackAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::HeavyAttack);
        }

        if (DashAttackAction)
        {
            EnhancedInputComponent->BindAction(DashAttackAction, ETriggerEvent::Triggered, this, &ANinjaCombatCharacter::DashAttack);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find an Enhanced Input component!"));
    }
}



// Called every frame
void ANinjaCombatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
    // Update character state based on current combat state
    UpdateCharacterState();
    
}


void ANinjaCombatCharacter::Move(const FInputActionValue& Value)
{
    // Input is a Vector2D
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // Find out which way is forward
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // Get forward vector
        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

        // Get right vector 
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // Add movement 
        AddMovementInput(ForwardDirection, MovementVector.Y);
        AddMovementInput(RightDirection, MovementVector.X);
    }
}

void ANinjaCombatCharacter::Look(const FInputActionValue& Value)
{
    // Input is a Vector2D
    FVector2D LookAxisVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        // Add yaw and pitch input to controller
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}

 
//  State & Combat Component  ----------------------------------------------------------

void ANinjaCombatCharacter::LightAttack()
{
    if (CombatComponent && StateComponents)
    {
        if (StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
        {
            UE_LOG(LogTemp, Warning, TEXT("Light Attack executed"));
            CombatComponent->LightAttack();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Cannot perform Light Attack: Not in CanAttack state"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("CombatComponent or StateComponent is null"));
    }
}


void ANinjaCombatCharacter::AirAttack()
{
    if (CombatComponent && StateComponents && StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->AirAttack();
    }
}

void ANinjaCombatCharacter::HeavyAttack()
{
    if (CombatComponent && StateComponents && StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->HeavyAttack();
    }
}

void ANinjaCombatCharacter::DashAttack()
{
    if (CombatComponent && StateComponents && StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->DashAttack();
    }
}

void ANinjaCombatCharacter::UpdateCharacterState()
{
    if (StateComponents)
    {
        if (!StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.Attacking"))) &&
            !StateComponents->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.Airborne"))))
        {
            StateComponents->SetCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack")));
        }
    }
}

//  Save Component & SaveData.h  ----------------------------------------------------------

void ANinjaCombatCharacter::SaveGameData()
{
    UNinjaSaveGame* SaveGameData = SaveSystemComponent->CreateSaveGameObject();
    if (SaveGameData)
    {
        // Populate save game data properties
        SaveGameData->PlayerName = "Player1";
        SaveGameData->PlayerLevel = 10;
        SaveGameData->PlayerLocation = GetActorLocation();
        SaveGameData->PlayerRotation = GetActorRotation();

        // Log each property individually
        UE_LOG(LogTemp, Warning, TEXT("Player name saved: %s"), *SaveGameData->PlayerName);
        UE_LOG(LogTemp, Warning, TEXT("Player level saved: %d"), SaveGameData->PlayerLevel);
        UE_LOG(LogTemp, Warning, TEXT("Player location saved: %s"), *SaveGameData->PlayerLocation.ToString());
        UE_LOG(LogTemp, Warning, TEXT("Player rotation saved: %s"), *SaveGameData->PlayerRotation.ToString());

        // Call save function on save system component
        SaveSystemComponent->SaveGame(SaveGameData);
    }
}


void ANinjaCombatCharacter::LoadGameData()
{
    UNinjaSaveGame* LoadedGameData = SaveSystemComponent->LoadGame();
    if (LoadedGameData)
    {
        // Use loaded game data properties
        FString PlayerName = LoadedGameData->PlayerName;
        int32 PlayerLevel = LoadedGameData->PlayerLevel;
        FVector PlayerLocation = LoadedGameData->PlayerLocation;
        FRotator PlayerRotation = LoadedGameData->PlayerRotation;

        // Log loaded data for verification
        UE_LOG(LogTemp, Warning, TEXT("Player name loaded: %s"), *PlayerName);
        UE_LOG(LogTemp, Warning, TEXT("Player level loaded: %d"), PlayerLevel);
        UE_LOG(LogTemp, Warning, TEXT("Player location loaded: %s"), *PlayerLocation.ToString());
        UE_LOG(LogTemp, Warning, TEXT("Player rotation loaded: %s"), *PlayerRotation.ToString());

        // Use the loaded data as needed
    }
}
