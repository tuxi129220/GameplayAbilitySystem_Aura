// Copyright Druid Mechanics


#include "AbilitySystem/AuraAbilitySystemGlobals.h"
 
 #include "AuraAbilityTypes.h"

#include "AbilitySystem/AuraAbilitySystemGlobals.h"

FGameplayEffectContext* UAuraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAuraGameplayEffectContext();

	
}
