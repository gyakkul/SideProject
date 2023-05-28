// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AnimStreamable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AnimStreamable() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimStreamable();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimStreamable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AnimStreamable::StaticRegisterNativesUAssetDefinition_AnimStreamable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AnimStreamable);
	UClass* Z_Construct_UClass_UAssetDefinition_AnimStreamable_NoRegister()
	{
		return UAssetDefinition_AnimStreamable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_AnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AnimStreamable.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AnimStreamable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AnimStreamable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::ClassParams = {
		&UAssetDefinition_AnimStreamable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AnimStreamable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AnimStreamable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AnimStreamable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AnimStreamable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AnimStreamable.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AnimStreamable>()
	{
		return UAssetDefinition_AnimStreamable::StaticClass();
	}
	UAssetDefinition_AnimStreamable::UAssetDefinition_AnimStreamable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AnimStreamable);
	UAssetDefinition_AnimStreamable::~UAssetDefinition_AnimStreamable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AnimStreamable, UAssetDefinition_AnimStreamable::StaticClass, TEXT("UAssetDefinition_AnimStreamable"), &Z_Registration_Info_UClass_UAssetDefinition_AnimStreamable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AnimStreamable), 1334902208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_3963835476(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimStreamable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
