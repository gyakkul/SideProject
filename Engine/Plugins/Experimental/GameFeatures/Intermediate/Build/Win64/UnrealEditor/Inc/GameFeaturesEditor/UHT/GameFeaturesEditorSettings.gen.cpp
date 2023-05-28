// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeaturesEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeaturesEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData_NoRegister();
	GAMEFEATURESEDITOR_API UClass* Z_Construct_UClass_UGameFeaturesEditorSettings();
	GAMEFEATURESEDITOR_API UClass* Z_Construct_UClass_UGameFeaturesEditorSettings_NoRegister();
	GAMEFEATURESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPluginTemplateData();
	UPackage* Z_Construct_UPackage__Script_GameFeaturesEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginTemplateData;
class UScriptStruct* FPluginTemplateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginTemplateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginTemplateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginTemplateData, (UObject*)Z_Construct_UPackage__Script_GameFeaturesEditor(), TEXT("PluginTemplateData"));
	}
	return Z_Registration_Info_UScriptStruct_PluginTemplateData.OuterSingleton;
}
template<> GAMEFEATURESEDITOR_API UScriptStruct* StaticStruct<FPluginTemplateData>()
{
	return FPluginTemplateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPluginTemplateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameFeatureDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultGameFeatureDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameFeatureDataName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultGameFeatureDataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledByDefault_MetaData[];
#endif
		static void NewProp_bIsEnabledByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledByDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Data for specifying a usable plugin template. \n*\x09-Plugin templates are a folder/file structure that are duplicated and renamed\n*\x09 by the plugin creation wizard to easily create new plugins with a standard\n*\x09 format.\n* See PluginUtils.h for more information.\n*/" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "ToolTip", "* Data for specifying a usable plugin template.\n*      -Plugin templates are a folder/file structure that are duplicated and renamed\n*       by the plugin creation wizard to easily create new plugins with a standard\n*       format.\n* See PluginUtils.h for more information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginTemplateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "PluginTemplate" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "RelativePath", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginTemplateData, Path), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "PluginTemplate" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginTemplateData, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PluginTemplate" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginTemplateData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataClass_MetaData[] = {
		{ "Category", "Plugins" },
		{ "Comment", "/** The default class of game feature data to create for new game feature plugins (if not set, UGameFeatureData will be used) */" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "ToolTip", "The default class of game feature data to create for new game feature plugins (if not set, UGameFeatureData will be used)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataClass = { "DefaultGameFeatureDataClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginTemplateData, DefaultGameFeatureDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameFeatureData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataName_MetaData[] = {
		{ "Category", "Plugins" },
		{ "Comment", "/** The default name of the created game feature data assets. If empty, will use the plugin name. */" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "ToolTip", "The default name of the created game feature data assets. If empty, will use the plugin name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataName = { "DefaultGameFeatureDataName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginTemplateData, DefaultGameFeatureDataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault_MetaData[] = {
		{ "Category", "Plugins" },
		{ "Comment", "/** If true, the created plugin will be enabled by default without needing to be added to the project file. */" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "ToolTip", "If true, the created plugin will be enabled by default without needing to be added to the project file." },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault_SetBit(void* Obj)
	{
		((FPluginTemplateData*)Obj)->bIsEnabledByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault = { "bIsEnabledByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginTemplateData), &Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginTemplateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_DefaultGameFeatureDataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewProp_bIsEnabledByDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginTemplateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeaturesEditor,
		nullptr,
		&NewStructOps,
		"PluginTemplateData",
		sizeof(FPluginTemplateData),
		alignof(FPluginTemplateData),
		Z_Construct_UScriptStruct_FPluginTemplateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginTemplateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginTemplateData()
	{
		if (!Z_Registration_Info_UScriptStruct_PluginTemplateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginTemplateData.InnerSingleton, Z_Construct_UScriptStruct_FPluginTemplateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PluginTemplateData.InnerSingleton;
	}
	void UGameFeaturesEditorSettings::StaticRegisterNativesUGameFeaturesEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeaturesEditorSettings);
	UClass* Z_Construct_UClass_UGameFeaturesEditorSettings_NoRegister()
	{
		return UGameFeaturesEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeaturesEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PluginTemplates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeaturesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeaturesEditorSettings.h" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates_Inner = { "PluginTemplates", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPluginTemplateData, METADATA_PARAMS(nullptr, 0) }; // 1594218983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates_MetaData[] = {
		{ "Category", "Plugins" },
		{ "Comment", "// Array of Plugin templates. Allows projects to specify reusable plugin templates for the plugin creation wizard.\n" },
		{ "ModuleRelativePath", "Private/GameFeaturesEditorSettings.h" },
		{ "ToolTip", "Array of Plugin templates. Allows projects to specify reusable plugin templates for the plugin creation wizard." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates = { "PluginTemplates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesEditorSettings, PluginTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates_MetaData)) }; // 1594218983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::NewProp_PluginTemplates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeaturesEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::ClassParams = {
		&UGameFeaturesEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeaturesEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UGameFeaturesEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeaturesEditorSettings.OuterSingleton, Z_Construct_UClass_UGameFeaturesEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeaturesEditorSettings.OuterSingleton;
	}
	template<> GAMEFEATURESEDITOR_API UClass* StaticClass<UGameFeaturesEditorSettings>()
	{
		return UGameFeaturesEditorSettings::StaticClass();
	}
	UGameFeaturesEditorSettings::UGameFeaturesEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeaturesEditorSettings);
	UGameFeaturesEditorSettings::~UGameFeaturesEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FPluginTemplateData::StaticStruct, Z_Construct_UScriptStruct_FPluginTemplateData_Statics::NewStructOps, TEXT("PluginTemplateData"), &Z_Registration_Info_UScriptStruct_PluginTemplateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginTemplateData), 1594218983U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeaturesEditorSettings, UGameFeaturesEditorSettings::StaticClass, TEXT("UGameFeaturesEditorSettings"), &Z_Registration_Info_UClass_UGameFeaturesEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeaturesEditorSettings), 2087483678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_2990404231(TEXT("/Script/GameFeaturesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeaturesEditor_Private_GameFeaturesEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
