// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/USDAssetCacheFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDAssetCacheFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_USDClassesEditor();
	USDCLASSESEDITOR_API UClass* Z_Construct_UClass_UUsdAssetCacheFactory();
	USDCLASSESEDITOR_API UClass* Z_Construct_UClass_UUsdAssetCacheFactory_NoRegister();
// End Cross Module References
	void UUsdAssetCacheFactory::StaticRegisterNativesUUsdAssetCacheFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdAssetCacheFactory);
	UClass* Z_Construct_UClass_UUsdAssetCacheFactory_NoRegister()
	{
		return UUsdAssetCacheFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUsdAssetCacheFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdAssetCacheFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_USDClassesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdAssetCacheFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "USDAssetCacheFactory.h" },
		{ "ModuleRelativePath", "Private/USDAssetCacheFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdAssetCacheFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdAssetCacheFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdAssetCacheFactory_Statics::ClassParams = {
		&UUsdAssetCacheFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdAssetCacheFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdAssetCacheFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdAssetCacheFactory()
	{
		if (!Z_Registration_Info_UClass_UUsdAssetCacheFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdAssetCacheFactory.OuterSingleton, Z_Construct_UClass_UUsdAssetCacheFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdAssetCacheFactory.OuterSingleton;
	}
	template<> USDCLASSESEDITOR_API UClass* StaticClass<UUsdAssetCacheFactory>()
	{
		return UUsdAssetCacheFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdAssetCacheFactory);
	UUsdAssetCacheFactory::~UUsdAssetCacheFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdAssetCacheFactory, UUsdAssetCacheFactory::StaticClass, TEXT("UUsdAssetCacheFactory"), &Z_Registration_Info_UClass_UUsdAssetCacheFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdAssetCacheFactory), 698239899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_168469804(TEXT("/Script/USDClassesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDClassesEditor_Private_USDAssetCacheFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
