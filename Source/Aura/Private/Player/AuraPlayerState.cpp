// Copyright Druid Mechanics


#include "Player/AuraPlayerState.h"

#include "AbilitySystemComponent.h"
#include "AttributeSet.h"


AAuraPlayerState::AAuraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent ->SetIsReplicated(true);
	AbilitySystemComponent ->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.0f;
	
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
