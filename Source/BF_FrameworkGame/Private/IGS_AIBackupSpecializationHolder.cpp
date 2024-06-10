#include "IGS_AIBackupSpecializationHolder.h"
#include "GameplayTagContainer.h"

FIGS_AIBackupSpecializationHolder::FIGS_AIBackupSpecializationHolder() {
    (*this).Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.HP.bOverloadValue = false;
    (*this).Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.Shield.bOverloadValue = false;
    (*this).Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Default.Enabled = true;
    auto& gen2520 = (*this).Default.Character.Pawns;
    gen2520.Empty();
    auto& gen2521 = (*this).Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2521.Empty();
    auto& gen2522 = (*this).Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2522.Empty();
    auto& gen2523 = (*this).Default.Loadout.WeaponPool.MeleeWeapons;
    gen2523.Empty();
    auto& gen2524 = (*this).Default.Loadout.WeaponProbability;
    gen2524.Empty();
    (*this).Default.Loadout.NoThrowableChance = 0;
    auto& gen2525 = (*this).Default.Loadout.ThrowablePool;
    gen2525.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.HP.bOverloadValue = false;
    (*this).Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Heavy.Enabled = true;
    auto& gen2526 = (*this).Heavy.Character.Pawns;
    gen2526.Empty();
    auto& gen2527 = (*this).Heavy.Loadout.WeaponPool.PrimaryWeapons;
    gen2527.Empty();
    auto& gen2528 = (*this).Heavy.Loadout.WeaponPool.SecondaryWeapons;
    gen2528.Empty();
    auto& gen2529 = (*this).Heavy.Loadout.WeaponPool.MeleeWeapons;
    gen2529.Empty();
    auto& gen2530 = (*this).Heavy.Loadout.WeaponProbability;
    gen2530.Empty();
    (*this).Heavy.Loadout.NoThrowableChance = 0;
    auto& gen2531 = (*this).Heavy.Loadout.ThrowablePool;
    gen2531.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}

