// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Material/AssetDefinition_MaterialInstanceDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MaterialInstanceDynamic() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialInterface();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_MaterialInstanceDynamic::StaticRegisterNativesUAssetDefinition_MaterialInstanceDynamic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MaterialInstanceDynamic);
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_NoRegister()
	{
		return UAssetDefinition_MaterialInstanceDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_MaterialInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Material/AssetDefinition_MaterialInstanceDynamic.h" },
		{ "ModuleRelativePath", "Private/Material/AssetDefinition_MaterialInstanceDynamic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MaterialInstanceDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::ClassParams = {
		&UAssetDefinition_MaterialInstanceDynamic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceDynamic.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceDynamic.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_MaterialInstanceDynamic>()
	{
		return UAssetDefinition_MaterialInstanceDynamic::StaticClass();
	}
	UAssetDefinition_MaterialInstanceDynamic::UAssetDefinition_MaterialInstanceDynamic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MaterialInstanceDynamic);
	UAssetDefinition_MaterialInstanceDynamic::~UAssetDefinition_MaterialInstanceDynamic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceDynamic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MaterialInstanceDynamic, UAssetDefinition_MaterialInstanceDynamic::StaticClass, TEXT("UAssetDefinition_MaterialInstanceDynamic"), &Z_Registration_Info_UClass_UAssetDefinition_MaterialInstanceDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MaterialInstanceDynamic), 4071858909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceDynamic_h_3468742099(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialInstanceDynamic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
