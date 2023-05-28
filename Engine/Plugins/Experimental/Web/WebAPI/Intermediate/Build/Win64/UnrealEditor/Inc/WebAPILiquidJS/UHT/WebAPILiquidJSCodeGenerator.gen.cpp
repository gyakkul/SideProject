// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WebAPILiquidJSCodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPILiquidJSCodeGenerator() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPILiquidJS();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase();
	WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSCodeGenerator();
	WEBAPILIQUIDJS_API UClass* Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_NoRegister();
// End Cross Module References
	void UWebAPILiquidJSCodeGenerator::StaticRegisterNativesUWebAPILiquidJSCodeGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPILiquidJSCodeGenerator);
	UClass* Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_NoRegister()
	{
		return UWebAPILiquidJSCodeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPICodeGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPILiquidJS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebAPILiquidJSCodeGenerator.h" },
		{ "ModuleRelativePath", "Private/WebAPILiquidJSCodeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPILiquidJSCodeGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::ClassParams = {
		&UWebAPILiquidJSCodeGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPILiquidJSCodeGenerator()
	{
		if (!Z_Registration_Info_UClass_UWebAPILiquidJSCodeGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPILiquidJSCodeGenerator.OuterSingleton, Z_Construct_UClass_UWebAPILiquidJSCodeGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPILiquidJSCodeGenerator.OuterSingleton;
	}
	template<> WEBAPILIQUIDJS_API UClass* StaticClass<UWebAPILiquidJSCodeGenerator>()
	{
		return UWebAPILiquidJSCodeGenerator::StaticClass();
	}
	UWebAPILiquidJSCodeGenerator::UWebAPILiquidJSCodeGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPILiquidJSCodeGenerator);
	UWebAPILiquidJSCodeGenerator::~UWebAPILiquidJSCodeGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPILiquidJSCodeGenerator, UWebAPILiquidJSCodeGenerator::StaticClass, TEXT("UWebAPILiquidJSCodeGenerator"), &Z_Registration_Info_UClass_UWebAPILiquidJSCodeGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPILiquidJSCodeGenerator), 1315590399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_3928147662(TEXT("/Script/WebAPILiquidJS"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPILiquidJS_Private_WebAPILiquidJSCodeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
