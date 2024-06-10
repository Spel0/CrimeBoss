#include "IGS_BTTask_ThrowBagSlotToBB.h"

UIGS_BTTask_ThrowBagSlotToBB::UIGS_BTTask_ThrowBagSlotToBB() {
    auto& gen0 = (*this).ThrowRequestKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    auto& gen1 = (*this).ThrowSlotKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowSlotKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Bag Slot To BB");
}


