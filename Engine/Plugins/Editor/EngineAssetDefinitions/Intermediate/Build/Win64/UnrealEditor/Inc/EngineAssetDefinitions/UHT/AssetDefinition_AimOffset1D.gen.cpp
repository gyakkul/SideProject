// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AimOffset1D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AimOffset1D() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AimOffset1D();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AimOffset1D_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_BlendSpace1D();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AimOffset1D::StaticRegisterNativesUAssetDefinition_AimOffset1D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AimOffset1D);
	UClass* Z_Construct_UClass_UAssetDefinition_AimOffset1D_NoRegister()
	{
		return UAssetDefinition_AimOffset1D::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_BlendSpace1D,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AimOffset1D.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AimOffset1D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AimOffset1D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::ClassParams = {
		&UAssetDefinition_AimOffset1D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AimOffset1D()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AimOffset1D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AimOffset1D.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AimOffset1D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AimOffset1D.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AimOffset1D>()
	{
		return UAssetDefinition_AimOffset1D::StaticClass();
	}
	UAssetDefinition_AimOffset1D::UAssetDefinition_AimOffset1D() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AimOffset1D);
	UAssetDefinition_AimOffset1D::~UAssetDefinition_AimOffset1D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AimOffset1D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AimOffset1D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AimOffset1D, UAssetDefinition_AimOffset1D::StaticClass, TEXT("UAssetDefinition_AimOffset1D"), &Z_Registration_Info_UClass_UAssetDefinition_AimOffset1D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AimOffset1D), 1952689996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AimOffset1D_h_1479289847(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AimOffset1D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AimOffset1D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
