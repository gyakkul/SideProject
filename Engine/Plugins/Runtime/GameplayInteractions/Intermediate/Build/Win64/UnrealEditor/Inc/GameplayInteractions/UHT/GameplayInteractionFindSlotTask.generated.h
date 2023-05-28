// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTree/GameplayInteractionFindSlotTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionFindSlotTask_generated_h
#error "GameplayInteractionFindSlotTask.generated.h already included, missing '#pragma once' in GameplayInteractionFindSlotTask.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionFindSlotTask_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTaskInstanceData_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionFindSlotTaskInstanceData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionFindSlotTask_Statics; \
	GAMEPLAYINTERACTIONSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayInteractionStateTreeTask Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionFindSlotTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_StateTree_GameplayInteractionFindSlotTask_h


#define FOREACH_ENUM_EGAMEPLAYINTERACTIONSLOTREFERENCETYPE(op) \
	op(EGameplayInteractionSlotReferenceType::ByActivityTag) \
	op(EGameplayInteractionSlotReferenceType::ByLinkTag) 

enum class EGameplayInteractionSlotReferenceType : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionSlotReferenceType> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionSlotReferenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
