#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.generated.h"

UENUM(BlueprintType)
enum class EIGS_CharacterID : uint8 {
    Char_Unknown = 255,
    Char_Gen_M_Thug = 0,
    Char_Gen_Start = Char_Gen_M_Thug,
    Char_Gen_M_Thief,
    Char_Gen_M_Hitman,
    Char_Gen_M_Gangster,
    Char_Gen_MAX UMETA(Hidden),
    Char_Gen_End = Char_Gen_M_Gangster,
    Char_Gen_Limit = 63,
    Char_Cracker,
    Char_Unique_Start = Char_Cracker,
    Char_Ropes,
    Char_Chase,
    Char_Tulip,
    Char_Zulu,
    Char_Mozart,
    Char_Tuna,
    Char_Wiz,
    Char_Ranger,
    Char_Jupiter,
    Char_Clutch,
    Char_Forehand,
    Char_Stinger,
    Char_Smoke,
    Char_Runway,
    Char_Theresa,
    Char_Peak,
    Char_Lector,
    Char_Vamp,
    Char_Silver,
    Char_Volk,
    Char_HieloQP,
    Char_DollarDragonQP,
    Char_GenericQP_01,
    Char_GenericQP_02,
    Char_GenericQP_03,
    Char_GenericQP_04,
    Char_GenericQP_05,
    Char_GenericQP_06,
    Char_Robot,
    Char_PlayableEmployee,
    Char_Employee_Technician,
    Char_Recon_Ninja,
    Char_Unique_MAX UMETA(Hidden),
    Char_Unique_End = Char_Recon_Ninja,
    Char_Unique_Limit = 223,
    Char_Boss_Baker,
    Char_Boss_Start = Char_Boss_Baker,
    Char_Boss_Hand,
    Char_Boss_Agent,
    Char_Boss_Captain,
    Char_Boss_Secretary,
    Char_Boss_BakerQP,
    Char_Boss_CaptainQP,
    Char_Boss_Player,
    Char_Boss_MAX UMETA(Hidden),
    Char_Boss_End = Char_Boss_Player,
    Char_Boss_Limit = 254,
};

