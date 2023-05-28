// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ContentBrowserSingleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserSingleton() {}
// Cross Module References
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserPluginSettings();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings;
class UScriptStruct* FContentBrowserPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserPluginSettings, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("ContentBrowserPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FContentBrowserPluginSettings>()
{
	return FContentBrowserPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PluginName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFolderSortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootFolderSortPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserSingleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserPluginSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_PluginName_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserSingleton.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_PluginName = { "PluginName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserPluginSettings, PluginName), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_PluginName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_PluginName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_RootFolderSortPriority_MetaData[] = {
		{ "Comment", "/** Used to control the order of plugin root folders in the path view. A higher priority sorts higher in the list. Game and Engine folders are priority 1.0 */" },
		{ "ModuleRelativePath", "Private/ContentBrowserSingleton.h" },
		{ "ToolTip", "Used to control the order of plugin root folders in the path view. A higher priority sorts higher in the list. Game and Engine folders are priority 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_RootFolderSortPriority = { "RootFolderSortPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserPluginSettings, RootFolderSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_RootFolderSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_RootFolderSortPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_PluginName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewProp_RootFolderSortPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"ContentBrowserPluginSettings",
		sizeof(FContentBrowserPluginSettings),
		alignof(FContentBrowserPluginSettings),
		Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserSingleton_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserSingleton_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserPluginSettings_Statics::NewStructOps, TEXT("ContentBrowserPluginSettings"), &Z_Registration_Info_UScriptStruct_ContentBrowserPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserPluginSettings), 4011778573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserSingleton_h_1426334040(TEXT("/Script/ContentBrowser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserSingleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserSingleton_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
