// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ITimedDataInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_ITimedDataInput_generated_h
#error "ITimedDataInput.generated.h already included, missing '#pragma once' in ITimedDataInput.h"
#endif
#define TIMEMANAGEMENT_ITimedDataInput_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics; \
	TIMEMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<struct FTimedDataChannelSampleTime>();

#define FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<struct FTimedDataInputEvaluationData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h


#define FOREACH_ENUM_ETIMEDDATAINPUTEVALUATIONTYPE(op) \
	op(ETimedDataInputEvaluationType::None) \
	op(ETimedDataInputEvaluationType::Timecode) \
	op(ETimedDataInputEvaluationType::PlatformTime) 

enum class ETimedDataInputEvaluationType : uint8;
template<> struct TIsUEnumClass<ETimedDataInputEvaluationType> { enum { Value = true }; };
template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputEvaluationType>();

#define FOREACH_ENUM_ETIMEDDATAINPUTSTATE(op) \
	op(ETimedDataInputState::Connected) \
	op(ETimedDataInputState::Unresponsive) \
	op(ETimedDataInputState::Disconnected) 

enum class ETimedDataInputState : uint8;
template<> struct TIsUEnumClass<ETimedDataInputState> { enum { Value = true }; };
template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
