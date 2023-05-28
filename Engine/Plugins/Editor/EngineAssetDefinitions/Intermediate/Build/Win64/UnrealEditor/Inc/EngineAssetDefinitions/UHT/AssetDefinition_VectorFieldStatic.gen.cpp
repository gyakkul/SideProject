// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_VectorFieldStatic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_VectorFieldStatic() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_VectorField();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_VectorFieldStatic();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_VectorFieldStatic::StaticRegisterNativesUAssetDefinition_VectorFieldStatic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_VectorFieldStatic);
	UClass* Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_NoRegister()
	{
		return UAssetDefinition_VectorFieldStatic::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_VectorField,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_VectorFieldStatic.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_VectorFieldStatic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_VectorFieldStatic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::ClassParams = {
		&UAssetDefinition_VectorFieldStatic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_VectorFieldStatic()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_VectorFieldStatic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_VectorFieldStatic.OuterSingleton, Z_Construct_UClass_UAssetDefinition_VectorFieldStatic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_VectorFieldStatic.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_VectorFieldStatic>()
	{
		return UAssetDefinition_VectorFieldStatic::StaticClass();
	}
	UAssetDefinition_VectorFieldStatic::UAssetDefinition_VectorFieldStatic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_VectorFieldStatic);
	UAssetDefinition_VectorFieldStatic::~UAssetDefinition_VectorFieldStatic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VectorFieldStatic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VectorFieldStatic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_VectorFieldStatic, UAssetDefinition_VectorFieldStatic::StaticClass, TEXT("UAssetDefinition_VectorFieldStatic"), &Z_Registration_Info_UClass_UAssetDefinition_VectorFieldStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_VectorFieldStatic), 4158148805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VectorFieldStatic_h_399810087(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VectorFieldStatic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_VectorFieldStatic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
