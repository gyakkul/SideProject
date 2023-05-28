// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_Texture2DArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_Texture2DArray() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture2DArray();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture2DArray_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_Texture2DArray::StaticRegisterNativesUAssetDefinition_Texture2DArray()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_Texture2DArray);
	UClass* Z_Construct_UClass_UAssetDefinition_Texture2DArray_NoRegister()
	{
		return UAssetDefinition_Texture2DArray::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_Texture2DArray.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_Texture2DArray.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_Texture2DArray>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::ClassParams = {
		&UAssetDefinition_Texture2DArray::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_Texture2DArray()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_Texture2DArray.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_Texture2DArray.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Texture2DArray_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_Texture2DArray.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_Texture2DArray>()
	{
		return UAssetDefinition_Texture2DArray::StaticClass();
	}
	UAssetDefinition_Texture2DArray::UAssetDefinition_Texture2DArray() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_Texture2DArray);
	UAssetDefinition_Texture2DArray::~UAssetDefinition_Texture2DArray() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2DArray_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2DArray_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_Texture2DArray, UAssetDefinition_Texture2DArray::StaticClass, TEXT("UAssetDefinition_Texture2DArray"), &Z_Registration_Info_UClass_UAssetDefinition_Texture2DArray, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_Texture2DArray), 1652032950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2DArray_h_3258595226(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2DArray_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_Texture2DArray_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
