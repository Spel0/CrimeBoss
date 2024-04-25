#include "IGS_OverheatComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_OverheatComponent::UIGS_OverheatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoBindShooter = false;
    this->IncreasePerBullet = -1.00f;
    this->IncreasePerSecond = 0.10f;
    this->DecreasePerSecond = -1.00f;
    this->TimeUntilCooldown = 0.50f;
    this->mR_CurrentOverheat = 0.00f;
    this->mR_bIsOverheated = false;
}

void UIGS_OverheatComponent::OnRep_IsOverheated() {
}

void UIGS_OverheatComponent::OnRep_CurrentOverheat() {
}

void UIGS_OverheatComponent::HandleOverheatStateChanged_Implementation(bool inState) {
}

void UIGS_OverheatComponent::BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter) {
}

void UIGS_OverheatComponent::BindToShooter(UIGS_ShooterBase* inShooter) {
}

void UIGS_OverheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_OverheatComponent, mR_CurrentOverheat);
    DOREPLIFETIME(UIGS_OverheatComponent, mR_bIsOverheated);
}


