// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Script/AssetDefinition_BlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_BlueprintGeneratedClass() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_BlueprintGeneratedClass::StaticRegisterNativesUAssetDefinition_BlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_BlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_NoRegister()
	{
		return UAssetDefinition_BlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_ClassTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Script/AssetDefinition_BlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Private/Script/AssetDefinition_BlueprintGeneratedClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_BlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::ClassParams = {
		&UAssetDefinition_BlueprintGeneratedClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_BlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_BlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_BlueprintGeneratedClass.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_BlueprintGeneratedClass>()
	{
		return UAssetDefinition_BlueprintGeneratedClass::StaticClass();
	}
	UAssetDefinition_BlueprintGeneratedClass::UAssetDefinition_BlueprintGeneratedClass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_BlueprintGeneratedClass);
	UAssetDefinition_BlueprintGeneratedClass::~UAssetDefinition_BlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_BlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_BlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_BlueprintGeneratedClass, UAssetDefinition_BlueprintGeneratedClass::StaticClass, TEXT("UAssetDefinition_BlueprintGeneratedClass"), &Z_Registration_Info_UClass_UAssetDefinition_BlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_BlueprintGeneratedClass), 680707494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_BlueprintGeneratedClass_h_1440928719(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_BlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_BlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
