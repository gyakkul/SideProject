// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReimportSpeedTreeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSpeedTreeFactory() {}
// Cross Module References
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_UReimportSpeedTreeFactory();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportFactory();
	UPackage* Z_Construct_UPackage__Script_SpeedTreeImporter();
// End Cross Module References
	void UReimportSpeedTreeFactory::StaticRegisterNativesUReimportSpeedTreeFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportSpeedTreeFactory);
	UClass* Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister()
	{
		return UReimportSpeedTreeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSpeedTreeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpeedTreeImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ReimportSpeedTreeFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSpeedTreeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSpeedTreeFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::ClassParams = {
		&UReimportSpeedTreeFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSpeedTreeFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportSpeedTreeFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportSpeedTreeFactory.OuterSingleton, Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportSpeedTreeFactory.OuterSingleton;
	}
	template<> SPEEDTREEIMPORTER_API UClass* StaticClass<UReimportSpeedTreeFactory>()
	{
		return UReimportSpeedTreeFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSpeedTreeFactory);
	UReimportSpeedTreeFactory::~UReimportSpeedTreeFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportSpeedTreeFactory, UReimportSpeedTreeFactory::StaticClass, TEXT("UReimportSpeedTreeFactory"), &Z_Registration_Info_UClass_UReimportSpeedTreeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportSpeedTreeFactory), 2030815664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_3262896016(TEXT("/Script/SpeedTreeImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
