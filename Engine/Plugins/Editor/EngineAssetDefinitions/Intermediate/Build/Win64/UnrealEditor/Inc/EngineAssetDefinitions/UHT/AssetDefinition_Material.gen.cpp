// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Material/AssetDefinition_Material.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Material() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Material();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Material_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInterface();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Material::StaticRegisterNativesUAssetDefinition_Material()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Material);
	UClass* Z_Construct_UClass_UAssetDefinition_Material_NoRegister()
	{
		return UAssetDefinition_Material::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Material_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Material_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_MaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Material_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Material/AssetDefinition_Material.h" },
		{ "ModuleRelativePath", "Private/Material/AssetDefinition_Material.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Material_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Material>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Material_Statics::ClassParams = {
		&UAssetDefinition_Material::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Material_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Material_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Material()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Material.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Material.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Material_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Material.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Material>()
	{
		return UAssetDefinition_Material::StaticClass();
	}
	UAssetDefinition_Material::UAssetDefinition_Material() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Material);
	UAssetDefinition_Material::~UAssetDefinition_Material() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Material, UAssetDefinition_Material::StaticClass, TEXT("UAssetDefinition_Material"), &Z_Registration_Info_UClass_UAssetDefinition_Material, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Material), 941097464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_1281118139(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_Material_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
