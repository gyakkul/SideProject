// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_BoneDrivenController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_BoneDrivenController_generated_h
#error "AnimNode_BoneDrivenController.generated.h already included, missing '#pragma once' in AnimNode_BoneDrivenController.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_BoneDrivenController_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_BoneDrivenController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h


#define FOREACH_ENUM_EDRIVENBONEMODIFICATIONMODE(op) \
	op(EDrivenBoneModificationMode::AddToInput) \
	op(EDrivenBoneModificationMode::ReplaceComponent) \
	op(EDrivenBoneModificationMode::AddToRefPose) 

enum class EDrivenBoneModificationMode : uint8;
template<> struct TIsUEnumClass<EDrivenBoneModificationMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenBoneModificationMode>();

#define FOREACH_ENUM_EDRIVENDESTINATIONMODE(op) \
	op(EDrivenDestinationMode::Bone) \
	op(EDrivenDestinationMode::MorphTarget) \
	op(EDrivenDestinationMode::MaterialParameter) 

enum class EDrivenDestinationMode : uint8;
template<> struct TIsUEnumClass<EDrivenDestinationMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenDestinationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
