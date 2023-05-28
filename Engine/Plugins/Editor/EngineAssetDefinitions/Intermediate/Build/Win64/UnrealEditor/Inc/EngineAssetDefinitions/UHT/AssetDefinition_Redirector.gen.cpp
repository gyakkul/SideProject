// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_Redirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Redirector() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Redirector();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Redirector_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Redirector::StaticRegisterNativesUAssetDefinition_Redirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Redirector);
	UClass* Z_Construct_UClass_UAssetDefinition_Redirector_NoRegister()
	{
		return UAssetDefinition_Redirector::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Redirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Redirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Redirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_Redirector.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_Redirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Redirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Redirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Redirector_Statics::ClassParams = {
		&UAssetDefinition_Redirector::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Redirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Redirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Redirector()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Redirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Redirector.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Redirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Redirector.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Redirector>()
	{
		return UAssetDefinition_Redirector::StaticClass();
	}
	UAssetDefinition_Redirector::UAssetDefinition_Redirector() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Redirector);
	UAssetDefinition_Redirector::~UAssetDefinition_Redirector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Redirector, UAssetDefinition_Redirector::StaticClass, TEXT("UAssetDefinition_Redirector"), &Z_Registration_Info_UClass_UAssetDefinition_Redirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Redirector), 583337836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_501373139(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_Redirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
