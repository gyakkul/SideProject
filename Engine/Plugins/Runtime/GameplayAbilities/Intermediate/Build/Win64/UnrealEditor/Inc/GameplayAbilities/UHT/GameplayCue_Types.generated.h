// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCue_Types.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayCue_Types_generated_h
#error "GameplayCue_Types.generated.h already included, missing '#pragma once' in GameplayCue_Types.h"
#endif
#define GAMEPLAYABILITIES_GameplayCue_Types_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCuePendingExecute_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayCuePendingExecute>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCueNotifyActorArray_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayCueNotifyActorArray>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreallocationInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FPreallocationInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCue_Types_h


#define FOREACH_ENUM_EGAMEPLAYCUEPAYLOADTYPE(op) \
	op(EGameplayCuePayloadType::CueParameters) \
	op(EGameplayCuePayloadType::FromSpec) 

enum class EGameplayCuePayloadType : uint8;
template<> struct TIsUEnumClass<EGameplayCuePayloadType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCuePayloadType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
