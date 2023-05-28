// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeSceneVariantSetsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneVariantSetsFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSceneVariantSetsFactory::StaticRegisterNativesUInterchangeSceneVariantSetsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneVariantSetsFactory);
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister()
	{
		return UInterchangeSceneVariantSetsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeSceneVariantSetsFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeSceneVariantSetsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneVariantSetsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::ClassParams = {
		&UInterchangeSceneVariantSetsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSceneVariantSetsFactory>()
	{
		return UInterchangeSceneVariantSetsFactory::StaticClass();
	}
	UInterchangeSceneVariantSetsFactory::UInterchangeSceneVariantSetsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneVariantSetsFactory);
	UInterchangeSceneVariantSetsFactory::~UInterchangeSceneVariantSetsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneVariantSetsFactory, UInterchangeSceneVariantSetsFactory::StaticClass, TEXT("UInterchangeSceneVariantSetsFactory"), &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneVariantSetsFactory), 1471788969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_4175457574(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
