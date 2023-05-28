// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_NodeMappingContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_NodeMappingContainer() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_NodeMappingContainer();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_NodeMappingContainer::StaticRegisterNativesUAssetDefinition_NodeMappingContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_NodeMappingContainer);
	UClass* Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_NoRegister()
	{
		return UAssetDefinition_NodeMappingContainer::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_NodeMappingContainer.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_NodeMappingContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_NodeMappingContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::ClassParams = {
		&UAssetDefinition_NodeMappingContainer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_NodeMappingContainer()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_NodeMappingContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_NodeMappingContainer.OuterSingleton, Z_Construct_UClass_UAssetDefinition_NodeMappingContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_NodeMappingContainer.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_NodeMappingContainer>()
	{
		return UAssetDefinition_NodeMappingContainer::StaticClass();
	}
	UAssetDefinition_NodeMappingContainer::UAssetDefinition_NodeMappingContainer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_NodeMappingContainer);
	UAssetDefinition_NodeMappingContainer::~UAssetDefinition_NodeMappingContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_NodeMappingContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_NodeMappingContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_NodeMappingContainer, UAssetDefinition_NodeMappingContainer::StaticClass, TEXT("UAssetDefinition_NodeMappingContainer"), &Z_Registration_Info_UClass_UAssetDefinition_NodeMappingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_NodeMappingContainer), 3446167833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_NodeMappingContainer_h_1842173165(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_NodeMappingContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_NodeMappingContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
