// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetDataFilter_generated_h
#error "GameplayAbilityTargetDataFilter.generated.h already included, missing '#pragma once' in GameplayAbilityTargetDataFilter.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetDataFilter_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTargetDataFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayTargetDataFilter>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayTargetDataFilterHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetDataFilter_h


#define FOREACH_ENUM_ETARGETDATAFILTERSELF(op) \
	op(ETargetDataFilterSelf::TDFS_Any) \
	op(ETargetDataFilterSelf::TDFS_NoSelf) \
	op(ETargetDataFilterSelf::TDFS_NoOthers) 

namespace ETargetDataFilterSelf { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ETargetDataFilterSelf::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
