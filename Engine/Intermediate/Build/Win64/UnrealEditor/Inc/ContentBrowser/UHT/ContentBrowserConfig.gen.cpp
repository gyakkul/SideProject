// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ContentBrowserConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserConfig() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserConfig();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserConfig_NoRegister();
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionsConfig();
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserInstanceConfig();
	CONTENTBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FPathViewConfig();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollectionsConfig;
class UScriptStruct* FCollectionsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollectionsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollectionsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionsConfig, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("CollectionsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CollectionsConfig.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FCollectionsConfig>()
{
	return FCollectionsConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollectionsConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchExpanded_MetaData[];
#endif
		static void NewProp_bSearchExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchExpanded;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedCollections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpandedCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpandedCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionsConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionsConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((FCollectionsConfig*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionsConfig), &Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded_SetBit(void* Obj)
	{
		((FCollectionsConfig*)Obj)->bSearchExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded = { "bSearchExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollectionsConfig), &Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections_Inner = { "SelectedCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections = { "SelectedCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionsConfig, SelectedCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections_Inner = { "ExpandedCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections = { "ExpandedCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollectionsConfig, ExpandedCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionsConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_bSearchExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_SelectedCollections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewProp_ExpandedCollections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionsConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"CollectionsConfig",
		sizeof(FCollectionsConfig),
		alignof(FCollectionsConfig),
		Z_Construct_UScriptStruct_FCollectionsConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionsConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionsConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CollectionsConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollectionsConfig.InnerSingleton, Z_Construct_UScriptStruct_FCollectionsConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollectionsConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PathViewConfig;
class UScriptStruct* FPathViewConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PathViewConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PathViewConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathViewConfig, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("PathViewConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PathViewConfig.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FPathViewConfig>()
{
	return FPathViewConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPathViewConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PluginFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PluginFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathViewConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathViewConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((FPathViewConfig*)Obj)->bExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPathViewConfig), &Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths_Inner = { "SelectedPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths = { "SelectedPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathViewConfig, SelectedPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters_Inner = { "PluginFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters = { "PluginFilters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPathViewConfig, PluginFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathViewConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_bExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_SelectedPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewProp_PluginFilters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathViewConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"PathViewConfig",
		sizeof(FPathViewConfig),
		alignof(FPathViewConfig),
		Z_Construct_UScriptStruct_FPathViewConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathViewConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPathViewConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathViewConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPathViewConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PathViewConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PathViewConfig.InnerSingleton, Z_Construct_UScriptStruct_FPathViewConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PathViewConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig;
class UScriptStruct* FContentBrowserInstanceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig, (UObject*)Z_Construct_UPackage__Script_ContentBrowser(), TEXT("ContentBrowserInstanceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.OuterSingleton;
}
template<> CONTENTBROWSER_API UScriptStruct* StaticStruct<FContentBrowserInstanceConfig>()
{
	return FContentBrowserInstanceConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathView_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFavorites_MetaData[];
#endif
		static void NewProp_bShowFavorites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFavorites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFavoritesExpanded_MetaData[];
#endif
		static void NewProp_bFavoritesExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFavoritesExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSourcesExpanded_MetaData[];
#endif
		static void NewProp_bSourcesExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSourcesExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterRecursively_MetaData[];
#endif
		static void NewProp_bFilterRecursively_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterRecursively;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFolders_MetaData[];
#endif
		static void NewProp_bShowFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEmptyFolders_MetaData[];
#endif
		static void NewProp_bShowEmptyFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEmptyFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEngineContent_MetaData[];
#endif
		static void NewProp_bShowEngineContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEngineContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDeveloperContent_MetaData[];
#endif
		static void NewProp_bShowDeveloperContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDeveloperContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLocalizedContent_MetaData[];
#endif
		static void NewProp_bShowLocalizedContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLocalizedContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPluginContent_MetaData[];
#endif
		static void NewProp_bShowPluginContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPluginContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCppFolders_MetaData[];
#endif
		static void NewProp_bShowCppFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCppFolders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchClasses_MetaData[];
#endif
		static void NewProp_bSearchClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchAssetPaths_MetaData[];
#endif
		static void NewProp_bSearchAssetPaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchAssetPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchCollections_MetaData[];
#endif
		static void NewProp_bSearchCollections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserInstanceConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_Collections_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserInstanceConfig, Collections), Z_Construct_UScriptStruct_FCollectionsConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_Collections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_Collections_MetaData)) }; // 3678188686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_PathView_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_PathView = { "PathView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserInstanceConfig, PathView), Z_Construct_UScriptStruct_FPathViewConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_PathView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_PathView_MetaData)) }; // 3613004008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowFavorites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites = { "bShowFavorites", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bFavoritesExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded = { "bFavoritesExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bSourcesExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded = { "bSourcesExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bFilterRecursively = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively = { "bFilterRecursively", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders = { "bShowFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowEmptyFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders = { "bShowEmptyFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowEngineContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent = { "bShowEngineContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowDeveloperContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent = { "bShowDeveloperContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowLocalizedContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent = { "bShowLocalizedContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowPluginContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent = { "bShowPluginContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bShowCppFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders = { "bShowCppFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bSearchClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses = { "bSearchClasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bSearchAssetPaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths = { "bSearchAssetPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections_SetBit(void* Obj)
	{
		((FContentBrowserInstanceConfig*)Obj)->bSearchCollections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections = { "bSearchCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserInstanceConfig), &Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_Collections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_PathView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFavoritesExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSourcesExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bFilterRecursively,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEmptyFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowEngineContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowDeveloperContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowLocalizedContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowPluginContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bShowCppFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchAssetPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewProp_bSearchCollections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
		nullptr,
		&NewStructOps,
		"ContentBrowserInstanceConfig",
		sizeof(FContentBrowserInstanceConfig),
		alignof(FContentBrowserInstanceConfig),
		Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserInstanceConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig.InnerSingleton;
	}
	void UContentBrowserConfig::StaticRegisterNativesUContentBrowserConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserConfig);
	UClass* Z_Construct_UClass_UContentBrowserConfig_NoRegister()
	{
		return UContentBrowserConfig::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Favorites_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Favorites_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Favorites;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instances_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Instances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserConfig_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "ContentBrowser" },
		{ "IncludePath", "ContentBrowserConfig.h" },
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites_ElementProp = { "Favorites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites_MetaData[] = {
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites = { "Favorites", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserConfig, Favorites), METADATA_PARAMS(Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_ValueProp = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FContentBrowserInstanceConfig, METADATA_PARAMS(nullptr, 0) }; // 2774934849
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_Key_KeyProp = { "Instances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_MetaData[] = {
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Private/ContentBrowserConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserConfig, Instances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_MetaData)) }; // 2774934849
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Favorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserConfig_Statics::NewProp_Instances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserConfig_Statics::ClassParams = {
		&UContentBrowserConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserConfig()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserConfig.OuterSingleton, Z_Construct_UClass_UContentBrowserConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserConfig.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserConfig>()
	{
		return UContentBrowserConfig::StaticClass();
	}
	UContentBrowserConfig::UContentBrowserConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserConfig);
	UContentBrowserConfig::~UContentBrowserConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ScriptStructInfo[] = {
		{ FCollectionsConfig::StaticStruct, Z_Construct_UScriptStruct_FCollectionsConfig_Statics::NewStructOps, TEXT("CollectionsConfig"), &Z_Registration_Info_UScriptStruct_CollectionsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollectionsConfig), 3678188686U) },
		{ FPathViewConfig::StaticStruct, Z_Construct_UScriptStruct_FPathViewConfig_Statics::NewStructOps, TEXT("PathViewConfig"), &Z_Registration_Info_UScriptStruct_PathViewConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathViewConfig), 3613004008U) },
		{ FContentBrowserInstanceConfig::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserInstanceConfig_Statics::NewStructOps, TEXT("ContentBrowserInstanceConfig"), &Z_Registration_Info_UScriptStruct_ContentBrowserInstanceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserInstanceConfig), 2774934849U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserConfig, UContentBrowserConfig::StaticClass, TEXT("UContentBrowserConfig"), &Z_Registration_Info_UClass_UContentBrowserConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserConfig), 1074720927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_2655239152(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Private_ContentBrowserConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
