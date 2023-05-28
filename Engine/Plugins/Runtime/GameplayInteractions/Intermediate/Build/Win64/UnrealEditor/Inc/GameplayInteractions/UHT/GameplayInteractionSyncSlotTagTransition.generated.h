// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/GameplayInteractionSyncSlotTagTransition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSyncSlotTagTransition_generated_h
#error "GameplayInteractionSyncSlotTagTransition.generated.h already included, missing '#pragma once' in GameplayInteractionSyncSlotTagTransition.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionSyncSlotTagTransition_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionSyncSlotTagTransitionInstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionSyncSlotTagTransitionTask_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeTask Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionSyncSlotTagTransitionTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionSyncSlotTagTransition_h


#define FOREACH_ENUM_EGAMEPLAYINTERACTIONSYNCSLOTTRANSITIONSTATE(op) \
	op(EGameplayInteractionSyncSlotTransitionState::WaitingForFromTag) \
	op(EGameplayInteractionSyncSlotTransitionState::WaitingForToTag) \
	op(EGameplayInteractionSyncSlotTransitionState::Completed) 

enum class EGameplayInteractionSyncSlotTransitionState : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionSyncSlotTransitionState> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionSyncSlotTransitionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
