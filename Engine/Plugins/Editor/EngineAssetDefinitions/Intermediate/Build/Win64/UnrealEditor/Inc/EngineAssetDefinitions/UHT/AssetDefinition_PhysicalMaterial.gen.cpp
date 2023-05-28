// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_PhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_PhysicalMaterial() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PhysicalMaterial();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_PhysicalMaterial::StaticRegisterNativesUAssetDefinition_PhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_PhysicalMaterial);
	UClass* Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_NoRegister()
	{
		return UAssetDefinition_PhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_PhysicalMaterial.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_PhysicalMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_PhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::ClassParams = {
		&UAssetDefinition_PhysicalMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_PhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_PhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_PhysicalMaterial.OuterSingleton, Z_Construct_UClass_UAssetDefinition_PhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_PhysicalMaterial.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_PhysicalMaterial>()
	{
		return UAssetDefinition_PhysicalMaterial::StaticClass();
	}
	UAssetDefinition_PhysicalMaterial::UAssetDefinition_PhysicalMaterial() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_PhysicalMaterial);
	UAssetDefinition_PhysicalMaterial::~UAssetDefinition_PhysicalMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicalMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_PhysicalMaterial, UAssetDefinition_PhysicalMaterial::StaticClass, TEXT("UAssetDefinition_PhysicalMaterial"), &Z_Registration_Info_UClass_UAssetDefinition_PhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_PhysicalMaterial), 3360497770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicalMaterial_h_2081065029(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_PhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
