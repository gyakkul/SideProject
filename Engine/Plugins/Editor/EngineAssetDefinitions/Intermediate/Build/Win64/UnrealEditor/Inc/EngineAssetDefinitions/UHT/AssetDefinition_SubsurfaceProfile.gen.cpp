// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_SubsurfaceProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SubsurfaceProfile() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_SubsurfaceProfile::StaticRegisterNativesUAssetDefinition_SubsurfaceProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SubsurfaceProfile);
	UClass* Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_NoRegister()
	{
		return UAssetDefinition_SubsurfaceProfile::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_SubsurfaceProfile.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_SubsurfaceProfile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SubsurfaceProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::ClassParams = {
		&UAssetDefinition_SubsurfaceProfile::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SubsurfaceProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SubsurfaceProfile.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SubsurfaceProfile.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_SubsurfaceProfile>()
	{
		return UAssetDefinition_SubsurfaceProfile::StaticClass();
	}
	UAssetDefinition_SubsurfaceProfile::UAssetDefinition_SubsurfaceProfile() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SubsurfaceProfile);
	UAssetDefinition_SubsurfaceProfile::~UAssetDefinition_SubsurfaceProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SubsurfaceProfile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SubsurfaceProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SubsurfaceProfile, UAssetDefinition_SubsurfaceProfile::StaticClass, TEXT("UAssetDefinition_SubsurfaceProfile"), &Z_Registration_Info_UClass_UAssetDefinition_SubsurfaceProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SubsurfaceProfile), 3888334141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SubsurfaceProfile_h_2496610176(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SubsurfaceProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SubsurfaceProfile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
