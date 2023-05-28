// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeMixer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeMixer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMixer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMixer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeMixer::StaticRegisterNativesUSoundNodeMixer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeMixer);
	UClass* Z_Construct_UClass_USoundNodeMixer_NoRegister()
	{
		return USoundNodeMixer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeMixer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputVolume_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputVolume_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeMixer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeMixer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines how concurrent sounds are mixed together\n */" },
		{ "DisplayName", "Mixer" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeMixer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeMixer.h" },
		{ "ToolTip", "Defines how concurrent sounds are mixed together" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume_Inner = { "InputVolume", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume_MetaData[] = {
		{ "Category", "Mixer" },
		{ "Comment", "/** A volume for each input.  Automatically sized. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeMixer.h" },
		{ "ToolTip", "A volume for each input.  Automatically sized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume = { "InputVolume", nullptr, (EPropertyFlags)0x0010000000000049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeMixer, InputVolume), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeMixer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeMixer_Statics::NewProp_InputVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeMixer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeMixer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeMixer_Statics::ClassParams = {
		&USoundNodeMixer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeMixer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeMixer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeMixer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeMixer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeMixer()
	{
		if (!Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton, Z_Construct_UClass_USoundNodeMixer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeMixer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeMixer>()
	{
		return USoundNodeMixer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeMixer);
	USoundNodeMixer::~USoundNodeMixer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeMixer, USoundNodeMixer::StaticClass, TEXT("USoundNodeMixer"), &Z_Registration_Info_UClass_USoundNodeMixer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeMixer), 664093561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_1873175062(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
