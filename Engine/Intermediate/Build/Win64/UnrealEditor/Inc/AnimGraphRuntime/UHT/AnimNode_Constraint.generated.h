// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_Constraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_Constraint_generated_h
#error "AnimNode_Constraint.generated.h already included, missing '#pragma once' in AnimNode_Constraint.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_Constraint_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraint_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FConstraint>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Constraint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_Constraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Constraint_h


#define FOREACH_ENUM_ECONSTRAINTOFFSETOPTION(op) \
	op(EConstraintOffsetOption::None) \
	op(EConstraintOffsetOption::Offset_RefPose) 

enum class EConstraintOffsetOption : uint8;
template<> struct TIsUEnumClass<EConstraintOffsetOption> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EConstraintOffsetOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
