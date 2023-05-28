// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSubmix() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundEffectSubmixPreset::StaticRegisterNativesUSoundEffectSubmixPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectSubmixPreset);
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister()
	{
		return USoundEffectSubmixPreset::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSubmixPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSubmixPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Preset of a submix effect that can be shared between sounds. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundEffectSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSubmix.h" },
		{ "ToolTip", "Preset of a submix effect that can be shared between sounds." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSubmixPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSubmixPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSubmixPreset_Statics::ClassParams = {
		&USoundEffectSubmixPreset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset()
	{
		if (!Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton, Z_Construct_UClass_USoundEffectSubmixPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundEffectSubmixPreset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundEffectSubmixPreset>()
	{
		return USoundEffectSubmixPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSubmixPreset);
	USoundEffectSubmixPreset::~USoundEffectSubmixPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectSubmixPreset, USoundEffectSubmixPreset::StaticClass, TEXT("USoundEffectSubmixPreset"), &Z_Registration_Info_UClass_USoundEffectSubmixPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectSubmixPreset), 2265423359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h_2473804097(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundEffectSubmix_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
