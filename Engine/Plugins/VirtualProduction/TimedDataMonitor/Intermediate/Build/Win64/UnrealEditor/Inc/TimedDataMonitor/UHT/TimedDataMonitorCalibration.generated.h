// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimedDataMonitorCalibration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEDDATAMONITOR_TimedDataMonitorCalibration_generated_h
#error "TimedDataMonitorCalibration.generated.h already included, missing '#pragma once' in TimedDataMonitorCalibration.h"
#endif
#define TIMEDDATAMONITOR_TimedDataMonitorCalibration_generated_h

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct();


template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<struct FTimedDataMonitorCalibrationResult>();

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct();


template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<struct FTimedDataMonitorCalibrationParameters>();

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct();


template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<struct FTimedDataMonitorTimeCorrectionResult>();

#define FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics; \
	TIMEDDATAMONITOR_API static class UScriptStruct* StaticStruct();


template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<struct FTimedDataMonitorTimeCorrectionParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h


#define FOREACH_ENUM_ETIMEDDATAMONITORCALIBRATIONRETURNCODE(op) \
	op(ETimedDataMonitorCalibrationReturnCode::Succeeded) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_NoTimecode) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_UnresponsiveInput) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_InvalidEvaluationType) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_InvalidFrameRate) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_NoDataBuffered) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_BufferCouldNotBeResize) \
	op(ETimedDataMonitorCalibrationReturnCode::Failed_Reset) \
	op(ETimedDataMonitorCalibrationReturnCode::Retry_NotEnoughData) \
	op(ETimedDataMonitorCalibrationReturnCode::Retry_IncreaseBufferSize) 

enum class ETimedDataMonitorCalibrationReturnCode : uint8;
template<> struct TIsUEnumClass<ETimedDataMonitorCalibrationReturnCode> { enum { Value = true }; };
template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorCalibrationReturnCode>();

#define FOREACH_ENUM_ETIMEDDATAMONITORTIMECORRECTIONRETURNCODE(op) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Succeeded) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Failed_InvalidInput) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoTimecode) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Failed_UnresponsiveInput) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoDataBuffered) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Failed_BufferCouldNotBeResize) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Retry_NotEnoughData) \
	op(ETimedDataMonitorTimeCorrectionReturnCode::Retry_IncreaseBufferSize) 

enum class ETimedDataMonitorTimeCorrectionReturnCode : uint8;
template<> struct TIsUEnumClass<ETimedDataMonitorTimeCorrectionReturnCode> { enum { Value = true }; };
template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorTimeCorrectionReturnCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
