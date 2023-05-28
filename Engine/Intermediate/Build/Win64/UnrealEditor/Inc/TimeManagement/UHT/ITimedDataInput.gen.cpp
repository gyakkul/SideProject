// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITimedDataInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITimedDataInput() {}
// Cross Module References
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputState();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataInputEvaluationType;
	static UEnum* ETimedDataInputEvaluationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType, (UObject*)Z_Construct_UPackage__Script_TimeManagement(), TEXT("ETimedDataInputEvaluationType"));
		}
		return Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputEvaluationType>()
	{
		return ETimedDataInputEvaluationType_StaticEnum();
	}
	struct Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enumerators[] = {
		{ "ETimedDataInputEvaluationType::None", (int64)ETimedDataInputEvaluationType::None },
		{ "ETimedDataInputEvaluationType::Timecode", (int64)ETimedDataInputEvaluationType::Timecode },
		{ "ETimedDataInputEvaluationType::PlatformTime", (int64)ETimedDataInputEvaluationType::PlatformTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "None.Comment", "/** There is no special evaluation type for that input. */" },
		{ "None.Name", "ETimedDataInputEvaluationType::None" },
		{ "None.ToolTip", "There is no special evaluation type for that input." },
		{ "PlatformTime.Comment", "/** The input is evaluated from the engine's time. Note that the engine's time is relative to FPlatformTime::Seconds. */" },
		{ "PlatformTime.Name", "ETimedDataInputEvaluationType::PlatformTime" },
		{ "PlatformTime.ToolTip", "The input is evaluated from the engine's time. Note that the engine's time is relative to FPlatformTime::Seconds." },
		{ "Timecode.Comment", "/** The input is evaluated from the engine's timecode. */" },
		{ "Timecode.Name", "ETimedDataInputEvaluationType::Timecode" },
		{ "Timecode.ToolTip", "The input is evaluated from the engine's timecode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		"ETimedDataInputEvaluationType",
		"ETimedDataInputEvaluationType",
		Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.InnerSingleton, Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataInputEvaluationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataInputState;
	static UEnum* ETimedDataInputState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataInputState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_ETimedDataInputState, (UObject*)Z_Construct_UPackage__Script_TimeManagement(), TEXT("ETimedDataInputState"));
		}
		return Z_Registration_Info_UEnum_ETimedDataInputState.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputState>()
	{
		return ETimedDataInputState_StaticEnum();
	}
	struct Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enumerators[] = {
		{ "ETimedDataInputState::Connected", (int64)ETimedDataInputState::Connected },
		{ "ETimedDataInputState::Unresponsive", (int64)ETimedDataInputState::Unresponsive },
		{ "ETimedDataInputState::Disconnected", (int64)ETimedDataInputState::Disconnected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enum_MetaDataParams[] = {
		{ "Connected.Comment", "/** The input is connected. */" },
		{ "Connected.Name", "ETimedDataInputState::Connected" },
		{ "Connected.ToolTip", "The input is connected." },
		{ "Disconnected.Comment", "/** The input is not connected. */" },
		{ "Disconnected.Name", "ETimedDataInputState::Disconnected" },
		{ "Disconnected.ToolTip", "The input is not connected." },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "Unresponsive.Comment", "/** The input is connected but no data is available. */" },
		{ "Unresponsive.Name", "ETimedDataInputState::Unresponsive" },
		{ "Unresponsive.ToolTip", "The input is connected but no data is available." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		"ETimedDataInputState",
		"ETimedDataInputState",
		Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputState()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataInputState.InnerSingleton, Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataInputState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime;
class UScriptStruct* FTimedDataChannelSampleTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, (UObject*)Z_Construct_UPackage__Script_TimeManagement(), TEXT("TimedDataChannelSampleTime"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<FTimedDataChannelSampleTime>()
{
	return FTimedDataChannelSampleTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataChannelSampleTime>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		&NewStructOps,
		"TimedDataChannelSampleTime",
		sizeof(FTimedDataChannelSampleTime),
		alignof(FTimedDataChannelSampleTime),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData;
class UScriptStruct* FTimedDataInputEvaluationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData, (UObject*)Z_Construct_UPackage__Script_TimeManagement(), TEXT("TimedDataInputEvaluationData"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.OuterSingleton;
}
template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<FTimedDataInputEvaluationData>()
{
	return FTimedDataInputEvaluationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNewestSampleSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToNewestSampleSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToOldestSampleSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToOldestSampleSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataInputEvaluationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Distance between evaluation time and newest sample in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "ToolTip", "Distance between evaluation time and newest sample in seconds" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds = { "DistanceToNewestSampleSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataInputEvaluationData, DistanceToNewestSampleSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Distance between evaluation time and newest sample in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "ToolTip", "Distance between evaluation time and newest sample in seconds" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds = { "DistanceToOldestSampleSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataInputEvaluationData, DistanceToOldestSampleSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		&NewStructOps,
		"TimedDataInputEvaluationData",
		sizeof(FTimedDataInputEvaluationData),
		alignof(FTimedDataInputEvaluationData),
		Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::EnumInfo[] = {
		{ ETimedDataInputEvaluationType_StaticEnum, TEXT("ETimedDataInputEvaluationType"), &Z_Registration_Info_UEnum_ETimedDataInputEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3412469861U) },
		{ ETimedDataInputState_StaticEnum, TEXT("ETimedDataInputState"), &Z_Registration_Info_UEnum_ETimedDataInputState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4186540132U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::ScriptStructInfo[] = {
		{ FTimedDataChannelSampleTime::StaticStruct, Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::NewStructOps, TEXT("TimedDataChannelSampleTime"), &Z_Registration_Info_UScriptStruct_TimedDataChannelSampleTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataChannelSampleTime), 787291596U) },
		{ FTimedDataInputEvaluationData::StaticStruct, Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewStructOps, TEXT("TimedDataInputEvaluationData"), &Z_Registration_Info_UScriptStruct_TimedDataInputEvaluationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataInputEvaluationData), 1841397576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_1790210613(TEXT("/Script/TimeManagement"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_ITimedDataInput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
