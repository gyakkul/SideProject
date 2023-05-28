// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimedDataMonitorCalibration.h"
#include "TimedDataMonitorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedDataMonitorCalibration() {}
// Cross Module References
	TIMEDDATAMONITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode();
	TIMEDDATAMONITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult();
	UPackage* Z_Construct_UPackage__Script_TimedDataMonitor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode;
	static UEnum* ETimedDataMonitorCalibrationReturnCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("ETimedDataMonitorCalibrationReturnCode"));
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.OuterSingleton;
	}
	template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorCalibrationReturnCode>()
	{
		return ETimedDataMonitorCalibrationReturnCode_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enumerators[] = {
		{ "ETimedDataMonitorCalibrationReturnCode::Succeeded", (int64)ETimedDataMonitorCalibrationReturnCode::Succeeded },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_NoTimecode", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_NoTimecode },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_UnresponsiveInput", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_UnresponsiveInput },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_InvalidEvaluationType", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_InvalidEvaluationType },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_InvalidFrameRate", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_InvalidFrameRate },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_NoDataBuffered", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_NoDataBuffered },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_BufferCouldNotBeResize", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_BufferCouldNotBeResize },
		{ "ETimedDataMonitorCalibrationReturnCode::Failed_Reset", (int64)ETimedDataMonitorCalibrationReturnCode::Failed_Reset },
		{ "ETimedDataMonitorCalibrationReturnCode::Retry_NotEnoughData", (int64)ETimedDataMonitorCalibrationReturnCode::Retry_NotEnoughData },
		{ "ETimedDataMonitorCalibrationReturnCode::Retry_IncreaseBufferSize", (int64)ETimedDataMonitorCalibrationReturnCode::Retry_IncreaseBufferSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enum_MetaDataParams[] = {
		{ "Failed_BufferCouldNotBeResize.Comment", "/** Failed. A resize was requested but it was not able to do so. */" },
		{ "Failed_BufferCouldNotBeResize.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_BufferCouldNotBeResize" },
		{ "Failed_BufferCouldNotBeResize.ToolTip", "Failed. A resize was requested but it was not able to do so." },
		{ "Failed_InvalidEvaluationType.Comment", "/** Failed. At least one input has an evaluation type that is not timecode. */" },
		{ "Failed_InvalidEvaluationType.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_InvalidEvaluationType" },
		{ "Failed_InvalidEvaluationType.ToolTip", "Failed. At least one input has an evaluation type that is not timecode." },
		{ "Failed_InvalidFrameRate.Comment", "/** Failed. At least one input doesn't have a defined frame rate. */" },
		{ "Failed_InvalidFrameRate.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_InvalidFrameRate" },
		{ "Failed_InvalidFrameRate.ToolTip", "Failed. At least one input doesn't have a defined frame rate." },
		{ "Failed_NoDataBuffered.Comment", "/** Failed. At least one input doesn't have data buffered. */" },
		{ "Failed_NoDataBuffered.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_NoDataBuffered" },
		{ "Failed_NoDataBuffered.ToolTip", "Failed. At least one input doesn't have data buffered." },
		{ "Failed_NoTimecode.Comment", "/** Failed. The timecode provider doesn't have a proper timecode value. */" },
		{ "Failed_NoTimecode.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_NoTimecode" },
		{ "Failed_NoTimecode.ToolTip", "Failed. The timecode provider doesn't have a proper timecode value." },
		{ "Failed_Reset.Comment", "/** Failed. The calibration was manually reset. */" },
		{ "Failed_Reset.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_Reset" },
		{ "Failed_Reset.ToolTip", "Failed. The calibration was manually reset." },
		{ "Failed_UnresponsiveInput.Comment", "/** Failed. At least one input is unresponsive. */" },
		{ "Failed_UnresponsiveInput.Name", "ETimedDataMonitorCalibrationReturnCode::Failed_UnresponsiveInput" },
		{ "Failed_UnresponsiveInput.ToolTip", "Failed. At least one input is unresponsive." },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "Retry_IncreaseBufferSize.Comment", "/** Retry. No interval could be found. Increase the buffer size. */" },
		{ "Retry_IncreaseBufferSize.Name", "ETimedDataMonitorCalibrationReturnCode::Retry_IncreaseBufferSize" },
		{ "Retry_IncreaseBufferSize.ToolTip", "Retry. No interval could be found. Increase the buffer size." },
		{ "Retry_NotEnoughData.Comment", "/** Retry. The buffer size is correct but they do not contain enough data to calibrate. */" },
		{ "Retry_NotEnoughData.Name", "ETimedDataMonitorCalibrationReturnCode::Retry_NotEnoughData" },
		{ "Retry_NotEnoughData.ToolTip", "Retry. The buffer size is correct but they do not contain enough data to calibrate." },
		{ "Succeeded.Comment", "/** Success. The values were synchronized. */" },
		{ "Succeeded.Name", "ETimedDataMonitorCalibrationReturnCode::Succeeded" },
		{ "Succeeded.ToolTip", "Success. The values were synchronized." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		"ETimedDataMonitorCalibrationReturnCode",
		"ETimedDataMonitorCalibrationReturnCode",
		Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.InnerSingleton, Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult;
class UScriptStruct* FTimedDataMonitorCalibrationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorCalibrationResult"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorCalibrationResult>()
{
	return FTimedDataMonitorCalibrationResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnCode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureInputIdentifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureInputIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FailureInputIdentifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorCalibrationResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorCalibrationResult, ReturnCode), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorCalibrationReturnCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode_MetaData)) }; // 536349569
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers_Inner = { "FailureInputIdentifiers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3525741413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers = { "FailureInputIdentifiers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorCalibrationResult, FailureInputIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers_MetaData)) }; // 3525741413
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_ReturnCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewProp_FailureInputIdentifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorCalibrationResult",
		sizeof(FTimedDataMonitorCalibrationResult),
		alignof(FTimedDataMonitorCalibrationResult),
		Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters;
