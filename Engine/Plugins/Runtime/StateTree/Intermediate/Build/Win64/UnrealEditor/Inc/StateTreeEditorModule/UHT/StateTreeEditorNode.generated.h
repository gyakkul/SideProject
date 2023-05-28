// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEEDITORMODULE_StateTreeEditorNode_generated_h
#error "StateTreeEditorNode.generated.h already included, missing '#pragma once' in StateTreeEditorNode.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorNode_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeEditorNode_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<struct FStateTreeEditorNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorNode_h


#define FOREACH_ENUM_ESTATETREENODETYPE(op) \
	op(EStateTreeNodeType::EnterCondition) \
	op(EStateTreeNodeType::Evaluator) \
	op(EStateTreeNodeType::Task) \
	op(EStateTreeNodeType::TransitionCondition) \
	op(EStateTreeNodeType::StateParameters) 

enum class EStateTreeNodeType : uint8;
template<> struct TIsUEnumClass<EStateTreeNodeType> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
