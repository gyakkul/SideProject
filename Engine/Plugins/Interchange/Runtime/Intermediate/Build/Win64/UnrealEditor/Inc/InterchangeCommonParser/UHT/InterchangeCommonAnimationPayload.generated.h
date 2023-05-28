// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCommonAnimationPayload.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECOMMONPARSER_InterchangeCommonAnimationPayload_generated_h
#error "InterchangeCommonAnimationPayload.generated.h already included, missing '#pragma once' in InterchangeCommonAnimationPayload.h"
#endif
#define INTERCHANGECOMMONPARSER_InterchangeCommonAnimationPayload_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<struct FInterchangeCurveKey>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<struct FInterchangeCurve>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<struct FInterchangeStepCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h


#define FOREACH_ENUM_EINTERCHANGECURVEINTERPMODE(op) \
	op(EInterchangeCurveInterpMode::Linear) \
	op(EInterchangeCurveInterpMode::Constant) \
	op(EInterchangeCurveInterpMode::Cubic) \
	op(EInterchangeCurveInterpMode::None) 

enum class EInterchangeCurveInterpMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveInterpMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveInterpMode>();

#define FOREACH_ENUM_EINTERCHANGECURVETANGENTMODE(op) \
	op(EInterchangeCurveTangentMode::Auto) \
	op(EInterchangeCurveTangentMode::User) \
	op(EInterchangeCurveTangentMode::Break) \
	op(EInterchangeCurveTangentMode::None) 

enum class EInterchangeCurveTangentMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveTangentMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveTangentMode>();

#define FOREACH_ENUM_EINTERCHANGECURVETANGENTWEIGHTMODE(op) \
	op(EInterchangeCurveTangentWeightMode::WeightedNone) \
	op(EInterchangeCurveTangentWeightMode::WeightedArrive) \
	op(EInterchangeCurveTangentWeightMode::WeightedLeave) \
	op(EInterchangeCurveTangentWeightMode::WeightedBoth) 

enum class EInterchangeCurveTangentWeightMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveTangentWeightMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveTangentWeightMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
