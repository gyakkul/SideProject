// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AnimMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AnimMontage() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimMontage();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AnimMontage::StaticRegisterNativesUAssetDefinition_AnimMontage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AnimMontage);
	UClass* Z_Construct_UClass_UAssetDefinition_AnimMontage_NoRegister()
	{
		return UAssetDefinition_AnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_AnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AnimMontage.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AnimMontage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AnimMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::ClassParams = {
		&UAssetDefinition_AnimMontage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AnimMontage()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AnimMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AnimMontage.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AnimMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AnimMontage.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AnimMontage>()
	{
		return UAssetDefinition_AnimMontage::StaticClass();
	}
	UAssetDefinition_AnimMontage::UAssetDefinition_AnimMontage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AnimMontage);
	UAssetDefinition_AnimMontage::~UAssetDefinition_AnimMontage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AnimMontage, UAssetDefinition_AnimMontage::StaticClass, TEXT("UAssetDefinition_AnimMontage"), &Z_Registration_Info_UClass_UAssetDefinition_AnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AnimMontage), 3515007696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_1453076614(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
