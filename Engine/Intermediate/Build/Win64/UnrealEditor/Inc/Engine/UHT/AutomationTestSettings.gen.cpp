// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalToolDefinition;
class UScriptStruct* FExternalToolDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalToolDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExternalToolDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalToolDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExternalToolDefinition>()
{
	return FExternalToolDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalToolDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandLineOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLineOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkingDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for defining an external tool\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Structure for defining an external tool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalToolDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The name of the tool / test. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the tool / test." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ToolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The executable to run. */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The executable to run." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ExecutablePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The command line options to pass to the executable. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The command line options to pass to the executable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions = { "CommandLineOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, CommandLineOptions), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* The working directory for the new process. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The working directory for the new process." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, WorkingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* If set, look for scripts with this extension. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If set, look for scripts with this extension." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension = { "ScriptExtension", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ScriptExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/* If the ScriptExtension is set, look here for the script files. */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "If the ScriptExtension is set, look here for the script files." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory = { "ScriptDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalToolDefinition, ScriptDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ToolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ExecutablePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_CommandLineOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_WorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewProp_ScriptDirectory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExternalToolDefinition",
		sizeof(FExternalToolDefinition),
		alignof(FExternalToolDefinition),
		Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalToolDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton, Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalToolDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportFactorySettingValues;
class UScriptStruct* FImportFactorySettingValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportFactorySettingValues, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ImportFactorySettingValues"));
	}
	return Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FImportFactorySettingValues>()
{
	return FImportFactorySettingValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds FProperty names and values to customize factory settings\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds FProperty names and values to customize factory settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportFactorySettingValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Name of the property to change.  Nested settings can be modified using \"Outer.Property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportFactorySettingValues, SettingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Value to import for the specified property." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportFactorySettingValues, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_SettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ImportFactorySettingValues",
		sizeof(FImportFactorySettingValues),
		alignof(FImportFactorySettingValues),
		Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportFactorySettingValues()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton, Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportFactorySettingValues.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition;
class UScriptStruct* FEditorImportExportTestDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportExportTestDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportExportTestDefinition>()
{
	return FEditorImportExportTestDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportFileExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportFileExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipExport_MetaData[];
#endif
		static void NewProp_bSkipExport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipExport;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds settings for the asset import / export automation test\n */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportExportTestDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The file to import */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file extension to use when exporting this asset.  Used to find a supporting exporter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension = { "ExportFileExtension", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, ExportFileExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* If true, the export step will be skipped */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "If true, the export step will be skipped" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit(void* Obj)
	{
		((FEditorImportExportTestDefinition*)Obj)->bSkipExport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport = { "bSkipExport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorImportExportTestDefinition), &Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) }; // 1983006560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Settings for the import factory */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorImportExportTestDefinition, FactorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_MetaData)) }; // 1983006560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ImportFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_ExportFileExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_bSkipExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewProp_FactorySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorImportExportTestDefinition",
		sizeof(FEditorImportExportTestDefinition),
		alignof(FEditorImportExportTestDefinition),
		Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportExportTestDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition;
class UScriptStruct* FEditorImportWorkflowDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorImportWorkflowDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorImportWorkflowDefinition>()
{
	return FEditorImportWorkflowDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportFilePath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FactorySettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactorySettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FactorySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the asset import workflow test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import workflow test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorImportWorkflowDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The file to import */" },
		{ "FilePathFilter", "*" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The file to import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath = { "ImportFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorImportWorkflowDefinition, ImportFilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner = { "FactorySettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportFactorySettingValues, METADATA_PARAMS(nullptr, 0) }; // 1983006560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Settings for the import factory */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Settings for the import factory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings = { "FactorySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorImportWorkflowDefinition, FactorySettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_MetaData)) }; // 1983006560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_ImportFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewProp_FactorySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorImportWorkflowDefinition",
		sizeof(FEditorImportWorkflowDefinition),
		alignof(FEditorImportWorkflowDefinition),
		Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings;
class UScriptStruct* FBuildPromotionImportWorkflowSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionImportWorkflowSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionImportWorkflowSettings>()
{
	return FBuildPromotionImportWorkflowSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diffuse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Diffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MorphMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurroundSound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherAssetsToImport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherAssetsToImport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherAssetsToImport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the import workflow stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the import workflow stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionImportWorkflowSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the Diffuse texture */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Diffuse texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse = { "Diffuse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Diffuse), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the Normalmap texture */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the Normalmap texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Normal), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the static mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, StaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the static mesh to re-import */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the static mesh to re-import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh = { "ReimportStaticMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the blend shape */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the blend shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh = { "BlendShapeMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, BlendShapeMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the morph mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the morph mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh = { "MorphMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, MorphMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SkeletalMesh), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above) */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the animation asset.  (Will automatically use the skeleton of the skeletal mesh above)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Animation), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the sound */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the sound" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, Sound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound_MetaData)) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for the surround sound (Select any of the channels.  It will auto import the rest)*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for the surround sound (Select any of the channels.  It will auto import the rest)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound = { "SurroundSound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, SurroundSound), Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound_MetaData)) }; // 2084056159
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition, METADATA_PARAMS(nullptr, 0) }; // 2084056159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* Import settings for any other assets you may want to import */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import settings for any other assets you may want to import" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport = { "OtherAssetsToImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_MetaData)) }; // 2084056159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Diffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_ReimportStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_BlendShapeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_MorphMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_SurroundSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewProp_OtherAssetsToImport,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionImportWorkflowSettings",
		sizeof(FBuildPromotionImportWorkflowSettings),
		alignof(FBuildPromotionImportWorkflowSettings),
		Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings;
class UScriptStruct* FBuildPromotionOpenAssetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionOpenAssetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionOpenAssetSettings>()
{
	return FBuildPromotionOpenAssetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleSystemAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the open assets stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the open assets stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionOpenAssetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The blueprint asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The blueprint asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset = { "BlueprintAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, BlueprintAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The material asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The material asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset = { "MaterialAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, MaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The particle system asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The particle system asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, ParticleSystemAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The skeletal mesh asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The skeletal mesh asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The static mesh asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The static mesh asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, StaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/* The texture asset to open */" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The texture asset to open" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset = { "TextureAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionOpenAssetSettings, TextureAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_BlueprintAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_MaterialAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_ParticleSystemAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_SkeletalMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_StaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewProp_TextureAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionOpenAssetSettings",
		sizeof(FBuildPromotionOpenAssetSettings),
		alignof(FBuildPromotionOpenAssetSettings),
		Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings;
class UScriptStruct* FBuildPromotionNewProjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionNewProjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionNewProjectSettings>()
{
	return FBuildPromotionNewProjectSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectFolderOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewProjectFolderOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewProjectNameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the new project stage of the build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the new project stage of the build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionNewProjectSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The path for the new project */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The path for the new project" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride = { "NewProjectFolderOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectFolderOverride), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The name of the project **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The name of the project *" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride = { "NewProjectNameOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionNewProjectSettings, NewProjectNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectFolderOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewProp_NewProjectNameOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionNewProjectSettings",
		sizeof(FBuildPromotionNewProjectSettings),
		alignof(FBuildPromotionNewProjectSettings),
		Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings;
class UScriptStruct* FMaterialEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialEditorPromotionSettings>()
{
	return FMaterialEditorPromotionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMaterialAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDiffuseTexture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDiffuseTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNormalTexture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultNormalTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the material editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the material editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset = { "DefaultMaterialAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultMaterialAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture = { "DefaultDiffuseTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultDiffuseTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default material asset to apply to static meshes **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default material asset to apply to static meshes *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture = { "DefaultNormalTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialEditorPromotionSettings, DefaultNormalTexture), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultMaterialAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultDiffuseTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewProp_DefaultNormalTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialEditorPromotionSettings",
		sizeof(FMaterialEditorPromotionSettings),
		alignof(FMaterialEditorPromotionSettings),
		Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings;
class UScriptStruct* FParticleEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEditorPromotionSettings>()
{
	return FParticleEditorPromotionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the particle editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the particle editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default particle asset to use for tests*/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEditorPromotionSettings",
		sizeof(FParticleEditorPromotionSettings),
		alignof(FParticleEditorPromotionSettings),
		Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEditorPromotionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings;
class UScriptStruct* FBlueprintEditorPromotionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintEditorPromotionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintEditorPromotionSettings>()
{
	return FBlueprintEditorPromotionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticleAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultParticleAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the blueprint editor build promotion tests\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the blueprint editor build promotion tests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintEditorPromotionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The starting mesh for the blueprint **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The starting mesh for the blueprint *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath = { "FirstMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, FirstMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** The mesh to set on the blueprint after the delay **/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The mesh to set on the blueprint after the delay *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath = { "SecondMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, SecondMeshPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default particle asset to use for tests*/" },
		{ "FilePathFilter", "uasset" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default particle asset to use for tests" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset = { "DefaultParticleAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintEditorPromotionSettings, DefaultParticleAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_FirstMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_SecondMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewProp_DefaultParticleAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintEditorPromotionSettings",
		sizeof(FBlueprintEditorPromotionSettings),
		alignof(FBlueprintEditorPromotionSettings),
		Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings;
class UScriptStruct* FBuildPromotionTestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionTestSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BuildPromotionTestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBuildPromotionTestSettings>()
{
	return FBuildPromotionTestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStaticMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultStaticMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportWorkflow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportWorkflow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenAssets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OpenAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewProjectSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewProjectSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceControlMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the editor build promotion test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor build promotion test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildPromotionTestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Default static mesh asset to apply materials to **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default static mesh asset to apply materials to *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset = { "DefaultStaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, DefaultStaticMeshAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Import workflow settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Import workflow settings *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow = { "ImportWorkflow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, ImportWorkflow), Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow_MetaData)) }; // 3301553201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Open assets settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Open assets settings *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets = { "OpenAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, OpenAssets), Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets_MetaData)) }; // 848929686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** New project settings **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "New project settings *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings = { "NewProjectSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, NewProjectSettings), Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings_MetaData)) }; // 964305373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Material to modify for the content browser step **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material to modify for the content browser step *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial = { "SourceControlMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBuildPromotionTestSettings, SourceControlMaterial), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_DefaultStaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_ImportWorkflow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_OpenAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_NewProjectSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewProp_SourceControlMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BuildPromotionTestSettings",
		sizeof(FBuildPromotionTestSettings),
		alignof(FBuildPromotionTestSettings),
		Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildPromotionTestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton, Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition;
class UScriptStruct* FEditorMapPerformanceTestDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EditorMapPerformanceTestDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEditorMapPerformanceTestDefinition>()
{
	return FEditorMapPerformanceTestDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceTestmap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceTestmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestTimer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TestTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the asset import / export automation test\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the asset import / export automation test" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorMapPerformanceTestDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Automation" },
		{ "Comment", "/** Map to be used for the Performance Capture **/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Performance Capture *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap = { "PerformanceTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, PerformanceTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the length of time in seconds that this test will run for before stopping." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer = { "TestTimer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorMapPerformanceTestDefinition, TestTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_PerformanceTestmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewProp_TestTimer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorMapPerformanceTestDefinition",
		sizeof(FEditorMapPerformanceTestDefinition),
		alignof(FEditorMapPerformanceTestDefinition),
		Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchOnTestSettings;
class UScriptStruct* FLaunchOnTestSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchOnTestSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LaunchOnTestSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLaunchOnTestSettings>()
{
	return FLaunchOnTestSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchOnTestmap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchOnTestmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for the editor Launch On With Map Iterations test.\n*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Holds settings for the editor Launch On With Map Iterations test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchOnTestSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Map to be used for the Launch On test **/" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Map to be used for the Launch On test *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap = { "LaunchOnTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLaunchOnTestSettings, LaunchOnTestmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "This is the device to be used for launch on. Example: WindowsClient, Android, IOS, Linux" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLaunchOnTestSettings, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_LaunchOnTestmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewProp_DeviceID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LaunchOnTestSettings",
		sizeof(FLaunchOnTestSettings),
		alignof(FLaunchOnTestSettings),
		Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLaunchOnTestSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton, Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LaunchOnTestSettings.InnerSingleton;
	}
	void UAutomationTestSettings::StaticRegisterNativesUAutomationTestSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestSettings);
	UClass* Z_Construct_UClass_UAutomationTestSettings_NoRegister()
	{
		return UAutomationTestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationTestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineTestModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineTestModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineTestModules;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditorTestModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTestModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorTestModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomationTestmap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutomationTestmap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPerformanceTestMaps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPerformanceTestMaps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorPerformanceTestMaps;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetsToOpen_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpen_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToOpen;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapsToPIETest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapsToPIETest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapsToPIETest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAllProjectMapsToPlayInPIE_MetaData[];
#endif
		static void NewProp_bUseAllProjectMapsToPlayInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllProjectMapsToPlayInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildPromotionTest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildPromotionTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialEditorPromotionTest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialEditorPromotionTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEditorPromotionTest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleEditorPromotionTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintEditorPromotionTest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintEditorPromotionTest;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestLevelFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestLevelFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestLevelFolders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalTools;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportExportTestDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportExportTestDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportExportTestDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchOnSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchOnSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaunchOnSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenshotResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultScreenshotResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIETestDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PIETestDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerateWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerateWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteractiveFramerateDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteractiveFramerateDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationTestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "Tests/AutomationTestSettings.h" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner = { "EngineTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/**\n\x09 * Modules to load that have engine tests\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have engine tests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules = { "EngineTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EngineTestModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner = { "EditorTestModules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData[] = {
		{ "Category", "Loading" },
		{ "Comment", "/**\n\x09 * Modules to load that have editor tests\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Modules to load that have editor tests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules = { "EditorTestModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EditorTestModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * The automation test map to be used for several of the automation tests.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The automation test map to be used for several of the automation tests." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap = { "AutomationTestmap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, AutomationTestmap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition, METADATA_PARAMS(nullptr, 0) }; // 1127923758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* The map to be used for the editor performance capture tool.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map to be used for the editor performance capture tool." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps = { "EditorPerformanceTestMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, EditorPerformanceTestMaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_MetaData)) }; // 1127923758
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData[] = {
		{ "Category", "Open Asset Tests" },
		{ "Comment", "/**\n\x09 * Asset to test for open in automation process\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset to test for open in automation process" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen = { "AssetsToOpen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, AssetsToOpen), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_Inner = { "MapsToPIETest", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_MetaData[] = {
		{ "Category", "PIE Test Maps" },
		{ "Comment", "/**\n\x09 * Maps to PIE during the PIE test\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Maps to PIE during the PIE test" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest = { "MapsToPIETest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, MapsToPIETest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_MetaData[] = {
		{ "Category", "Play all project Maps In PIE" },
		{ "Comment", "/**\n\x09 * Use all Maps from project for PlayMapInPIE test\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Use all Maps from project for PlayMapInPIE test" },
	};
#endif
	void Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_SetBit(void* Obj)
	{
		((UAutomationTestSettings*)Obj)->bUseAllProjectMapsToPlayInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE = { "bUseAllProjectMapsToPlayInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationTestSettings), &Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Editor build promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Editor build promotion test settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest = { "BuildPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, BuildPromotionTest), Z_Construct_UScriptStruct_FBuildPromotionTestSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest_MetaData)) }; // 3415648356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Material editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Material editor promotion test settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest = { "MaterialEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, MaterialEditorPromotionTest), Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest_MetaData)) }; // 3761830658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Particle editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Particle editor promotion test settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest = { "ParticleEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ParticleEditorPromotionTest), Z_Construct_UScriptStruct_FParticleEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest_MetaData)) }; // 3598190885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Blueprint editor promotion test settings\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Blueprint editor promotion test settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest = { "BlueprintEditorPromotionTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, BlueprintEditorPromotionTest), Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest_MetaData)) }; // 394752770
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData[] = {
		{ "Category", "MiscAutomationSetups" },
		{ "Comment", "/**\n\x09* Folders containing levels to exclude from automated tests\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Folders containing levels to exclude from automated tests" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders = { "TestLevelFolders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, TestLevelFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner = { "ExternalTools", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExternalToolDefinition, METADATA_PARAMS(nullptr, 0) }; // 1678934332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData[] = {
		{ "Category", "ExternalTools" },
		{ "Comment", "/**\n\x09 * External executables and scripts to run as part of automation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "External executables and scripts to run as part of automation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools = { "ExternalTools", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ExternalTools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_MetaData)) }; // 1678934332
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition, METADATA_PARAMS(nullptr, 0) }; // 3990203707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Asset import / Export test settings\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Asset import / Export test settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions = { "ImportExportTestDefinitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, ImportExportTestDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_MetaData)) }; // 3990203707
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLaunchOnTestSettings, METADATA_PARAMS(nullptr, 0) }; // 1666390288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* The map and device type to be used for the editor Launch On With Map Iterations test.\n\x09*/" },
		{ "FilePathFilter", "umap" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The map and device type to be used for the editor Launch On With Map Iterations test." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings = { "LaunchOnSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, LaunchOnSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_MetaData)) }; // 1666390288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData[] = {
		{ "Category", "Screenshots" },
		{ "Comment", "/**\n\x09 * The default resolution to take all automation screenshots at.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "The default resolution to take all automation screenshots at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution = { "DefaultScreenshotResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, DefaultScreenshotResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * PIE test duration in seconds. Only applied if you do PIETest\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "PIE test duration in seconds. Only applied if you do PIETest" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration = { "PIETestDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, PIETestDuration), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Default value used for FWaitForInteractiveFrameRate. This is a framerate determine to be suitably \"interactive\", but may be\n\x09 * less than the target framerate of the game as this is used for evaluating time to PIE, load the editor etc\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default value used for FWaitForInteractiveFrameRate. This is a framerate determine to be suitably \"interactive\", but may be\nless than the target framerate of the game as this is used for evaluating time to PIE, load the editor etc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate = { "DefaultInteractiveFramerate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerate), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Default wait time in seconds for FWaitForInteractiveFrameRate. After this time a test will fail.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default wait time in seconds for FWaitForInteractiveFrameRate. After this time a test will fail." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime = { "DefaultInteractiveFramerateWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerateWaitTime), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 *  Default time in seconds that DefaultInteractiveFramerate must remain true in FWaitForInteractiveFrameRate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Tests/AutomationTestSettings.h" },
		{ "ToolTip", "Default time in seconds that DefaultInteractiveFramerate must remain true in FWaitForInteractiveFrameRate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration = { "DefaultInteractiveFramerateDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestSettings, DefaultInteractiveFramerateDuration), METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EngineTestModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorTestModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AutomationTestmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_EditorPerformanceTestMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_AssetsToOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MapsToPIETest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_bUseAllProjectMapsToPlayInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BuildPromotionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_MaterialEditorPromotionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ParticleEditorPromotionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_BlueprintEditorPromotionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_TestLevelFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ExternalTools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_ImportExportTestDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_LaunchOnSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultScreenshotResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_PIETestDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestSettings_Statics::NewProp_DefaultInteractiveFramerateDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationTestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams = {
		&UAutomationTestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationTestSettings()
	{
		if (!Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton, Z_Construct_UClass_UAutomationTestSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationTestSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAutomationTestSettings>()
	{
		return UAutomationTestSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestSettings);
	UAutomationTestSettings::~UAutomationTestSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ScriptStructInfo[] = {
		{ FExternalToolDefinition::StaticStruct, Z_Construct_UScriptStruct_FExternalToolDefinition_Statics::NewStructOps, TEXT("ExternalToolDefinition"), &Z_Registration_Info_UScriptStruct_ExternalToolDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalToolDefinition), 1678934332U) },
		{ FImportFactorySettingValues::StaticStruct, Z_Construct_UScriptStruct_FImportFactorySettingValues_Statics::NewStructOps, TEXT("ImportFactorySettingValues"), &Z_Registration_Info_UScriptStruct_ImportFactorySettingValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportFactorySettingValues), 1983006560U) },
		{ FEditorImportExportTestDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorImportExportTestDefinition_Statics::NewStructOps, TEXT("EditorImportExportTestDefinition"), &Z_Registration_Info_UScriptStruct_EditorImportExportTestDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorImportExportTestDefinition), 3990203707U) },
		{ FEditorImportWorkflowDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorImportWorkflowDefinition_Statics::NewStructOps, TEXT("EditorImportWorkflowDefinition"), &Z_Registration_Info_UScriptStruct_EditorImportWorkflowDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorImportWorkflowDefinition), 2084056159U) },
		{ FBuildPromotionImportWorkflowSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionImportWorkflowSettings_Statics::NewStructOps, TEXT("BuildPromotionImportWorkflowSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionImportWorkflowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionImportWorkflowSettings), 3301553201U) },
		{ FBuildPromotionOpenAssetSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings_Statics::NewStructOps, TEXT("BuildPromotionOpenAssetSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionOpenAssetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionOpenAssetSettings), 848929686U) },
		{ FBuildPromotionNewProjectSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionNewProjectSettings_Statics::NewStructOps, TEXT("BuildPromotionNewProjectSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionNewProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionNewProjectSettings), 964305373U) },
		{ FMaterialEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FMaterialEditorPromotionSettings_Statics::NewStructOps, TEXT("MaterialEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_MaterialEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialEditorPromotionSettings), 3761830658U) },
		{ FParticleEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FParticleEditorPromotionSettings_Statics::NewStructOps, TEXT("ParticleEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_ParticleEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEditorPromotionSettings), 3598190885U) },
		{ FBlueprintEditorPromotionSettings::StaticStruct, Z_Construct_UScriptStruct_FBlueprintEditorPromotionSettings_Statics::NewStructOps, TEXT("BlueprintEditorPromotionSettings"), &Z_Registration_Info_UScriptStruct_BlueprintEditorPromotionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintEditorPromotionSettings), 394752770U) },
		{ FBuildPromotionTestSettings::StaticStruct, Z_Construct_UScriptStruct_FBuildPromotionTestSettings_Statics::NewStructOps, TEXT("BuildPromotionTestSettings"), &Z_Registration_Info_UScriptStruct_BuildPromotionTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildPromotionTestSettings), 3415648356U) },
		{ FEditorMapPerformanceTestDefinition::StaticStruct, Z_Construct_UScriptStruct_FEditorMapPerformanceTestDefinition_Statics::NewStructOps, TEXT("EditorMapPerformanceTestDefinition"), &Z_Registration_Info_UScriptStruct_EditorMapPerformanceTestDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorMapPerformanceTestDefinition), 1127923758U) },
		{ FLaunchOnTestSettings::StaticStruct, Z_Construct_UScriptStruct_FLaunchOnTestSettings_Statics::NewStructOps, TEXT("LaunchOnTestSettings"), &Z_Registration_Info_UScriptStruct_LaunchOnTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchOnTestSettings), 1666390288U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationTestSettings, UAutomationTestSettings::StaticClass, TEXT("UAutomationTestSettings"), &Z_Registration_Info_UClass_UAutomationTestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestSettings), 808048427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_455393462(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Tests_AutomationTestSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
