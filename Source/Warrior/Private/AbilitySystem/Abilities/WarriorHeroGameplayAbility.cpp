#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"

#include "Characters/WarriorHeroCharacter.h"
#include "Controllers/WarriorHeroController.h"

AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo() const
{
	if (!CachedWarriorHeroCharacter.IsValid())
	{
		return Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
	}
	return CachedWarriorHeroCharacter.IsValid()? CachedWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroController* UWarriorHeroGameplayAbility::GetHeroControllerFromActorInfo() const
{
	if (!CachedWarriorHeroController.IsValid())
	{
		if (AWarriorHeroCharacter* HeroCharacter = GetHeroCharacterFromActorInfo())
		{
			return Cast<AWarriorHeroController>(HeroCharacter->GetController());
		}
	}
	return CachedWarriorHeroController.IsValid()? CachedWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo() const
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
