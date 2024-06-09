#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FocusActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFocusDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnfocusDelegate);

UCLASS(Blueprintable, BlueprintType)
class INTERACTIONMODULE_API AFocusActor : public AActor
{
    GENERATED_BODY()

public:
    AFocusActor();

    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FocusActor")
    bool ShouldBeFocused() const;
    virtual bool ShouldBeFocused_Implementation() const;

    UFUNCTION(BlueprintCallable, Category = "FocusActor")
    void Focus();

    UFUNCTION(BlueprintCallable, Category = "FocusActor")
    void ReturnFromFocus();

    UPROPERTY(BlueprintAssignable, Category = "FocusActor")
    FOnFocusDelegate OnFocus;

    UPROPERTY(BlueprintAssignable, Category = "FocusActor")
    FOnUnfocusDelegate OnUnfocus;

private:
    bool bIsFocused;
};
