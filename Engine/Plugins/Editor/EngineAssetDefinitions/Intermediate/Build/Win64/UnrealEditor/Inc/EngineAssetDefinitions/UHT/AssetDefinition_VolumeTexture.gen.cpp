// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_VolumeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VolumeTexture() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_VolumeTexture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_VolumeTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_VolumeTexture::StaticRegisterNativesUAssetDefinition_VolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VolumeTexture);
	UClass* Z_Construct_UClass_UAssetDefinition_VolumeTexture_NoRegister()
	{
		return UAssetDefinition_VolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_VolumeTexture.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_VolumeTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::ClassParams = {
		&UAssetDefinition_VolumeTexture::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_VolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_VolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VolumeTexture.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_VolumeTexture.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_VolumeTexture>()
	{
		return UAssetDefinition_VolumeTexture::StaticClass();
	}
	UAssetDefinition_VolumeTexture::UAssetDefinition_VolumeTexture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VolumeTexture);
	UAssetDefinition_VolumeTexture::~UAssetDefinition_VolumeTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VolumeTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VolumeTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VolumeTexture, UAssetDefinition_VolumeTexture::StaticClass, TEXT("UAssetDefinition_VolumeTexture"), &Z_Registration_Info_UClass_UAssetDefinition_VolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VolumeTexture), 141499725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VolumeTexture_h_394290587(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VolumeTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
