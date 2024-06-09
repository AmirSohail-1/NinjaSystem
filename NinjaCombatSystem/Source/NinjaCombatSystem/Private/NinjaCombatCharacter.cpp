 
#include "NinjaCombatCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
// #include "Engine/LocalPlayer.h"

#include "CombatComponent.h"
#include "StateComponent.h"

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

    CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
    StateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("StateComponentChar"));

    // Set up the camera system
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
    SpringArmComponent->bEnableCameraLag = true;
    SpringArmComponent->CameraLagSpeed = 3.0f;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);

    NinjaMovementComponent = CreateDefaultSubobject<UNinjaCharacterMovementComponent>(TEXT("NinjaMovementComponent")); // Initialize custom movement component

    // Set the custom movement component as the character's movement component
    // GetCharacterMovement()->SetMovementComponent(NinjaMovementComponent);

    DefaultMappingContext = nullptr;
 
}

// Called when the game starts or when spawned
void ANinjaCombatCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
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

        // Combat actions
        EnhancedInputComponent->BindAction(LightAttackAction, ETriggerEvent::Started, this, &ANinjaCombatCharacter::LightAttack);
        EnhancedInputComponent->BindAction( AirAttackAction , ETriggerEvent::Started, this, &ANinjaCombatCharacter::AirAttack);
        EnhancedInputComponent->BindAction( HeavyAttackAction , ETriggerEvent::Started, this, &ANinjaCombatCharacter::HeavyAttack);
        EnhancedInputComponent->BindAction( DashAttackAction , ETriggerEvent::Started, this, &ANinjaCombatCharacter::DashAttack);
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

// COMBAT FUNCTIONS
//
// void ANinjaCombatCharacter::LightAttack()
// {
//     if (CombatComponent)
//     {
//         CombatComponent->LightAttack();
//     }
// }
//
// void ANinjaCombatCharacter::AirAttack()
// {
//     if (CombatComponent)
//     {
//         CombatComponent->AirAttack();
//     }
// }
//
// void ANinjaCombatCharacter::HeavyAttack()
// {
//     if (CombatComponent)
//     {
//         CombatComponent->HeavyAttack();
//     }
// }
//
// void ANinjaCombatCharacter::DashAttack()
// {
//     if (CombatComponent)
//     {
//         CombatComponent->DashAttack();
//     }
// }


void ANinjaCombatCharacter::LightAttack()
{
    if (CombatComponent && StateComponent && StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->LightAttack();
    }
}

void ANinjaCombatCharacter::AirAttack()
{
    if (CombatComponent && StateComponent && StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->AirAttack();
    }
}

void ANinjaCombatCharacter::HeavyAttack()
{
    if (CombatComponent && StateComponent && StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->HeavyAttack();
    }
}

void ANinjaCombatCharacter::DashAttack()
{
    if (CombatComponent && StateComponent && StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack"))))
    {
        CombatComponent->DashAttack();
    }
}

void ANinjaCombatCharacter::UpdateCharacterState()
{
    if (StateComponent)
    {
        if (!StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.Attacking"))) &&
            !StateComponent->HasCombatState(FGameplayTag::RequestGameplayTag(FName("State.Airborne"))))
        {
            StateComponent->SetCombatState(FGameplayTag::RequestGameplayTag(FName("State.CanAttack")));
        }
    }
}