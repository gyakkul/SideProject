// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_StaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_StaticMesh() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_StaticMesh();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_StaticMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_StaticMesh::StaticRegisterNativesUAssetDefinition_StaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_StaticMesh);
	UClass* Z_Construct_UClass_UAssetDefinition_StaticMesh_NoRegister()
	{
		return UAssetDefinition_StaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_StaticMesh.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_StaticMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_StaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::ClassParams = {
		&UAssetDefinition_StaticMesh::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_StaticMesh()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_StaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_StaticMesh.OuterSingleton, Z_Construct_UClass_UAssetDefinition_StaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_StaticMesh.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_StaticMesh>()
	{
		return UAssetDefinition_StaticMesh::StaticClass();
	}
	UAssetDefinition_StaticMesh::UAssetDefinition_StaticMesh() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_StaticMesh);
	UAssetDefinition_StaticMesh::~UAssetDefinition_StaticMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_StaticMesh, UAssetDefinition_StaticMesh::StaticClass, TEXT("UAssetDefinition_StaticMesh"), &Z_Registration_Info_UClass_UAssetDefinition_StaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_StaticMesh), 2176515126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_3335032087(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_StaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
