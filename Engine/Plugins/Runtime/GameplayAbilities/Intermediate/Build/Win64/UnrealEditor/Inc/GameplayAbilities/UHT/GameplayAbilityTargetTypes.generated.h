// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbilityTargetTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h
#error "GameplayAbilityTargetTypes.generated.h already included, missing '#pragma once' in GameplayAbilityTargetTypes.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilityTargetTypes_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetData>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetDataHandle>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_306_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetingLocationInfo>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_377_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_LocationInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetData_LocationInfo>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_439_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_ActorArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetData_ActorArray>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h_542_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FGameplayAbilityTargetData_SingleTargetHit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetTypes_h


#define FOREACH_ENUM_EGAMEPLAYTARGETINGCONFIRMATION(op) \
	op(EGameplayTargetingConfirmation::Instant) \
	op(EGameplayTargetingConfirmation::UserConfirmed) \
	op(EGameplayTargetingConfirmation::Custom) \
	op(EGameplayTargetingConfirmation::CustomMulti) 

namespace EGameplayTargetingConfirmation { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayTargetingConfirmation::Type>();

#define FOREACH_ENUM_EGAMEPLAYABILITYTARGETINGLOCATIONTYPE(op) \
	op(EGameplayAbilityTargetingLocationType::LiteralTransform) \
	op(EGameplayAbilityTargetingLocationType::ActorTransform) \
	op(EGameplayAbilityTargetingLocationType::SocketTransform) 

namespace EGameplayAbilityTargetingLocationType { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayAbilityTargetingLocationType::Type>();

#define FOREACH_ENUM_EABILITYGENERICREPLICATEDEVENT(op) \
	op(EAbilityGenericReplicatedEvent::GenericConfirm) \
	op(EAbilityGenericReplicatedEvent::GenericCancel) \
	op(EAbilityGenericReplicatedEvent::InputPressed) \
	op(EAbilityGenericReplicatedEvent::InputReleased) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromClient) \
	op(EAbilityGenericReplicatedEvent::GenericSignalFromServer) \
	op(EAbilityGenericReplicatedEvent::GameCustom1) \
	op(EAbilityGenericReplicatedEvent::GameCustom2) \
	op(EAbilityGenericReplicatedEvent::GameCustom3) \
	op(EAbilityGenericReplicatedEvent::GameCustom4) \
	op(EAbilityGenericReplicatedEvent::GameCustom5) \
	op(EAbilityGenericReplicatedEvent::GameCustom6) 

namespace EAbilityGenericReplicatedEvent { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAbilityGenericReplicatedEvent::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
