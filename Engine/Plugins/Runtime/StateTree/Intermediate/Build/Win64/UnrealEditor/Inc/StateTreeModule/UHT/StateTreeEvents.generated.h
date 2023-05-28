// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeEvents_generated_h
#error "StateTreeEvents.generated.h already included, missing '#pragma once' in StateTreeEvents.h"
#endif
#define STATETREEMODULE_StateTreeEvents_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeEvent>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeEventQueue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeEventQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeEvents_h


#define FOREACH_ENUM_ESTATETREELOOPEVENTS(op) \
	op(EStateTreeLoopEvents::Next) \
	op(EStateTreeLoopEvents::Break) 

enum class EStateTreeLoopEvents : uint8;
template<> struct TIsUEnumClass<EStateTreeLoopEvents> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeLoopEvents>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
