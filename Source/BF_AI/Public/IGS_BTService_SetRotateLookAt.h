#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IGS_BTService_SetRotateLookAt.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTService_SetRotateLookAt : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutLookPos;
    
public:
    UIGS_BTService_SetRotateLookAt();

};

