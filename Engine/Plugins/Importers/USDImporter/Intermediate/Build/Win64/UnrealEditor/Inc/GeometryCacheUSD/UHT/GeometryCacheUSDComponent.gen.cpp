// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheUSDComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheUSDComponent() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent();
	GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheUsdComponent();
	GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheUsdComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheUSD();
// End Cross Module References
	void UGeometryCacheUsdComponent::StaticRegisterNativesUGeometryCacheUsdComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheUsdComponent);
	UClass* Z_Construct_UClass_UGeometryCacheUsdComponent_NoRegister()
	{
		return UGeometryCacheUsdComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheUsdComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheUSD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Experimental" },
		{ "Comment", "/** GeometryCacheUSDComponent, encapsulates a transient GeometryCache asset instance that fetches its data from a USD file and implements functionality for rendering and playback */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "USD Geometry Cache" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "GeometryCacheUSDComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCacheUSDComponent.h" },
		{ "ToolTip", "GeometryCacheUSDComponent, encapsulates a transient GeometryCache asset instance that fetches its data from a USD file and implements functionality for rendering and playback" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheUsdComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::ClassParams = {
		&UGeometryCacheUsdComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x04B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheUsdComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheUsdComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheUsdComponent.OuterSingleton, Z_Construct_UClass_UGeometryCacheUsdComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheUsdComponent.OuterSingleton;
	}
	template<> GEOMETRYCACHEUSD_API UClass* StaticClass<UGeometryCacheUsdComponent>()
	{
		return UGeometryCacheUsdComponent::StaticClass();
	}
	UGeometryCacheUsdComponent::UGeometryCacheUsdComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheUsdComponent);
	UGeometryCacheUsdComponent::~UGeometryCacheUsdComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheUsdComponent, UGeometryCacheUsdComponent::StaticClass, TEXT("UGeometryCacheUsdComponent"), &Z_Registration_Info_UClass_UGeometryCacheUsdComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheUsdComponent), 705419305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_1974541581(TEXT("/Script/GeometryCacheUSD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheUSDComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
