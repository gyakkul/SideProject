// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveformTransformationTrimFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformTransformationTrimFade() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase();
	UPackage* Z_Construct_UPackage__Script_WaveformTransformations();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationTrimFade();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationTrimFade_NoRegister();
// End Cross Module References
	void UWaveformTransformationTrimFade::StaticRegisterNativesUWaveformTransformationTrimFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationTrimFade);
	UClass* Z_Construct_UClass_UWaveformTransformationTrimFade_NoRegister()
	{
		return UWaveformTransformationTrimFade::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformTransformationTrimFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFadeCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFadeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaveformTransformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformTransformations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveformTransformationTrimFade.h" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Trim" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, StartTime), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Trim" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, EndTime), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeTime_MetaData[] = {
		{ "Category", "Fade" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Fade-In Duration" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeTime = { "StartFadeTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, StartFadeTime), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeCurve_MetaData[] = {
		{ "Category", "Fade" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Fade-In Curve" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeCurve = { "StartFadeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, StartFadeCurve), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeTime_MetaData[] = {
		{ "Category", "Fade" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Fade-Out Duration" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeTime = { "EndFadeTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, EndFadeTime), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeCurve_MetaData[] = {
		{ "Category", "Fade" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Fade-Out Curve" },
		{ "ModuleRelativePath", "Public/WaveformTransformationTrimFade.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeCurve = { "EndFadeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationTrimFade, EndFadeCurve), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_StartFadeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::NewProp_EndFadeCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationTrimFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::ClassParams = {
		&UWaveformTransformationTrimFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformTransformationTrimFade()
	{
		if (!Z_Registration_Info_UClass_UWaveformTransformationTrimFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationTrimFade.OuterSingleton, Z_Construct_UClass_UWaveformTransformationTrimFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformTransformationTrimFade.OuterSingleton;
	}
	template<> WAVEFORMTRANSFORMATIONS_API UClass* StaticClass<UWaveformTransformationTrimFade>()
	{
		return UWaveformTransformationTrimFade::StaticClass();
	}
	UWaveformTransformationTrimFade::UWaveformTransformationTrimFade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationTrimFade);
	UWaveformTransformationTrimFade::~UWaveformTransformationTrimFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationTrimFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationTrimFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformTransformationTrimFade, UWaveformTransformationTrimFade::StaticClass, TEXT("UWaveformTransformationTrimFade"), &Z_Registration_Info_UClass_UWaveformTransformationTrimFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationTrimFade), 448669524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationTrimFade_h_3255100771(TEXT("/Script/WaveformTransformations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationTrimFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationTrimFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
