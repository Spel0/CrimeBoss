#include "IGS_BTService_SetRotateLookAt.h"

UIGS_BTService_SetRotateLookAt::UIGS_BTService_SetRotateLookAt() {
    auto& gen384 = (*this).OutLookPos.AllowedTypes;
    gen384.Empty();
    gen384.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutLookPos, 0)) = 255;
    (*this).NodeName = TEXT("Set Rotate To Look At");
}


