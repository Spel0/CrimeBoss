#include "IGS_AnimationHelpers.h"

UIGS_AnimationHelpers::UIGS_AnimationHelpers() {
}

void UIGS_AnimationHelpers::StopAllMontages(UAnimInstance* inAnimInstance, float inBlendOut) {
}

UIGS_PlayerAnimInstance* UIGS_AnimationHelpers::GetPlayerAnimInstance(UPARAM(const, ref) AIGS_GameCharacterFramework*& inCharacter) {
    return NULL;
}

void UIGS_AnimationHelpers::GetMeleePushMontages(UPARAM(const, ref) AIGS_GameCharacterFramework*& inCharacter, UAnimMontage*& outCharacterFPP, UAnimMontage*& outCharacterTPP, UAnimMontage*& outWeaponFPP) {
}

UIGS_UArmsAniminstance* UIGS_AnimationHelpers::GetArmsAnimInstance(UPARAM(const, ref) AIGS_GameCharacterFramework*& inCharacter) {
    return NULL;
}

EIGS_Anim4Sides UIGS_AnimationHelpers::GetAnimationSideForAngle(float inAngle) {
    return EIGS_Anim4Sides::Side_Back;
}


