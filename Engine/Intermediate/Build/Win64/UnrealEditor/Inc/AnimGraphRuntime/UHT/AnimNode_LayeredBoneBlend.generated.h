// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_LayeredBoneBlend_generated_h
#error "AnimNode_LayeredBoneBlend.generated.h already included, missing '#pragma once' in AnimNode_LayeredBoneBlend.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_LayeredBoneBlend_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_LayeredBoneBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_LayeredBoneBlend_h


#define FOREACH_ENUM_ELAYEREDBONEBLENDMODE(op) \
	op(ELayeredBoneBlendMode::BranchFilter) \
	op(ELayeredBoneBlendMode::BlendMask) 

enum class ELayeredBoneBlendMode : uint8;
template<> struct TIsUEnumClass<ELayeredBoneBlendMode> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ELayeredBoneBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
