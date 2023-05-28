// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AnimSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AnimSequence() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimSequence();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AnimSequence::StaticRegisterNativesUAssetDefinition_AnimSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AnimSequence);
	UClass* Z_Construct_UClass_UAssetDefinition_AnimSequence_NoRegister()
	{
		return UAssetDefinition_AnimSequence::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_AnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AnimSequence.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AnimSequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AnimSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::ClassParams = {
		&UAssetDefinition_AnimSequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AnimSequence()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AnimSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AnimSequence.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AnimSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AnimSequence.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AnimSequence>()
	{
		return UAssetDefinition_AnimSequence::StaticClass();
	}
	UAssetDefinition_AnimSequence::UAssetDefinition_AnimSequence() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AnimSequence);
	UAssetDefinition_AnimSequence::~UAssetDefinition_AnimSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AnimSequence, UAssetDefinition_AnimSequence::StaticClass, TEXT("UAssetDefinition_AnimSequence"), &Z_Registration_Info_UClass_UAssetDefinition_AnimSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AnimSequence), 3893082407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimSequence_h_575234295(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
