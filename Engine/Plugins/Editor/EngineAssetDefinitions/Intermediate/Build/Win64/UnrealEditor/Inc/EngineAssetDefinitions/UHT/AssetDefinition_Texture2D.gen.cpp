// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_Texture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Texture2D() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture2D();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Texture2D::StaticRegisterNativesUAssetDefinition_Texture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Texture2D);
	UClass* Z_Construct_UClass_UAssetDefinition_Texture2D_NoRegister()
	{
		return UAssetDefinition_Texture2D::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Texture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_Texture2D.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_Texture2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Texture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::ClassParams = {
		&UAssetDefinition_Texture2D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Texture2D()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Texture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Texture2D.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Texture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Texture2D.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Texture2D>()
	{
		return UAssetDefinition_Texture2D::StaticClass();
	}
	UAssetDefinition_Texture2D::UAssetDefinition_Texture2D() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Texture2D);
	UAssetDefinition_Texture2D::~UAssetDefinition_Texture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Texture2D, UAssetDefinition_Texture2D::StaticClass, TEXT("UAssetDefinition_Texture2D"), &Z_Registration_Info_UClass_UAssetDefinition_Texture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Texture2D), 989393400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2D_h_1556208040(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
