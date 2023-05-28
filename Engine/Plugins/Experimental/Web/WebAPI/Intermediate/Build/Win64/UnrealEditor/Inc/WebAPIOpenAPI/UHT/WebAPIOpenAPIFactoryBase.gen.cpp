// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/WebAPIOpenAPIFactoryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIOpenAPIFactoryBase() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIOpenAPI();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinitionFactory();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase();
	WEBAPIOPENAPI_API UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_NoRegister();
// End Cross Module References
	void UWebAPIOpenAPIFactoryBase::StaticRegisterNativesUWebAPIOpenAPIFactoryBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOpenAPIFactoryBase);
	UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_NoRegister()
	{
		return UWebAPIOpenAPIFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIDefinitionFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIOpenAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common base factory between Swagger and OpenAPI factories. */" },
		{ "IncludePath", "Factories/WebAPIOpenAPIFactoryBase.h" },
		{ "ModuleRelativePath", "Private/Factories/WebAPIOpenAPIFactoryBase.h" },
		{ "ToolTip", "Common base factory between Swagger and OpenAPI factories." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOpenAPIFactoryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::ClassParams = {
		&UWebAPIOpenAPIFactoryBase::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOpenAPIFactoryBase()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOpenAPIFactoryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOpenAPIFactoryBase.OuterSingleton, Z_Construct_UClass_UWebAPIOpenAPIFactoryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOpenAPIFactoryBase.OuterSingleton;
	}
	template<> WEBAPIOPENAPI_API UClass* StaticClass<UWebAPIOpenAPIFactoryBase>()
	{
		return UWebAPIOpenAPIFactoryBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOpenAPIFactoryBase);
	UWebAPIOpenAPIFactoryBase::~UWebAPIOpenAPIFactoryBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIOpenAPIFactoryBase, UWebAPIOpenAPIFactoryBase::StaticClass, TEXT("UWebAPIOpenAPIFactoryBase"), &Z_Registration_Info_UClass_UWebAPIOpenAPIFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOpenAPIFactoryBase), 3183997694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_912634030(TEXT("/Script/WebAPIOpenAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIOpenAPI_Private_Factories_WebAPIOpenAPIFactoryBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
