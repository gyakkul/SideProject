// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_BlendListBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_BlendListBase_generated_h
#error "AnimNode_BlendListBase.generated.h already included, missing '#pragma once' in AnimNode_BlendListBase.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_BlendListBase_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_BlendListBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListBase_h


#define FOREACH_ENUM_EBLENDLISTTRANSITIONTYPE(op) \
	op(EBlendListTransitionType::StandardBlend) \
	op(EBlendListTransitionType::Inertialization) 

enum class EBlendListTransitionType : uint8;
template<> struct TIsUEnumClass<EBlendListTransitionType> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EBlendListTransitionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
