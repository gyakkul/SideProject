// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MDLImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMDLImporterFactory() {}
// Cross Module References
	MDLIMPORTER_API UClass* Z_Construct_UClass_UMDLImporterFactory();
	MDLIMPORTER_API UClass* Z_Construct_UClass_UMDLImporterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MDLImporter();
// End Cross Module References
	void UMDLImporterFactory::StaticRegisterNativesUMDLImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMDLImporterFactory);
	UClass* Z_Construct_UClass_UMDLImporterFactory_NoRegister()
	{
		return UMDLImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMDLImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMDLImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MDLImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDLImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MDLImporterFactory.h" },
		{ "ModuleRelativePath", "Private/MDLImporterFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMDLImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDLImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDLImporterFactory_Statics::ClassParams = {
		&UMDLImporterFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMDLImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMDLImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMDLImporterFactory()
	{
		if (!Z_Registration_Info_UClass_UMDLImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDLImporterFactory.OuterSingleton, Z_Construct_UClass_UMDLImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMDLImporterFactory.OuterSingleton;
	}
	template<> MDLIMPORTER_API UClass* StaticClass<UMDLImporterFactory>()
	{
		return UMDLImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMDLImporterFactory);
	UMDLImporterFactory::~UMDLImporterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Private_MDLImporterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Private_MDLImporterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMDLImporterFactory, UMDLImporterFactory::StaticClass, TEXT("UMDLImporterFactory"), &Z_Registration_Info_UClass_UMDLImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDLImporterFactory), 429146551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Private_MDLImporterFactory_h_564848714(TEXT("/Script/MDLImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Private_MDLImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_MDLImporter_Source_MDLImporter_Private_MDLImporterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
