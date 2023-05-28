// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeOscillator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeOscillator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeOscillator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeOscillator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeOscillator::StaticRegisterNativesUSoundNodeOscillator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeOscillator);
	UClass* Z_Construct_UClass_USoundNodeOscillator_NoRegister()
	{
		return USoundNodeOscillator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeOscillator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModulateVolume_MetaData[];
#endif
		static void NewProp_bModulateVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModulatePitch_MetaData[];
#endif
		static void NewProp_bModulatePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulatePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeOscillator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines how a sound oscillates\n */" },
		{ "DisplayName", "Oscillator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeOscillator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "Defines how a sound oscillates" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* Whether to oscillate volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "Whether to oscillate volume." },
	};
#endif
	void Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_SetBit(void* Obj)
	{
		((USoundNodeOscillator*)Obj)->bModulateVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume = { "bModulateVolume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeOscillator), &Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* Whether to oscillate pitch. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "Whether to oscillate pitch." },
	};
#endif
	void Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_SetBit(void* Obj)
	{
		((USoundNodeOscillator*)Obj)->bModulatePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch = { "bModulatePitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeOscillator), &Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMin_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* An amplitude of 0.25 would oscillate between 0.75 and 1.25. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "An amplitude of 0.25 would oscillate between 0.75 and 1.25." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMin = { "AmplitudeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, AmplitudeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMax_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* An amplitude of 0.25 would oscillate between 0.75 and 1.25. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "An amplitude of 0.25 would oscillate between 0.75 and 1.25." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMax = { "AmplitudeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, AmplitudeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMin_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* A frequency of 20 would oscillate at 10Hz. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "A frequency of 20 would oscillate at 10Hz." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMin = { "FrequencyMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, FrequencyMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMax_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* A frequency of 20 would oscillate at 10Hz. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "A frequency of 20 would oscillate at 10Hz." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMax = { "FrequencyMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, FrequencyMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMin_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* Offset into the sine wave. Value modded by 2 * PI. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "Offset into the sine wave. Value modded by 2 * PI." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMin = { "OffsetMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, OffsetMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMax_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* Offset into the sine wave. Value modded by 2 * PI. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "Offset into the sine wave. Value modded by 2 * PI." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMax = { "OffsetMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, OffsetMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMin_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* A center of 0.5 would oscillate around 0.5. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "A center of 0.5 would oscillate around 0.5." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMin = { "CenterMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, CenterMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMax_MetaData[] = {
		{ "Category", "Oscillator" },
		{ "Comment", "/* A center of 0.5 would oscillate around 0.5. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeOscillator.h" },
		{ "ToolTip", "A center of 0.5 would oscillate around 0.5." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMax = { "CenterMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeOscillator, CenterMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeOscillator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulateVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_bModulatePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_AmplitudeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_FrequencyMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_OffsetMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeOscillator_Statics::NewProp_CenterMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeOscillator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeOscillator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeOscillator_Statics::ClassParams = {
		&USoundNodeOscillator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeOscillator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeOscillator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeOscillator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeOscillator()
	{
		if (!Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton, Z_Construct_UClass_USoundNodeOscillator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeOscillator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeOscillator>()
	{
		return USoundNodeOscillator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeOscillator);
	USoundNodeOscillator::~USoundNodeOscillator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeOscillator, USoundNodeOscillator::StaticClass, TEXT("USoundNodeOscillator"), &Z_Registration_Info_UClass_USoundNodeOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeOscillator), 2091456390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_140245389(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeOscillator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
