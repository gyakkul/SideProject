// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h
#error "GameplayAbilityTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTypes_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityActorInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityActorInfo>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityLocalAnimMontage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityLocalAnimMontage>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayEventData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayEventData>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityEndedData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityEndedData>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_415_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAttributeDefaults>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_433_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityTaskDebugMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityTaskDebugMessage>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerAbilityRPCBatch_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FServerAbilityRPCBatch>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h_508_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandleAndPredictionKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilitySpecHandleAndPredictionKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTypes_h


#define FOREACH_ENUM_EGAMEPLAYABILITYINSTANCINGPOLICY(op) \
	op(EGameplayAbilityInstancingPolicy::NonInstanced) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerActor) \
	op(EGameplayAbilityInstancingPolicy::InstancedPerExecution) 

namespace EGameplayAbilityInstancingPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityInstancingPolicy::Type>();

#define FOREACH_ENUM_EGAMEPLAYABILITYNETEXECUTIONPOLICY(op) \
	op(EGameplayAbilityNetExecutionPolicy::LocalPredicted) \
	op(EGameplayAbilityNetExecutionPolicy::LocalOnly) \
	op(EGameplayAbilityNetExecutionPolicy::ServerInitiated) \
	op(EGameplayAbilityNetExecutionPolicy::ServerOnly) 

namespace EGameplayAbilityNetExecutionPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetExecutionPolicy::Type>();

#define FOREACH_ENUM_EGAMEPLAYABILITYNETSECURITYPOLICY(op) \
	op(EGameplayAbilityNetSecurityPolicy::ClientOrServer) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyExecution) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination) \
	op(EGameplayAbilityNetSecurityPolicy::ServerOnly) 

namespace EGameplayAbilityNetSecurityPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityNetSecurityPolicy::Type>();

#define FOREACH_ENUM_EGAMEPLAYABILITYREPLICATIONPOLICY(op) \
	op(EGameplayAbilityReplicationPolicy::ReplicateNo) \
	op(EGameplayAbilityReplicationPolicy::ReplicateYes) 

namespace EGameplayAbilityReplicationPolicy { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityReplicationPolicy::Type>();

#define FOREACH_ENUM_EGAMEPLAYABILITYTRIGGERSOURCE(op) \
	op(EGameplayAbilityTriggerSource::GameplayEvent) \
	op(EGameplayAbilityTriggerSource::OwnedTagAdded) \
	op(EGameplayAbilityTriggerSource::OwnedTagPresent) 

namespace EGameplayAbilityTriggerSource { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTriggerSource::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
