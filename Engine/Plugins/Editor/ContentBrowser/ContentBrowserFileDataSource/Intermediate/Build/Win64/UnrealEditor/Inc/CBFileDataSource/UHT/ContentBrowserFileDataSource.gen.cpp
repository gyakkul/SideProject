// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserFileDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserFileDataSource() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource();
	CONTENTBROWSERFILEDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserFileDataSource();
	CONTENTBROWSERFILEDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserFileDataSource_NoRegister();
	CONTENTBROWSERFILEDATASOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserFileDataSource();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter;
class UScriptStruct* FContentBrowserCompiledFileDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserFileDataSource(), TEXT("ContentBrowserCompiledFileDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.OuterSingleton;
}
template<> CONTENTBROWSERFILEDATASOURCE_API UScriptStruct* StaticStruct<FContentBrowserCompiledFileDataFilter>()
{
	return FContentBrowserCompiledFileDataFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserFileDataSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserCompiledFileDataFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserFileDataSource,
		nullptr,
		&NewStructOps,
		"ContentBrowserCompiledFileDataFilter",
		sizeof(FContentBrowserCompiledFileDataFilter),
		alignof(FContentBrowserCompiledFileDataFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter.InnerSingleton;
	}
	void UContentBrowserFileDataSource::StaticRegisterNativesUContentBrowserFileDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserFileDataSource);
	UClass* Z_Construct_UClass_UContentBrowserFileDataSource_NoRegister()
	{
		return UContentBrowserFileDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserFileDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserFileDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserDataSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserFileDataSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFileDataSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserFileDataSource.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserFileDataSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserFileDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserFileDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserFileDataSource_Statics::ClassParams = {
		&UContentBrowserFileDataSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFileDataSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFileDataSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserFileDataSource()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserFileDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserFileDataSource.OuterSingleton, Z_Construct_UClass_UContentBrowserFileDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserFileDataSource.OuterSingleton;
	}
	template<> CONTENTBROWSERFILEDATASOURCE_API UClass* StaticClass<UContentBrowserFileDataSource>()
	{
		return UContentBrowserFileDataSource::StaticClass();
	}
	UContentBrowserFileDataSource::UContentBrowserFileDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserFileDataSource);
	UContentBrowserFileDataSource::~UContentBrowserFileDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserCompiledFileDataFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserCompiledFileDataFilter_Statics::NewStructOps, TEXT("ContentBrowserCompiledFileDataFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserCompiledFileDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserCompiledFileDataFilter), 2409594014U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserFileDataSource, UContentBrowserFileDataSource::StaticClass, TEXT("UContentBrowserFileDataSource"), &Z_Registration_Info_UClass_UContentBrowserFileDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserFileDataSource), 2370417000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_597738855(TEXT("/Script/ContentBrowserFileDataSource"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserFileDataSource_Source_ContentBrowserFileDataSource_Public_ContentBrowserFileDataSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
