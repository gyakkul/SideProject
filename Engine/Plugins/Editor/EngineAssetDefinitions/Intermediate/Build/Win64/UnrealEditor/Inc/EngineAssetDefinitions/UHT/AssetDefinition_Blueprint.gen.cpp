// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Script/AssetDefinition_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Blueprint() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Blueprint();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Blueprint_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Blueprint::StaticRegisterNativesUAssetDefinition_Blueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Blueprint);
	UClass* Z_Construct_UClass_UAssetDefinition_Blueprint_NoRegister()
	{
		return UAssetDefinition_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_ClassTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Script/AssetDefinition_Blueprint.h" },
		{ "ModuleRelativePath", "Public/Script/AssetDefinition_Blueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Blueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::ClassParams = {
		&UAssetDefinition_Blueprint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Blueprint()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Blueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Blueprint.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Blueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Blueprint.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Blueprint>()
	{
		return UAssetDefinition_Blueprint::StaticClass();
	}
	UAssetDefinition_Blueprint::UAssetDefinition_Blueprint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Blueprint);
	UAssetDefinition_Blueprint::~UAssetDefinition_Blueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Blueprint, UAssetDefinition_Blueprint::StaticClass, TEXT("UAssetDefinition_Blueprint"), &Z_Registration_Info_UClass_UAssetDefinition_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Blueprint), 573489834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_3566016286(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_Blueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
