// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/GameplayInteractionConditions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionConditions_generated_h
#error "GameplayInteractionConditions.generated.h already included, missing '#pragma once' in GameplayInteractionConditions.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionConditions_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionMatchSlotTagsConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionMatchSlotTagsConditionInstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionSlotTagsMatchCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionSlotTagsMatchCondition>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagsConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionQuerySlotTagsConditionInstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionQuerySlotTagCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionQuerySlotTagCondition>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidConditionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionIsSlotHandleValidConditionInstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionIsSlotHandleValidCondition_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeCondition Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionIsSlotHandleValidCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionConditions_h


#define FOREACH_ENUM_EGAMEPLAYINTERACTIONMATCHSLOTTAGSOURCE(op) \
	op(EGameplayInteractionMatchSlotTagSource::ActivityTags) \
	op(EGameplayInteractionMatchSlotTagSource::RuntimeTags) 

enum class EGameplayInteractionMatchSlotTagSource : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionMatchSlotTagSource> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionMatchSlotTagSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
