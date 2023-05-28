// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimedDataMonitorEditorSettings.h"
#include "TimedDataMonitorCalibration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedDataMonitorEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters();
	TIMEDDATAMONITOREDITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorEditorSettings();
	TIMEDDATAMONITOREDITOR_API UClass* Z_Construct_UClass_UTimedDataMonitorEditorSettings_NoRegister();
	TIMEDDATAMONITOREDITOR_API UEnum* Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType();
	UPackage* Z_Construct_UPackage__Script_TimedDataMonitorEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType;
	static UEnum* ETimedDataMonitorEditorCalibrationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitorEditor(), TEXT("ETimedDataMonitorEditorCalibrationType"));
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.OuterSingleton;
	}
	template<> TIMEDDATAMONITOREDITOR_API UEnum* StaticEnum<ETimedDataMonitorEditorCalibrationType>()
	{
		return ETimedDataMonitorEditorCalibrationType_StaticEnum();
	}
	struct Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enumerators[] = {
		{ "ETimedDataMonitorEditorCalibrationType::CalibrateWithTimecode", (int64)ETimedDataMonitorEditorCalibrationType::CalibrateWithTimecode },
		{ "ETimedDataMonitorEditorCalibrationType::TimeCorrection", (int64)ETimedDataMonitorEditorCalibrationType::TimeCorrection },
		{ "ETimedDataMonitorEditorCalibrationType::Max", (int64)ETimedDataMonitorEditorCalibrationType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enum_MetaDataParams[] = {
		{ "CalibrateWithTimecode.Name", "ETimedDataMonitorEditorCalibrationType::CalibrateWithTimecode" },
		{ "Max.Name", "ETimedDataMonitorEditorCalibrationType::Max" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "TimeCorrection.Name", "ETimedDataMonitorEditorCalibrationType::TimeCorrection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimedDataMonitorEditor,
		nullptr,
		"ETimedDataMonitorEditorCalibrationType",
		"ETimedDataMonitorEditorCalibrationType",
		Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType()
	{
		if (!Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.InnerSingleton, Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType.InnerSingleton;
	}
	void UTimedDataMonitorEditorSettings::StaticRegisterNativesUTimedDataMonitorEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimedDataMonitorEditorSettings);
	UClass* Z_Construct_UClass_UTimedDataMonitorEditorSettings_NoRegister()
	{
		return UTimedDataMonitorEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibrationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeCorrectionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeCorrectionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFrameTimesInBufferVisualization_MetaData[];
#endif
		static void NewProp_bDrawFrameTimesInBufferVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFrameTimesInBufferVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAccurateFrameTimesInBufferVisualization_MetaData[];
#endif
		static void NewProp_bUseAccurateFrameTimesInBufferVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAccurateFrameTimesInBufferVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideNumberOfStandardDeviationToShow_MetaData[];
#endif
		static void NewProp_bOverrideNumberOfStandardDeviationToShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideNumberOfStandardDeviationToShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNumberOfStandardDeviationToShow_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverrideNumberOfStandardDeviationToShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTimeWarnThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FrameTimeWarnThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFrameTimePercent_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TargetFrameTimePercent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LastCalibrationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCalibrationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastCalibrationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetBufferStatEnabled_MetaData[];
#endif
		static void NewProp_bResetBufferStatEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetBufferStatEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearMessageEnabled_MetaData[];
#endif
		static void NewProp_bClearMessageEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearMessageEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetEvaluationTimeEnabled_MetaData[];
#endif
		static void NewProp_bResetEvaluationTimeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetEvaluationTimeEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitorEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimedDataMonitorEditorSettings.h" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_CalibrationSettings_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Option to use when calibrating from the UI. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "Option to use when calibrating from the UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_CalibrationSettings = { "CalibrationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, CalibrationSettings), Z_Construct_UScriptStruct_FTimedDataMonitorCalibrationParameters, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_CalibrationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_CalibrationSettings_MetaData)) }; // 3900017550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TimeCorrectionSettings_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Option to use when calibrating from the UI. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "Option to use when calibrating from the UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TimeCorrectionSettings = { "TimeCorrectionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, TimeCorrectionSettings), Z_Construct_UScriptStruct_FTimedDataMonitorTimeCorrectionParameters, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TimeCorrectionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TimeCorrectionSettings_MetaData)) }; // 2301313525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** At which speed we should update the Timed Data Monitor UI. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "At which speed we should update the Timed Data Monitor UI." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Whether or not to draw vertical bars delineating each frame in the buffer of a channel */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "Whether or not to draw vertical bars delineating each frame in the buffer of a channel" },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bDrawFrameTimesInBufferVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization = { "bDrawFrameTimesInBufferVisualization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** If true, accurate world times will be used to draw frame times. If false, a constant frame interval is used */" },
		{ "EditCondition", "bDrawFrameTimesInBufferVisualization" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "If true, accurate world times will be used to draw frame times. If false, a constant frame interval is used" },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bUseAccurateFrameTimesInBufferVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization = { "bUseAccurateFrameTimesInBufferVisualization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow_MetaData[] = {
		{ "Category", "UI" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bOverrideNumberOfStandardDeviationToShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow = { "bOverrideNumberOfStandardDeviationToShow", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_OverrideNumberOfStandardDeviationToShow_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When displaying the buffer widget, how many STD should we show.\n\x09 * By default, it will show the value used for Calibration or Time Correction.\n\x09 */" },
		{ "EditCondition", "bOverrideNumberOfStandardDeviationToShow" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "When displaying the buffer widget, how many STD should we show.\nBy default, it will show the value used for Calibration or Time Correction." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_OverrideNumberOfStandardDeviationToShow = { "OverrideNumberOfStandardDeviationToShow", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, OverrideNumberOfStandardDeviationToShow), METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_OverrideNumberOfStandardDeviationToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_OverrideNumberOfStandardDeviationToShow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_FrameTimeWarnThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The threshold at which to display the frame time as orange.\n\x09 */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "The threshold at which to display the frame time as orange." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_FrameTimeWarnThreshold = { "FrameTimeWarnThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, FrameTimeWarnThreshold), METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_FrameTimeWarnThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_FrameTimeWarnThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TargetFrameTimePercent_MetaData[] = {
		{ "Category", "UI" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The percent at which to display the target frame time in the frame time indicator. \n\x09 */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "The percent at which to display the target frame time in the frame time indicator." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TargetFrameTimePercent = { "TargetFrameTimePercent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, TargetFrameTimePercent), METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TargetFrameTimePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TargetFrameTimePercent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType_MetaData[] = {
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType = { "LastCalibrationType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimedDataMonitorEditorSettings, LastCalibrationType), Z_Construct_UEnum_TimedDataMonitorEditor_ETimedDataMonitorEditorCalibrationType, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType_MetaData)) }; // 1530020387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled_MetaData[] = {
		{ "Category", "UI|Reset" },
		{ "Comment", "/** The Reset button will reset the buffer errors count. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "The Reset button will reset the buffer errors count." },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bResetBufferStatEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled = { "bResetBufferStatEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled_MetaData[] = {
		{ "Category", "UI|Reset" },
		{ "Comment", "/** The Reset button will clear the messages list. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "The Reset button will clear the messages list." },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bClearMessageEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled = { "bClearMessageEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled_MetaData[] = {
		{ "Category", "UI|Reset" },
		{ "Comment", "/** The Reset button will set the evaluation time of all input to 0. */" },
		{ "ModuleRelativePath", "Private/TimedDataMonitorEditorSettings.h" },
		{ "ToolTip", "The Reset button will set the evaluation time of all input to 0." },
	};
#endif
	void Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled_SetBit(void* Obj)
	{
		((UTimedDataMonitorEditorSettings*)Obj)->bResetEvaluationTimeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled = { "bResetEvaluationTimeEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimedDataMonitorEditorSettings), &Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_CalibrationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TimeCorrectionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_RefreshRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bDrawFrameTimesInBufferVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bUseAccurateFrameTimesInBufferVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bOverrideNumberOfStandardDeviationToShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_OverrideNumberOfStandardDeviationToShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_FrameTimeWarnThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_TargetFrameTimePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_LastCalibrationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetBufferStatEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bClearMessageEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::NewProp_bResetEvaluationTimeEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimedDataMonitorEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::ClassParams = {
		&UTimedDataMonitorEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimedDataMonitorEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTimedDataMonitorEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimedDataMonitorEditorSettings.OuterSingleton, Z_Construct_UClass_UTimedDataMonitorEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimedDataMonitorEditorSettings.OuterSingleton;
	}
	template<> TIMEDDATAMONITOREDITOR_API UClass* StaticClass<UTimedDataMonitorEditorSettings>()
	{
		return UTimedDataMonitorEditorSettings::StaticClass();
	}
	UTimedDataMonitorEditorSettings::UTimedDataMonitorEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimedDataMonitorEditorSettings);
	UTimedDataMonitorEditorSettings::~UTimedDataMonitorEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::EnumInfo[] = {
		{ ETimedDataMonitorEditorCalibrationType_StaticEnum, TEXT("ETimedDataMonitorEditorCalibrationType"), &Z_Registration_Info_UEnum_ETimedDataMonitorEditorCalibrationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1530020387U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimedDataMonitorEditorSettings, UTimedDataMonitorEditorSettings::StaticClass, TEXT("UTimedDataMonitorEditorSettings"), &Z_Registration_Info_UClass_UTimedDataMonitorEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimedDataMonitorEditorSettings), 1958125335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_503791813(TEXT("/Script/TimedDataMonitorEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_TimedDataMonitorEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
