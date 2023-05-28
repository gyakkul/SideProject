// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTypeActions/AssetDefinition_SoundConcurrency.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SoundConcurrency() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundConcurrency();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundConcurrency_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_SoundConcurrency::StaticRegisterNativesUAssetDefinition_SoundConcurrency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SoundConcurrency);
	UClass* Z_Construct_UClass_UAssetDefinition_SoundConcurrency_NoRegister()
	{
		return UAssetDefinition_SoundConcurrency::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_SoundConcurrency.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_SoundConcurrency.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SoundConcurrency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::ClassParams = {
		&UAssetDefinition_SoundConcurrency::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SoundConcurrency()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SoundConcurrency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SoundConcurrency.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SoundConcurrency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SoundConcurrency.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_SoundConcurrency>()
	{
		return UAssetDefinition_SoundConcurrency::StaticClass();
	}
	UAssetDefinition_SoundConcurrency::UAssetDefinition_SoundConcurrency() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SoundConcurrency);
	UAssetDefinition_SoundConcurrency::~UAssetDefinition_SoundConcurrency() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SoundConcurrency, UAssetDefinition_SoundConcurrency::StaticClass, TEXT("UAssetDefinition_SoundConcurrency"), &Z_Registration_Info_UClass_UAssetDefinition_SoundConcurrency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SoundConcurrency), 275521842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_2061455654(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundConcurrency_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
