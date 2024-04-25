#include "IGS_WalkieTalkie.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_InteractiveComponent.h"

AIGS_WalkieTalkie::AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    (*this).PickupMeshComp = (UStaticMeshComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
    (*this).InteractiveComponent->SetupAttachment((*this).RootComponent);
}



