#include "IGS_BTService_ZiptieSequence.h"

UIGS_BTService_ZiptieSequence::UIGS_BTService_ZiptieSequence() {
    auto& gen401 = (*this).CivToZiptieKey.AllowedTypes;
    gen401.Empty();
    gen401.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CivToZiptieKey, 0)) = 255;
    (*this).NodeName = TEXT("Ziptie Sequence");
}


