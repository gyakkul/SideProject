// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterWavesAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterWavesAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterWavesAssetFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterWavesAssetFactory_NoRegister();
// End Cross Module References
	void UWaterWavesAssetFactory::StaticRegisterNativesUWaterWavesAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterWavesAssetFactory);
	UClass* Z_Construct_UClass_UWaterWavesAssetFactory_NoRegister()
	{
		return UWaterWavesAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterWavesAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterWavesAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterWavesAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterWavesAssetFactory.h" },
		{ "ModuleRelativePath", "Private/WaterWavesAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterWavesAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterWavesAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterWavesAssetFactory_Statics::ClassParams = {
		&UWaterWavesAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaterWavesAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterWavesAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterWavesAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterWavesAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterWavesAssetFactory.OuterSingleton, Z_Construct_UClass_UWaterWavesAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterWavesAssetFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterWavesAssetFactory>()
	{
		return UWaterWavesAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterWavesAssetFactory);
	UWaterWavesAssetFactory::~UWaterWavesAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterWavesAssetFactory, UWaterWavesAssetFactory::StaticClass, TEXT("UWaterWavesAssetFactory"), &Z_Registration_Info_UClass_UWaterWavesAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterWavesAssetFactory), 1353991676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_2912743993(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterWavesAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
