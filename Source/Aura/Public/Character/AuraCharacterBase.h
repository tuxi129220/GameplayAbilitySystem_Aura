// Copyright Druid Mechanics

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

	UPROPERTY(EditAnywhere,Category= "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	

	

protected:
	virtual void BeginPlay() override;

};
