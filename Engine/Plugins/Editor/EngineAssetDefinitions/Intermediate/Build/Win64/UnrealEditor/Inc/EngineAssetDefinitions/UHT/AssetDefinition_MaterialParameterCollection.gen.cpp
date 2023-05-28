// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Material/AssetDefinition_MaterialParameterCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MaterialParameterCollection() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_MaterialParameterCollection::StaticRegisterNativesUAssetDefinition_MaterialParameterCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MaterialParameterCollection);
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_NoRegister()
	{
		return UAssetDefinition_MaterialParameterCollection::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Material/AssetDefinition_MaterialParameterCollection.h" },
		{ "ModuleRelativePath", "Private/Material/AssetDefinition_MaterialParameterCollection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MaterialParameterCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::ClassParams = {
		&UAssetDefinition_MaterialParameterCollection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MaterialParameterCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MaterialParameterCollection.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MaterialParameterCollection.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_MaterialParameterCollection>()
	{
		return UAssetDefinition_MaterialParameterCollection::StaticClass();
	}
	UAssetDefinition_MaterialParameterCollection::UAssetDefinition_MaterialParameterCollection() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MaterialParameterCollection);
	UAssetDefinition_MaterialParameterCollection::~UAssetDefinition_MaterialParameterCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialParameterCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialParameterCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MaterialParameterCollection, UAssetDefinition_MaterialParameterCollection::StaticClass, TEXT("UAssetDefinition_MaterialParameterCollection"), &Z_Registration_Info_UClass_UAssetDefinition_MaterialParameterCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MaterialParameterCollection), 100226599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialParameterCollection_h_1894163400(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialParameterCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Material_AssetDefinition_MaterialParameterCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
