// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeReference.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeReference_generated_h
#error "AnimNodeReference.generated.h already included, missing '#pragma once' in AnimNodeReference.h"
#endif
#define ENGINE_AnimNodeReference_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h


#define FOREACH_ENUM_EANIMNODEREFERENCECONVERSIONRESULT(op) \
	op(EAnimNodeReferenceConversionResult::Succeeded) \
	op(EAnimNodeReferenceConversionResult::Failed) 

enum class EAnimNodeReferenceConversionResult : uint8;
template<> struct TIsUEnumClass<EAnimNodeReferenceConversionResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimNodeReferenceConversionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
