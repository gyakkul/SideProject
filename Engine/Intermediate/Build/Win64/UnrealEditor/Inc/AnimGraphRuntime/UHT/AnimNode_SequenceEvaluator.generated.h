// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_SequenceEvaluator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h
#error "AnimNode_SequenceEvaluator.generated.h already included, missing '#pragma once' in AnimNode_SequenceEvaluator.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluatorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_AssetPlayerBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_SequenceEvaluatorBase>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SequenceEvaluatorBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_SequenceEvaluator>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SequenceEvaluatorBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_SequenceEvaluator_Standalone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h


#define FOREACH_ENUM_ESEQUENCEEVALREINIT(op) \
	op(ESequenceEvalReinit::NoReset) \
	op(ESequenceEvalReinit::StartPosition) \
	op(ESequenceEvalReinit::ExplicitTime) 

namespace ESequenceEvalReinit { enum Type : int; }
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESequenceEvalReinit::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
