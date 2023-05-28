// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkSourceSettings.h"
#include "LiveLinkTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister();
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkSourceMode;
	static UEnum* ELiveLinkSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkSourceMode"));
		}
		return Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkSourceMode>()
	{
		return ELiveLinkSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enumerators[] = {
		{ "ELiveLinkSourceMode::Latest", (int64)ELiveLinkSourceMode::Latest },
		{ "ELiveLinkSourceMode::EngineTime", (int64)ELiveLinkSourceMode::EngineTime },
		{ "ELiveLinkSourceMode::Timecode", (int64)ELiveLinkSourceMode::Timecode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "EngineTime.Comment", "//The source will use the engine's time to evaluate its subjects.\n//This mode is most useful when smooth animation is desired.\n" },
		{ "EngineTime.Name", "ELiveLinkSourceMode::EngineTime" },
		{ "EngineTime.ToolTip", "The source will use the engine's time to evaluate its subjects.\nThis mode is most useful when smooth animation is desired." },
		{ "Latest.Comment", "//The source will the latest frame available to evaluate its subjects.\n//This mode will not attempt any type of interpolation or time synchronization.\n" },
		{ "Latest.Name", "ELiveLinkSourceMode::Latest" },
		{ "Latest.ToolTip", "The source will the latest frame available to evaluate its subjects.\nThis mode will not attempt any type of interpolation or time synchronization." },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "Timecode.Comment", "//The source will use the engine's timecode to evaluate its subjects.\n//This mode is most useful when sources need to be synchronized with \n//multiple other external inputs\n//(such as video or other time synchronized sources).\n//Should not be used when the engine isn't setup with a Timecode provider.\n" },
		{ "Timecode.Name", "ELiveLinkSourceMode::Timecode" },
		{ "Timecode.ToolTip", "The source will use the engine's timecode to evaluate its subjects.\nThis mode is most useful when sources need to be synchronized with\nmultiple other external inputs\n(such as video or other time synchronized sources).\nShould not be used when the engine isn't setup with a Timecode provider." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		"ELiveLinkSourceMode",
		"ELiveLinkSourceMode",
		Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton, Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings;
class UScriptStruct* FLiveLinkSourceBufferManagementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceBufferManagementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceBufferManagementSettings>()
{
	return FLiveLinkSourceBufferManagementSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidEngineTimeEnabled_MetaData[];
#endif
		static void NewProp_bValidEngineTimeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidEngineTimeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidEngineTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValidEngineTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTimeClockOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EngineTimeClockOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothEngineTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SmoothEngineTimeOffset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeFrameRate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSubFrame_MetaData[];
#endif
		static void NewProp_bGenerateSubFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSubFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetectedFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeSmoothLatest_MetaData[];
#endif
		static void NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeSmoothLatest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTimecodeFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTimecodeFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidTimecodeFrameEnabled_MetaData[];
#endif
		static void NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidTimecodeFrameEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidTimecodeFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValidTimecodeFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimecodeFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeClockOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimecodeClockOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LatestOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFrameToBuffered_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfFrameToBuffered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepAtLeastOneFrame_MetaData[];
#endif
		static void NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepAtLeastOneFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//~ A customizer will add the properties manually. You'll need to update LiveLinkSourceSettingsDetailCustomization if you add a property here.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceBufferManagementSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enabled the ValidEngineTime setting. */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Enabled the ValidEngineTime setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidEngineTimeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled = { "bValidEngineTimeEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.500000" },
		{ "Comment", "/** If the frame is older than ValidTime, remove it from the buffer list (in seconds). */" },
		{ "EditCondition", "bValidEngineTimeEnabled" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame is older than ValidTime, remove it from the buffer list (in seconds)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime = { "ValidEngineTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidEngineTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with time: how far back from current time should we read the buffer (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with time: how far back from current time should we read the buffer (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset = { "EngineTimeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source clock and engine clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source clock and engine clock (in seconds)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset = { "EngineTimeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, EngineTimeClockOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated offset to achieve a smooth evaluation time (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated offset to achieve a smooth evaluation time (in seconds)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset = { "SmoothEngineTimeOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, SmoothEngineTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData[] = {
		{ "Comment", "/** DEPRECATED: TimecodeFrameRate is now read from each individual subject from FQualifiedFrameTime. \n\x09 * It is expected that all subjects under a source have the same and it will be readable in DetectedFrameRate variable\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "DEPRECATED: TimecodeFrameRate is now read from each individual subject from FQualifiedFrameTime.\nIt is expected that all subjects under a source have the same and it will be readable in DetectedFrameRate variable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate = { "TimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameRate_DEPRECATED), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bGenerateSubFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame = { "bGenerateSubFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** FrameRate taken from one of the subjects. It's expected that all subjects have the same FrameRate */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "FrameRate taken from one of the subjects. It's expected that all subjects have the same FrameRate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate = { "DetectedFrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest \n\x09 * This means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\n\x09 * will be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\n\x09 * your subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode, align source timecode using a continuous clock offset to do a smooth latest\nThis means that even if engine Timecode and source Timecode are not aligned, the offset between both clocks\nwill be tracked to keep them aligned. With an additionnal offset, 1.5 is a good number, you can evaluate\nyour subject using the latest frame by keeping just enough margin to have a smooth playback and avoid starving." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bUseTimecodeSmoothLatest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest = { "bUseTimecodeSmoothLatest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * What is the source frame rate.\n\x09 * When the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n\x09 * @note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n\x09 * @note The generated sub frame numbers will not be saved by Sequencer.\n\x09 */" },
		{ "EditCondition", "bGenerateSubFrame" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "What is the source frame rate.\nWhen the refresh rate of the source is bigger than the timecode frame rate, LiveLink will try to generate sub frame numbers.\n@note The source should generate the sub frame numbers. Use this setting when the source is not able to do so.\n@note The generated sub frame numbers will not be saved by Sequencer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate = { "SourceTimecodeFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bValidTimecodeFrameEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled = { "bValidTimecodeFrameEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate). */" },
		{ "EditCondition", "bValidTimecodeFrameEnabled" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "If the frame timecode is older than ValidTimecodeFrame, remove it from the buffer list (in TimecodeFrameRate)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame = { "ValidTimecodeFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, ValidTimecodeFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate). */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with timecode: how far back from current timecode should we read the buffer (in TimecodeFrameRate)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset = { "TimecodeFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeFrameOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds) */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Continuously updated clock offset estimator between source timecode clock and engine timecode provider clock (in seconds)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset = { "TimecodeClockOffset", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, TimecodeClockOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating with latest: how far back from latest frame should we read the buffer */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating with latest: how far back from latest frame should we read the buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset = { "LatestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, LatestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of frame to keep in memory. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Maximum number of frame to keep in memory." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered = { "MaxNumberOfFrameToBuffered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceBufferManagementSettings, MaxNumberOfFrameToBuffered), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When cleaning the buffer keep at least one frame, even if the frame doesn't matches the other options." },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit(void* Obj)
	{
		((FLiveLinkSourceBufferManagementSettings*)Obj)->bKeepAtLeastOneFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame = { "bKeepAtLeastOneFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSourceBufferManagementSettings), &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidEngineTimeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidEngineTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_EngineTimeClockOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SmoothEngineTimeOffset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameRate,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bGenerateSubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_DetectedFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bUseTimecodeSmoothLatest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_SourceTimecodeFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bValidTimecodeFrameEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_ValidTimecodeFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_TimecodeClockOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_LatestOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_MaxNumberOfFrameToBuffered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewProp_bKeepAtLeastOneFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceBufferManagementSettings",
		sizeof(FLiveLinkSourceBufferManagementSettings),
		alignof(FLiveLinkSourceBufferManagementSettings),
		Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo;
class UScriptStruct* FLiveLinkSourceDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSourceDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSourceDebugInfo>()
{
	return FLiveLinkSourceDebugInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SnapshotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBufferAtSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBufferAtSnapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSourceDebugInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName_MetaData)) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex = { "SnapshotIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, SnapshotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot = { "NumberOfBufferAtSnapshot", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSourceDebugInfo, NumberOfBufferAtSnapshot), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_SnapshotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewProp_NumberOfBufferAtSnapshot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSourceDebugInfo",
		sizeof(FLiveLinkSourceDebugInfo),
		alignof(FLiveLinkSourceDebugInfo),
		Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo.InnerSingleton;
	}
	void ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BufferSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Factory;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDebugInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDebugInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDebugInfos;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for live link source settings (can be replaced by sources themselves) */" },
		{ "IncludePath", "LiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Base class for live link source settings (can be replaced by sources themselves)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The the subject how to create the frame snapshot.\n\x09 * @note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime.\n\x09 */" },
		{ "DisplayName", "Evaluation Mode" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The the subject how to create the frame snapshot.\n@note A client may evaluate manually the subject in a different mode by using EvaluateFrameAtWorldTime or EvaluateFrameAtSceneTime." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, Mode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_MetaData)) }; // 943220920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the frame buffers are managed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "How the frame buffers are managed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings = { "BufferSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, BufferSettings), Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings_MetaData)) }; // 2614717628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Connection information that is needed by the factory to recreate the source from a preset. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Connection information that is needed by the factory to recreate the source from a preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, ConnectionString), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Factory used to create the source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "Factory used to create the source." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0014040000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, Factory), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo, METADATA_PARAMS(nullptr, 0) }; // 748056309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos = { "SourceDebugInfos", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSourceSettings, SourceDebugInfos_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_MetaData)) }; // 748056309
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_BufferSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_ConnectionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_Factory,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_SourceDebugInfos,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams = {
		&ULiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSourceSettings>()
	{
		return ULiveLinkSourceSettings::StaticClass();
	}
	ULiveLinkSourceSettings::ULiveLinkSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSourceSettings);
	ULiveLinkSourceSettings::~ULiveLinkSourceSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkSourceSettings)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings;
class UScriptStruct* FLiveLinkTimeSynchronizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeSynchronizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeSynchronizationSettings>()
{
	return FLiveLinkTimeSynchronizationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeSynchronizationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The frame rate of the source.\n\x09 * This should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\n\x09 * The source should supply this whenever possible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "The frame rate of the source.\nThis should be the frame rate the source is \"stamped\" at, not necessarily the frame rate the source is sending.\nThe source should supply this whenever possible." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When evaluating: how far back from current timecode should we read the buffer (in frame number) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When evaluating: how far back from current timecode should we read the buffer (in frame number)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTimeSynchronizationSettings, FrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewProp_FrameOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTimeSynchronizationSettings",
		sizeof(FLiveLinkTimeSynchronizationSettings),
		alignof(FLiveLinkTimeSynchronizationSettings),
		Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings;
class UScriptStruct* FLiveLinkInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkInterpolationSettings>()
{
	return FLiveLinkInterpolationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInterpolationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((FLiveLinkInterpolationSettings*)Obj)->bUseInterpolation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkInterpolationSettings), &Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When interpolating: how far back from current time should we read the buffer (in seconds) */" },
		{ "ModuleRelativePath", "Public/LiveLinkSourceSettings.h" },
		{ "ToolTip", "When interpolating: how far back from current time should we read the buffer (in seconds)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset = { "InterpolationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInterpolationSettings, InterpolationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_InterpolationOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkInterpolationSettings",
		sizeof(FLiveLinkInterpolationSettings),
		alignof(FLiveLinkInterpolationSettings),
		Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::EnumInfo[] = {
		{ ELiveLinkSourceMode_StaticEnum, TEXT("ELiveLinkSourceMode"), &Z_Registration_Info_UEnum_ELiveLinkSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 943220920U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSourceBufferManagementSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewStructOps, TEXT("LiveLinkSourceBufferManagementSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceBufferManagementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceBufferManagementSettings), 2614717628U) },
		{ FLiveLinkSourceDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewStructOps, TEXT("LiveLinkSourceDebugInfo"), &Z_Registration_Info_UScriptStruct_LiveLinkSourceDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSourceDebugInfo), 748056309U) },
		{ FLiveLinkTimeSynchronizationSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps, TEXT("LiveLinkTimeSynchronizationSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkTimeSynchronizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTimeSynchronizationSettings), 1853462835U) },
		{ FLiveLinkInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps, TEXT("LiveLinkInterpolationSettings"), &Z_Registration_Info_UScriptStruct_LiveLinkInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkInterpolationSettings), 2552396168U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSourceSettings, ULiveLinkSourceSettings::StaticClass, TEXT("ULiveLinkSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSourceSettings), 2920379547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_1484446645(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
