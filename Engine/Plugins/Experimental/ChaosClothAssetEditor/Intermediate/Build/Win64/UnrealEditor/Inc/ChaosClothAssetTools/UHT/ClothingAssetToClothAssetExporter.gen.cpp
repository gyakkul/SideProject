// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChaosClothAsset/ClothingAssetToClothAssetExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetToClothAssetExporter() {}
// Cross Module References
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter();
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_NoRegister();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothingAssetExporter();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetTools();
// End Cross Module References
	void UClothingAssetToChaosClothAssetExporter::StaticRegisterNativesUClothingAssetToChaosClothAssetExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetToChaosClothAssetExporter);
	UClass* Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_NoRegister()
	{
		return UClothingAssetToChaosClothAssetExporter::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implement a clothing asset exporter as a way to migrate clothing assets to the new Chaos Cloth asset format.\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothingAssetToClothAssetExporter.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothingAssetToClothAssetExporter.h" },
		{ "ToolTip", "Implement a clothing asset exporter as a way to migrate clothing assets to the new Chaos Cloth asset format." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetToChaosClothAssetExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::ClassParams = {
		&UClothingAssetToChaosClothAssetExporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetToChaosClothAssetExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetToChaosClothAssetExporter.OuterSingleton, Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetToChaosClothAssetExporter.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETTOOLS_API UClass* StaticClass<UClothingAssetToChaosClothAssetExporter>()
	{
		return UClothingAssetToChaosClothAssetExporter::StaticClass();
	}
	UClothingAssetToChaosClothAssetExporter::UClothingAssetToChaosClothAssetExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetToChaosClothAssetExporter);
	UClothingAssetToChaosClothAssetExporter::~UClothingAssetToChaosClothAssetExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothingAssetToClothAssetExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothingAssetToClothAssetExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetToChaosClothAssetExporter, UClothingAssetToChaosClothAssetExporter::StaticClass, TEXT("UClothingAssetToChaosClothAssetExporter"), &Z_Registration_Info_UClass_UClothingAssetToChaosClothAssetExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetToChaosClothAssetExporter), 2797335260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothingAssetToClothAssetExporter_h_3038311602(TEXT("/Script/ChaosClothAssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothingAssetToClothAssetExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothingAssetToClothAssetExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
