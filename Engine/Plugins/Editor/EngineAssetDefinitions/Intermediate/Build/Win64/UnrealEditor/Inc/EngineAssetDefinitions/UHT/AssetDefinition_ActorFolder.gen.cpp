// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_ActorFolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ActorFolder() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ActorFolder();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ActorFolder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_ActorFolder::StaticRegisterNativesUAssetDefinition_ActorFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ActorFolder);
	UClass* Z_Construct_UClass_UAssetDefinition_ActorFolder_NoRegister()
	{
		return UAssetDefinition_ActorFolder::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ActorFolder.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ActorFolder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ActorFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::ClassParams = {
		&UAssetDefinition_ActorFolder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ActorFolder()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ActorFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ActorFolder.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ActorFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ActorFolder.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_ActorFolder>()
	{
		return UAssetDefinition_ActorFolder::StaticClass();
	}
	UAssetDefinition_ActorFolder::UAssetDefinition_ActorFolder() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ActorFolder);
	UAssetDefinition_ActorFolder::~UAssetDefinition_ActorFolder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ActorFolder, UAssetDefinition_ActorFolder::StaticClass, TEXT("UAssetDefinition_ActorFolder"), &Z_Registration_Info_UClass_UAssetDefinition_ActorFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ActorFolder), 613779958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_514031346(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFolder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
