// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdjustSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdjustSettings() {}
// Cross Module References
	ADJUSTEDITOR_API UClass* Z_Construct_UClass_UAdjustSettings();
	ADJUSTEDITOR_API UClass* Z_Construct_UClass_UAdjustSettings_NoRegister();
	ADJUSTEDITOR_API UEnum* Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging();
	ADJUSTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAdjustEventMapping();
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase();
	UPackage* Z_Construct_UPackage__Script_AdjustEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidAdjustLogging;
	static UEnum* EAndroidAdjustLogging_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidAdjustLogging.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidAdjustLogging.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging, (UObject*)Z_Construct_UPackage__Script_AdjustEditor(), TEXT("EAndroidAdjustLogging"));
		}
		return Z_Registration_Info_UEnum_EAndroidAdjustLogging.OuterSingleton;
	}
	template<> ADJUSTEDITOR_API UEnum* StaticEnum<EAndroidAdjustLogging::Type>()
	{
		return EAndroidAdjustLogging_StaticEnum();
	}
	struct Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enumerators[] = {
		{ "EAndroidAdjustLogging::verbose", (int64)EAndroidAdjustLogging::verbose },
		{ "EAndroidAdjustLogging::debug", (int64)EAndroidAdjustLogging::debug },
		{ "EAndroidAdjustLogging::info", (int64)EAndroidAdjustLogging::info },
		{ "EAndroidAdjustLogging::warn", (int64)EAndroidAdjustLogging::warn },
		{ "EAndroidAdjustLogging::error", (int64)EAndroidAdjustLogging::error },
		{ "EAndroidAdjustLogging::assert", (int64)EAndroidAdjustLogging::assert },
		{ "EAndroidAdjustLogging::supress", (int64)EAndroidAdjustLogging::supress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enum_MetaDataParams[] = {
		{ "assert.Comment", "/** disable errors as well */" },
		{ "assert.DisplayName", "ASSERT" },
		{ "assert.Name", "EAndroidAdjustLogging::assert" },
		{ "assert.ToolTip", "disable errors as well" },
		{ "debug.Comment", "/** enable more logging */" },
		{ "debug.DisplayName", "DEBUG" },
		{ "debug.Name", "EAndroidAdjustLogging::debug" },
		{ "debug.ToolTip", "enable more logging" },
		{ "error.Comment", "/** disable warnings as well */" },
		{ "error.DisplayName", "ERROR" },
		{ "error.Name", "EAndroidAdjustLogging::error" },
		{ "error.ToolTip", "disable warnings as well" },
		{ "info.Comment", "/** the default */" },
		{ "info.DisplayName", "INFO" },
		{ "info.Name", "EAndroidAdjustLogging::info" },
		{ "info.ToolTip", "the default" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "supress.Comment", "/** disable all log output */" },
		{ "supress.DisplayName", "SUPRESS" },
		{ "supress.Name", "EAndroidAdjustLogging::supress" },
		{ "supress.ToolTip", "disable all log output" },
		{ "verbose.Comment", "/** enable all logging */" },
		{ "verbose.DisplayName", "VERBOSE" },
		{ "verbose.Name", "EAndroidAdjustLogging::verbose" },
		{ "verbose.ToolTip", "enable all logging" },
		{ "warn.Comment", "/** disable info logging */" },
		{ "warn.DisplayName", "WARN" },
		{ "warn.Name", "EAndroidAdjustLogging::warn" },
		{ "warn.ToolTip", "disable info logging" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AdjustEditor,
		nullptr,
		"EAndroidAdjustLogging",
		"EAndroidAdjustLogging::Type",
		Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging()
	{
		if (!Z_Registration_Info_UEnum_EAndroidAdjustLogging.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidAdjustLogging.InnerSingleton, Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidAdjustLogging.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdjustEventMapping;
class UScriptStruct* FAdjustEventMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdjustEventMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdjustEventMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdjustEventMapping, (UObject*)Z_Construct_UPackage__Script_AdjustEditor(), TEXT("AdjustEventMapping"));
	}
	return Z_Registration_Info_UScriptStruct_AdjustEventMapping.OuterSingleton;
}
template<> ADJUSTEDITOR_API UScriptStruct* StaticStruct<FAdjustEventMapping>()
{
	return FAdjustEventMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdjustEventMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the event name and corresponding token from Adjust dashboard.\n */" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Holds the event name and corresponding token from Adjust dashboard." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdjustEventMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AdjustEvents" },
		{ "Comment", "/** The event name (the one passed in to RecordEvent calls). */" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "The event name (the one passed in to RecordEvent calls)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdjustEventMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "AdjustEvents" },
		{ "Comment", "/** The token of the corresponding event, generated by the Adjust dashboard. */" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "The token of the corresponding event, generated by the Adjust dashboard." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdjustEventMapping, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdjustEditor,
		nullptr,
		&NewStructOps,
		"AdjustEventMapping",
		sizeof(FAdjustEventMapping),
		alignof(FAdjustEventMapping),
		Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdjustEventMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_AdjustEventMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdjustEventMapping.InnerSingleton, Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdjustEventMapping.InnerSingleton;
	}
	void UAdjustSettings::StaticRegisterNativesUAdjustSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdjustSettings);
	UClass* Z_Construct_UClass_UAdjustSettings_NoRegister()
	{
		return UAdjustSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAdjustSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSandboxNondistribution_MetaData[];
#endif
		static void NewProp_bSandboxNondistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSandboxNondistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSandboxDistribution_MetaData[];
#endif
		static void NewProp_bSandboxDistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSandboxDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTracker_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProcessName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEventBuffering_MetaData[];
#endif
		static void NewProp_bEventBuffering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEventBuffering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendInBackground_MetaData[];
#endif
		static void NewProp_bSendInBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendInBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdjustSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalyticsSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdjustEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdjustSettings.h" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Check to run in sandbox mode instead of production for non-distribution builds\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Sandbox mode for non-distribution?" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Check to run in sandbox mode instead of production for non-distribution builds" },
	};
#endif
	void Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution_SetBit(void* Obj)
	{
		((UAdjustSettings*)Obj)->bSandboxNondistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution = { "bSandboxNondistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdjustSettings), &Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Check to run in sandbox mode instead of production for distribution builds\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Sandbox mode for distribution?" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Check to run in sandbox mode instead of production for distribution builds" },
	};
#endif
	void Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution_SetBit(void* Obj)
	{
		((UAdjustSettings*)Obj)->bSandboxDistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution = { "bSandboxDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdjustSettings), &Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_AppToken_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Application token from dashboard\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Application token" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Application token from dashboard" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_AppToken = { "AppToken", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, AppToken), METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_AppToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_AppToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_LogLevel_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Level of verbosity to use for logging\n" },
		{ "DisplayName", "Logging level" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Level of verbosity to use for logging" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, LogLevel), Z_Construct_UEnum_AdjustEditor_EAndroidAdjustLogging, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_LogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_LogLevel_MetaData)) }; // 3187050015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DefaultTracker_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Token from dashboard for tracker URL (may be left empty) \n" },
		{ "DisplayName", "Default tracker token" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Token from dashboard for tracker URL (may be left empty)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DefaultTracker = { "DefaultTracker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, DefaultTracker), METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DefaultTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DefaultTracker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Override the process name; will use the package name if not provided\n" },
		{ "DisplayName", "Process name (optional)" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Override the process name; will use the package name if not provided" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, ProcessName), METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_ProcessName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_ProcessName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Optional event buffering (send in batches once a minute instead of immediately)\n" },
		{ "DisplayName", "Enable event buffering" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Optional event buffering (send in batches once a minute instead of immediately)" },
	};
#endif
	void Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering_SetBit(void* Obj)
	{
		((UAdjustSettings*)Obj)->bEventBuffering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering = { "bEventBuffering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdjustSettings), &Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Send while in application in background\n" },
		{ "DisplayName", "Send while in background" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Send while in application in background" },
	};
#endif
	void Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground_SetBit(void* Obj)
	{
		((UAdjustSettings*)Obj)->bSendInBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground = { "bSendInBackground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAdjustSettings), &Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DelayStart_MetaData[] = {
		{ "Category", "Adjust" },
		{ "Comment", "// Optional start delay (up to 10 seconds) before first events are sent\n" },
		{ "DisplayName", "Delay start (seconds)" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Optional start delay (up to 10 seconds) before first events are sent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DelayStart = { "DelayStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, DelayStart), METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DelayStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DelayStart_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap_Inner = { "EventMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAdjustEventMapping, METADATA_PARAMS(nullptr, 0) }; // 813295606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap_MetaData[] = {
		{ "Category", "AdjustEvents" },
		{ "Comment", "// Mapping of event names to tokens generated by Adjust dashboard.\n" },
		{ "ModuleRelativePath", "Classes/AdjustSettings.h" },
		{ "ToolTip", "Mapping of event names to tokens generated by Adjust dashboard." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap = { "EventMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAdjustSettings, EventMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap_MetaData)) }; // 813295606
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAdjustSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxNondistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSandboxDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_AppToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_LogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DefaultTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_ProcessName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bEventBuffering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_bSendInBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_DelayStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAdjustSettings_Statics::NewProp_EventMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdjustSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdjustSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdjustSettings_Statics::ClassParams = {
		&UAdjustSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAdjustSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdjustSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdjustSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdjustSettings()
	{
		if (!Z_Registration_Info_UClass_UAdjustSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdjustSettings.OuterSingleton, Z_Construct_UClass_UAdjustSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdjustSettings.OuterSingleton;
	}
	template<> ADJUSTEDITOR_API UClass* StaticClass<UAdjustSettings>()
	{
		return UAdjustSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdjustSettings);
	UAdjustSettings::~UAdjustSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::EnumInfo[] = {
		{ EAndroidAdjustLogging_StaticEnum, TEXT("EAndroidAdjustLogging"), &Z_Registration_Info_UEnum_EAndroidAdjustLogging, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3187050015U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ScriptStructInfo[] = {
		{ FAdjustEventMapping::StaticStruct, Z_Construct_UScriptStruct_FAdjustEventMapping_Statics::NewStructOps, TEXT("AdjustEventMapping"), &Z_Registration_Info_UScriptStruct_AdjustEventMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdjustEventMapping), 813295606U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdjustSettings, UAdjustSettings::StaticClass, TEXT("UAdjustSettings"), &Z_Registration_Info_UClass_UAdjustSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdjustSettings), 996162293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_2205763879(TEXT("/Script/AdjustEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
