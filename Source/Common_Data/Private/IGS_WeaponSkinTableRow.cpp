#include "IGS_WeaponSkinTableRow.h"
#include "GameplayTagContainer.h"

FIGS_WeaponSkinTableRow::FIGS_WeaponSkinTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RootTagID, 0)) = NAME_None;
    (*this).SkinName = FText::FromString(TEXT(""));
    (*this).SkinQuality = EMETA_ItemQuality::None;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1979 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1979.Empty();
    auto& gen1980 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1980.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).MaterialParameters.Albedo_Tint.R = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Tint.G = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Tint.B = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Tint.A = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Brightness = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Contrast = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Desaturate = 0.000000000e+00f;
    (*this).MaterialParameters.Albedo_HueShift = 0.000000000e+00f;
    (*this).MaterialParameters.Emissive_Albedo_Desaturate = 0.000000000e+00f;
    (*this).MaterialParameters.Emissive_Albedo_Mult = 1.000000000e+00f;
    (*this).MaterialParameters.Emissive_GlobalIntensity = 0.000000000e+00f;
    (*this).MaterialParameters.Emissive_MaskCustom_Use = 1.000000000e+00f;
    (*this).MaterialParameters.Emissive_Min_Offset = 1.000000000e+00f;
    (*this).MaterialParameters.Normal_Intensity = 1.000000000e+00f;
    (*this).MaterialParameters.Metallic_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Occlusion_Intensity = 1.000000000e+00f;
    (*this).MaterialParameters.Roughness_Contrast = 1.000000000e+00f;
    (*this).MaterialParameters.Roughness_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Albedo.R = 4.313699901e-02f;
    (*this).MaterialParameters.Dust_Albedo.G = 3.529400006e-02f;
    (*this).MaterialParameters.Dust_Albedo.B = 1.568599977e-02f;
    (*this).MaterialParameters.Dust_Albedo.A = 1.000000000e+00f;
    (*this).MaterialParameters.Dust_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).MaterialParameters.Dust_Global_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Metallic = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Roughness = 9.499999881e-01f;
    (*this).MaterialParameters.Dust_Specular = 5.000000000e-01f;
    (*this).MaterialParameters.Scratches_Albedo.R = 3.137300164e-02f;
    (*this).MaterialParameters.Scratches_Albedo.G = 3.529400006e-02f;
    (*this).MaterialParameters.Scratches_Albedo.B = 5.098000169e-02f;
    (*this).MaterialParameters.Scratches_Albedo.A = 1.000000000e+00f;
    (*this).MaterialParameters.Scratches_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).MaterialParameters.Scratches_Global_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_Metallic = 3.000000119e-01f;
    (*this).MaterialParameters.Scratches_Roughness = 5.000000000e-01f;
    (*this).MaterialParameters.Scratches_Specular = 5.000000000e-01f;
    (*this).MaterialParameters.UV_Tiling = 1.000000000e+00f;
    (*this).MaterialParameters.UV_Rotation = 0.000000000e+00f;
    (*this).MaterialParameters.Albedo_Opacity = 3.000000119e-01f;
    (*this).MaterialParameters.Mask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Mask_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Normal_BlendIntensity = 1.000000000e+00f;
    (*this).MaterialParameters.Roughness_Opacity = 1.000000000e+00f;
}

