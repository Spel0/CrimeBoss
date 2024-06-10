#include "IGS_AICopTiersDef.h"
#include "GameplayTagContainer.h"

FIGS_AICopTiersDef::FIGS_AICopTiersDef() {
    (*this).Tier1.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier1.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier1.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier1.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier1.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier1.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier1.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier1.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier1.Default.Enabled = true;
    auto& gen2584 = (*this).Tier1.Default.Character.Pawns;
    gen2584.Empty();
    auto& gen2585 = (*this).Tier1.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2585.Empty();
    auto& gen2586 = (*this).Tier1.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2586.Empty();
    auto& gen2587 = (*this).Tier1.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2587.Empty();
    auto& gen2588 = (*this).Tier1.Default.Loadout.WeaponProbability;
    gen2588.Empty();
    (*this).Tier1.Default.Loadout.NoThrowableChance = 0;
    auto& gen2589 = (*this).Tier1.Default.Loadout.ThrowablePool;
    gen2589.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier1.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier2.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier2.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier2.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier2.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier2.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier2.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier2.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier2.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier2.Default.Enabled = true;
    auto& gen2590 = (*this).Tier2.Default.Character.Pawns;
    gen2590.Empty();
    auto& gen2591 = (*this).Tier2.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2591.Empty();
    auto& gen2592 = (*this).Tier2.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2592.Empty();
    auto& gen2593 = (*this).Tier2.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2593.Empty();
    auto& gen2594 = (*this).Tier2.Default.Loadout.WeaponProbability;
    gen2594.Empty();
    (*this).Tier2.Default.Loadout.NoThrowableChance = 0;
    auto& gen2595 = (*this).Tier2.Default.Loadout.ThrowablePool;
    gen2595.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier2.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier3.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.HP.bOverloadValue = false;
    (*this).Tier3.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.Shield.bOverloadValue = false;
    (*this).Tier3.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier3.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier3.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier3.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier3.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier3.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier3.Default.Enabled = true;
    auto& gen2596 = (*this).Tier3.Default.Character.Pawns;
    gen2596.Empty();
    auto& gen2597 = (*this).Tier3.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2597.Empty();
    auto& gen2598 = (*this).Tier3.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2598.Empty();
    auto& gen2599 = (*this).Tier3.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2599.Empty();
    auto& gen2600 = (*this).Tier3.Default.Loadout.WeaponProbability;
    gen2600.Empty();
    (*this).Tier3.Default.Loadout.NoThrowableChance = 0;
    auto& gen2601 = (*this).Tier3.Default.Loadout.ThrowablePool;
    gen2601.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier3.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Special.Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.HP.bOverloadValue = false;
    (*this).Special.Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.Shield.bOverloadValue = false;
    (*this).Special.Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Special.Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Special.Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Special.Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Special.Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Special.Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Special.Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Special.Default.Enabled = true;
    auto& gen2602 = (*this).Special.Default.Character.Pawns;
    gen2602.Empty();
    auto& gen2603 = (*this).Special.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2603.Empty();
    auto& gen2604 = (*this).Special.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2604.Empty();
    auto& gen2605 = (*this).Special.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2605.Empty();
    auto& gen2606 = (*this).Special.Default.Loadout.WeaponProbability;
    gen2606.Empty();
    (*this).Special.Default.Loadout.NoThrowableChance = 0;
    auto& gen2607 = (*this).Special.Default.Loadout.ThrowablePool;
    gen2607.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Special.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
}

