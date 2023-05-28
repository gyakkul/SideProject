// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SlateBrush() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SlateBrush();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_SlateBrush_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_SlateBrush::StaticRegisterNativesUAssetDefinition_SlateBrush()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SlateBrush);
	UClass* Z_Construct_UClass_UAssetDefinition_SlateBrush_NoRegister()
	{
		return UAssetDefinition_SlateBrush::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_SlateBrush.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_SlateBrush.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SlateBrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::ClassParams = {
		&UAssetDefinition_SlateBrush::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SlateBrush()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SlateBrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SlateBrush.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SlateBrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SlateBrush.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_SlateBrush>()
	{
		return UAssetDefinition_SlateBrush::StaticClass();
	}
	UAssetDefinition_SlateBrush::UAssetDefinition_SlateBrush() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SlateBrush);
	UAssetDefinition_SlateBrush::~UAssetDefinition_SlateBrush() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SlateBrush_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SlateBrush_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SlateBrush, UAssetDefinition_SlateBrush::StaticClass, TEXT("UAssetDefinition_SlateBrush"), &Z_Registration_Info_UClass_UAssetDefinition_SlateBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SlateBrush), 3246535823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SlateBrush_h_3467660583(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SlateBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_SlateBrush_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
