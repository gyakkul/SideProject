// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_Skeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Skeleton() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Skeleton();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Skeleton_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Skeleton::StaticRegisterNativesUAssetDefinition_Skeleton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Skeleton);
	UClass* Z_Construct_UClass_UAssetDefinition_Skeleton_NoRegister()
	{
		return UAssetDefinition_Skeleton::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Skeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_Skeleton.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_Skeleton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Skeleton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::ClassParams = {
		&UAssetDefinition_Skeleton::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Skeleton()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Skeleton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Skeleton.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Skeleton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Skeleton.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Skeleton>()
	{
		return UAssetDefinition_Skeleton::StaticClass();
	}
	UAssetDefinition_Skeleton::UAssetDefinition_Skeleton() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Skeleton);
	UAssetDefinition_Skeleton::~UAssetDefinition_Skeleton() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_Skeleton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_Skeleton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Skeleton, UAssetDefinition_Skeleton::StaticClass, TEXT("UAssetDefinition_Skeleton"), &Z_Registration_Info_UClass_UAssetDefinition_Skeleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Skeleton), 1184095664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_Skeleton_h_2729693118(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_Skeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_Skeleton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
