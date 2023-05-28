// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayEffectTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayEffectTypes_generated_h
#error "GameplayEffectTypes.generated.h already included, missing '#pragma once' in GameplayEffectTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayEffectTypes_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayModEvaluationChannelSettings>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayModifierEvaluatedData>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectContext>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_466_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectContextHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectContextHandle>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_782_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectRemovalInfo>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_802_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayCueParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayCueParameters>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayTagBlueprintPropertyMapping>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1310_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayTagBlueprintPropertyMap>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagRequirements_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayTagRequirements>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1378_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTagContainerAggregator_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FTagContainerAggregator>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1451_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEffectSpecHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEffectSpecHandle>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h_1503_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FMinimalReplicationTagCountMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectTypes_h


#define FOREACH_ENUM_EGAMEPLAYMODEVALUATIONCHANNEL(op) \
	op(EGameplayModEvaluationChannel::Channel0) \
	op(EGameplayModEvaluationChannel::Channel1) \
	op(EGameplayModEvaluationChannel::Channel2) \
	op(EGameplayModEvaluationChannel::Channel3) \
	op(EGameplayModEvaluationChannel::Channel4) \
	op(EGameplayModEvaluationChannel::Channel5) \
	op(EGameplayModEvaluationChannel::Channel6) \
	op(EGameplayModEvaluationChannel::Channel7) \
	op(EGameplayModEvaluationChannel::Channel8) \
	op(EGameplayModEvaluationChannel::Channel9) \
	op(EGameplayModEvaluationChannel::Channel_MAX) 

enum class EGameplayModEvaluationChannel : uint8;
template<> struct TIsUEnumClass<EGameplayModEvaluationChannel> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModEvaluationChannel>();

#define FOREACH_ENUM_EGAMEPLAYMODOP(op) \
	op(EGameplayModOp::Additive) \
	op(EGameplayModOp::Multiplicitive) \
	op(EGameplayModOp::Division) \
	op(EGameplayModOp::Override) \
	op(EGameplayModOp::Max) 

namespace EGameplayModOp { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayModOp::Type>();

#define FOREACH_ENUM_EGAMEPLAYEFFECTSTACKINGTYPE(op) \
	op(EGameplayEffectStackingType::None) \
	op(EGameplayEffectStackingType::AggregateBySource) \
	op(EGameplayEffectStackingType::AggregateByTarget) 

enum class EGameplayEffectStackingType : uint8;
template<> struct TIsUEnumClass<EGameplayEffectStackingType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingType>();

#define FOREACH_ENUM_EGAMEPLAYCUEEVENT(op) \
	op(EGameplayCueEvent::OnActive) \
	op(EGameplayCueEvent::WhileActive) \
	op(EGameplayCueEvent::Executed) \
	op(EGameplayCueEvent::Removed) 

namespace EGameplayCueEvent { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayCueEvent::Type>();

#define FOREACH_ENUM_EGAMEPLAYTAGEVENTTYPE(op) \
	op(EGameplayTagEventType::NewOrRemoved) \
	op(EGameplayTagEventType::AnyCountChange) 

namespace EGameplayTagEventType { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTagEventType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
