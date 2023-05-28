// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Animation/AssetDefinition_AnimComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_AnimComposite() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimationAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimComposite();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_AnimComposite_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_AnimComposite::StaticRegisterNativesUAssetDefinition_AnimComposite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_AnimComposite);
	UClass* Z_Construct_UClass_UAssetDefinition_AnimComposite_NoRegister()
	{
		return UAssetDefinition_AnimComposite::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_AnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AssetDefinition_AnimComposite.h" },
		{ "ModuleRelativePath", "Private/Animation/AssetDefinition_AnimComposite.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_AnimComposite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::ClassParams = {
		&UAssetDefinition_AnimComposite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_AnimComposite()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_AnimComposite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_AnimComposite.OuterSingleton, Z_Construct_UClass_UAssetDefinition_AnimComposite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_AnimComposite.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_AnimComposite>()
	{
		return UAssetDefinition_AnimComposite::StaticClass();
	}
	UAssetDefinition_AnimComposite::UAssetDefinition_AnimComposite() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_AnimComposite);
	UAssetDefinition_AnimComposite::~UAssetDefinition_AnimComposite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimComposite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimComposite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_AnimComposite, UAssetDefinition_AnimComposite::StaticClass, TEXT("UAssetDefinition_AnimComposite"), &Z_Registration_Info_UClass_UAssetDefinition_AnimComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_AnimComposite), 1848761002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimComposite_h_765726269(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Animation_AssetDefinition_AnimComposite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
