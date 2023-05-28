// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/TimeStretchCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TimeStretchCurve_generated_h
#error "TimeStretchCurve.generated.h already included, missing '#pragma once' in TimeStretchCurve.h"
#endif
#define ENGINE_TimeStretchCurve_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurveMarker>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurve>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurveInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h


#define FOREACH_ENUM_ETIMESTRETCHCURVEMAPPING(op) \
	op(ETimeStretchCurveMapping::T_Original) \
	op(ETimeStretchCurveMapping::T_TargetMin) \
	op(ETimeStretchCurveMapping::T_TargetMax) 

enum class ETimeStretchCurveMapping : uint8;
template<> struct TIsUEnumClass<ETimeStretchCurveMapping> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETimeStretchCurveMapping>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
