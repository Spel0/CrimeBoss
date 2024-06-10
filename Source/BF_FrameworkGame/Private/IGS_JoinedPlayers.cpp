#include "IGS_JoinedPlayers.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"

FIGS_JoinedPlayers::FIGS_JoinedPlayers() {
    (*this).FirstPlayer.PlayerName = TEXT("");
    (*this).FirstPlayer.CurrentPlayerPawn = nullptr;
    (*this).FirstPlayer.PlayerState = nullptr;
    (*this).FirstPlayer.HeisterNumber = -1;
    (*this).FirstPlayer.InitialJoiningHeisterNumber = -1;
    (*this).FirstPlayer.IsBot = false;
    (*this).FirstPlayer.IsDisconnected = false;
    (*this).FirstPlayer.IsDead = false;
    (*this).FirstPlayer.IsOccupied = false;
    (*this).FirstPlayer.PreviouslyUsed = false;
    (*this).FirstPlayer.BotSwitchedAfterDeath = false;
    (*this).FirstPlayer.HeisterDataID = -1;
    (*this).FirstPlayer.bCachedMaxLevel = false;
    (*this).FirstPlayer.CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).FirstPlayer.UniqueId = -1;
    (*this).FirstPlayer.CachedGenericID = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FirstPlayer.CachedHeisterData.TagID, 0)) = NAME_None;
    (*this).FirstPlayer.CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).FirstPlayer.CachedHeisterData.UniqGenericId = -1;
    (*this).FirstPlayer.CachedHeisterData.GenericVariantID = -1;
    (*this).FirstPlayer.CachedHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).FirstPlayer.CachedHeisterData.bIsMaxLeveled = false;
    (*this).FirstPlayer.CachedHeisterData.HeisterNumber = -1;
    (*this).FirstPlayer.CachedHeisterData.PlayerId = -1;
    (*this).FirstPlayer.CachedHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).FirstPlayer.CachedHeisterData.UniquePlayerId, 0)).Empty();
    (*this).FirstPlayer.CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FirstPlayer.CachedHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).FirstPlayer.CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FirstPlayer.CachedHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).FirstPlayer.CachedHeisterData.Loadout.Equipment.Empty();
    (*this).FirstPlayer.CachedHeisterData.Loadout.Perks.Empty();
    (*this).FirstPlayer.CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FirstPlayer.CachedHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).FirstPlayer.CachedHeisterData.Experience = 0;
    (*this).FirstPlayer.CachedHeisterData.Injuries = 0;
    (*this).FirstPlayer.CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).FirstPlayer.CachedHeisterData.IsBot = false;
    (*this).FirstPlayer.CachedHeisterData.bUseCustomLoadout = false;
    (*this).FirstPlayer.CachedHeisterData.bComesFromMeta = false;
    (*this).FirstPlayer.CachedHeisterData.MissionStats.Kills = -1;
    (*this).FirstPlayer.CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).FirstPlayer.CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).FirstPlayer.CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).FirstPlayer.CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).FirstPlayer.CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).FirstPlayer.CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).FirstPlayer.CachedHeisterData.MutableVariationIndex = -1;
    (*this).FirstPlayer.CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).FirstPlayer.CachedHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
    (*this).SecondPlayer.PlayerName = TEXT("");
    (*this).SecondPlayer.CurrentPlayerPawn = nullptr;
    (*this).SecondPlayer.PlayerState = nullptr;
    (*this).SecondPlayer.HeisterNumber = -1;
    (*this).SecondPlayer.InitialJoiningHeisterNumber = -1;
    (*this).SecondPlayer.IsBot = false;
    (*this).SecondPlayer.IsDisconnected = false;
    (*this).SecondPlayer.IsDead = false;
    (*this).SecondPlayer.IsOccupied = false;
    (*this).SecondPlayer.PreviouslyUsed = false;
    (*this).SecondPlayer.BotSwitchedAfterDeath = false;
    (*this).SecondPlayer.HeisterDataID = -1;
    (*this).SecondPlayer.bCachedMaxLevel = false;
    (*this).SecondPlayer.CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).SecondPlayer.UniqueId = -1;
    (*this).SecondPlayer.CachedGenericID = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondPlayer.CachedHeisterData.TagID, 0)) = NAME_None;
    (*this).SecondPlayer.CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).SecondPlayer.CachedHeisterData.UniqGenericId = -1;
    (*this).SecondPlayer.CachedHeisterData.GenericVariantID = -1;
    (*this).SecondPlayer.CachedHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).SecondPlayer.CachedHeisterData.bIsMaxLeveled = false;
    (*this).SecondPlayer.CachedHeisterData.HeisterNumber = -1;
    (*this).SecondPlayer.CachedHeisterData.PlayerId = -1;
    (*this).SecondPlayer.CachedHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).SecondPlayer.CachedHeisterData.UniquePlayerId, 0)).Empty();
    (*this).SecondPlayer.CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondPlayer.CachedHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondPlayer.CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondPlayer.CachedHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondPlayer.CachedHeisterData.Loadout.Equipment.Empty();
    (*this).SecondPlayer.CachedHeisterData.Loadout.Perks.Empty();
    (*this).SecondPlayer.CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondPlayer.CachedHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).SecondPlayer.CachedHeisterData.Experience = 0;
    (*this).SecondPlayer.CachedHeisterData.Injuries = 0;
    (*this).SecondPlayer.CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).SecondPlayer.CachedHeisterData.IsBot = false;
    (*this).SecondPlayer.CachedHeisterData.bUseCustomLoadout = false;
    (*this).SecondPlayer.CachedHeisterData.bComesFromMeta = false;
    (*this).SecondPlayer.CachedHeisterData.MissionStats.Kills = -1;
    (*this).SecondPlayer.CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).SecondPlayer.CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).SecondPlayer.CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).SecondPlayer.CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).SecondPlayer.CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).SecondPlayer.CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).SecondPlayer.CachedHeisterData.MutableVariationIndex = -1;
    (*this).SecondPlayer.CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).SecondPlayer.CachedHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
    (*this).ThirdPlayer.PlayerName = TEXT("");
    (*this).ThirdPlayer.CurrentPlayerPawn = nullptr;
    (*this).ThirdPlayer.PlayerState = nullptr;
    (*this).ThirdPlayer.HeisterNumber = -1;
    (*this).ThirdPlayer.InitialJoiningHeisterNumber = -1;
    (*this).ThirdPlayer.IsBot = false;
    (*this).ThirdPlayer.IsDisconnected = false;
    (*this).ThirdPlayer.IsDead = false;
    (*this).ThirdPlayer.IsOccupied = false;
    (*this).ThirdPlayer.PreviouslyUsed = false;
    (*this).ThirdPlayer.BotSwitchedAfterDeath = false;
    (*this).ThirdPlayer.HeisterDataID = -1;
    (*this).ThirdPlayer.bCachedMaxLevel = false;
    (*this).ThirdPlayer.CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).ThirdPlayer.UniqueId = -1;
    (*this).ThirdPlayer.CachedGenericID = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ThirdPlayer.CachedHeisterData.TagID, 0)) = NAME_None;
    (*this).ThirdPlayer.CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).ThirdPlayer.CachedHeisterData.UniqGenericId = -1;
    (*this).ThirdPlayer.CachedHeisterData.GenericVariantID = -1;
    (*this).ThirdPlayer.CachedHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).ThirdPlayer.CachedHeisterData.bIsMaxLeveled = false;
    (*this).ThirdPlayer.CachedHeisterData.HeisterNumber = -1;
    (*this).ThirdPlayer.CachedHeisterData.PlayerId = -1;
    (*this).ThirdPlayer.CachedHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).ThirdPlayer.CachedHeisterData.UniquePlayerId, 0)).Empty();
    (*this).ThirdPlayer.CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ThirdPlayer.CachedHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).ThirdPlayer.CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ThirdPlayer.CachedHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).ThirdPlayer.CachedHeisterData.Loadout.Equipment.Empty();
    (*this).ThirdPlayer.CachedHeisterData.Loadout.Perks.Empty();
    (*this).ThirdPlayer.CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ThirdPlayer.CachedHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).ThirdPlayer.CachedHeisterData.Experience = 0;
    (*this).ThirdPlayer.CachedHeisterData.Injuries = 0;
    (*this).ThirdPlayer.CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).ThirdPlayer.CachedHeisterData.IsBot = false;
    (*this).ThirdPlayer.CachedHeisterData.bUseCustomLoadout = false;
    (*this).ThirdPlayer.CachedHeisterData.bComesFromMeta = false;
    (*this).ThirdPlayer.CachedHeisterData.MissionStats.Kills = -1;
    (*this).ThirdPlayer.CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).ThirdPlayer.CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).ThirdPlayer.CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).ThirdPlayer.CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).ThirdPlayer.CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).ThirdPlayer.CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).ThirdPlayer.CachedHeisterData.MutableVariationIndex = -1;
    (*this).ThirdPlayer.CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).ThirdPlayer.CachedHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
    (*this).FourthPlayer.PlayerName = TEXT("");
    (*this).FourthPlayer.CurrentPlayerPawn = nullptr;
    (*this).FourthPlayer.PlayerState = nullptr;
    (*this).FourthPlayer.HeisterNumber = -1;
    (*this).FourthPlayer.InitialJoiningHeisterNumber = -1;
    (*this).FourthPlayer.IsBot = false;
    (*this).FourthPlayer.IsDisconnected = false;
    (*this).FourthPlayer.IsDead = false;
    (*this).FourthPlayer.IsOccupied = false;
    (*this).FourthPlayer.PreviouslyUsed = false;
    (*this).FourthPlayer.BotSwitchedAfterDeath = false;
    (*this).FourthPlayer.HeisterDataID = -1;
    (*this).FourthPlayer.bCachedMaxLevel = false;
    (*this).FourthPlayer.CachedCharID = EIGS_CharacterID::Char_Unknown;
    (*this).FourthPlayer.UniqueId = -1;
    (*this).FourthPlayer.CachedGenericID = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FourthPlayer.CachedHeisterData.TagID, 0)) = NAME_None;
    (*this).FourthPlayer.CachedHeisterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).FourthPlayer.CachedHeisterData.UniqGenericId = -1;
    (*this).FourthPlayer.CachedHeisterData.GenericVariantID = -1;
    (*this).FourthPlayer.CachedHeisterData.CharacterName = FText::FromString(TEXT(""));
    (*this).FourthPlayer.CachedHeisterData.bIsMaxLeveled = false;
    (*this).FourthPlayer.CachedHeisterData.HeisterNumber = -1;
    (*this).FourthPlayer.CachedHeisterData.PlayerId = -1;
    (*this).FourthPlayer.CachedHeisterData.ProgressionLevel = 1;
    (*TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).FourthPlayer.CachedHeisterData.UniquePlayerId, 0)).Empty();
    (*this).FourthPlayer.CachedHeisterData.Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FourthPlayer.CachedHeisterData.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).FourthPlayer.CachedHeisterData.Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FourthPlayer.CachedHeisterData.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).FourthPlayer.CachedHeisterData.Loadout.Equipment.Empty();
    (*this).FourthPlayer.CachedHeisterData.Loadout.Perks.Empty();
    (*this).FourthPlayer.CachedHeisterData.Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).FourthPlayer.CachedHeisterData.Loadout.CharacterSkinID, 0)) = NAME_None;
    (*this).FourthPlayer.CachedHeisterData.Experience = 0;
    (*this).FourthPlayer.CachedHeisterData.Injuries = 0;
    (*this).FourthPlayer.CachedHeisterData.CharacterState = EMETA_CharacterState::None;
    (*this).FourthPlayer.CachedHeisterData.IsBot = false;
    (*this).FourthPlayer.CachedHeisterData.bUseCustomLoadout = false;
    (*this).FourthPlayer.CachedHeisterData.bComesFromMeta = false;
    (*this).FourthPlayer.CachedHeisterData.MissionStats.Kills = -1;
    (*this).FourthPlayer.CachedHeisterData.MissionStats.Accuracy = -1.000000000e+00f;
    (*this).FourthPlayer.CachedHeisterData.MissionStats.RevivesLeft = -1.000000000e+00f;
    (*this).FourthPlayer.CachedHeisterData.MissionStats.CollectedMoney = 0.000000000e+00f;
    (*this).FourthPlayer.CachedHeisterData.KilledByTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).FourthPlayer.CachedHeisterData.KilledByGangsterVariation = EIGS_GangsterVariationType::US_None;
    (*this).FourthPlayer.CachedHeisterData.PlayerRespect = EMETA_RespectLvl::Low;
    (*this).FourthPlayer.CachedHeisterData.MutableVariationIndex = -1;
    (*this).FourthPlayer.CachedHeisterData.MissionCutPercentWithModifiers = 0;
    (*this).FourthPlayer.CachedHeisterData.CachedPlayerName = FText::FromString(TEXT(""));
}

