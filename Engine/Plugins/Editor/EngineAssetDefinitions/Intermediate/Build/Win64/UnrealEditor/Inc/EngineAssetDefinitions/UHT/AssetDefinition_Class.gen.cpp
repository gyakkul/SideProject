// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Script/AssetDefinition_Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Class() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Class();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Class_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Class::StaticRegisterNativesUAssetDefinition_Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Class);
	UClass* Z_Construct_UClass_UAssetDefinition_Class_NoRegister()
	{
		return UAssetDefinition_Class::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_ClassTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Script/AssetDefinition_Class.h" },
		{ "ModuleRelativePath", "Private/Script/AssetDefinition_Class.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Class_Statics::ClassParams = {
		&UAssetDefinition_Class::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Class()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Class.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Class.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Class>()
	{
		return UAssetDefinition_Class::StaticClass();
	}
	UAssetDefinition_Class::UAssetDefinition_Class() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Class);
	UAssetDefinition_Class::~UAssetDefinition_Class() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Class, UAssetDefinition_Class::StaticClass, TEXT("UAssetDefinition_Class"), &Z_Registration_Info_UClass_UAssetDefinition_Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Class), 780825203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_723843808(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Script_AssetDefinition_Class_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
