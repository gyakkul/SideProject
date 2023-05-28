// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/SearchUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchUserSettings() {}
// Cross Module References
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchUserSettings();
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchUserSettings_NoRegister();
	ASSETSEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FSearchPerformance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchPerformance;
class UScriptStruct* FSearchPerformance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchPerformance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchPerformance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchPerformance, (UObject*)Z_Construct_UPackage__Script_AssetSearch(), TEXT("SearchPerformance"));
	}
	return Z_Registration_Info_UScriptStruct_SearchPerformance.OuterSingleton;
}
template<> ASSETSEARCH_API UScriptStruct* StaticStruct<FSearchPerformance>()
{
	return FSearchPerformance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchPerformance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParallelDownloads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParallelDownloads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownloadProcessRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DownloadProcessRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetScanRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetScanRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchPerformance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchPerformance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_ParallelDownloads_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_ParallelDownloads = { "ParallelDownloads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchPerformance, ParallelDownloads), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_ParallelDownloads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_ParallelDownloads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_DownloadProcessRate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_DownloadProcessRate = { "DownloadProcessRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchPerformance, DownloadProcessRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_DownloadProcessRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_DownloadProcessRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_AssetScanRate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_AssetScanRate = { "AssetScanRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchPerformance, AssetScanRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_AssetScanRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_AssetScanRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchPerformance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_ParallelDownloads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_DownloadProcessRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewProp_AssetScanRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchPerformance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetSearch,
		nullptr,
		&NewStructOps,
		"SearchPerformance",
		sizeof(FSearchPerformance),
		alignof(FSearchPerformance),
		Z_Construct_UScriptStruct_FSearchPerformance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchPerformance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchPerformance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchPerformance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchPerformance()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchPerformance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchPerformance.InnerSingleton, Z_Construct_UScriptStruct_FSearchPerformance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchPerformance.InnerSingleton;
	}
	void USearchUserSettings::StaticRegisterNativesUSearchUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USearchUserSettings);
	UClass* Z_Construct_UClass_USearchUserSettings_NoRegister()
	{
		return USearchUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_USearchUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSearch_MetaData[];
#endif
		static void NewProp_bEnableSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSearch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMissingAssets_MetaData[];
#endif
		static void NewProp_bShowMissingAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMissingAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExpandAssets_MetaData[];
#endif
		static void NewProp_bAutoExpandAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExpandAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThrottleInBackground_MetaData[];
#endif
		static void NewProp_bThrottleInBackground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThrottleInBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundtOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundtOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchInForeground_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SearchInForeground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USearchUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Search" },
		{ "IncludePath", "Settings/SearchUserSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable this to begin using search. */" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
		{ "ToolTip", "Enable this to begin using search." },
	};
#endif
	void Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch_SetBit(void* Obj)
	{
		((USearchUserSettings*)Obj)->bEnableSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch = { "bEnableSearch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USearchUserSettings), &Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths_Inner = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USearchUserSettings, IgnoredPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets_SetBit(void* Obj)
	{
		((USearchUserSettings*)Obj)->bShowMissingAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets = { "bShowMissingAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USearchUserSettings), &Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets_SetBit(void* Obj)
	{
		((USearchUserSettings*)Obj)->bAutoExpandAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets = { "bAutoExpandAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USearchUserSettings), &Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground_SetBit(void* Obj)
	{
		((USearchUserSettings*)Obj)->bThrottleInBackground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground = { "bThrottleInBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USearchUserSettings), &Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground_SetBit, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_DefaultOptions_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_DefaultOptions = { "DefaultOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USearchUserSettings, DefaultOptions), Z_Construct_UScriptStruct_FSearchPerformance, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_DefaultOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_DefaultOptions_MetaData)) }; // 1689646174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_BackgroundtOptions_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_BackgroundtOptions = { "BackgroundtOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USearchUserSettings, BackgroundtOptions), Z_Construct_UScriptStruct_FSearchPerformance, METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_BackgroundtOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_BackgroundtOptions_MetaData)) }; // 1689646174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchUserSettings_Statics::NewProp_SearchInForeground_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/SearchUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USearchUserSettings_Statics::NewProp_SearchInForeground = { "SearchInForeground", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USearchUserSettings, SearchInForeground), METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_SearchInForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::NewProp_SearchInForeground_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USearchUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bEnableSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_IgnoredPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bShowMissingAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bAutoExpandAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_bThrottleInBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_DefaultOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_BackgroundtOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchUserSettings_Statics::NewProp_SearchInForeground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USearchUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USearchUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USearchUserSettings_Statics::ClassParams = {
		&USearchUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USearchUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USearchUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USearchUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USearchUserSettings()
	{
		if (!Z_Registration_Info_UClass_USearchUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USearchUserSettings.OuterSingleton, Z_Construct_UClass_USearchUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USearchUserSettings.OuterSingleton;
	}
	template<> ASSETSEARCH_API UClass* StaticClass<USearchUserSettings>()
	{
		return USearchUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USearchUserSettings);
	USearchUserSettings::~USearchUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ScriptStructInfo[] = {
		{ FSearchPerformance::StaticStruct, Z_Construct_UScriptStruct_FSearchPerformance_Statics::NewStructOps, TEXT("SearchPerformance"), &Z_Registration_Info_UScriptStruct_SearchPerformance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchPerformance), 1689646174U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USearchUserSettings, USearchUserSettings::StaticClass, TEXT("USearchUserSettings"), &Z_Registration_Info_UClass_USearchUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USearchUserSettings), 809595534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_3118397797(TEXT("/Script/AssetSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchUserSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
