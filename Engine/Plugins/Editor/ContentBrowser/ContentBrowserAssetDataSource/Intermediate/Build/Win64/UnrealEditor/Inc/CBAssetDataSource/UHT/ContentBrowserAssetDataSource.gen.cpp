// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserAssetDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserAssetDataSource() {}
// Cross Module References
	CONTENTBROWSERASSETDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserAssetDataSource();
	CONTENTBROWSERASSETDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserAssetDataSource_NoRegister();
	CONTENTBROWSERASSETDATASOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserAssetDataSource();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter;
class UScriptStruct* FContentBrowserCompiledAssetDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserAssetDataSource(), TEXT("ContentBrowserCompiledAssetDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.OuterSingleton;
}
template<> CONTENTBROWSERASSETDATASOURCE_API UScriptStruct* StaticStruct<FContentBrowserCompiledAssetDataFilter>()
{
	return FContentBrowserCompiledAssetDataFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserAssetDataSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserCompiledAssetDataFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserAssetDataSource,
		nullptr,
		&NewStructOps,
		"ContentBrowserCompiledAssetDataFilter",
		sizeof(FContentBrowserCompiledAssetDataFilter),
		alignof(FContentBrowserCompiledAssetDataFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter.InnerSingleton;
	}
	void UContentBrowserAssetDataSource::StaticRegisterNativesUContentBrowserAssetDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserAssetDataSource);
	UClass* Z_Construct_UClass_UContentBrowserAssetDataSource_NoRegister()
	{
		return UContentBrowserAssetDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserAssetDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserDataSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserAssetDataSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserAssetDataSource.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserAssetDataSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserAssetDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::ClassParams = {
		&UContentBrowserAssetDataSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserAssetDataSource()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserAssetDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserAssetDataSource.OuterSingleton, Z_Construct_UClass_UContentBrowserAssetDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserAssetDataSource.OuterSingleton;
	}
	template<> CONTENTBROWSERASSETDATASOURCE_API UClass* StaticClass<UContentBrowserAssetDataSource>()
	{
		return UContentBrowserAssetDataSource::StaticClass();
	}
	UContentBrowserAssetDataSource::UContentBrowserAssetDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserAssetDataSource);
	UContentBrowserAssetDataSource::~UContentBrowserAssetDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserCompiledAssetDataFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserCompiledAssetDataFilter_Statics::NewStructOps, TEXT("ContentBrowserCompiledAssetDataFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserCompiledAssetDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserCompiledAssetDataFilter), 346991036U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserAssetDataSource, UContentBrowserAssetDataSource::StaticClass, TEXT("UContentBrowserAssetDataSource"), &Z_Registration_Info_UClass_UContentBrowserAssetDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserAssetDataSource), 2430523511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_15272460(TEXT("/Script/ContentBrowserAssetDataSource"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserAssetDataSource_Source_ContentBrowserAssetDataSource_Public_ContentBrowserAssetDataSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
