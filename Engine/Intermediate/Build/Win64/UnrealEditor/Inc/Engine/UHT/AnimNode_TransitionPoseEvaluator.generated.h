// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNode_TransitionPoseEvaluator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNode_TransitionPoseEvaluator_generated_h
#error "AnimNode_TransitionPoseEvaluator.generated.h already included, missing '#pragma once' in AnimNode_TransitionPoseEvaluator.h"
#endif
#define ENGINE_AnimNode_TransitionPoseEvaluator_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNode_TransitionPoseEvaluator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionPoseEvaluator_h


#define FOREACH_ENUM_EEVALUATORDATASOURCE(op) \
	op(EEvaluatorDataSource::EDS_SourcePose) \
	op(EEvaluatorDataSource::EDS_DestinationPose) 

namespace EEvaluatorDataSource { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EEvaluatorDataSource::Type>();

#define FOREACH_ENUM_EEVALUATORMODE(op) \
	op(EEvaluatorMode::EM_Standard) \
	op(EEvaluatorMode::EM_Freeze) \
	op(EEvaluatorMode::EM_DelayedFreeze) 

namespace EEvaluatorMode { enum Mode : int; }
template<> ENGINE_API UEnum* StaticEnum<EEvaluatorMode::Mode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
