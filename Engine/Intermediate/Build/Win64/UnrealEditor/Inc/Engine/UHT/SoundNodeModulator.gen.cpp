// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeModulator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeModulator);
	UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister()
	{
		return USoundNodeModulator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines a random volume and pitch modification when a sound starts\n */" },
		{ "DisplayName", "Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "Defines a random volume and pitch modification when a sound starts" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The lower bound of pitch (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The upper bound of pitch (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The lower bound of volume (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/* The upper bound of volume (1.0 is no change). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams = {
		&USoundNodeModulator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModulator()
	{
		if (!Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton, Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeModulator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeModulator>()
	{
		return USoundNodeModulator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulator);
	USoundNodeModulator::~USoundNodeModulator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeModulator, USoundNodeModulator::StaticClass, TEXT("USoundNodeModulator"), &Z_Registration_Info_UClass_USoundNodeModulator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeModulator), 1610376842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_423759620(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
