// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelExporterUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelExporterUSD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSD();
	USDEXPORTER_API UClass* Z_Construct_UClass_ULevelExporterUSD_NoRegister();
// End Cross Module References
	void ULevelExporterUSD::StaticRegisterNativesULevelExporterUSD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelExporterUSD);
	UClass* Z_Construct_UClass_ULevelExporterUSD_NoRegister()
	{
		return ULevelExporterUSD::StaticClass();
	}
	struct Z_Construct_UClass_ULevelExporterUSD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelExporterUSD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterUSD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelExporterUSD.h" },
		{ "ModuleRelativePath", "Public/LevelExporterUSD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelExporterUSD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelExporterUSD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelExporterUSD_Statics::ClassParams = {
		&ULevelExporterUSD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelExporterUSD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterUSD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelExporterUSD()
	{
		if (!Z_Registration_Info_UClass_ULevelExporterUSD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelExporterUSD.OuterSingleton, Z_Construct_UClass_ULevelExporterUSD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelExporterUSD.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<ULevelExporterUSD>()
	{
		return ULevelExporterUSD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelExporterUSD);
	ULevelExporterUSD::~ULevelExporterUSD() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelExporterUSD, ULevelExporterUSD::StaticClass, TEXT("ULevelExporterUSD"), &Z_Registration_Info_UClass_ULevelExporterUSD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelExporterUSD), 2414797342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_373734846(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_LevelExporterUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
