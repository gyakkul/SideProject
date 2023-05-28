// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimCompressionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCompressionTypes_generated_h
#error "AnimCompressionTypes.generated.h already included, missing '#pragma once' in AnimCompressionTypes.h"
#endif
#define ENGINE_AnimCompressionTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationErrorStats_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationErrorStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h


#define FOREACH_ENUM_ANIMATIONKEYFORMAT(op) \
	op(AKF_ConstantKeyLerp) \
	op(AKF_VariableKeyLerp) \
	op(AKF_PerTrackCompression) 

enum AnimationKeyFormat : int;
template<> ENGINE_API UEnum* StaticEnum<AnimationKeyFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
