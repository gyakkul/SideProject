// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_FbxSceneImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_FbxSceneImportData() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_FbxSceneImportData();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_FbxSceneImportData::StaticRegisterNativesUAssetDefinition_FbxSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_FbxSceneImportData);
	UClass* Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_NoRegister()
	{
		return UAssetDefinition_FbxSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_FbxSceneImportData.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_FbxSceneImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_FbxSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::ClassParams = {
		&UAssetDefinition_FbxSceneImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_FbxSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_FbxSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_FbxSceneImportData.OuterSingleton, Z_Construct_UClass_UAssetDefinition_FbxSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_FbxSceneImportData.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_FbxSceneImportData>()
	{
		return UAssetDefinition_FbxSceneImportData::StaticClass();
	}
	UAssetDefinition_FbxSceneImportData::UAssetDefinition_FbxSceneImportData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_FbxSceneImportData);
	UAssetDefinition_FbxSceneImportData::~UAssetDefinition_FbxSceneImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_FbxSceneImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_FbxSceneImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_FbxSceneImportData, UAssetDefinition_FbxSceneImportData::StaticClass, TEXT("UAssetDefinition_FbxSceneImportData"), &Z_Registration_Info_UClass_UAssetDefinition_FbxSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_FbxSceneImportData), 446672463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_FbxSceneImportData_h_3527834891(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_FbxSceneImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_FbxSceneImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
