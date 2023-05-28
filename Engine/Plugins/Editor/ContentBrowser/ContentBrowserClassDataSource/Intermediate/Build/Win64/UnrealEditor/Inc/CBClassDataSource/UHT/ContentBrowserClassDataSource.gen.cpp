// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserClassDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserClassDataSource() {}
// Cross Module References
	CONTENTBROWSERCLASSDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserClassDataSource();
	CONTENTBROWSERCLASSDATASOURCE_API UClass* Z_Construct_UClass_UContentBrowserClassDataSource_NoRegister();
	CONTENTBROWSERCLASSDATASOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserClassDataSource();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter;
class UScriptStruct* FContentBrowserCompiledClassDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserClassDataSource(), TEXT("ContentBrowserCompiledClassDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.OuterSingleton;
}
template<> CONTENTBROWSERCLASSDATASOURCE_API UScriptStruct* StaticStruct<FContentBrowserCompiledClassDataFilter>()
{
	return FContentBrowserCompiledClassDataFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ValidClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ValidClasses;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ValidFolders_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidFolders_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ValidFolders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserClassDataSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserCompiledClassDataFilter>();
	}
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses_ElementProp = { "ValidClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserClassDataSource.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses = { "ValidClasses", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserCompiledClassDataFilter, ValidClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders_ElementProp = { "ValidFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentBrowserClassDataSource.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders = { "ValidFolders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserCompiledClassDataFilter, ValidFolders), METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewProp_ValidFolders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserClassDataSource,
		nullptr,
		&NewStructOps,
		"ContentBrowserCompiledClassDataFilter",
		sizeof(FContentBrowserCompiledClassDataFilter),
		alignof(FContentBrowserCompiledClassDataFilter),
		Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter.InnerSingleton;
	}
	void UContentBrowserClassDataSource::StaticRegisterNativesUContentBrowserClassDataSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserClassDataSource);
	UClass* Z_Construct_UClass_UContentBrowserClassDataSource_NoRegister()
	{
		return UContentBrowserClassDataSource::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserClassDataSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserClassDataSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserDataSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserClassDataSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserClassDataSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserClassDataSource.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserClassDataSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserClassDataSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserClassDataSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserClassDataSource_Statics::ClassParams = {
		&UContentBrowserClassDataSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserClassDataSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserClassDataSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserClassDataSource()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserClassDataSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserClassDataSource.OuterSingleton, Z_Construct_UClass_UContentBrowserClassDataSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserClassDataSource.OuterSingleton;
	}
	template<> CONTENTBROWSERCLASSDATASOURCE_API UClass* StaticClass<UContentBrowserClassDataSource>()
	{
		return UContentBrowserClassDataSource::StaticClass();
	}
	UContentBrowserClassDataSource::UContentBrowserClassDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserClassDataSource);
	UContentBrowserClassDataSource::~UContentBrowserClassDataSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserCompiledClassDataFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserCompiledClassDataFilter_Statics::NewStructOps, TEXT("ContentBrowserCompiledClassDataFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserCompiledClassDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserCompiledClassDataFilter), 4101168625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserClassDataSource, UContentBrowserClassDataSource::StaticClass, TEXT("UContentBrowserClassDataSource"), &Z_Registration_Info_UClass_UContentBrowserClassDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserClassDataSource), 3748422368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_1117172632(TEXT("/Script/ContentBrowserClassDataSource"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ContentBrowser_ContentBrowserClassDataSource_Source_ContentBrowserClassDataSource_Public_ContentBrowserClassDataSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
