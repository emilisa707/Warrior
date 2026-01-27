#include "Component/Combat/HeroCombatComponent.h"

#include "Items/Weapons/WarriorHeroWeapon.h"

AWarriorHeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
	return Cast<AWarriorHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
	
}

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
	
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* HitActor)
{
	
}
