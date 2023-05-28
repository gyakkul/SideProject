// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageMonitoringSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMonitoringSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STAGEMONITORCOMMON_API UClass* Z_Construct_UClass_UStageMonitoringSettings();
	STAGEMONITORCOMMON_API UClass* Z_Construct_UClass_UStageMonitoringSettings_NoRegister();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageDataExportSettings();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageDataProviderSettings();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageFramePerformanceSettings();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageHitchDetectionSettings();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageMessageTypeWrapper();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorSettings();
	UPackage* Z_Construct_UPackage__Script_StageMonitorCommon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper;
class UScriptStruct* FStageMessageTypeWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageMessageTypeWrapper, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageMessageTypeWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageMessageTypeWrapper>()
{
	return FStageMessageTypeWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper structure holding a message type static struct.\n * Used with a customization to generate a filtered list\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Wrapper structure holding a message type static struct.\nUsed with a customization to generate a filtered list" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageMessageTypeWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewProp_MessageType_MetaData[] = {
		{ "Category", "Stage Message" },
		{ "Comment", "/** Name of StaticStruct message type */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Name of StaticStruct message type" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageMessageTypeWrapper, MessageType), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewProp_MessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewProp_MessageType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewProp_MessageType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageMessageTypeWrapper",
		sizeof(FStageMessageTypeWrapper),
		alignof(FStageMessageTypeWrapper),
		Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageMessageTypeWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageDataExportSettings;
class UScriptStruct* FStageDataExportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageDataExportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageDataExportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageDataExportSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageDataExportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StageDataExportSettings.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageDataExportSettings>()
{
	return FStageDataExportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageDataExportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOnlyLastPeriodMessage_MetaData[];
#endif
		static void NewProp_bKeepOnlyLastPeriodMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOnlyLastPeriodMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedMessageTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedMessageTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedMessageTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings associated to file exporter\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings associated to file exporter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageDataExportSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** \n\x09 * Save only the last instance of periodic message types\n\x09 * True by default to reduce file size\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Save only the last instance of periodic message types\nTrue by default to reduce file size" },
	};
#endif
	void Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage_SetBit(void* Obj)
	{
		((FStageDataExportSettings*)Obj)->bKeepOnlyLastPeriodMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage = { "bKeepOnlyLastPeriodMessage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStageDataExportSettings), &Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes_Inner = { "ExcludedMessageTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStageMessageTypeWrapper, METADATA_PARAMS(nullptr, 0) }; // 3811331462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes_MetaData[] = {
		{ "Category", "Export" },
		{ "Comment", "/** Message types to exclude from session when exporting */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Message types to exclude from session when exporting" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes = { "ExcludedMessageTypes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataExportSettings, ExcludedMessageTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes_MetaData)) }; // 3811331462
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_bKeepOnlyLastPeriodMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewProp_ExcludedMessageTypes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageDataExportSettings",
		sizeof(FStageDataExportSettings),
		alignof(FStageDataExportSettings),
		Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageDataExportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StageDataExportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageDataExportSettings.InnerSingleton, Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageDataExportSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings;
class UScriptStruct* FStageFramePerformanceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageFramePerformanceSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageFramePerformanceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageFramePerformanceSettings>()
{
	return FStageFramePerformanceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings related to FramePerformance messages\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings related to FramePerformance messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageFramePerformanceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewProp_UpdateInterval_MetaData[] = {
		{ "Category", "Frame Performance" },
		{ "Comment", "/** Target FPS we're aiming for. */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Target FPS we're aiming for." },
		{ "Unit", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewProp_UpdateInterval = { "UpdateInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageFramePerformanceSettings, UpdateInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewProp_UpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewProp_UpdateInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewProp_UpdateInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageFramePerformanceSettings",
		sizeof(FStageFramePerformanceSettings),
		alignof(FStageFramePerformanceSettings),
		Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageFramePerformanceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.InnerSingleton, Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings;
class UScriptStruct* FStageHitchDetectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageHitchDetectionSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageHitchDetectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageHitchDetectionSettings>()
{
	return FStageHitchDetectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHitchDetection_MetaData[];
#endif
		static void NewProp_bEnableHitchDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHitchDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings related to HitchDetection messages\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings related to HitchDetection messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageHitchDetectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection_MetaData[] = {
		{ "Category", "Hitch Detection" },
		{ "Comment", "/** \n\x09 * Whether or not hitch detection should be enabled\n\x09 * @note: This uses stat data. To avoid having on-screen message\n\x09 * GAreScreenMessagesEnabled = false or -ExecCmds=\"DISABLEALLSCREENMESSAGES\" on command line\n\x09 * will turn them off.\n\x09 * For more accurate hitch detection, use genlock which\n\x09 * will have better missed frames information\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Whether or not hitch detection should be enabled\n@note: This uses stat data. To avoid having on-screen message\nGAreScreenMessagesEnabled = false or -ExecCmds=\"DISABLEALLSCREENMESSAGES\" on command line\nwill turn them off.\nFor more accurate hitch detection, use genlock which\nwill have better missed frames information" },
	};
#endif
	void Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection_SetBit(void* Obj)
	{
		((FStageHitchDetectionSettings*)Obj)->bEnableHitchDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection = { "bEnableHitchDetection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStageHitchDetectionSettings), &Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_MinimumFrameRate_MetaData[] = {
		{ "Category", "Hitch Detection" },
		{ "Comment", "/** Target FPS we're aiming for.  */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Target FPS we're aiming for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_MinimumFrameRate = { "MinimumFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageHitchDetectionSettings, MinimumFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_MinimumFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_MinimumFrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_bEnableHitchDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewProp_MinimumFrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageHitchDetectionSettings",
		sizeof(FStageHitchDetectionSettings),
		alignof(FStageHitchDetectionSettings),
		Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageHitchDetectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageDataProviderSettings;
class UScriptStruct* FStageDataProviderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageDataProviderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageDataProviderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageDataProviderSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageDataProviderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StageDataProviderSettings.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageDataProviderSettings>()
{
	return FStageDataProviderSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRoleFiltering_MetaData[];
#endif
		static void NewProp_bUseRoleFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRoleFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedRoles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedRoles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTypeRoleExclusion_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTypeRoleExclusion_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTypeRoleExclusion_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageTypeRoleExclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramePerformanceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FramePerformanceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitchDetectionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitchDetectionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings associated to DataProviders\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings associated to DataProviders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageDataProviderSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, DataProvider will only start if machine has a role contained in SupportedRoles */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "If true, DataProvider will only start if machine has a role contained in SupportedRoles" },
	};
#endif
	void Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering_SetBit(void* Obj)
	{
		((FStageDataProviderSettings*)Obj)->bUseRoleFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering = { "bUseRoleFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStageDataProviderSettings), &Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_SupportedRoles_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If checked, VP Role of this instance must be part of these roles to have the monitor operational */" },
		{ "EditCondition", "bUseRoleFiltering" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "If checked, VP Role of this instance must be part of these roles to have the monitor operational" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_SupportedRoles = { "SupportedRoles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataProviderSettings, SupportedRoles), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_SupportedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_SupportedRoles_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_ValueProp = { "MessageTypeRoleExclusion", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_Key_KeyProp = { "MessageTypeRoleExclusion_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStageMessageTypeWrapper, METADATA_PARAMS(nullptr, 0) }; // 3811331462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion = { "MessageTypeRoleExclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataProviderSettings, MessageTypeRoleExclusion), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_MetaData)) }; // 3811331462 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_FramePerformanceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Settings about Frame Performance messaging */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings about Frame Performance messaging" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_FramePerformanceSettings = { "FramePerformanceSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataProviderSettings, FramePerformanceSettings), Z_Construct_UScriptStruct_FStageFramePerformanceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_FramePerformanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_FramePerformanceSettings_MetaData)) }; // 275246719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_HitchDetectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Settings about Hitch detection*/" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings about Hitch detection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_HitchDetectionSettings = { "HitchDetectionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageDataProviderSettings, HitchDetectionSettings), Z_Construct_UScriptStruct_FStageHitchDetectionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_HitchDetectionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_HitchDetectionSettings_MetaData)) }; // 4221554160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_bUseRoleFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_SupportedRoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_MessageTypeRoleExclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_FramePerformanceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewProp_HitchDetectionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageDataProviderSettings",
		sizeof(FStageDataProviderSettings),
		alignof(FStageDataProviderSettings),
		Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageDataProviderSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StageDataProviderSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageDataProviderSettings.InnerSingleton, Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageDataProviderSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageMonitorSettings;
class UScriptStruct* FStageMonitorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageMonitorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageMonitorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageMonitorSettings, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("StageMonitorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StageMonitorSettings.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FStageMonitorSettings>()
{
	return FStageMonitorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageMonitorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRoleFiltering_MetaData[];
#endif
		static void NewProp_bUseRoleFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRoleFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedRoles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedRoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryMessageInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiscoveryMessageInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for StageMonitor\n */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings for StageMonitor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageMonitorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * If true, Monitor will only autostart if machine has a role contained in SupportedRoles \n\x09 * Once in editor, you can always start a monitor manually independently of the roles.\n\x09 */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "If true, Monitor will only autostart if machine has a role contained in SupportedRoles\nOnce in editor, you can always start a monitor manually independently of the roles." },
	};
#endif
	void Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering_SetBit(void* Obj)
	{
		((FStageMonitorSettings*)Obj)->bUseRoleFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering = { "bUseRoleFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStageMonitorSettings), &Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_SupportedRoles_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If checked, VP Role of this instance must be part of these roles to have the monitor operational */" },
		{ "EditCondition", "bUseRoleFiltering" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "If checked, VP Role of this instance must be part of these roles to have the monitor operational" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_SupportedRoles = { "SupportedRoles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageMonitorSettings, SupportedRoles), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_SupportedRoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_SupportedRoles_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_DiscoveryMessageInterval_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interval between each discovery signal sent by Monitors */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Interval between each discovery signal sent by Monitors" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_DiscoveryMessageInterval = { "DiscoveryMessageInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStageMonitorSettings, DiscoveryMessageInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_DiscoveryMessageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_DiscoveryMessageInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Whether we should start monitoring on launch.\n\x09 * @note It may be overriden via the command line, \"-StageMonitorAutoStart=1 and via command line in editor\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Whether we should start monitoring on launch.\n@note It may be overriden via the command line, \"-StageMonitorAutoStart=1 and via command line in editor\"" },
	};
#endif
	void Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((FStageMonitorSettings*)Obj)->bAutoStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStageMonitorSettings), &Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bUseRoleFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_SupportedRoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_DiscoveryMessageInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewProp_bAutoStart,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		&NewStructOps,
		"StageMonitorSettings",
		sizeof(FStageMonitorSettings),
		alignof(FStageMonitorSettings),
		Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageMonitorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StageMonitorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageMonitorSettings.InnerSingleton, Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageMonitorSettings.InnerSingleton;
	}
	void UStageMonitoringSettings::StaticRegisterNativesUStageMonitoringSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStageMonitoringSettings);
	UClass* Z_Construct_UClass_UStageMonitoringSettings_NoRegister()
	{
		return UStageMonitoringSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStageMonitoringSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSessionId_MetaData[];
#endif
		static void NewProp_bUseSessionId_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageSessionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StageSessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonitorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProviderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageMonitoringSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the StageMonitoring plugin modules. \n * Data Provider, Monitor and shared settings are contained here to centralize access through project settings\n */" },
		{ "IncludePath", "StageMonitoringSettings.h" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings for the StageMonitoring plugin modules.\nData Provider, Monitor and shared settings are contained here to centralize access through project settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, Stage monitor will only listen to Stage Providers with same sessionId */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "If true, Stage monitor will only listen to Stage Providers with same sessionId" },
	};
#endif
	void Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId_SetBit(void* Obj)
	{
		((UStageMonitoringSettings*)Obj)->bUseSessionId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId = { "bUseSessionId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStageMonitoringSettings), &Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_StageSessionId_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The projects Stage SessionId to differentiate data sent over network.\n\x09 * @note It may be overriden via the command line, \"-StageSessionId=1\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "The projects Stage SessionId to differentiate data sent over network.\n@note It may be overriden via the command line, \"-StageSessionId=1\"" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_StageSessionId = { "StageSessionId", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageMonitoringSettings, StageSessionId), METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_StageSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_StageSessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_TimeoutInterval_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interval threshold between message reception before dropping out a provider or a monitor */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Interval threshold between message reception before dropping out a provider or a monitor" },
		{ "Unit", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_TimeoutInterval = { "TimeoutInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageMonitoringSettings, TimeoutInterval), METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_TimeoutInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_TimeoutInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_MonitorSettings_MetaData[] = {
		{ "Category", "Monitor Settings" },
		{ "Comment", "/** Settings for monitors */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings for monitors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_MonitorSettings = { "MonitorSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageMonitoringSettings, MonitorSettings), Z_Construct_UScriptStruct_FStageMonitorSettings, METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_MonitorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_MonitorSettings_MetaData)) }; // 3668822783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ProviderSettings_MetaData[] = {
		{ "Category", "Provider Settings" },
		{ "Comment", "/** Settings for Data Providers */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings for Data Providers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ProviderSettings = { "ProviderSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageMonitoringSettings, ProviderSettings), Z_Construct_UScriptStruct_FStageDataProviderSettings, METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ProviderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ProviderSettings_MetaData)) }; // 2335914315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ExportSettings_MetaData[] = {
		{ "Category", "Export Settings" },
		{ "Comment", "/** Settings for Data Providers */" },
		{ "ModuleRelativePath", "Public/StageMonitoringSettings.h" },
		{ "ToolTip", "Settings for Data Providers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ExportSettings = { "ExportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageMonitoringSettings, ExportSettings), Z_Construct_UScriptStruct_FStageDataExportSettings, METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ExportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ExportSettings_MetaData)) }; // 2301194784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageMonitoringSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_bUseSessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_StageSessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_TimeoutInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_MonitorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ProviderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageMonitoringSettings_Statics::NewProp_ExportSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageMonitoringSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageMonitoringSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStageMonitoringSettings_Statics::ClassParams = {
		&UStageMonitoringSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStageMonitoringSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStageMonitoringSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageMonitoringSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageMonitoringSettings()
	{
		if (!Z_Registration_Info_UClass_UStageMonitoringSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStageMonitoringSettings.OuterSingleton, Z_Construct_UClass_UStageMonitoringSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStageMonitoringSettings.OuterSingleton;
	}
	template<> STAGEMONITORCOMMON_API UClass* StaticClass<UStageMonitoringSettings>()
	{
		return UStageMonitoringSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageMonitoringSettings);
	UStageMonitoringSettings::~UStageMonitoringSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ScriptStructInfo[] = {
		{ FStageMessageTypeWrapper::StaticStruct, Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics::NewStructOps, TEXT("StageMessageTypeWrapper"), &Z_Registration_Info_UScriptStruct_StageMessageTypeWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageMessageTypeWrapper), 3811331462U) },
		{ FStageDataExportSettings::StaticStruct, Z_Construct_UScriptStruct_FStageDataExportSettings_Statics::NewStructOps, TEXT("StageDataExportSettings"), &Z_Registration_Info_UScriptStruct_StageDataExportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageDataExportSettings), 2301194784U) },
		{ FStageFramePerformanceSettings::StaticStruct, Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics::NewStructOps, TEXT("StageFramePerformanceSettings"), &Z_Registration_Info_UScriptStruct_StageFramePerformanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageFramePerformanceSettings), 275246719U) },
		{ FStageHitchDetectionSettings::StaticStruct, Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics::NewStructOps, TEXT("StageHitchDetectionSettings"), &Z_Registration_Info_UScriptStruct_StageHitchDetectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageHitchDetectionSettings), 4221554160U) },
		{ FStageDataProviderSettings::StaticStruct, Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics::NewStructOps, TEXT("StageDataProviderSettings"), &Z_Registration_Info_UScriptStruct_StageDataProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageDataProviderSettings), 2335914315U) },
		{ FStageMonitorSettings::StaticStruct, Z_Construct_UScriptStruct_FStageMonitorSettings_Statics::NewStructOps, TEXT("StageMonitorSettings"), &Z_Registration_Info_UScriptStruct_StageMonitorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageMonitorSettings), 3668822783U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStageMonitoringSettings, UStageMonitoringSettings::StaticClass, TEXT("UStageMonitoringSettings"), &Z_Registration_Info_UClass_UStageMonitoringSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStageMonitoringSettings), 1862016530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_3166858101(TEXT("/Script/StageMonitorCommon"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
