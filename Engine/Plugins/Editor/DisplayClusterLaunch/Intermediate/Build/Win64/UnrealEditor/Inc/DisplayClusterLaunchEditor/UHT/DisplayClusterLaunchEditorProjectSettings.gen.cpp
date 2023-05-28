// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterLaunchEditorProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLaunchEditorProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DISPLAYCLUSTERLAUNCHEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings();
	DISPLAYCLUSTERLAUNCHEDITOR_API UClass* Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_NoRegister();
	DISPLAYCLUSTERLAUNCHEDITOR_API UEnum* Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity();
	DISPLAYCLUSTERLAUNCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterLaunchEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity;
	static UEnum* EDisplayClusterLaunchLogVerbosity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity, (UObject*)Z_Construct_UPackage__Script_DisplayClusterLaunchEditor(), TEXT("EDisplayClusterLaunchLogVerbosity"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLAUNCHEDITOR_API UEnum* StaticEnum<EDisplayClusterLaunchLogVerbosity>()
	{
		return EDisplayClusterLaunchLogVerbosity_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enumerators[] = {
		{ "Fatal", (int64)Fatal },
		{ "Error", (int64)Error },
		{ "Warning", (int64)Warning },
		{ "Display", (int64)Display },
		{ "Log", (int64)Log },
		{ "Verbose", (int64)Verbose },
		{ "VeryVerbose", (int64)VeryVerbose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enum_MetaDataParams[] = {
		{ "Display.Comment", "/** Prints a message to console (and log file) */" },
		{ "Display.Name", "Display" },
		{ "Display.ToolTip", "Prints a message to console (and log file)" },
		{ "Error.Comment", "/** \n\x09 * Prints an error to console (and log file). \n\x09 * Commandlets and the editor collect and report errors. Error messages result in commandlet failure.\n\x09 */" },
		{ "Error.Name", "Error" },
		{ "Error.ToolTip", "Prints an error to console (and log file).\nCommandlets and the editor collect and report errors. Error messages result in commandlet failure." },
		{ "Fatal.Comment", "/** Always prints a fatal error to console (and log file) and crashes (even if logging is disabled) */" },
		{ "Fatal.Name", "Fatal" },
		{ "Fatal.ToolTip", "Always prints a fatal error to console (and log file) and crashes (even if logging is disabled)" },
		{ "Log.Comment", "/** Prints a message to a log file (does not print to console) */" },
		{ "Log.Name", "Log" },
		{ "Log.ToolTip", "Prints a message to a log file (does not print to console)" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "Verbose.Comment", "/** \n\x09 * Prints a verbose message to a log file (if Verbose logging is enabled for the given category, \n\x09 * usually used for detailed logging) \n\x09 */" },
		{ "Verbose.Name", "Verbose" },
		{ "Verbose.ToolTip", "Prints a verbose message to a log file (if Verbose logging is enabled for the given category,\nusually used for detailed logging)" },
		{ "VeryVerbose.Comment", "/** \n\x09 * Prints a verbose message to a log file (if VeryVerbose logging is enabled, \n\x09 * usually used for detailed logging that would otherwise spam output) \n\x09 */" },
		{ "VeryVerbose.Name", "VeryVerbose" },
		{ "VeryVerbose.ToolTip", "Prints a verbose message to a log file (if VeryVerbose logging is enabled,\nusually used for detailed logging that would otherwise spam output)" },
		{ "Warning.Comment", "/** \n\x09 * Prints a warning to console (and log file).\n\x09 * Commandlets and the editor collect and report warnings. Warnings can be treated as an error.\n\x09 */" },
		{ "Warning.Name", "Warning" },
		{ "Warning.ToolTip", "Prints a warning to console (and log file).\nCommandlets and the editor collect and report warnings. Warnings can be treated as an error." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterLaunchEditor,
		nullptr,
		"EDisplayClusterLaunchLogVerbosity",
		"EDisplayClusterLaunchLogVerbosity",
		Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.InnerSingleton, Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct;
class UScriptStruct* FDisplayClusterLaunchLoggingConstruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct, (UObject*)Z_Construct_UPackage__Script_DisplayClusterLaunchEditor(), TEXT("DisplayClusterLaunchLoggingConstruct"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.OuterSingleton;
}
template<> DISPLAYCLUSTERLAUNCHEDITOR_API UScriptStruct* StaticStruct<FDisplayClusterLaunchLoggingConstruct>()
{
	return FDisplayClusterLaunchLoggingConstruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerbosityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerbosityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterLaunchLoggingConstruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "nDisplay Launch Settings" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterLaunchLoggingConstruct, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_VerbosityLevel_MetaData[] = {
		{ "Category", "nDisplay Launch Settings" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_VerbosityLevel = { "VerbosityLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterLaunchLoggingConstruct, VerbosityLevel), Z_Construct_UEnum_DisplayClusterLaunchEditor_EDisplayClusterLaunchLogVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_VerbosityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_VerbosityLevel_MetaData)) }; // 955350354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewProp_VerbosityLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLaunchEditor,
		nullptr,
		&NewStructOps,
		"DisplayClusterLaunchLoggingConstruct",
		sizeof(FDisplayClusterLaunchLoggingConstruct),
		alignof(FDisplayClusterLaunchLoggingConstruct),
		Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct.InnerSingleton;
	}
	void UDisplayClusterLaunchEditorProjectSettings::StaticRegisterNativesUDisplayClusterLaunchEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLaunchEditorProjectSettings);
	UClass* Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_NoRegister()
	{
		return UDisplayClusterLaunchEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCloseEditorOnLaunch_MetaData[];
#endif
		static void NewProp_bCloseEditorOnLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseEditorOnLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConnectToMultiUser_MetaData[];
#endif
		static void NewProp_bConnectToMultiUser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectToMultiUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitSessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExplicitSessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUnrealInsights_MetaData[];
#endif
		static void NewProp_bEnableUnrealInsights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUnrealInsights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStatNamedEvents_MetaData[];
#endif
		static void NewProp_bEnableStatNamedEvents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStatNamedEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTraceFileSaveDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitTraceFileSaveDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariablesPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleVariablesPreset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalConsoleVariables_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalConsoleVariables_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AdditionalConsoleVariables;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalConsoleCommands_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalConsoleCommands_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AdditionalConsoleCommands;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLineArguments_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandLineArguments_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CommandLineArguments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogFileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Logging_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Logging_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Logging;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterLaunchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch_MetaData[] = {
		{ "Category", "nDisplay Launch Settings" },
		{ "Comment", "/**\n\x09 * If true, the editor will be closed on session launch to optimize session performance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "If true, the editor will be closed on session launch to optimize session performance." },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch_SetBit(void* Obj)
	{
		((UDisplayClusterLaunchEditorProjectSettings*)Obj)->bCloseEditorOnLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch = { "bCloseEditorOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLaunchEditorProjectSettings), &Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Multi-User" },
		{ "Comment", "/**\n\x09 * If true, this command will attempt to connect to an existing\n\x09 * session or create a new Multi-User session with the\n\x09 * options specified in the Multi-User Editing project settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "If true, this command will attempt to connect to an existing\nsession or create a new Multi-User session with the\noptions specified in the Multi-User Editing project settings." },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser_SetBit(void* Obj)
	{
		((UDisplayClusterLaunchEditorProjectSettings*)Obj)->bConnectToMultiUser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser = { "bConnectToMultiUser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLaunchEditorProjectSettings), &Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitSessionName_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Multi-User" },
		{ "Comment", "/**\n\x09 * A specific session name to use when connecting to multi-user if bAutoGenerateSessionName is false.\n\x09 * If left empty, a name will be generated.\n\x09 */" },
		{ "EditCondition", "bConnectToMultiUser" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "A specific session name to use when connecting to multi-user if bAutoGenerateSessionName is false.\nIf left empty, a name will be generated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitSessionName = { "ExplicitSessionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, ExplicitSessionName), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitSessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Unreal Insights" },
		{ "Comment", "/**\n\x09 * Whether or not to enable Unreal Insights for this session\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "Whether or not to enable Unreal Insights for this session" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights_SetBit(void* Obj)
	{
		((UDisplayClusterLaunchEditorProjectSettings*)Obj)->bEnableUnrealInsights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights = { "bEnableUnrealInsights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLaunchEditorProjectSettings), &Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Unreal Insights" },
		{ "Comment", "/**\n\x09 * Enable support for Stat Named Events in Unreal Insights\n\x09 */" },
		{ "EditCondition", "bEnableUnrealInsights" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "Enable support for Stat Named Events in Unreal Insights" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents_SetBit(void* Obj)
	{
		((UDisplayClusterLaunchEditorProjectSettings*)Obj)->bEnableStatNamedEvents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents = { "bEnableStatNamedEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterLaunchEditorProjectSettings), &Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitTraceFileSaveDirectory_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Unreal Insights" },
		{ "Comment", "/**\n\x09 * Where to store the Unreal Insights Trace Files.\n\x09 * If empty, Unreal Insights will connect to localhost (this computer) instead and you'll need to ensure Unreal Insights is launched.\n\x09 * To specify a socket to connect to, use CommandLineArguments.\n\x09 */" },
		{ "EditCondition", "bEnableUnrealInsights" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "Where to store the Unreal Insights Trace Files.\nIf empty, Unreal Insights will connect to localhost (this computer) instead and you'll need to ensure Unreal Insights is launched.\nTo specify a socket to connect to, use CommandLineArguments." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitTraceFileSaveDirectory = { "ExplicitTraceFileSaveDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, ExplicitTraceFileSaveDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitTraceFileSaveDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitTraceFileSaveDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ConsoleVariablesPreset_MetaData[] = {
		{ "AllowedClasses", "/Script/ConsoleVariablesEditorRuntime.ConsoleVariablesAsset" },
		{ "Category", "nDisplay Launch Settings|Console" },
		{ "Comment", "/**\n\x09 * A Console Variables Asset to always apply to your launches.\n\x09 * All saved commands and variables will be executed before \"Additional\" ones specified below.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "A Console Variables Asset to always apply to your launches.\nAll saved commands and variables will be executed before \"Additional\" ones specified below." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ConsoleVariablesPreset = { "ConsoleVariablesPreset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, ConsoleVariablesPreset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ConsoleVariablesPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ConsoleVariablesPreset_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables_ElementProp = { "AdditionalConsoleVariables", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Console" },
		{ "Comment", "/**\n\x09 * DPCvars\n\x09 * You can specify additional console variables here to be executed after those of the Console Variable Preset are executed.\n\x09 * This is useful for overriding variables in your defined Console Variables Asset.\n\x09 * Console Variables generally have a name and a value, like \"r.ScreenPercentage 50\"\n\x09 */" },
		{ "Keywords", "DPCvars" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "DPCvars\nYou can specify additional console variables here to be executed after those of the Console Variable Preset are executed.\nThis is useful for overriding variables in your defined Console Variables Asset.\nConsole Variables generally have a name and a value, like \"r.ScreenPercentage 50\"" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables = { "AdditionalConsoleVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, AdditionalConsoleVariables), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands_ElementProp = { "AdditionalConsoleCommands", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Console" },
		{ "Comment", "/**\n\x09 * You can specify additional console commands here to be executed after those of the Console Variable Preset are executed.\n\x09 * This is useful for overriding commands in your defined Console Variables Asset.\n\x09 * Console Commands generally have a name and no value (i.e. 'stat unit') though some have a value too (i.e. \"r.SetNearClipPlane 500\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "You can specify additional console commands here to be executed after those of the Console Variable Preset are executed.\nThis is useful for overriding commands in your defined Console Variables Asset.\nConsole Commands generally have a name and no value (i.e. 'stat unit') though some have a value too (i.e. \"r.SetNearClipPlane 500\")" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands = { "AdditionalConsoleCommands", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, AdditionalConsoleCommands), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments_ElementProp = { "CommandLineArguments", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Console" },
		{ "Comment", "/**\n\x09 * A list of command line arguments to append to the Switchboard command (e.g. messaging, fullscreen, handleensurepercent=0)\n\x09 * Do not include the dash (\"-\") as this will be automatically added for you when calling the command.\n\x09 * Parameters for arguments are supported, such as \"handleensurepercent=0\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "A list of command line arguments to append to the Switchboard command (e.g. messaging, fullscreen, handleensurepercent=0)\nDo not include the dash (\"-\") as this will be automatically added for you when calling the command.\nParameters for arguments are supported, such as \"handleensurepercent=0\"." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments = { "CommandLineArguments", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, CommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_LogFileName_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Logging" },
		{ "Comment", "/**\n\x09 * The name of the log file to which to write logs for the launched node.\n\x09 * '.log' will be automatically appended to the file name.\n\x09 * If not specified, the nDisplay node's name will be used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "The name of the log file to which to write logs for the launched node.\n'.log' will be automatically appended to the file name.\nIf not specified, the nDisplay node's name will be used instead." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_LogFileName = { "LogFileName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, LogFileName), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_LogFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_LogFileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging_Inner = { "Logging", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct, METADATA_PARAMS(nullptr, 0) }; // 3592212940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging_MetaData[] = {
		{ "Category", "nDisplay Launch Settings|Logging" },
		{ "Comment", "/**\n\x09 * Which logs to include and with which verbosity level\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLaunchEditorProjectSettings.h" },
		{ "ToolTip", "Which logs to include and with which verbosity level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging = { "Logging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLaunchEditorProjectSettings, Logging), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging_MetaData)) }; // 3592212940
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bCloseEditorOnLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bConnectToMultiUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableUnrealInsights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_bEnableStatNamedEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ExplicitTraceFileSaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_ConsoleVariablesPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_AdditionalConsoleCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_CommandLineArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_LogFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::NewProp_Logging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLaunchEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::ClassParams = {
		&UDisplayClusterLaunchEditorProjectSettings::StaticClass,
		"DisplayClusterLaunch",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLaunchEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLaunchEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLaunchEditorProjectSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERLAUNCHEDITOR_API UClass* StaticClass<UDisplayClusterLaunchEditorProjectSettings>()
	{
		return UDisplayClusterLaunchEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLaunchEditorProjectSettings);
	UDisplayClusterLaunchEditorProjectSettings::~UDisplayClusterLaunchEditorProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::EnumInfo[] = {
		{ EDisplayClusterLaunchLogVerbosity_StaticEnum, TEXT("EDisplayClusterLaunchLogVerbosity"), &Z_Registration_Info_UEnum_EDisplayClusterLaunchLogVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 955350354U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterLaunchLoggingConstruct::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterLaunchLoggingConstruct_Statics::NewStructOps, TEXT("DisplayClusterLaunchLoggingConstruct"), &Z_Registration_Info_UScriptStruct_DisplayClusterLaunchLoggingConstruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterLaunchLoggingConstruct), 3592212940U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLaunchEditorProjectSettings, UDisplayClusterLaunchEditorProjectSettings::StaticClass, TEXT("UDisplayClusterLaunchEditorProjectSettings"), &Z_Registration_Info_UClass_UDisplayClusterLaunchEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLaunchEditorProjectSettings), 671269784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_1503693722(TEXT("/Script/DisplayClusterLaunchEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DisplayClusterLaunch_Source_DisplayClusterLaunchEditor_Public_DisplayClusterLaunchEditorProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
