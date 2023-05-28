// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTrackUSD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackUSD() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheTrackUsd();
	GEOMETRYCACHEUSD_API UClass* Z_Construct_UClass_UGeometryCacheTrackUsd_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheUSD();
// End Cross Module References
	void UGeometryCacheTrackUsd::StaticRegisterNativesUGeometryCacheTrackUsd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheTrackUsd);
	UClass* Z_Construct_UClass_UGeometryCacheTrackUsd_NoRegister()
	{
		return UGeometryCacheTrackUsd::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheTrackUsd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheUSD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** GeometryCacheTrack for querying USD */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackUSD.h" },
		{ "ModuleRelativePath", "Public/GeometryCacheTrackUSD.h" },
		{ "ToolTip", "GeometryCacheTrack for querying USD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheTrackUsd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::ClassParams = {
		&UGeometryCacheTrackUsd::StaticClass,
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
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheTrackUsd()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheTrackUsd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheTrackUsd.OuterSingleton, Z_Construct_UClass_UGeometryCacheTrackUsd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheTrackUsd.OuterSingleton;
	}
	template<> GEOMETRYCACHEUSD_API UClass* StaticClass<UGeometryCacheTrackUsd>()
	{
		return UGeometryCacheTrackUsd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheTrackUsd);
	UGeometryCacheTrackUsd::~UGeometryCacheTrackUsd() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheTrackUsd, UGeometryCacheTrackUsd::StaticClass, TEXT("UGeometryCacheTrackUsd"), &Z_Registration_Info_UClass_UGeometryCacheTrackUsd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheTrackUsd), 2452161232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_605910292(TEXT("/Script/GeometryCacheUSD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_GeometryCacheUSD_Public_GeometryCacheTrackUSD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
