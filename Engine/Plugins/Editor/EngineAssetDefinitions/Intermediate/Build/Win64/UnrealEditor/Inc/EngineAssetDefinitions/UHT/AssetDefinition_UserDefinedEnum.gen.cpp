// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_UserDefinedEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_UserDefinedEnum() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedEnum();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_UserDefinedEnum::StaticRegisterNativesUAssetDefinition_UserDefinedEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_UserDefinedEnum);
	UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_NoRegister()
	{
		return UAssetDefinition_UserDefinedEnum::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_UserDefinedEnum.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_UserDefinedEnum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_UserDefinedEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::ClassParams = {
		&UAssetDefinition_UserDefinedEnum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_UserDefinedEnum()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_UserDefinedEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_UserDefinedEnum.OuterSingleton, Z_Construct_UClass_UAssetDefinition_UserDefinedEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_UserDefinedEnum.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_UserDefinedEnum>()
	{
		return UAssetDefinition_UserDefinedEnum::StaticClass();
	}
	UAssetDefinition_UserDefinedEnum::UAssetDefinition_UserDefinedEnum() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_UserDefinedEnum);
	UAssetDefinition_UserDefinedEnum::~UAssetDefinition_UserDefinedEnum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedEnum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_UserDefinedEnum, UAssetDefinition_UserDefinedEnum::StaticClass, TEXT("UAssetDefinition_UserDefinedEnum"), &Z_Registration_Info_UClass_UAssetDefinition_UserDefinedEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_UserDefinedEnum), 2542220524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedEnum_h_2366321605(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_UserDefinedEnum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
