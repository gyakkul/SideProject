// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Material/AssetDefinition_MaterialInstanceConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MaterialInstanceConstant() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInterface();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_MaterialInstanceConstant::StaticRegisterNativesUAssetDefinition_MaterialInstanceConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MaterialInstanceConstant);
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_NoRegister()
	{
		return UAssetDefinition_MaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_MaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Material/AssetDefinition_MaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Private/Material/AssetDefinition_MaterialInstanceConstant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MaterialInstanceConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::ClassParams = {
		&UAssetDefinition_MaterialInstanceConstant::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceConstant.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceConstant.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_MaterialInstanceConstant>()
	{
		return UAssetDefinition_MaterialInstanceConstant::StaticClass();
	}
	UAssetDefinition_MaterialInstanceConstant::UAssetDefinition_MaterialInstanceConstant() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MaterialInstanceConstant);
	UAssetDefinition_MaterialInstanceConstant::~UAssetDefinition_MaterialInstanceConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MaterialInstanceConstant, UAssetDefinition_MaterialInstanceConstant::StaticClass, TEXT("UAssetDefinition_MaterialInstanceConstant"), &Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MaterialInstanceConstant), 3737441877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_2882991323(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceConstant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
