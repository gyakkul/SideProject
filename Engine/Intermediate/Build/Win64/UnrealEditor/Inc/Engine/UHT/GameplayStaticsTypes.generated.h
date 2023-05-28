// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/GameplayStaticsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameplayStaticsTypes_generated_h
#error "GameplayStaticsTypes.generated.h already included, missing '#pragma once' in GameplayStaticsTypes.h"
#endif
#define ENGINE_GameplayStaticsTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathPointData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPredictProjectilePathResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h


#define FOREACH_ENUM_ESUGGESTPROJVELOCITYTRACEOPTION(op) \
	op(ESuggestProjVelocityTraceOption::DoNotTrace) \
	op(ESuggestProjVelocityTraceOption::TraceFullPath) \
	op(ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending) 

namespace ESuggestProjVelocityTraceOption { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESuggestProjVelocityTraceOption::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
