// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_SplineIK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_SplineIK_generated_h
#error "AnimNode_SplineIK.generated.h already included, missing '#pragma once' in AnimNode_SplineIK.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_SplineIK_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FSplineIKCachedBoneData>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_SplineIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SplineIK_h


#define FOREACH_ENUM_ESPLINEBONEAXIS(op) \
	op(ESplineBoneAxis::None) \
	op(ESplineBoneAxis::X) \
	op(ESplineBoneAxis::Y) \
	op(ESplineBoneAxis::Z) 

enum class ESplineBoneAxis : uint8;
template<> struct TIsUEnumClass<ESplineBoneAxis> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESplineBoneAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
