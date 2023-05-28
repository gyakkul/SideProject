// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeBase_generated_h
#error "AnimNodeBase.generated.h already included, missing '#pragma once' in AnimNodeBase.h"
#endif
#define ENGINE_AnimNodeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_699_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLinkBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseLinkBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_768_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_785_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FComponentSpacePoseLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_802_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Base_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h


#define FOREACH_ENUM_EPINHIDINGMODE(op) \
	op(EPinHidingMode::NeverAsPin) \
	op(EPinHidingMode::PinHiddenByDefault) \
	op(EPinHidingMode::PinShownByDefault) \
	op(EPinHidingMode::AlwaysAsPin) 

namespace EPinHidingMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EPinHidingMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
