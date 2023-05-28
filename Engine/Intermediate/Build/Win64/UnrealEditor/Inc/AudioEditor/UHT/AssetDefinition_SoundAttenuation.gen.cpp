// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTypeActions/AssetDefinition_SoundAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SoundAttenuation() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundAttenuation();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundAttenuation_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_SoundAttenuation::StaticRegisterNativesUAssetDefinition_SoundAttenuation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SoundAttenuation);
	UClass* Z_Construct_UClass_UAssetDefinition_SoundAttenuation_NoRegister()
	{
		return UAssetDefinition_SoundAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_SoundAttenuation.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_SoundAttenuation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SoundAttenuation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::ClassParams = {
		&UAssetDefinition_SoundAttenuation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SoundAttenuation()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SoundAttenuation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SoundAttenuation.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SoundAttenuation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SoundAttenuation.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_SoundAttenuation>()
	{
		return UAssetDefinition_SoundAttenuation::StaticClass();
	}
	UAssetDefinition_SoundAttenuation::UAssetDefinition_SoundAttenuation() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SoundAttenuation);
	UAssetDefinition_SoundAttenuation::~UAssetDefinition_SoundAttenuation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundAttenuation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundAttenuation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SoundAttenuation, UAssetDefinition_SoundAttenuation::StaticClass, TEXT("UAssetDefinition_SoundAttenuation"), &Z_Registration_Info_UClass_UAssetDefinition_SoundAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SoundAttenuation), 2128936575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundAttenuation_h_2286502976(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundAttenuation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
