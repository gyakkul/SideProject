// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterSplineMetadataDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterSplineMetadataDetails() {}
// Cross Module References
	DETAILCUSTOMIZATIONS_API UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterSplineMetadataDetailsFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_NoRegister();
// End Cross Module References
	void UWaterSplineMetadataDetailsFactory::StaticRegisterNativesUWaterSplineMetadataDetailsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterSplineMetadataDetailsFactory);
	UClass* Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_NoRegister()
	{
		return UWaterSplineMetadataDetailsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadataDetailsFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterSplineMetadataDetails.h" },
		{ "ModuleRelativePath", "Private/WaterSplineMetadataDetails.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterSplineMetadataDetailsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::ClassParams = {
		&UWaterSplineMetadataDetailsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterSplineMetadataDetailsFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterSplineMetadataDetailsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterSplineMetadataDetailsFactory.OuterSingleton, Z_Construct_UClass_UWaterSplineMetadataDetailsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterSplineMetadataDetailsFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterSplineMetadataDetailsFactory>()
	{
		return UWaterSplineMetadataDetailsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterSplineMetadataDetailsFactory);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterSplineMetadataDetailsFactory, UWaterSplineMetadataDetailsFactory::StaticClass, TEXT("UWaterSplineMetadataDetailsFactory"), &Z_Registration_Info_UClass_UWaterSplineMetadataDetailsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterSplineMetadataDetailsFactory), 3294607194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_898163430(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineMetadataDetails_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
