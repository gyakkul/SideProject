// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/AssetDefinition_ClothAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ClothAsset() {}
// Cross Module References
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ClothAsset();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ClothAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UAssetDefinition_ClothAsset::StaticRegisterNativesUAssetDefinition_ClothAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ClothAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_ClothAsset_NoRegister()
	{
		return UAssetDefinition_ClothAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosClothAsset/AssetDefinition_ClothAsset.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/AssetDefinition_ClothAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ClothAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::ClassParams = {
		&UAssetDefinition_ClothAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ClothAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ClothAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ClothAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ClothAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ClothAsset.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UAssetDefinition_ClothAsset>()
	{
		return UAssetDefinition_ClothAsset::StaticClass();
	}
	UAssetDefinition_ClothAsset::UAssetDefinition_ClothAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ClothAsset);
	UAssetDefinition_ClothAsset::~UAssetDefinition_ClothAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_AssetDefinition_ClothAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_AssetDefinition_ClothAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ClothAsset, UAssetDefinition_ClothAsset::StaticClass, TEXT("UAssetDefinition_ClothAsset"), &Z_Registration_Info_UClass_UAssetDefinition_ClothAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ClothAsset), 3895628780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_AssetDefinition_ClothAsset_h_4096083479(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_AssetDefinition_ClothAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_AssetDefinition_ClothAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
