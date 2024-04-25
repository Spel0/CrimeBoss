#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Common_PlayerStateSave.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FCommon_PlayerStateSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> Items;
    
    FCommon_PlayerStateSave();
};

