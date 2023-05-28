// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_PhysicsAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_PhysicsAsset() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PhysicsAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PhysicsAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_PhysicsAsset::StaticRegisterNativesUAssetDefinition_PhysicsAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_PhysicsAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_PhysicsAsset_NoRegister()
	{
		return UAssetDefinition_PhysicsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_PhysicsAsset.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_PhysicsAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_PhysicsAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::ClassParams = {
		&UAssetDefinition_PhysicsAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_PhysicsAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_PhysicsAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_PhysicsAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_PhysicsAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_PhysicsAsset.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_PhysicsAsset>()
	{
		return UAssetDefinition_PhysicsAsset::StaticClass();
	}
	UAssetDefinition_PhysicsAsset::UAssetDefinition_PhysicsAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_PhysicsAsset);
	UAssetDefinition_PhysicsAsset::~UAssetDefinition_PhysicsAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_PhysicsAsset, UAssetDefinition_PhysicsAsset::StaticClass, TEXT("UAssetDefinition_PhysicsAsset"), &Z_Registration_Info_UClass_UAssetDefinition_PhysicsAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_PhysicsAsset), 3595015591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_238128185(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicsAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
