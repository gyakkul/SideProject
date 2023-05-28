// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AnimBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AnimBlueprint() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimBlueprint();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimBlueprint_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Blueprint();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AnimBlueprint::StaticRegisterNativesUAssetDefinition_AnimBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AnimBlueprint);
	UClass* Z_Construct_UClass_UAssetDefinition_AnimBlueprint_NoRegister()
	{
		return UAssetDefinition_AnimBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Blueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AnimBlueprint.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AnimBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AnimBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::ClassParams = {
		&UAssetDefinition_AnimBlueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AnimBlueprint()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AnimBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AnimBlueprint.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AnimBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AnimBlueprint.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AnimBlueprint>()
	{
		return UAssetDefinition_AnimBlueprint::StaticClass();
	}
	UAssetDefinition_AnimBlueprint::UAssetDefinition_AnimBlueprint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AnimBlueprint);
	UAssetDefinition_AnimBlueprint::~UAssetDefinition_AnimBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AnimBlueprint, UAssetDefinition_AnimBlueprint::StaticClass, TEXT("UAssetDefinition_AnimBlueprint"), &Z_Registration_Info_UClass_UAssetDefinition_AnimBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AnimBlueprint), 551843935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_2885974848(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
