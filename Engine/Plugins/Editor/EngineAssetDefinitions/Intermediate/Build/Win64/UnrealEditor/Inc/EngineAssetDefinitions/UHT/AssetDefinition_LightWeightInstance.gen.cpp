// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_LightWeightInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LightWeightInstance() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_LightWeightInstance();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_LightWeightInstance_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_LightWeightInstance::StaticRegisterNativesUAssetDefinition_LightWeightInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LightWeightInstance);
	UClass* Z_Construct_UClass_UAssetDefinition_LightWeightInstance_NoRegister()
	{
		return UAssetDefinition_LightWeightInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_LightWeightInstance.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_LightWeightInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LightWeightInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::ClassParams = {
		&UAssetDefinition_LightWeightInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LightWeightInstance()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LightWeightInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LightWeightInstance.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LightWeightInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LightWeightInstance.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_LightWeightInstance>()
	{
		return UAssetDefinition_LightWeightInstance::StaticClass();
	}
	UAssetDefinition_LightWeightInstance::UAssetDefinition_LightWeightInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LightWeightInstance);
	UAssetDefinition_LightWeightInstance::~UAssetDefinition_LightWeightInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LightWeightInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LightWeightInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LightWeightInstance, UAssetDefinition_LightWeightInstance::StaticClass, TEXT("UAssetDefinition_LightWeightInstance"), &Z_Registration_Info_UClass_UAssetDefinition_LightWeightInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LightWeightInstance), 3632109905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LightWeightInstance_h_3429293914(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LightWeightInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LightWeightInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
