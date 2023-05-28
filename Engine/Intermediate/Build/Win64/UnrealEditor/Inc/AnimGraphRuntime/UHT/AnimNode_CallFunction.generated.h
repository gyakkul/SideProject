// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/AnimNode_CallFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_CallFunction_generated_h
#error "AnimNode_CallFunction.generated.h already included, missing '#pragma once' in AnimNode_CallFunction.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_CallFunction_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_CallFunction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_CallFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_CallFunction_h


#define FOREACH_ENUM_EANIMFUNCTIONCALLSITE(op) \
	op(EAnimFunctionCallSite::OnInitialize) \
	op(EAnimFunctionCallSite::OnUpdate) \
	op(EAnimFunctionCallSite::OnBecomeRelevant) \
	op(EAnimFunctionCallSite::OnEvaluate) \
	op(EAnimFunctionCallSite::OnInitializePostRecursion) \
	op(EAnimFunctionCallSite::OnUpdatePostRecursion) \
	op(EAnimFunctionCallSite::OnBecomeRelevantPostRecursion) \
	op(EAnimFunctionCallSite::OnEvaluatePostRecursion) \
	op(EAnimFunctionCallSite::OnStartedBlendingOut) \
	op(EAnimFunctionCallSite::OnStartedBlendingIn) \
	op(EAnimFunctionCallSite::OnFinishedBlendingOut) \
	op(EAnimFunctionCallSite::OnFinishedBlendingIn) 

enum class EAnimFunctionCallSite;
template<> struct TIsUEnumClass<EAnimFunctionCallSite> { enum { Value = true }; };
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EAnimFunctionCallSite>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
