#include "META_WeaponSaveData.h"

FMETA_WeaponSaveData::FMETA_WeaponSaveData() {
    (*this).Amount = 0;
    (*this).AdditionalPercentageOfWeaponPrice = 0;
    (*this).SuccessfulMissions = 0;
    (*this).DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkin, 0)) = NAME_None;
    auto& gen1727 = (*this).TargetWeaponsForUpgrade;
    gen1727.Empty();
    (*this).TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
}

