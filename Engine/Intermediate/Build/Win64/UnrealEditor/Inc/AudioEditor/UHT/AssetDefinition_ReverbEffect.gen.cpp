// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTypeActions/AssetDefinition_ReverbEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ReverbEffect() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ReverbEffect();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ReverbEffect_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_ReverbEffect::StaticRegisterNativesUAssetDefinition_ReverbEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ReverbEffect);
	UClass* Z_Construct_UClass_UAssetDefinition_ReverbEffect_NoRegister()
	{
		return UAssetDefinition_ReverbEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_ReverbEffect.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_ReverbEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ReverbEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::ClassParams = {
		&UAssetDefinition_ReverbEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ReverbEffect()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ReverbEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ReverbEffect.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ReverbEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ReverbEffect.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_ReverbEffect>()
	{
		return UAssetDefinition_ReverbEffect::StaticClass();
	}
	UAssetDefinition_ReverbEffect::UAssetDefinition_ReverbEffect() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ReverbEffect);
	UAssetDefinition_ReverbEffect::~UAssetDefinition_ReverbEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ReverbEffect, UAssetDefinition_ReverbEffect::StaticClass, TEXT("UAssetDefinition_ReverbEffect"), &Z_Registration_Info_UClass_UAssetDefinition_ReverbEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ReverbEffect), 1917699389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_3970096652(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_ReverbEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
