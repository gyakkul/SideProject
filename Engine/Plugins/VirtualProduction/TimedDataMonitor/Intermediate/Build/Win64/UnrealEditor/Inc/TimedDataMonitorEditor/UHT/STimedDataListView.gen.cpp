// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STimedDataListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTimedDataListView() {}
// Cross Module References
	TIMEDDATAMONITOREDITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType();
	UPackage* Z_Construct_UPackage__Script_TimedDataMonitorEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType;
	static UEnum* ETimedDataInputEvaluationOffsetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitorEditor(), TEXT("ETimedDataInputEvaluationOffsetType"));
		}
		return Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.OuterSingleton;
	}
	template<> TIMEDDATAMONITOREDITOR_API UEnum* StaticEnum<ETimedDataInputEvaluationOffsetType>()
	{
		return ETimedDataInputEvaluationOffsetType_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enumerators[] = {
		{ "ETimedDataInputEvaluationOffsetType::Seconds", (int64)ETimedDataInputEvaluationOffsetType::Seconds },
		{ "ETimedDataInputEvaluationOffsetType::Frames", (int64)ETimedDataInputEvaluationOffsetType::Frames },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enum_MetaDataParams[] = {
		{ "Frames.Comment", "/** The input offset is specified in frames. */" },
		{ "Frames.DisplayName", "f" },
		{ "Frames.Name", "ETimedDataInputEvaluationOffsetType::Frames" },
		{ "Frames.ToolTip", "The input offset is specified in frames." },
		{ "ModuleRelativePath", "Private/STimedDataListView.h" },
		{ "Seconds.Comment", "/** The input offset is specified in seconds. */" },
		{ "Seconds.DisplayName", "s" },
		{ "Seconds.Name", "ETimedDataInputEvaluationOffsetType::Seconds" },
		{ "Seconds.ToolTip", "The input offset is specified in seconds." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitorEditor,
		nullptr,
		"ETimedDataInputEvaluationOffsetType",
		"ETimedDataInputEvaluationOffsetType",
		Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.InnerSingleton, Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataInputEvaluationOffsetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h_Statics::EnumInfo[] = {
		{ ETimedDataInputEvaluationOffsetType_StaticEnum, TEXT("ETimedDataInputEvaluationOffsetType"), &Z_Registration_Info_UEnum_ETimedDataInputEvaluationOffsetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3148929903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h_3717601564(TEXT("/Script/TimedDataMonitorEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
