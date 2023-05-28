// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/V2/WebAPISwaggerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPISwaggerFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIOpenAPI();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPISwaggerAssetData();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPISwaggerAssetData_NoRegister();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPISwaggerFactory();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPISwaggerFactory_NoRegister();
// End Cross Module References
	void UWebAPISwaggerAssetData::StaticRegisterNativesUWebAPISwaggerAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPISwaggerAssetData);
	UClass* Z_Construct_UClass_UWebAPISwaggerAssetData_NoRegister()
	{
		return UWebAPISwaggerAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPISwaggerAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileContents_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileContents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIOpenAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "V2/WebAPISwaggerFactory.h" },
		{ "ModuleRelativePath", "Private/V2/WebAPISwaggerFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::NewProp_FileContents_MetaData[] = {
		{ "ModuleRelativePath", "Private/V2/WebAPISwaggerFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISwaggerAssetData, FileContents), METADATA_PARAMS(Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::NewProp_FileContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::NewProp_FileContents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::NewProp_FileContents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPISwaggerAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::ClassParams = {
		&UWebAPISwaggerAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPISwaggerAssetData()
	{
		if (!Z_Registration_Info_UClass_UWebAPISwaggerAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPISwaggerAssetData.OuterSingleton, Z_Construct_UClass_UWebAPISwaggerAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPISwaggerAssetData.OuterSingleton;
	}
	template<> WEBAPIOPENAPI_API UClass* StaticClass<UWebAPISwaggerAssetData>()
	{
		return UWebAPISwaggerAssetData::StaticClass();
	}
	UWebAPISwaggerAssetData::UWebAPISwaggerAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPISwaggerAssetData);
	UWebAPISwaggerAssetData::~UWebAPISwaggerAssetData() {}
	void UWebAPISwaggerFactory::StaticRegisterNativesUWebAPISwaggerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPISwaggerFactory);
	UClass* Z_Construct_UClass_UWebAPISwaggerFactory_NoRegister()
	{
		return UWebAPISwaggerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPISwaggerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPISwaggerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIOpenAPIFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIOpenAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISwaggerFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles importing for Swagger (OpenAPI V2) files. */" },
		{ "IncludePath", "V2/WebAPISwaggerFactory.h" },
		{ "ModuleRelativePath", "Private/V2/WebAPISwaggerFactory.h" },
		{ "ToolTip", "Handles importing for Swagger (OpenAPI V2) files." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPISwaggerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPISwaggerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPISwaggerFactory_Statics::ClassParams = {
		&UWebAPISwaggerFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPISwaggerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISwaggerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPISwaggerFactory()
	{
		if (!Z_Registration_Info_UClass_UWebAPISwaggerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPISwaggerFactory.OuterSingleton, Z_Construct_UClass_UWebAPISwaggerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPISwaggerFactory.OuterSingleton;
	}
	template<> WEBAPIOPENAPI_API UClass* StaticClass<UWebAPISwaggerFactory>()
	{
		return UWebAPISwaggerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPISwaggerFactory);
	UWebAPISwaggerFactory::~UWebAPISwaggerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V2_WebAPISwaggerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V2_WebAPISwaggerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPISwaggerAssetData, UWebAPISwaggerAssetData::StaticClass, TEXT("UWebAPISwaggerAssetData"), &Z_Registration_Info_UClass_UWebAPISwaggerAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPISwaggerAssetData), 2324144313U) },
		{ Z_Construct_UClass_UWebAPISwaggerFactory, UWebAPISwaggerFactory::StaticClass, TEXT("UWebAPISwaggerFactory"), &Z_Registration_Info_UClass_UWebAPISwaggerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPISwaggerFactory), 303805352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V2_WebAPISwaggerFactory_h_2550212474(TEXT("/Script/WebAPIOpenAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V2_WebAPISwaggerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V2_WebAPISwaggerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