class UScriptStruct* FTimedDataMonitorCalibrationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorCalibrationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorCalibrationParameters>()
{
	return FTimedDataMonitorCalibrationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRetries_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfRetries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBufferResizeAllowed_MetaData[];
#endif
		static void NewProp_bBufferResizeAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBufferResizeAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBufferShrinkAllowed_MetaData[];
#endif
		static void NewProp_bBufferShrinkAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBufferShrinkAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFailedIfBufferCantBeResize_MetaData[];
#endif
		static void NewProp_bFailedIfBufferCantBeResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailedIfBufferCantBeResize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStandardDeviation_MetaData[];
#endif
		static void NewProp_bUseStandardDeviation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStandardDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStandardDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStandardDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetStatisticsBeforeUsingStandardDeviation_MetaData[];
#endif
		static void NewProp_bResetStatisticsBeforeUsingStandardDeviation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetStatisticsBeforeUsingStandardDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfSecondsToWaitAfterStatisticReset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountOfSecondsToWaitAfterStatisticReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorCalibrationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfRetries_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When needed, how many retry is allowed. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When needed, how many retry is allowed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfRetries = { "NumberOfRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorCalibrationParameters, NumberOfRetries), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfRetries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** If no calibration is possible, are we allowed to increase the size of the buffer. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "If no calibration is possible, are we allowed to increase the size of the buffer." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed_SetBit(void* Obj)
	{
		((FTimedDataMonitorCalibrationParameters*)Obj)->bBufferResizeAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed = { "bBufferResizeAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorCalibrationParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When resizing buffer, do we allow shrinking them. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When resizing buffer, do we allow shrinking them." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed_SetBit(void* Obj)
	{
		((FTimedDataMonitorCalibrationParameters*)Obj)->bBufferShrinkAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed = { "bBufferShrinkAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorCalibrationParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When resizing buffer, failed the calibration if a buffer couldn't be resize. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When resizing buffer, failed the calibration if a buffer couldn't be resize." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize_SetBit(void* Obj)
	{
		((FTimedDataMonitorCalibrationParameters*)Obj)->bFailedIfBufferCantBeResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize = { "bFailedIfBufferCantBeResize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorCalibrationParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When calibrating, ensure that the evaluation is included inside the STD. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When calibrating, ensure that the evaluation is included inside the STD." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation_SetBit(void* Obj)
	{
		((FTimedDataMonitorCalibrationParameters*)Obj)->bUseStandardDeviation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation = { "bUseStandardDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorCalibrationParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When using STD, how many should we use. */" },
		{ "EditCondition", "bUseStandardDeviation" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When using STD, how many should we use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfStandardDeviation = { "NumberOfStandardDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorCalibrationParameters, NumberOfStandardDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** Before calibration, allow to reset the statistics. */" },
		{ "EditCondition", "bUseStandardDeviation" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "Before calibration, allow to reset the statistics." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation_SetBit(void* Obj)
	{
		((FTimedDataMonitorCalibrationParameters*)Obj)->bResetStatisticsBeforeUsingStandardDeviation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation = { "bResetStatisticsBeforeUsingStandardDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorCalibrationParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_AmountOfSecondsToWaitAfterStatisticReset_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** Before calibration, allow to reset the statistics. */" },
		{ "EditCondition", "bUseStandardDeviation" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "Before calibration, allow to reset the statistics." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_AmountOfSecondsToWaitAfterStatisticReset = { "AmountOfSecondsToWaitAfterStatisticReset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorCalibrationParameters, AmountOfSecondsToWaitAfterStatisticReset), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_AmountOfSecondsToWaitAfterStatisticReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_AmountOfSecondsToWaitAfterStatisticReset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfRetries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferResizeAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bBufferShrinkAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bFailedIfBufferCantBeResize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bUseStandardDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_NumberOfStandardDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_bResetStatisticsBeforeUsingStandardDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewProp_AmountOfSecondsToWaitAfterStatisticReset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorCalibrationParameters",
		sizeof(FTimedDataMonitorCalibrationParameters),
		alignof(FTimedDataMonitorCalibrationParameters),
		Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode;
	static UEnum* ETimedDataMonitorTimeCorrectionReturnCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("ETimedDataMonitorTimeCorrectionReturnCode"));
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.OuterSingleton;
	}
	template<> TIMEDDATAMONITOR_API UEnum* StaticEnum<ETimedDataMonitorTimeCorrectionReturnCode>()
	{
		return ETimedDataMonitorTimeCorrectionReturnCode_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enumerators[] = {
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Succeeded", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Succeeded },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Failed_InvalidInput", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Failed_InvalidInput },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoTimecode", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoTimecode },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Failed_UnresponsiveInput", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Failed_UnresponsiveInput },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoDataBuffered", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoDataBuffered },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Failed_BufferCouldNotBeResize", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Failed_BufferCouldNotBeResize },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Retry_NotEnoughData", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Retry_NotEnoughData },
		{ "ETimedDataMonitorTimeCorrectionReturnCode::Retry_IncreaseBufferSize", (int64)ETimedDataMonitorTimeCorrectionReturnCode::Retry_IncreaseBufferSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enum_MetaDataParams[] = {
		{ "Failed_BufferCouldNotBeResize.Comment", "/** Failed. A resize was requested but it was not able to do so. */" },
		{ "Failed_BufferCouldNotBeResize.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Failed_BufferCouldNotBeResize" },
		{ "Failed_BufferCouldNotBeResize.ToolTip", "Failed. A resize was requested but it was not able to do so." },
		{ "Failed_InvalidInput.Comment", "/** Failed. The provided input doesn't exist. */" },
		{ "Failed_InvalidInput.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Failed_InvalidInput" },
		{ "Failed_InvalidInput.ToolTip", "Failed. The provided input doesn't exist." },
		{ "Failed_NoDataBuffered.Comment", "/** Failed. The channel doesn't have any data in it's buffer to synchronized with. */" },
		{ "Failed_NoDataBuffered.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoDataBuffered" },
		{ "Failed_NoDataBuffered.ToolTip", "Failed. The channel doesn't have any data in it's buffer to synchronized with." },
		{ "Failed_NoTimecode.Comment", "/** Failed. The timecode provider was not existing or not synchronized. */" },
		{ "Failed_NoTimecode.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Failed_NoTimecode" },
		{ "Failed_NoTimecode.ToolTip", "Failed. The timecode provider was not existing or not synchronized." },
		{ "Failed_UnresponsiveInput.Comment", "/** Failed. At least one channel is unresponsive. */" },
		{ "Failed_UnresponsiveInput.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Failed_UnresponsiveInput" },
		{ "Failed_UnresponsiveInput.ToolTip", "Failed. At least one channel is unresponsive." },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "Retry_IncreaseBufferSize.Comment", "/** Retry. No interval could be found. Increase the buffer size. */" },
		{ "Retry_IncreaseBufferSize.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Retry_IncreaseBufferSize" },
		{ "Retry_IncreaseBufferSize.ToolTip", "Retry. No interval could be found. Increase the buffer size." },
		{ "Retry_NotEnoughData.Comment", "/** Retry. The buffer size is correct but they do not contain enough data to to the time correction. */" },
		{ "Retry_NotEnoughData.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Retry_NotEnoughData" },
		{ "Retry_NotEnoughData.ToolTip", "Retry. The buffer size is correct but they do not contain enough data to to the time correction." },
		{ "Succeeded.Comment", "/** Success. The values were synchronized. */" },
		{ "Succeeded.Name", "ETimedDataMonitorTimeCorrectionReturnCode::Succeeded" },
		{ "Succeeded.ToolTip", "Success. The values were synchronized." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		"ETimedDataMonitorTimeCorrectionReturnCode",
		"ETimedDataMonitorTimeCorrectionReturnCode",
		Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.InnerSingleton, Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult;
class UScriptStruct* FTimedDataMonitorTimeCorrectionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorTimeCorrectionResult"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorTimeCorrectionResult>()
{
	return FTimedDataMonitorTimeCorrectionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnCode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailureChannelIdentifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureChannelIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FailureChannelIdentifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorTimeCorrectionResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorTimeCorrectionResult, ReturnCode), Z_Construct_UEnum_TimedDataMonitor_ETimedDataMonitorTimeCorrectionReturnCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode_MetaData)) }; // 2139674976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers_Inner = { "FailureChannelIdentifiers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3757870906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers = { "FailureChannelIdentifiers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorTimeCorrectionResult, FailureChannelIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers_MetaData)) }; // 3757870906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_ReturnCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewProp_FailureChannelIdentifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorTimeCorrectionResult",
		sizeof(FTimedDataMonitorTimeCorrectionResult),
		alignof(FTimedDataMonitorTimeCorrectionResult),
		Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters;
class UScriptStruct* FTimedDataMonitorTimeCorrectionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorTimeCorrectionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorTimeCorrectionParameters>()
{
	return FTimedDataMonitorTimeCorrectionParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBufferResizeAllowed_MetaData[];
#endif
		static void NewProp_bBufferResizeAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBufferResizeAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBufferShrinkAllowed_MetaData[];
#endif
		static void NewProp_bBufferShrinkAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBufferShrinkAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFailedIfBufferCantBeResize_MetaData[];
#endif
		static void NewProp_bFailedIfBufferCantBeResize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailedIfBufferCantBeResize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStandardDeviation_MetaData[];
#endif
		static void NewProp_bUseStandardDeviation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStandardDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfStandardDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfStandardDeviation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorTimeCorrectionParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** If no calibration is possible, are we allowed to increase the size of the buffer. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "If no calibration is possible, are we allowed to increase the size of the buffer." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed_SetBit(void* Obj)
	{
		((FTimedDataMonitorTimeCorrectionParameters*)Obj)->bBufferResizeAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed = { "bBufferResizeAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorTimeCorrectionParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When resizing buffer, do we allow shrinking them. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When resizing buffer, do we allow shrinking them." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed_SetBit(void* Obj)
	{
		((FTimedDataMonitorTimeCorrectionParameters*)Obj)->bBufferShrinkAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed = { "bBufferShrinkAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorTimeCorrectionParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When resizing buffer, failed the calibration if a buffer couldn't be resize. */" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When resizing buffer, failed the calibration if a buffer couldn't be resize." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize_SetBit(void* Obj)
	{
		((FTimedDataMonitorTimeCorrectionParameters*)Obj)->bFailedIfBufferCantBeResize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize = { "bFailedIfBufferCantBeResize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorTimeCorrectionParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "Comment", "/** When calibrating, ensure that the evaluation is included inside the STD. */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When calibrating, ensure that the evaluation is included inside the STD." },
	};
#endif
	void Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation_SetBit(void* Obj)
	{
		((FTimedDataMonitorTimeCorrectionParameters*)Obj)->bUseStandardDeviation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation = { "bUseStandardDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimedDataMonitorTimeCorrectionParameters), &Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData[] = {
		{ "Category", "Calibration Parameters" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When using STD, how many should we use. */" },
		{ "EditCondition", "bUseStandardDeviation" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorCalibration.h" },
		{ "ToolTip", "When using STD, how many should we use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_NumberOfStandardDeviation = { "NumberOfStandardDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorTimeCorrectionParameters, NumberOfStandardDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_NumberOfStandardDeviation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferResizeAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bBufferShrinkAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bFailedIfBufferCantBeResize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_bUseStandardDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewProp_NumberOfStandardDeviation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorTimeCorrectionParameters",
		sizeof(FTimedDataMonitorTimeCorrectionParameters),
		alignof(FTimedDataMonitorTimeCorrectionParameters),
		Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::EnumInfo[] = {
		{ ETimedDataMonitorCalibrationReturnCode_StaticEnum, TEXT("ETimedDataMonitorCalibrationReturnCode"), &Z_Registration_Info_UEnum_ETimedDataMonitorCalibrationReturnCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 536349569U) },
		{ ETimedDataMonitorTimeCorrectionReturnCode_StaticEnum, TEXT("ETimedDataMonitorTimeCorrectionReturnCode"), &Z_Registration_Info_UEnum_ETimedDataMonitorTimeCorrectionReturnCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2139674976U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::ScriptStructInfo[] = {
		{ FTimedDataMonitorCalibrationResult::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationResult_Statics::NewStructOps, TEXT("TimedDataMonitorCalibrationResult"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorCalibrationResult), 262186U) },
		{ FTimedDataMonitorCalibrationParameters::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters_Statics::NewStructOps, TEXT("TimedDataMonitorCalibrationParameters"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorCalibrationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorCalibrationParameters), 3900017550U) },
		{ FTimedDataMonitorTimeCorrectionResult::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionResult_Statics::NewStructOps, TEXT("TimedDataMonitorTimeCorrectionResult"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorTimeCorrectionResult), 1547459021U) },
		{ FTimedDataMonitorTimeCorrectionParameters::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters_Statics::NewStructOps, TEXT("TimedDataMonitorTimeCorrectionParameters"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorTimeCorrectionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorTimeCorrectionParameters), 2301313525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_194813879(TEXT("/Script/TimedDataMonitor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorCalibration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
