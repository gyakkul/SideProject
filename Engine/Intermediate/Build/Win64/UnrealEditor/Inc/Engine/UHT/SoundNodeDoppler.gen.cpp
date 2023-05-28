// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeDoppler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeDoppler);
	UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister()
	{
		return USoundNodeDoppler::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDoppler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DopplerIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DopplerIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSmoothing_MetaData[];
#endif
		static void NewProp_bUseSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDoppler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Computes doppler pitch shift\n */" },
		{ "DisplayName", "Doppler" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDoppler.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Computes doppler pitch shift" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/* How much to scale the doppler shift (1.0 is normal). */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "How much to scale the doppler shift (1.0 is normal)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity = { "DopplerIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeDoppler, DopplerIntensity), METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/** Whether or not to do a smooth interp to our doppler */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Whether or not to do a smooth interp to our doppler" },
	};
#endif
	void Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_SetBit(void* Obj)
	{
		((USoundNodeDoppler*)Obj)->bUseSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing = { "bUseSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundNodeDoppler), &Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed_MetaData[] = {
		{ "Category", "Doppler" },
		{ "Comment", "/** Speed at which to interp pitch scale */" },
		{ "EditCondition", "bUseSmoothing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Speed at which to interp pitch scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed = { "SmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeDoppler, SmoothingInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_bUseSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_SmoothingInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDoppler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDoppler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams = {
		&USoundNodeDoppler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDoppler()
	{
		if (!Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton, Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeDoppler.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeDoppler>()
	{
		return USoundNodeDoppler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDoppler);
	USoundNodeDoppler::~USoundNodeDoppler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeDoppler, USoundNodeDoppler::StaticClass, TEXT("USoundNodeDoppler"), &Z_Registration_Info_UClass_USoundNodeDoppler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeDoppler), 793505622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_3729804826(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDoppler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
