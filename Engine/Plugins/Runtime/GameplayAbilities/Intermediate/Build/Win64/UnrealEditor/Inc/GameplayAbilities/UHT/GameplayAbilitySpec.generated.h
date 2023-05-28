// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySpec.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilitySpec_generated_h
#error "GameplayAbilitySpec.generated.h already included, missing '#pragma once' in GameplayAbilitySpec.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitySpec_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecDef_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecDef>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityActivationInfo>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpec_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpec>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h_270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FGameplayAbilitySpecContainer, Items, );


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpec_h


#define FOREACH_ENUM_EGAMEPLAYABILITYACTIVATIONMODE(op) \
	op(EGameplayAbilityActivationMode::Authority) \
	op(EGameplayAbilityActivationMode::NonAuthority) \
	op(EGameplayAbilityActivationMode::Predicting) \
	op(EGameplayAbilityActivationMode::Confirmed) \
	op(EGameplayAbilityActivationMode::Rejected) 

namespace EGameplayAbilityActivationMode { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityActivationMode::Type>();

#define FOREACH_ENUM_EGAMEPLAYEFFECTGRANTEDABILITYREMOVEPOLICY(op) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::CancelAbilityImmediately) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::RemoveAbilityOnEnd) \
	op(EGameplayEffectGrantedAbilityRemovePolicy::DoNothing) 

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8;
template<> struct TIsUEnumClass<EGameplayEffectGrantedAbilityRemovePolicy> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectGrantedAbilityRemovePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
