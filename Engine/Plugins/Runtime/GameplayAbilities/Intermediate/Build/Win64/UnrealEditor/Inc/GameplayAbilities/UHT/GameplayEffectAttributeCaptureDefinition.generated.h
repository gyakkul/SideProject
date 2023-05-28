// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectAttributeCaptureDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayEffectAttributeCaptureDefinition_generated_h
#error "GameplayEffectAttributeCaptureDefinition.generated.h already included, missing '#pragma once' in GameplayEffectAttributeCaptureDefinition.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectAttributeCaptureDefinition_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectAttributeCaptureDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h


#define FOREACH_ENUM_EGAMEPLAYEFFECTATTRIBUTECAPTURESOURCE(op) \
	op(EGameplayEffectAttributeCaptureSource::Source) \
	op(EGameplayEffectAttributeCaptureSource::Target) 

enum class EGameplayEffectAttributeCaptureSource : uint8;
template<> struct TIsUEnumClass<EGameplayEffectAttributeCaptureSource> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectAttributeCaptureSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
