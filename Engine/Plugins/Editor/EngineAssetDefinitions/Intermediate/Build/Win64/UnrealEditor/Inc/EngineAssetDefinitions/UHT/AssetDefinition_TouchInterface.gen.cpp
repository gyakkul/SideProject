// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TouchInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TouchInterface() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TouchInterface();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TouchInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_TouchInterface::StaticRegisterNativesUAssetDefinition_TouchInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TouchInterface);
	UClass* Z_Construct_UClass_UAssetDefinition_TouchInterface_NoRegister()
	{
		return UAssetDefinition_TouchInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TouchInterface.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TouchInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TouchInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::ClassParams = {
		&UAssetDefinition_TouchInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TouchInterface()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TouchInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TouchInterface.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TouchInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TouchInterface.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_TouchInterface>()
	{
		return UAssetDefinition_TouchInterface::StaticClass();
	}
	UAssetDefinition_TouchInterface::UAssetDefinition_TouchInterface() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TouchInterface);
	UAssetDefinition_TouchInterface::~UAssetDefinition_TouchInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TouchInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TouchInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TouchInterface, UAssetDefinition_TouchInterface::StaticClass, TEXT("UAssetDefinition_TouchInterface"), &Z_Registration_Info_UClass_UAssetDefinition_TouchInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TouchInterface), 1725548325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TouchInterface_h_2609755317(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TouchInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TouchInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
