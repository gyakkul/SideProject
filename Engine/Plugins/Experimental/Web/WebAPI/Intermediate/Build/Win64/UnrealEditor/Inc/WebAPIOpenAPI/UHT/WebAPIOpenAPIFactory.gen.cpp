// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/V3/WebAPIOpenAPIFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIOpenAPIFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIOpenAPI();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIAssetData();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIAssetData_NoRegister();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactory();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactory_NoRegister();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase();
// End Cross Module References
	void UWebAPIOpenAPIAssetData::StaticRegisterNativesUWebAPIOpenAPIAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOpenAPIAssetData);
	UClass* Z_Construct_UClass_UWebAPIOpenAPIAssetData_NoRegister()
	{
		return UWebAPIOpenAPIAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics
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
	UObject* (*const Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIOpenAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "V3/WebAPIOpenAPIFactory.h" },
		{ "ModuleRelativePath", "Private/V3/WebAPIOpenAPIFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::NewProp_FileContents_MetaData[] = {
		{ "ModuleRelativePath", "Private/V3/WebAPIOpenAPIFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOpenAPIAssetData, FileContents), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::NewProp_FileContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::NewProp_FileContents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::NewProp_FileContents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOpenAPIAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::ClassParams = {
		&UWebAPIOpenAPIAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOpenAPIAssetData()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOpenAPIAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOpenAPIAssetData.OuterSingleton, Z_Construct_UClass_UWebAPIOpenAPIAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOpenAPIAssetData.OuterSingleton;
	}
	template<> WEBAPIOPENAPI_API UClass* StaticClass<UWebAPIOpenAPIAssetData>()
	{
		return UWebAPIOpenAPIAssetData::StaticClass();
	}
	UWebAPIOpenAPIAssetData::UWebAPIOpenAPIAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOpenAPIAssetData);
	UWebAPIOpenAPIAssetData::~UWebAPIOpenAPIAssetData() {}
	void UWebAPIOpenAPIFactory::StaticRegisterNativesUWebAPIOpenAPIFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOpenAPIFactory);
	UClass* Z_Construct_UClass_UWebAPIOpenAPIFactory_NoRegister()
	{
		return UWebAPIOpenAPIFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIOpenAPIFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIOpenAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles importing for OpenAPI V2 files. */" },
		{ "IncludePath", "V3/WebAPIOpenAPIFactory.h" },
		{ "ModuleRelativePath", "Private/V3/WebAPIOpenAPIFactory.h" },
		{ "ToolTip", "Handles importing for OpenAPI V2 files." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOpenAPIFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::ClassParams = {
		&UWebAPIOpenAPIFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOpenAPIFactory()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOpenAPIFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOpenAPIFactory.OuterSingleton, Z_Construct_UClass_UWebAPIOpenAPIFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOpenAPIFactory.OuterSingleton;
	}
	template<> WEBAPIOPENAPI_API UClass* StaticClass<UWebAPIOpenAPIFactory>()
	{
		return UWebAPIOpenAPIFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOpenAPIFactory);
	UWebAPIOpenAPIFactory::~UWebAPIOpenAPIFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V3_WebAPIOpenAPIFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V3_WebAPIOpenAPIFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIOpenAPIAssetData, UWebAPIOpenAPIAssetData::StaticClass, TEXT("UWebAPIOpenAPIAssetData"), &Z_Registration_Info_UClass_UWebAPIOpenAPIAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOpenAPIAssetData), 2717178128U) },
		{ Z_Construct_UClass_UWebAPIOpenAPIFactory, UWebAPIOpenAPIFactory::StaticClass, TEXT("UWebAPIOpenAPIFactory"), &Z_Registration_Info_UClass_UWebAPIOpenAPIFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOpenAPIFactory), 972189349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V3_WebAPIOpenAPIFactory_h_1889724656(TEXT("/Script/WebAPIOpenAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V3_WebAPIOpenAPIFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_V3_WebAPIOpenAPIFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
