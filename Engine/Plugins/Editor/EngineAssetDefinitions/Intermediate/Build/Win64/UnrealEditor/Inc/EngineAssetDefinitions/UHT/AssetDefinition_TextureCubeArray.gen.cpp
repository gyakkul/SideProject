// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TextureCubeArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TextureCubeArray() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureCubeArray();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureCubeArray_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_TextureCubeArray::StaticRegisterNativesUAssetDefinition_TextureCubeArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TextureCubeArray);
	UClass* Z_Construct_UClass_UAssetDefinition_TextureCubeArray_NoRegister()
	{
		return UAssetDefinition_TextureCubeArray::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TextureCubeArray.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TextureCubeArray.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TextureCubeArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::ClassParams = {
		&UAssetDefinition_TextureCubeArray::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TextureCubeArray()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TextureCubeArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TextureCubeArray.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TextureCubeArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TextureCubeArray.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_TextureCubeArray>()
	{
		return UAssetDefinition_TextureCubeArray::StaticClass();
	}
	UAssetDefinition_TextureCubeArray::UAssetDefinition_TextureCubeArray() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TextureCubeArray);
	UAssetDefinition_TextureCubeArray::~UAssetDefinition_TextureCubeArray() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCubeArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCubeArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TextureCubeArray, UAssetDefinition_TextureCubeArray::StaticClass, TEXT("UAssetDefinition_TextureCubeArray"), &Z_Registration_Info_UClass_UAssetDefinition_TextureCubeArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TextureCubeArray), 52732417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCubeArray_h_92689280(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCubeArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureCubeArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
