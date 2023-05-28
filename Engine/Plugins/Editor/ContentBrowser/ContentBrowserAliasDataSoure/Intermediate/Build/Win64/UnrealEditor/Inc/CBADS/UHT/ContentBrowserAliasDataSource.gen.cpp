// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserAliasDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserAliasDataSource() {}
// Cross Module References
	CONTENTBROWSERALIASDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserAliasDataSource();
	CONTENTBROWSERALIASDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserAliasDataSource_NoRegister();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserAliasDataSource();
// End Cross Module References
	void UContentBrowserAliasDataSource::StaticRegisterNativesUContentBrowserAliasDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserAliasDataSource);
	UClass* Z_Construct_UClass_UContentBrowserAliasDataSource_NoRegister()
	{
		return UContentBrowserAliasDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserAliasDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserDataSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserAliasDataSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A companion to the ContentBrowserAssetDataSource which can display assets in folders other than their actual folder. Aliases mimic their source asset as closely as possible,\n * including editing, saving, thumbnails, and more. Some behavior is restricted such as moving or deleting an alias item.\n * \n * Aliases can either be created automatically by tagging the asset with the value defined by AliasTagName and giving it a comma-separated list of aliases,\n * or manually managed by calling AddAlias and RemoveAlias. ReconcileAliasesForAsset is provided as a helper function to automatically update new/removed aliases for an existing asset.\n *\n */" },
		{ "IncludePath", "ContentBrowserAliasDataSource.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserAliasDataSource.h" },
		{ "ToolTip", "A companion to the ContentBrowserAssetDataSource which can display assets in folders other than their actual folder. Aliases mimic their source asset as closely as possible,\nincluding editing, saving, thumbnails, and more. Some behavior is restricted such as moving or deleting an alias item.\n\nAliases can either be created automatically by tagging the asset with the value defined by AliasTagName and giving it a comma-separated list of aliases,\nor manually managed by calling AddAlias and RemoveAlias. ReconcileAliasesForAsset is provided as a helper function to automatically update new/removed aliases for an existing asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserAliasDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::ClassParams = {
		&UContentBrowserAliasDataSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserAliasDataSource()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserAliasDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserAliasDataSource.OuterSingleton, Z_Construct_UClass_UContentBrowserAliasDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserAliasDataSource.OuterSingleton;
	}
	template<> CONTENTBROWSERALIASDATASOURCE_API UClass* StaticClass<UContentBrowserAliasDataSource>()
	{
		return UContentBrowserAliasDataSource::StaticClass();
	}
	UContentBrowserAliasDataSource::UContentBrowserAliasDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserAliasDataSource);
	UContentBrowserAliasDataSource::~UContentBrowserAliasDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAliasDataSoure_Source_ContentBrowserAliasDataSource_Public_ContentBrowserAliasDataSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAliasDataSoure_Source_ContentBrowserAliasDataSource_Public_ContentBrowserAliasDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserAliasDataSource, UContentBrowserAliasDataSource::StaticClass, TEXT("UContentBrowserAliasDataSource"), &Z_Registration_Info_UClass_UContentBrowserAliasDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserAliasDataSource), 2354280942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAliasDataSoure_Source_ContentBrowserAliasDataSource_Public_ContentBrowserAliasDataSource_h_2736484461(TEXT("/Script/ContentBrowserAliasDataSource"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAliasDataSoure_Source_ContentBrowserAliasDataSource_Public_ContentBrowserAliasDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAliasDataSoure_Source_ContentBrowserAliasDataSource_Public_ContentBrowserAliasDataSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
