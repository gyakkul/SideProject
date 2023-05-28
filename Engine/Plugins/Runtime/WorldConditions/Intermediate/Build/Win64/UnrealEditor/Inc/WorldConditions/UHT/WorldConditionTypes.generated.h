// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldConditionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDCONDITIONS_WorldConditionTypes_generated_h
#error "WorldConditionTypes.generated.h already included, missing '#pragma once' in WorldConditionTypes.h"
#endif
#define WORLDCONDITIONS_WorldConditionTypes_generated_h

#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldConditionResult_Statics; \
	WORLDCONDITIONS_API static class UScriptStruct* StaticStruct();


template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<struct FWorldConditionResult>();

#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<struct FWorldConditionContextDataDesc>();

#define FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<struct FWorldConditionContextDataRef>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h


#define FOREACH_ENUM_EWORLDCONDITIONRESULTVALUE(op) \
	op(EWorldConditionResultValue::IsFalse) \
	op(EWorldConditionResultValue::IsTrue) \
	op(EWorldConditionResultValue::Invalid) 

enum class EWorldConditionResultValue : uint8;
template<> struct TIsUEnumClass<EWorldConditionResultValue> { enum { Value = true }; };
template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionResultValue>();

#define FOREACH_ENUM_EWORLDCONDITIONOPERATOR(op) \
	op(EWorldConditionOperator::And) \
	op(EWorldConditionOperator::Or) \
	op(EWorldConditionOperator::Copy) 

enum class EWorldConditionOperator : uint8;
template<> struct TIsUEnumClass<EWorldConditionOperator> { enum { Value = true }; };
template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionOperator>();

#define FOREACH_ENUM_EWORLDCONDITIONCONTEXTDATATYPE(op) \
	op(EWorldConditionContextDataType::Dynamic) \
	op(EWorldConditionContextDataType::Persistent) 

enum class EWorldConditionContextDataType : uint8;
template<> struct TIsUEnumClass<EWorldConditionContextDataType> { enum { Value = true }; };
template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionContextDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
