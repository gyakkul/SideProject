// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TextureLightProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TextureLightProfile() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureLightProfile();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureLightProfile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_TextureLightProfile::StaticRegisterNativesUAssetDefinition_TextureLightProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TextureLightProfile);
	UClass* Z_Construct_UClass_UAssetDefinition_TextureLightProfile_NoRegister()
	{
		return UAssetDefinition_TextureLightProfile::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TextureLightProfile.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TextureLightProfile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TextureLightProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::ClassParams = {
		&UAssetDefinition_TextureLightProfile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TextureLightProfile()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TextureLightProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TextureLightProfile.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TextureLightProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TextureLightProfile.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_TextureLightProfile>()
	{
		return UAssetDefinition_TextureLightProfile::StaticClass();
	}
	UAssetDefinition_TextureLightProfile::UAssetDefinition_TextureLightProfile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TextureLightProfile);
	UAssetDefinition_TextureLightProfile::~UAssetDefinition_TextureLightProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureLightProfile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureLightProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TextureLightProfile, UAssetDefinition_TextureLightProfile::StaticClass, TEXT("UAssetDefinition_TextureLightProfile"), &Z_Registration_Info_UClass_UAssetDefinition_TextureLightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TextureLightProfile), 2061634808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureLightProfile_h_119903537(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureLightProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureLightProfile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
