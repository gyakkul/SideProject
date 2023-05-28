// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserDataSource() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	void UContentBrowserDataSource::StaticRegisterNativesUContentBrowserDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataSource);
	UClass* Z_Construct_UClass_UContentBrowserDataSource_NoRegister()
	{
		return UContentBrowserDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A common implementation of a \"do nothing\" data source for the Content Browser.\n * You should derive from this type to create new data sources for the Content Browser, overriding any required functionality and validation logic.\n *\n * Data sources create and operate on FContentBrowserItemData instances that represent the folders and files within each data source.\n * FContentBrowserItemData itself is a concrete type, so extensibility is handled via the IContentBrowserItemDataPayload interface, which can be \n * used to store any data source defined payload data that is required to operate on the underlying thing that the item represents.\n *\n * This is the only API you need to implement to create a data source, as each FContentBrowserItemData instance knows which data source owns it, \n * and uses that information to pass itself back into the correct data source instance when asked to perform actions or validation.\n * In that sense you can think of this like a C API, where the data source returns an opaque object that is later passed back into the data source \n * functions so that they can interpret the opaque object and provide functionality for it.\n */" },
		{ "IncludePath", "ContentBrowserDataSource.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSource.h" },
		{ "ToolTip", "A common implementation of a \"do nothing\" data source for the Content Browser.\nYou should derive from this type to create new data sources for the Content Browser, overriding any required functionality and validation logic.\n\nData sources create and operate on FContentBrowserItemData instances that represent the folders and files within each data source.\nFContentBrowserItemData itself is a concrete type, so extensibility is handled via the IContentBrowserItemDataPayload interface, which can be\nused to store any data source defined payload data that is required to operate on the underlying thing that the item represents.\n\nThis is the only API you need to implement to create a data source, as each FContentBrowserItemData instance knows which data source owns it,\nand uses that information to pass itself back into the correct data source instance when asked to perform actions or validation.\nIn that sense you can think of this like a C API, where the data source returns an opaque object that is later passed back into the data source\nfunctions so that they can interpret the opaque object and provide functionality for it." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataSource_Statics::ClassParams = {
		&UContentBrowserDataSource::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataSource()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataSource.OuterSingleton, Z_Construct_UClass_UContentBrowserDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataSource.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataSource>()
	{
		return UContentBrowserDataSource::StaticClass();
	}
	UContentBrowserDataSource::UContentBrowserDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataSource);
	UContentBrowserDataSource::~UContentBrowserDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserDataSource, UContentBrowserDataSource::StaticClass, TEXT("UContentBrowserDataSource"), &Z_Registration_Info_UClass_UContentBrowserDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataSource), 359813608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_321645704(TEXT("/Script/ContentBrowserData"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
