#include "IGS_AIBackupTiersDef.h"
#include "GameplayTagContainer.h"

FIGS_AIBackupTiersDef::FIGS_AIBackupTiersDef() {
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
    auto& gen2472 = (*this).Tier1.Default.Character.Pawns;
    gen2472.Empty();
    auto& gen2473 = (*this).Tier1.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2473.Empty();
    auto& gen2474 = (*this).Tier1.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2474.Empty();
    auto& gen2475 = (*this).Tier1.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2475.Empty();
    auto& gen2476 = (*this).Tier1.Default.Loadout.WeaponProbability;
    gen2476.Empty();
    (*this).Tier1.Default.Loadout.NoThrowableChance = 0;
    auto& gen2477 = (*this).Tier1.Default.Loadout.ThrowablePool;
    gen2477.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier1.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier1.Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.HP.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier1.Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier1.Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier1.Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier1.Heavy.Enabled = true;
    auto& gen2478 = (*this).Tier1.Heavy.Character.Pawns;
    gen2478.Empty();
    auto& gen2479 = (*this).Tier1.Heavy.Loadout.WeaponPool.PrimaryWeapons;
    gen2479.Empty();
    auto& gen2480 = (*this).Tier1.Heavy.Loadout.WeaponPool.SecondaryWeapons;
    gen2480.Empty();
    auto& gen2481 = (*this).Tier1.Heavy.Loadout.WeaponPool.MeleeWeapons;
    gen2481.Empty();
    auto& gen2482 = (*this).Tier1.Heavy.Loadout.WeaponProbability;
    gen2482.Empty();
    (*this).Tier1.Heavy.Loadout.NoThrowableChance = 0;
    auto& gen2483 = (*this).Tier1.Heavy.Loadout.ThrowablePool;
    gen2483.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier1.Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier1.Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
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
    auto& gen2484 = (*this).Tier2.Default.Character.Pawns;
    gen2484.Empty();
    auto& gen2485 = (*this).Tier2.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2485.Empty();
    auto& gen2486 = (*this).Tier2.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2486.Empty();
    auto& gen2487 = (*this).Tier2.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2487.Empty();
    auto& gen2488 = (*this).Tier2.Default.Loadout.WeaponProbability;
    gen2488.Empty();
    (*this).Tier2.Default.Loadout.NoThrowableChance = 0;
    auto& gen2489 = (*this).Tier2.Default.Loadout.ThrowablePool;
    gen2489.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier2.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier2.Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.HP.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier2.Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier2.Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier2.Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier2.Heavy.Enabled = true;
    auto& gen2490 = (*this).Tier2.Heavy.Character.Pawns;
    gen2490.Empty();
    auto& gen2491 = (*this).Tier2.Heavy.Loadout.WeaponPool.PrimaryWeapons;
    gen2491.Empty();
    auto& gen2492 = (*this).Tier2.Heavy.Loadout.WeaponPool.SecondaryWeapons;
    gen2492.Empty();
    auto& gen2493 = (*this).Tier2.Heavy.Loadout.WeaponPool.MeleeWeapons;
    gen2493.Empty();
    auto& gen2494 = (*this).Tier2.Heavy.Loadout.WeaponProbability;
    gen2494.Empty();
    (*this).Tier2.Heavy.Loadout.NoThrowableChance = 0;
    auto& gen2495 = (*this).Tier2.Heavy.Loadout.ThrowablePool;
    gen2495.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier2.Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier2.Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
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
    auto& gen2496 = (*this).Tier3.Default.Character.Pawns;
    gen2496.Empty();
    auto& gen2497 = (*this).Tier3.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2497.Empty();
    auto& gen2498 = (*this).Tier3.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2498.Empty();
    auto& gen2499 = (*this).Tier3.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2499.Empty();
    auto& gen2500 = (*this).Tier3.Default.Loadout.WeaponProbability;
    gen2500.Empty();
    (*this).Tier3.Default.Loadout.NoThrowableChance = 0;
    auto& gen2501 = (*this).Tier3.Default.Loadout.ThrowablePool;
    gen2501.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier3.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Tier3.Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.HP.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Tier3.Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Tier3.Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Tier3.Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Tier3.Heavy.Enabled = true;
    auto& gen2502 = (*this).Tier3.Heavy.Character.Pawns;
    gen2502.Empty();
    auto& gen2503 = (*this).Tier3.Heavy.Loadout.WeaponPool.PrimaryWeapons;
    gen2503.Empty();
    auto& gen2504 = (*this).Tier3.Heavy.Loadout.WeaponPool.SecondaryWeapons;
    gen2504.Empty();
    auto& gen2505 = (*this).Tier3.Heavy.Loadout.WeaponPool.MeleeWeapons;
    gen2505.Empty();
    auto& gen2506 = (*this).Tier3.Heavy.Loadout.WeaponProbability;
    gen2506.Empty();
    (*this).Tier3.Heavy.Loadout.NoThrowableChance = 0;
    auto& gen2507 = (*this).Tier3.Heavy.Loadout.ThrowablePool;
    gen2507.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Tier3.Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tier3.Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
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
    auto& gen2508 = (*this).Special.Default.Character.Pawns;
    gen2508.Empty();
    auto& gen2509 = (*this).Special.Default.Loadout.WeaponPool.PrimaryWeapons;
    gen2509.Empty();
    auto& gen2510 = (*this).Special.Default.Loadout.WeaponPool.SecondaryWeapons;
    gen2510.Empty();
    auto& gen2511 = (*this).Special.Default.Loadout.WeaponPool.MeleeWeapons;
    gen2511.Empty();
    auto& gen2512 = (*this).Special.Default.Loadout.WeaponProbability;
    gen2512.Empty();
    (*this).Special.Default.Loadout.NoThrowableChance = 0;
    auto& gen2513 = (*this).Special.Default.Loadout.ThrowablePool;
    gen2513.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Special.Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
    (*this).Special.Heavy.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.HP.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.HP.bOverloadValue = false;
    (*this).Special.Heavy.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.Shield.bOverloadValue = false;
    (*this).Special.Heavy.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Special.Heavy.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Special.Heavy.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Special.Heavy.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Special.Heavy.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Special.Heavy.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Special.Heavy.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Special.Heavy.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Special.Heavy.Enabled = true;
    auto& gen2514 = (*this).Special.Heavy.Character.Pawns;
    gen2514.Empty();
    auto& gen2515 = (*this).Special.Heavy.Loadout.WeaponPool.PrimaryWeapons;
    gen2515.Empty();
    auto& gen2516 = (*this).Special.Heavy.Loadout.WeaponPool.SecondaryWeapons;
    gen2516.Empty();
    auto& gen2517 = (*this).Special.Heavy.Loadout.WeaponPool.MeleeWeapons;
    gen2517.Empty();
    auto& gen2518 = (*this).Special.Heavy.Loadout.WeaponProbability;
    gen2518.Empty();
    (*this).Special.Heavy.Loadout.NoThrowableChance = 0;
    auto& gen2519 = (*this).Special.Heavy.Loadout.ThrowablePool;
    gen2519.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Heavy.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Special.Heavy.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Special.Heavy.Specialization, 0)) = TEXT("AI.Specialization.Special.Heavy");
}

