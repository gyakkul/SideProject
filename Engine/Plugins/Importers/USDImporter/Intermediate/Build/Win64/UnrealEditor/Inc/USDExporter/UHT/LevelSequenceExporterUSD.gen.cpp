// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceExporterUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceExporterUSD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelSequenceExporterUsd();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelSequenceExporterUsd_NoRegister();
// End Cross Module References
	void ULevelSequenceExporterUsd::StaticRegisterNativesULevelSequenceExporterUsd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceExporterUsd);
	UClass* Z_Construct_UClass_ULevelSequenceExporterUsd_NoRegister()
	{
		return ULevelSequenceExporterUsd::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceExporterUsd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSequenceExporterUSD.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceExporterUSD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceExporterUsd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::ClassParams = {
		&ULevelSequenceExporterUsd::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceExporterUsd()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceExporterUsd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceExporterUsd.OuterSingleton, Z_Construct_UClass_ULevelSequenceExporterUsd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceExporterUsd.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<ULevelSequenceExporterUsd>()
	{
		return ULevelSequenceExporterUsd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceExporterUsd);
	ULevelSequenceExporterUsd::~ULevelSequenceExporterUsd() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceExporterUsd, ULevelSequenceExporterUsd::StaticClass, TEXT("ULevelSequenceExporterUsd"), &Z_Registration_Info_UClass_ULevelSequenceExporterUsd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceExporterUsd), 4262269340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSD_h_3218093558(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelSequenceExporterUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
