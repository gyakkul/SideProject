// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimExecutionContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimExecutionContext_generated_h
#error "AnimExecutionContext.generated.h already included, missing '#pragma once' in AnimExecutionContext.h"
#endif
#define ENGINE_AnimExecutionContext_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimExecutionContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimExecutionContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimInitializationContext_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimInitializationContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimUpdateContext_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimUpdateContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPoseContext_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimPoseContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimExecutionContext Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimComponentSpacePoseContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimExecutionContext_h


#define FOREACH_ENUM_EANIMEXECUTIONCONTEXTCONVERSIONRESULT(op) \
	op(EAnimExecutionContextConversionResult::Succeeded) \
	op(EAnimExecutionContextConversionResult::Failed) 

enum class EAnimExecutionContextConversionResult : uint8;
template<> struct TIsUEnumClass<EAnimExecutionContextConversionResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimExecutionContextConversionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
