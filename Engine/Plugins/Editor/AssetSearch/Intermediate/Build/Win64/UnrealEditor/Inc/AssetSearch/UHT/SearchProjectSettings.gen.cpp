// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Settings/SearchProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchProjectSettings() {}
// Cross Module References
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchProjectSettings();
	ASSETSEARCH_API UClass* Z_Construct_UClass_USearchProjectSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AssetSearch();
// End Cross Module References
	void USearchProjectSettings::StaticRegisterNativesUSearchProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USearchProjectSettings);
	UClass* Z_Construct_UClass_USearchProjectSettings_NoRegister()
	{
		return USearchProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_USearchProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredPaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USearchProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Search" },
		{ "IncludePath", "Settings/SearchProjectSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_Inner = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/Settings/SearchProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths = { "IgnoredPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USearchProjectSettings, IgnoredPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USearchProjectSettings_Statics::NewProp_IgnoredPaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USearchProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USearchProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USearchProjectSettings_Statics::ClassParams = {
		&USearchProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USearchProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USearchProjectSettings()
	{
		if (!Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton, Z_Construct_UClass_USearchProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USearchProjectSettings.OuterSingleton;
	}
	template<> ASSETSEARCH_API UClass* StaticClass<USearchProjectSettings>()
	{
		return USearchProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USearchProjectSettings);
	USearchProjectSettings::~USearchProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USearchProjectSettings, USearchProjectSettings::StaticClass, TEXT("USearchProjectSettings"), &Z_Registration_Info_UClass_USearchProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USearchProjectSettings), 2053356048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_2799568229(TEXT("/Script/AssetSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetSearch_Source_Private_Settings_SearchProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
