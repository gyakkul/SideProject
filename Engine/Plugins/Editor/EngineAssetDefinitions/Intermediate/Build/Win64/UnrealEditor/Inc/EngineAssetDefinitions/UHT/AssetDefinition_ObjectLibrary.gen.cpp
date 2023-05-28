// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_ObjectLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ObjectLibrary() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ObjectLibrary();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ObjectLibrary_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_ObjectLibrary::StaticRegisterNativesUAssetDefinition_ObjectLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ObjectLibrary);
	UClass* Z_Construct_UClass_UAssetDefinition_ObjectLibrary_NoRegister()
	{
		return UAssetDefinition_ObjectLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ObjectLibrary.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ObjectLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ObjectLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::ClassParams = {
		&UAssetDefinition_ObjectLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ObjectLibrary()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ObjectLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ObjectLibrary.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ObjectLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ObjectLibrary.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_ObjectLibrary>()
	{
		return UAssetDefinition_ObjectLibrary::StaticClass();
	}
	UAssetDefinition_ObjectLibrary::UAssetDefinition_ObjectLibrary() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ObjectLibrary);
	UAssetDefinition_ObjectLibrary::~UAssetDefinition_ObjectLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ObjectLibrary, UAssetDefinition_ObjectLibrary::StaticClass, TEXT("UAssetDefinition_ObjectLibrary"), &Z_Registration_Info_UClass_UAssetDefinition_ObjectLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ObjectLibrary), 3897251936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_1820417851(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ObjectLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
