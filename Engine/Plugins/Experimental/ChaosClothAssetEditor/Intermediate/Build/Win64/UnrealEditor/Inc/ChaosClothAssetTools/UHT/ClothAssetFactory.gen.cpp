// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChaosClothAsset/ClothAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothAssetFactory() {}
// Cross Module References
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetFactory();
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UChaosClothAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetTools();
// End Cross Module References
	void UChaosClothAssetFactory::StaticRegisterNativesUChaosClothAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetFactory);
	UClass* Z_Construct_UClass_UChaosClothAssetFactory_NoRegister()
	{
		return UChaosClothAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Having a cloth factory allows the cloth asset to be created from the Editor's menus.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ChaosClothAsset/ClothAssetFactory.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Having a cloth factory allows the cloth asset to be created from the Editor's menus." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetFactory_Statics::ClassParams = {
		&UChaosClothAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetFactory.OuterSingleton, Z_Construct_UClass_UChaosClothAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetFactory.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETTOOLS_API UClass* StaticClass<UChaosClothAssetFactory>()
	{
		return UChaosClothAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetFactory);
	UChaosClothAssetFactory::~UChaosClothAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetFactory, UChaosClothAssetFactory::StaticClass, TEXT("UChaosClothAssetFactory"), &Z_Registration_Info_UClass_UChaosClothAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetFactory), 931402434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetFactory_h_1534194616(TEXT("/Script/ChaosClothAssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
