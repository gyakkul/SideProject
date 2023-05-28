// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityRepAnimMontage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityRepAnimMontage_generated_h
#error "GameplayAbilityRepAnimMontage.generated.h already included, missing '#pragma once' in GameplayAbilityRepAnimMontage.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityRepAnimMontage_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityRepAnimMontage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityRepAnimMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityRepAnimMontage_h


#define FOREACH_ENUM_EREPANIMPOSITIONMETHOD(op) \
	op(ERepAnimPositionMethod::Position) \
	op(ERepAnimPositionMethod::CurrentSectionId) 

enum class ERepAnimPositionMethod;
template<> struct TIsUEnumClass<ERepAnimPositionMethod> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERepAnimPositionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
