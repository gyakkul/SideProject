// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TextureCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TextureCube() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureCube();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_TextureCube::StaticRegisterNativesUAssetDefinition_TextureCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TextureCube);
	UClass* Z_Construct_UClass_UAssetDefinition_TextureCube_NoRegister()
	{
		return UAssetDefinition_TextureCube::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TextureCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TextureCube.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TextureCube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TextureCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::ClassParams = {
		&UAssetDefinition_TextureCube::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TextureCube()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TextureCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TextureCube.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TextureCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TextureCube.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_TextureCube>()
	{
		return UAssetDefinition_TextureCube::StaticClass();
	}
	UAssetDefinition_TextureCube::UAssetDefinition_TextureCube() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TextureCube);
	UAssetDefinition_TextureCube::~UAssetDefinition_TextureCube() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TextureCube, UAssetDefinition_TextureCube::StaticClass, TEXT("UAssetDefinition_TextureCube"), &Z_Registration_Info_UClass_UAssetDefinition_TextureCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TextureCube), 567313098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_1797480657(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
