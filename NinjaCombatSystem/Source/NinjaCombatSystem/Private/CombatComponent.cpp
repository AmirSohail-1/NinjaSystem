// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatComponent.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameFramework/CharacterMovementComponent.h"

UCombatComponent::UCombatComponent()
{
   
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
}

void UCombatComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}

void UCombatComponent::LightAttack()
{
    if (CanPerformAction())
    {
        // Play light attack animation montage
        PlayAttackMontage(LightAttackMontage);
    }
}

void UCombatComponent::AirAttack()
{
    if (IsInAir() && CanPerformAction())
    {
        // Play air attack animation montage
        PlayAttackMontage(AirAttackMontage);
    }
}

void UCombatComponent::HeavyAttack()
{
    if (CanPerformAction())
    {
        // Play heavy attack animation montage
        PlayAttackMontage(HeavyAttackMontage);
    }
}

void UCombatComponent::DashAttack()
{
    if (CanPerformAction())
    {
        // Play dash attack animation montage
        PlayAttackMontage(DashAttackMontage);
    }
}



void UCombatComponent::PlayAttackMontage(UAnimMontage* Montage)
{
    if (!Montage)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid Montage provided."));
        return;
    }

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        UE_LOG(LogTemp, Error, TEXT("Owner actor not found."));
        return;
    }

    USkeletalMeshComponent* MeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
    if (!MeshComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("Skeletal mesh component not found on owner actor."));
        return;
    }

    UAnimInstance* AnimInstance = MeshComponent->GetAnimInstance();
    if (!AnimInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("AnimInstance not found on skeletal mesh component."));
        return;
    }

    AnimInstance->Montage_Play(Montage);
}


bool UCombatComponent::CanPerformAction() const
{
    if (!GetOwner())
    {
        return false;
    }

    // Check if the character is currently playing any animation montage
    ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (OwnerCharacter && OwnerCharacter->GetMesh() && OwnerCharacter->GetMesh()->GetAnimInstance())
    {
        return !OwnerCharacter->GetMesh()->GetAnimInstance()->Montage_IsPlaying(nullptr);
    }

    return true;
}

bool UCombatComponent::IsInAir() const
{
    if (!GetOwner())
    {
        return false;
    }

    // Check if the character is in the air by checking the character's movement mode
    ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
    if (OwnerCharacter && OwnerCharacter->GetCharacterMovement())
    {
        return OwnerCharacter->GetCharacterMovement()->IsFalling();
    }

    return false;
}

 

 