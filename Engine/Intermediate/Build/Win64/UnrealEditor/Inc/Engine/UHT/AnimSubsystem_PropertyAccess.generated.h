// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSubsystem_PropertyAccess.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimSubsystem_PropertyAccess_generated_h
#error "AnimSubsystem_PropertyAccess.generated.h already included, missing '#pragma once' in AnimSubsystem_PropertyAccess.h"
#endif
#define ENGINE_AnimSubsystem_PropertyAccess_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimSubsystem Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSubsystem_PropertyAccess>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_PropertyAccess_h


#define FOREACH_ENUM_EANIMPROPERTYACCESSCALLSITE(op) \
	op(EAnimPropertyAccessCallSite::WorkerThread_Unbatched) \
	op(EAnimPropertyAccessCallSite::WorkerThread_Batched_PreEventGraph) \
	op(EAnimPropertyAccessCallSite::WorkerThread_Batched_PostEventGraph) \
	op(EAnimPropertyAccessCallSite::GameThread_Batched_PreEventGraph) \
	op(EAnimPropertyAccessCallSite::GameThread_Batched_PostEventGraph) 

enum class EAnimPropertyAccessCallSite;
template<> struct TIsUEnumClass<EAnimPropertyAccessCallSite> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimPropertyAccessCallSite>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
