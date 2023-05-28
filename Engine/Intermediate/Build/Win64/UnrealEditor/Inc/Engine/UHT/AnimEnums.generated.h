// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimEnums_generated_h
#error "AnimEnums.generated.h already included, missing '#pragma once' in AnimEnums.h"
#endif
#define ENGINE_AnimEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h


#define FOREACH_ENUM_EROOTMOTIONROOTLOCK(op) \
	op(ERootMotionRootLock::RefPose) \
	op(ERootMotionRootLock::AnimFirstFrame) \
	op(ERootMotionRootLock::Zero) 

namespace ERootMotionRootLock { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ERootMotionRootLock::Type>();

#define FOREACH_ENUM_EROOTMOTIONMODE(op) \
	op(ERootMotionMode::NoRootMotionExtraction) \
	op(ERootMotionMode::IgnoreRootMotion) \
	op(ERootMotionMode::RootMotionFromEverything) \
	op(ERootMotionMode::RootMotionFromMontagesOnly) 

namespace ERootMotionMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ERootMotionMode::Type>();

#define FOREACH_ENUM_EADDITIVEBASEPOSETYPE(op) \
	op(ABPT_None) \
	op(ABPT_RefPose) \
	op(ABPT_AnimScaled) \
	op(ABPT_AnimFrame) \
	op(ABPT_LocalAnimFrame) 

enum EAdditiveBasePoseType : int;
template<> ENGINE_API UEnum* StaticEnum<EAdditiveBasePoseType>();

#define FOREACH_ENUM_ANIMATIONCOMPRESSIONFORMAT(op) \
	op(ACF_None) \
	op(ACF_Float96NoW) \
	op(ACF_Fixed48NoW) \
	op(ACF_IntervalFixed32NoW) \
	op(ACF_Fixed32NoW) \
	op(ACF_Float32NoW) \
	op(ACF_Identity) 

enum AnimationCompressionFormat : int;
template<> ENGINE_API UEnum* StaticEnum<AnimationCompressionFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
