// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetTypeActions/AssetDefinition_SoundCue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_SoundCue() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundBase();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundCue();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_SoundCue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAssetDefinition_SoundCue::StaticRegisterNativesUAssetDefinition_SoundCue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_SoundCue);
	UClass* Z_Construct_UClass_UAssetDefinition_SoundCue_NoRegister()
	{
		return UAssetDefinition_SoundCue::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_SoundCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_SoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetDefinition_SoundCue.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetDefinition_SoundCue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_SoundCue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::ClassParams = {
		&UAssetDefinition_SoundCue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_SoundCue()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_SoundCue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_SoundCue.OuterSingleton, Z_Construct_UClass_UAssetDefinition_SoundCue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_SoundCue.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAssetDefinition_SoundCue>()
	{
		return UAssetDefinition_SoundCue::StaticClass();
	}
	UAssetDefinition_SoundCue::UAssetDefinition_SoundCue() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_SoundCue);
	UAssetDefinition_SoundCue::~UAssetDefinition_SoundCue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_SoundCue, UAssetDefinition_SoundCue::StaticClass, TEXT("UAssetDefinition_SoundCue"), &Z_Registration_Info_UClass_UAssetDefinition_SoundCue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_SoundCue), 3640191961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_1088976855(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Private_AssetTypeActions_AssetDefinition_SoundCue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
