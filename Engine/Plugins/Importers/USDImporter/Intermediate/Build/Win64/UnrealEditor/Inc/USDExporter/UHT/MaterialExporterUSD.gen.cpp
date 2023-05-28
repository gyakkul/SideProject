// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialExporterUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExporterUSD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUsd();
	USDEXPORTER_API UClass* Z_Construct_UClass_UMaterialExporterUsd_NoRegister();
// End Cross Module References
	void UMaterialExporterUsd::StaticRegisterNativesUMaterialExporterUsd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExporterUsd);
	UClass* Z_Construct_UClass_UMaterialExporterUsd_NoRegister()
	{
		return UMaterialExporterUsd::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExporterUsd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExporterUsd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExporterUsd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialExporterUSD.h" },
		{ "ModuleRelativePath", "Public/MaterialExporterUSD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExporterUsd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExporterUsd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExporterUsd_Statics::ClassParams = {
		&UMaterialExporterUsd::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExporterUsd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExporterUsd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExporterUsd()
	{
		if (!Z_Registration_Info_UClass_UMaterialExporterUsd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExporterUsd.OuterSingleton, Z_Construct_UClass_UMaterialExporterUsd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExporterUsd.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UMaterialExporterUsd>()
	{
		return UMaterialExporterUsd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExporterUsd);
	UMaterialExporterUsd::~UMaterialExporterUsd() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExporterUsd, UMaterialExporterUsd::StaticClass, TEXT("UMaterialExporterUsd"), &Z_Registration_Info_UClass_UMaterialExporterUsd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExporterUsd), 2508976039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_559564880(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_MaterialExporterUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
