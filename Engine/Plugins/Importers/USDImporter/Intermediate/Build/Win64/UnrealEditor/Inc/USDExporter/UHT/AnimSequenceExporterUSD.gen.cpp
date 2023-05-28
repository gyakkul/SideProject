// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequenceExporterUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceExporterUSD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSD();
	USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSD_NoRegister();
// End Cross Module References
	void UAnimSequenceExporterUSD::StaticRegisterNativesUAnimSequenceExporterUSD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceExporterUSD);
	UClass* Z_Construct_UClass_UAnimSequenceExporterUSD_NoRegister()
	{
		return UAnimSequenceExporterUSD::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceExporterUSD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimSequenceExporterUSD.h" },
		{ "ModuleRelativePath", "Public/AnimSequenceExporterUSD.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceExporterUSD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::ClassParams = {
		&UAnimSequenceExporterUSD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceExporterUSD()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceExporterUSD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceExporterUSD.OuterSingleton, Z_Construct_UClass_UAnimSequenceExporterUSD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceExporterUSD.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UAnimSequenceExporterUSD>()
	{
		return UAnimSequenceExporterUSD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceExporterUSD);
	UAnimSequenceExporterUSD::~UAnimSequenceExporterUSD() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceExporterUSD, UAnimSequenceExporterUSD::StaticClass, TEXT("UAnimSequenceExporterUSD"), &Z_Registration_Info_UClass_UAnimSequenceExporterUSD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceExporterUSD), 4275348942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_4211830358(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
