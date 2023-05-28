// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EulerTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_EulerTransform_generated_h
#error "EulerTransform.generated.h already included, missing '#pragma once' in EulerTransform.h"
#endif
#define ANIMATIONCORE_EulerTransform_generated_h

#define FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<struct FEulerTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimationCore_Public_EulerTransform_h


#define FOREACH_ENUM_EEULERROTATIONORDER(op) \
	op(EEulerRotationOrder::XYZ) \
	op(EEulerRotationOrder::XZY) \
	op(EEulerRotationOrder::YXZ) \
	op(EEulerRotationOrder::YZX) \
	op(EEulerRotationOrder::ZXY) \
	op(EEulerRotationOrder::ZYX) 

enum class EEulerRotationOrder : uint8;
template<> struct TIsUEnumClass<EEulerRotationOrder> { enum { Value = true }; };
template<> ANIMATIONCORE_API UEnum* StaticEnum<EEulerRotationOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
