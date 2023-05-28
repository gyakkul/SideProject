// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/WebAPIDefinitionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIDefinitionFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinitionFactory();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIDefinitionFactory_NoRegister();
// End Cross Module References
	void UWebAPIDefinitionFactory::StaticRegisterNativesUWebAPIDefinitionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIDefinitionFactory);
	UClass* Z_Construct_UClass_UWebAPIDefinitionFactory_NoRegister()
	{
		return UWebAPIDefinitionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIDefinitionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base Factory for WebAPIDefinition. */" },
		{ "IncludePath", "Factories/WebAPIDefinitionFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/WebAPIDefinitionFactory.h" },
		{ "ToolTip", "Base Factory for WebAPIDefinition." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIDefinitionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::ClassParams = {
		&UWebAPIDefinitionFactory::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIDefinitionFactory()
	{
		if (!Z_Registration_Info_UClass_UWebAPIDefinitionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIDefinitionFactory.OuterSingleton, Z_Construct_UClass_UWebAPIDefinitionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIDefinitionFactory.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIDefinitionFactory>()
	{
		return UWebAPIDefinitionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIDefinitionFactory);
	UWebAPIDefinitionFactory::~UWebAPIDefinitionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIDefinitionFactory, UWebAPIDefinitionFactory::StaticClass, TEXT("UWebAPIDefinitionFactory"), &Z_Registration_Info_UClass_UWebAPIDefinitionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIDefinitionFactory), 787912121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_1477652922(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Factories_WebAPIDefinitionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
