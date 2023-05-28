// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_PoseAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_PoseAsset() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PoseAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PoseAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_PoseAsset::StaticRegisterNativesUAssetDefinition_PoseAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_PoseAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_PoseAsset_NoRegister()
	{
		return UAssetDefinition_PoseAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_AnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_PoseAsset.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_PoseAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_PoseAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::ClassParams = {
		&UAssetDefinition_PoseAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_PoseAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_PoseAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_PoseAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_PoseAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_PoseAsset.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_PoseAsset>()
	{
		return UAssetDefinition_PoseAsset::StaticClass();
	}
	UAssetDefinition_PoseAsset::UAssetDefinition_PoseAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_PoseAsset);
	UAssetDefinition_PoseAsset::~UAssetDefinition_PoseAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_PoseAsset, UAssetDefinition_PoseAsset::StaticClass, TEXT("UAssetDefinition_PoseAsset"), &Z_Registration_Info_UClass_UAssetDefinition_PoseAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_PoseAsset), 3129606436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_1234563606(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_PoseAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
