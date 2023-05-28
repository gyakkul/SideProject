// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_UserDefinedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_UserDefinedStruct() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedStruct();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_UserDefinedStruct::StaticRegisterNativesUAssetDefinition_UserDefinedStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_UserDefinedStruct);
	UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_NoRegister()
	{
		return UAssetDefinition_UserDefinedStruct::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_UserDefinedStruct.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_UserDefinedStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_UserDefinedStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::ClassParams = {
		&UAssetDefinition_UserDefinedStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedStruct()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_UserDefinedStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_UserDefinedStruct.OuterSingleton, Z_Construct_UClass_UAssetDefinition_UserDefinedStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_UserDefinedStruct.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_UserDefinedStruct>()
	{
		return UAssetDefinition_UserDefinedStruct::StaticClass();
	}
	UAssetDefinition_UserDefinedStruct::UAssetDefinition_UserDefinedStruct() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_UserDefinedStruct);
	UAssetDefinition_UserDefinedStruct::~UAssetDefinition_UserDefinedStruct() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedStruct_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_UserDefinedStruct, UAssetDefinition_UserDefinedStruct::StaticClass, TEXT("UAssetDefinition_UserDefinedStruct"), &Z_Registration_Info_UClass_UAssetDefinition_UserDefinedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_UserDefinedStruct), 1971491821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedStruct_h_3332637070(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedStruct_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
