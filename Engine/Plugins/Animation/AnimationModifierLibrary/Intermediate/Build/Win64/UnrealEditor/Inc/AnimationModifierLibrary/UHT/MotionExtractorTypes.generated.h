// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionExtractorTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONMODIFIERLIBRARY_MotionExtractorTypes_generated_h
#error "MotionExtractorTypes.generated.h already included, missing '#pragma once' in MotionExtractorTypes.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_MotionExtractorTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h


#define FOREACH_ENUM_EMOTIONEXTRACTOR_MOTIONTYPE(op) \
	op(EMotionExtractor_MotionType::Translation) \
	op(EMotionExtractor_MotionType::Rotation) \
	op(EMotionExtractor_MotionType::Scale) \
	op(EMotionExtractor_MotionType::TranslationSpeed) \
	op(EMotionExtractor_MotionType::RotationSpeed) 

enum class EMotionExtractor_MotionType : uint8;
template<> struct TIsUEnumClass<EMotionExtractor_MotionType> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_MotionType>();

#define FOREACH_ENUM_EMOTIONEXTRACTOR_AXIS(op) \
	op(EMotionExtractor_Axis::X) \
	op(EMotionExtractor_Axis::Y) \
	op(EMotionExtractor_Axis::Z) \
	op(EMotionExtractor_Axis::XY) \
	op(EMotionExtractor_Axis::XZ) \
	op(EMotionExtractor_Axis::YZ) \
	op(EMotionExtractor_Axis::XYZ) 

enum class EMotionExtractor_Axis : uint8;
template<> struct TIsUEnumClass<EMotionExtractor_Axis> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_Axis>();

#define FOREACH_ENUM_EMOTIONEXTRACTOR_MATHOPERATION(op) \
	op(EMotionExtractor_MathOperation::None) \
	op(EMotionExtractor_MathOperation::Addition) \
	op(EMotionExtractor_MathOperation::Subtraction) \
	op(EMotionExtractor_MathOperation::Division) \
	op(EMotionExtractor_MathOperation::Multiplication) 

enum class EMotionExtractor_MathOperation : uint8;
template<> struct TIsUEnumClass<EMotionExtractor_MathOperation> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_MathOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
