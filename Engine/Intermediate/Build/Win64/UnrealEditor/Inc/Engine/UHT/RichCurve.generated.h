// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/RichCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RichCurve_generated_h
#error "RichCurve.generated.h already included, missing '#pragma once' in RichCurve.h"
#endif
#define ENGINE_RichCurve_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurveKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRichCurveKey>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRealCurve Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRichCurve>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_355_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompressedRichCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompressedRichCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h


#define FOREACH_ENUM_ERICHCURVETANGENTMODE(op) \
	op(RCTM_Auto) \
	op(RCTM_User) \
	op(RCTM_Break) \
	op(RCTM_None) 

enum ERichCurveTangentMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentMode>();

#define FOREACH_ENUM_ERICHCURVETANGENTWEIGHTMODE(op) \
	op(RCTWM_WeightedNone) \
	op(RCTWM_WeightedArrive) \
	op(RCTWM_WeightedLeave) \
	op(RCTWM_WeightedBoth) 

enum ERichCurveTangentWeightMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentWeightMode>();

#define FOREACH_ENUM_ERICHCURVECOMPRESSIONFORMAT(op) \
	op(RCCF_Empty) \
	op(RCCF_Constant) \
	op(RCCF_Linear) \
	op(RCCF_Cubic) \
	op(RCCF_Mixed) \
	op(RCCF_Weighted) 

enum ERichCurveCompressionFormat : int;
template<> ENGINE_API UEnum* StaticEnum<ERichCurveCompressionFormat>();

#define FOREACH_ENUM_ERICHCURVEKEYTIMECOMPRESSIONFORMAT(op) \
	op(RCKTCF_uint16) \
	op(RCKTCF_float32) 

enum ERichCurveKeyTimeCompressionFormat : int;
template<> ENGINE_API UEnum* StaticEnum<ERichCurveKeyTimeCompressionFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
