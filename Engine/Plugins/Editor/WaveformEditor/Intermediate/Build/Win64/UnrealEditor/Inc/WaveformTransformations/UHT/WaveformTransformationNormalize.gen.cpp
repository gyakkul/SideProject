// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveformTransformationNormalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformTransformationNormalize() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase();
	UPackage* Z_Construct_UPackage__Script_WaveformTransformations();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationNormalize();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationNormalize_NoRegister();
	WAVEFORMTRANSFORMATIONS_API UEnum* Z_Construct_UEnum_WaveformTransformations_ENormalizationMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENormalizationMode;
	static UEnum* ENormalizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENormalizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENormalizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveformTransformations_ENormalizationMode, (UObject*)Z_Construct_UPackage__Script_WaveformTransformations(), TEXT("ENormalizationMode"));
		}
		return Z_Registration_Info_UEnum_ENormalizationMode.OuterSingleton;
	}
	template<> WAVEFORMTRANSFORMATIONS_API UEnum* StaticEnum<ENormalizationMode>()
	{
		return ENormalizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enumerators[] = {
		{ "ENormalizationMode::Peak", (int64)ENormalizationMode::Peak },
		{ "ENormalizationMode::RMS", (int64)ENormalizationMode::RMS },
		{ "ENormalizationMode::DWeightedLoudness", (int64)ENormalizationMode::DWeightedLoudness },
		{ "ENormalizationMode::COUNT", (int64)ENormalizationMode::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enum_MetaDataParams[] = {
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "ENormalizationMode::COUNT" },
		{ "DWeightedLoudness.Name", "ENormalizationMode::DWeightedLoudness" },
		{ "ModuleRelativePath", "Public/WaveformTransformationNormalize.h" },
		{ "Peak.Name", "ENormalizationMode::Peak" },
		{ "RMS.Name", "ENormalizationMode::RMS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveformTransformations,
		nullptr,
		"ENormalizationMode",
		"ENormalizationMode",
		Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WaveformTransformations_ENormalizationMode()
	{
		if (!Z_Registration_Info_UEnum_ENormalizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENormalizationMode.InnerSingleton, Z_Construct_UEnum_WaveformTransformations_ENormalizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENormalizationMode.InnerSingleton;
	}
	void UWaveformTransformationNormalize::StaticRegisterNativesUWaveformTransformationNormalize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationNormalize);
	UClass* Z_Construct_UClass_UWaveformTransformationNormalize_NoRegister()
	{
		return UWaveformTransformationNormalize::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformTransformationNormalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGain;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformTransformationNormalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaveformTransformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformTransformations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationNormalize_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveformTransformationNormalize.h" },
		{ "ModuleRelativePath", "Public/WaveformTransformationNormalize.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Normalization" },
		{ "ClampMax", "0.000000" },
		{ "Comment", "// Target maximum volume for this soundwave, in decibels\n" },
		{ "ModuleRelativePath", "Public/WaveformTransformationNormalize.h" },
		{ "ToolTip", "Target maximum volume for this soundwave, in decibels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationNormalize, Target), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_MaxGain_MetaData[] = {
		{ "Category", "Normalization" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Will not apply more gain than this, even if the sound is very quiet\n" },
		{ "ModuleRelativePath", "Public/WaveformTransformationNormalize.h" },
		{ "ToolTip", "Will not apply more gain than this, even if the sound is very quiet" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_MaxGain = { "MaxGain", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationNormalize, MaxGain), METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_MaxGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_MaxGain_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Normalization" },
		{ "Comment", "// what type of analysis to run to find the peak value\n" },
		{ "ModuleRelativePath", "Public/WaveformTransformationNormalize.h" },
		{ "ToolTip", "what type of analysis to run to find the peak value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationNormalize, Mode), Z_Construct_UEnum_WaveformTransformations_ENormalizationMode, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode_MetaData)) }; // 3260886076
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformTransformationNormalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_MaxGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationNormalize_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformTransformationNormalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationNormalize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationNormalize_Statics::ClassParams = {
		&UWaveformTransformationNormalize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveformTransformationNormalize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationNormalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformTransformationNormalize()
	{
		if (!Z_Registration_Info_UClass_UWaveformTransformationNormalize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationNormalize.OuterSingleton, Z_Construct_UClass_UWaveformTransformationNormalize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformTransformationNormalize.OuterSingleton;
	}
	template<> WAVEFORMTRANSFORMATIONS_API UClass* StaticClass<UWaveformTransformationNormalize>()
	{
		return UWaveformTransformationNormalize::StaticClass();
	}
	UWaveformTransformationNormalize::UWaveformTransformationNormalize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationNormalize);
	UWaveformTransformationNormalize::~UWaveformTransformationNormalize() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::EnumInfo[] = {
		{ ENormalizationMode_StaticEnum, TEXT("ENormalizationMode"), &Z_Registration_Info_UEnum_ENormalizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260886076U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformTransformationNormalize, UWaveformTransformationNormalize::StaticClass, TEXT("UWaveformTransformationNormalize"), &Z_Registration_Info_UClass_UWaveformTransformationNormalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationNormalize), 477465016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_616209272(TEXT("/Script/WaveformTransformations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
