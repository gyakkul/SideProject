// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimLinkableElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimLinkableElement_generated_h
#error "AnimLinkableElement.generated.h already included, missing '#pragma once' in AnimLinkableElement.h"
#endif
#define ENGINE_AnimLinkableElement_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimLinkableElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimLinkableElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimLinkableElement_h


#define FOREACH_ENUM_EANIMLINKMETHOD(op) \
	op(EAnimLinkMethod::Absolute) \
	op(EAnimLinkMethod::Relative) \
	op(EAnimLinkMethod::Proportional) 

namespace EAnimLinkMethod { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAnimLinkMethod::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
