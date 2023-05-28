// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmix() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix();
	ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix();
	ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTSize();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGainParamMode();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
		{
			const USoundWave* ResultingSoundWave;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultingSoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultingSoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave = { "ResultingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSubmixRecordedFileDone_Parms, ResultingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a recorded file has finished writing to disk.\n*\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a recorded file has finished writing to disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixRecordedFileDone__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::_Script_Engine_eventOnSubmixRecordedFileDone_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave)
{
	struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
	{
		const USoundWave* ResultingSoundWave;
	};
	_Script_Engine_eventOnSubmixRecordedFileDone_Parms Parms;
	Parms.ResultingSoundWave=ResultingSoundWave;
	OnSubmixRecordedFileDone.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelope_Parms
		{
			TArray<float> Envelope;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelope_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel.\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelope__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelope_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope)
{
	struct _Script_Engine_eventOnSubmixEnvelope_Parms
	{
		TArray<float> Envelope;
	};
	_Script_Engine_eventOnSubmixEnvelope_Parms Parms;
	Parms.Envelope=Envelope;
	OnSubmixEnvelope.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixSpectralAnalysis_Parms
		{
			TArray<float> Magnitudes;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitudes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSubmixSpectralAnalysis_Parms, Magnitudes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::NewProp_Magnitudes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixSpectralAnalysis__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysis_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysis__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmixSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixSpectralAnalysis, TArray<float> const& Magnitudes)
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysis_Parms
	{
		TArray<float> Magnitudes;
	};
	_Script_Engine_eventOnSubmixSpectralAnalysis_Parms Parms;
	Parms.Magnitudes=Magnitudes;
	OnSubmixSpectralAnalysis.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTSize;
	static UEnum* EFFTSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFTSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFTSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTSize, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTSize"));
		}
		return Z_Registration_Info_UEnum_EFFTSize.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFFTSize>()
	{
		return EFFTSize_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFFTSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFFTSize_Statics::Enumerators[] = {
		{ "EFFTSize::DefaultSize", (int64)EFFTSize::DefaultSize },
		{ "EFFTSize::Min", (int64)EFFTSize::Min },
		{ "EFFTSize::Small", (int64)EFFTSize::Small },
		{ "EFFTSize::Medium", (int64)EFFTSize::Medium },
		{ "EFFTSize::Large", (int64)EFFTSize::Large },
		{ "EFFTSize::VeryLarge", (int64)EFFTSize::VeryLarge },
		{ "EFFTSize::Max", (int64)EFFTSize::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFFTSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DefaultSize.Comment", "// 512\n" },
		{ "DefaultSize.Name", "EFFTSize::DefaultSize" },
		{ "DefaultSize.ToolTip", "512" },
		{ "Large.Comment", "// 1024\n" },
		{ "Large.Name", "EFFTSize::Large" },
		{ "Large.ToolTip", "1024" },
		{ "Max.Comment", "// 4096\n" },
		{ "Max.Name", "EFFTSize::Max" },
		{ "Max.ToolTip", "4096" },
		{ "Medium.Comment", "// 512\n" },
		{ "Medium.Name", "EFFTSize::Medium" },
		{ "Medium.ToolTip", "512" },
		{ "Min.Comment", "// 64\n" },
		{ "Min.Name", "EFFTSize::Min" },
		{ "Min.ToolTip", "64" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "Small.Comment", "// 256\n" },
		{ "Small.Name", "EFFTSize::Small" },
		{ "Small.ToolTip", "256" },
		{ "VeryLarge.Comment", "// 2048\n" },
		{ "VeryLarge.Name", "EFFTSize::VeryLarge" },
		{ "VeryLarge.ToolTip", "2048" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFFTSize",
		"EFFTSize",
		Z_Construct_UEnum_Engine_EFFTSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFFTSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFFTSize()
	{
		if (!Z_Registration_Info_UEnum_EFFTSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTSize.InnerSingleton, Z_Construct_UEnum_Engine_EFFTSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFTSize.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod;
	static UEnum* EFFTPeakInterpolationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTPeakInterpolationMethod"));
		}
		return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>()
	{
		return EFFTPeakInterpolationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enumerators[] = {
		{ "EFFTPeakInterpolationMethod::NearestNeighbor", (int64)EFFTPeakInterpolationMethod::NearestNeighbor },
		{ "EFFTPeakInterpolationMethod::Linear", (int64)EFFTPeakInterpolationMethod::Linear },
		{ "EFFTPeakInterpolationMethod::Quadratic", (int64)EFFTPeakInterpolationMethod::Quadratic },
		{ "EFFTPeakInterpolationMethod::ConstantQ", (int64)EFFTPeakInterpolationMethod::ConstantQ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enum_MetaDataParams[] = {
		{ "ConstantQ.Name", "EFFTPeakInterpolationMethod::ConstantQ" },
		{ "Linear.Name", "EFFTPeakInterpolationMethod::Linear" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "NearestNeighbor.Name", "EFFTPeakInterpolationMethod::NearestNeighbor" },
		{ "Quadratic.Name", "EFFTPeakInterpolationMethod::Quadratic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFFTPeakInterpolationMethod",
		"EFFTPeakInterpolationMethod",
		Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod()
	{
		if (!Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFTWindowType;
	static UEnum* EFFTWindowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFFTWindowType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFFTWindowType"));
		}
		return Z_Registration_Info_UEnum_EFFTWindowType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFFTWindowType>()
	{
		return EFFTWindowType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFFTWindowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enumerators[] = {
		{ "EFFTWindowType::None", (int64)EFFTWindowType::None },
		{ "EFFTWindowType::Hamming", (int64)EFFTWindowType::Hamming },
		{ "EFFTWindowType::Hann", (int64)EFFTWindowType::Hann },
		{ "EFFTWindowType::Blackman", (int64)EFFTWindowType::Blackman },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enum_MetaDataParams[] = {
		{ "Blackman.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA.\n" },
		{ "Blackman.Name", "EFFTWindowType::Blackman" },
		{ "Blackman.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA." },
		{ "Hamming.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-40 dB. Good for COLA.\n" },
		{ "Hamming.Name", "EFFTWindowType::Hamming" },
		{ "Hamming.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-40 dB. Good for COLA." },
		{ "Hann.Comment", "// Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA.\n" },
		{ "Hann.Name", "EFFTWindowType::Hann" },
		{ "Hann.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "None.Comment", "// No window is applied. Technically a boxcar window.\n" },
		{ "None.Name", "EFFTWindowType::None" },
		{ "None.ToolTip", "No window is applied. Technically a boxcar window." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFFTWindowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFFTWindowType",
		"EFFTWindowType",
		Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFFTWindowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFFTWindowType()
	{
		if (!Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton, Z_Construct_UEnum_Engine_EFFTWindowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFTWindowType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumType;
	static UEnum* EAudioSpectrumType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioSpectrumType"));
		}
		return Z_Registration_Info_UEnum_EAudioSpectrumType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumType>()
	{
		return EAudioSpectrumType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enumerators[] = {
		{ "EAudioSpectrumType::MagnitudeSpectrum", (int64)EAudioSpectrumType::MagnitudeSpectrum },
		{ "EAudioSpectrumType::PowerSpectrum", (int64)EAudioSpectrumType::PowerSpectrum },
		{ "EAudioSpectrumType::Decibel", (int64)EAudioSpectrumType::Decibel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Decibel.Comment", "// Returns decibels (0.0 dB is 1.0)\n" },
		{ "Decibel.Name", "EAudioSpectrumType::Decibel" },
		{ "Decibel.ToolTip", "Returns decibels (0.0 dB is 1.0)" },
		{ "MagnitudeSpectrum.Comment", "// Spectrum frequency values are equal to magnitude of frequency.\n" },
		{ "MagnitudeSpectrum.Name", "EAudioSpectrumType::MagnitudeSpectrum" },
		{ "MagnitudeSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude of frequency." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "PowerSpectrum.Comment", "// Spectrum frequency values are equal to magnitude squared.\n" },
		{ "PowerSpectrum.Name", "EAudioSpectrumType::PowerSpectrum" },
		{ "PowerSpectrum.ToolTip", "Spectrum frequency values are equal to magnitude squared." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioSpectrumType",
		"EAudioSpectrumType",
		Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType()
	{
		if (!Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioSpectrumType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioSpectrumType.InnerSingleton;
	}
	void USoundSubmixBase::StaticRegisterNativesUSoundSubmixBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixBase);
	UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister()
	{
		return USoundSubmixBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDisable_MetaData[];
#endif
		static void NewProp_bAutoDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDisable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoDisableTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoDisableTime;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildSubmixes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_MetaData[] = {
		{ "Category", "AutoDisablement" },
		{ "Comment", "// Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Auto-manage enabling and disabling the submix as a CPU optimization. It will be disabled if the submix and all child submixes are silent. It will re-enable if a sound is sent to the submix or a child submix is audible." },
	};
#endif
	void Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_SetBit(void* Obj)
	{
		((USoundSubmixBase*)Obj)->bAutoDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable = { "bAutoDisable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundSubmixBase), &Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime_MetaData[] = {
		{ "Category", "AutoDisablement" },
		{ "Comment", "// The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it. \n" },
		{ "EditCondition", "bAutoDisable" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The minimum amount of time to wait before automatically disabling a submix if it is silent. Will immediately re-enable if source audio is sent to it." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime = { "AutoDisableTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixBase, AutoDisableTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "// Child submixes to this sound mix\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Child submixes to this sound mix" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixBase, ChildSubmixes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_bAutoDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_AutoDisableTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixBase_Statics::NewProp_ChildSubmixes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams = {
		&USoundSubmixBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixBase()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton, Z_Construct_UClass_USoundSubmixBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundSubmixBase>()
	{
		return USoundSubmixBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixBase);
	USoundSubmixBase::~USoundSubmixBase() {}
	void USoundSubmixWithParentBase::StaticRegisterNativesUSoundSubmixWithParentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixWithParentBase);
	UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister()
	{
		return USoundSubmixWithParentBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentSubmix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This submix class can be derived from for submixes that output to a parent submix.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "This submix class can be derived from for submixes that output to a parent submix." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix = { "ParentSubmix", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixWithParentBase, ParentSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixWithParentBase_Statics::NewProp_ParentSubmix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixWithParentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixWithParentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams = {
		&USoundSubmixWithParentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWithParentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixWithParentBase()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton, Z_Construct_UClass_USoundSubmixWithParentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixWithParentBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundSubmixWithParentBase>()
	{
		return USoundSubmixWithParentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixWithParentBase);
	USoundSubmixWithParentBase::~USoundSubmixWithParentBase() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGainParamMode;
	static UEnum* EGainParamMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGainParamMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGainParamMode"));
		}
		return Z_Registration_Info_UEnum_EGainParamMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGainParamMode>()
	{
		return EGainParamMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGainParamMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enumerators[] = {
		{ "EGainParamMode::Linear", (int64)EGainParamMode::Linear },
		{ "EGainParamMode::Decibels", (int64)EGainParamMode::Decibels },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Whether to use linear or decibel values for audio gains\n" },
		{ "Decibels.Name", "EGainParamMode::Decibels" },
		{ "Linear.Name", "EGainParamMode::Linear" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Whether to use linear or decibel values for audio gains" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGainParamMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGainParamMode",
		"EGainParamMode",
		Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGainParamMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGainParamMode()
	{
		if (!Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton, Z_Construct_UEnum_Engine_EGainParamMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGainParamMode.InnerSingleton;
	}
	DEFINE_FUNCTION(USoundSubmix::execSetSubmixDryLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDryLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixDryLevel(Z_Param_WorldContextObject,Z_Param_InDryLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execSetSubmixWetLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWetLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixWetLevel(Z_Param_WorldContextObject,Z_Param_InWetLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execSetSubmixOutputVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOutputVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubmixOutputVolume(Z_Param_WorldContextObject,Z_Param_InOutputVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStopSpectralAnalysis)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSpectralAnalysis(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStartSpectralAnalysis)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EFFTSize,Z_Param_FFTSize);
		P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod);
		P_GET_ENUM(EFFTWindowType,Z_Param_WindowType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HopSize);
		P_GET_ENUM(EAudioSpectrumType,Z_Param_SpectrumType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpectralAnalysis(Z_Param_WorldContextObject,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize,EAudioSpectrumType(Z_Param_SpectrumType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execRemoveSpectralAnalysisDelegate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixSpectralAnalysisBP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSpectralAnalysisDelegate(Z_Param_WorldContextObject,FOnSubmixSpectralAnalysisBP(Z_Param_Out_OnSubmixSpectralAnalysisBP));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execAddSpectralAnalysisDelegate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSoundSubmixSpectralAnalysisBandSettings,Z_Param_Out_InBandSettings);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixSpectralAnalysisBP);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DecibelNoiseFloor);
		P_GET_UBOOL(Z_Param_bDoNormalize);
		P_GET_UBOOL(Z_Param_bDoAutoRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AutoRangeAttackTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AutoRangeReleaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSpectralAnalysisDelegate(Z_Param_WorldContextObject,Z_Param_Out_InBandSettings,FOnSubmixSpectralAnalysisBP(Z_Param_Out_OnSubmixSpectralAnalysisBP),Z_Param_UpdateRate,Z_Param_DecibelNoiseFloor,Z_Param_bDoNormalize,Z_Param_bDoAutoRange,Z_Param_AutoRangeAttackTime,Z_Param_AutoRangeReleaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execAddEnvelopeFollowerDelegate)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnSubmixEnvelopeBP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEnvelopeFollowerDelegate(Z_Param_WorldContextObject,FOnSubmixEnvelopeBP(Z_Param_Out_OnSubmixEnvelopeBP));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStopEnvelopeFollowing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEnvelopeFollowing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStartEnvelopeFollowing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEnvelopeFollowing(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStopRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_ExistingSoundWaveToOverwrite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundSubmix::execStartRecordingOutput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ExpectedDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration);
		P_NATIVE_END;
	}
	void USoundSubmix::StaticRegisterNativesUSoundSubmix()
	{
		UClass* Class = USoundSubmix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnvelopeFollowerDelegate", &USoundSubmix::execAddEnvelopeFollowerDelegate },
			{ "AddSpectralAnalysisDelegate", &USoundSubmix::execAddSpectralAnalysisDelegate },
			{ "RemoveSpectralAnalysisDelegate", &USoundSubmix::execRemoveSpectralAnalysisDelegate },
			{ "SetSubmixDryLevel", &USoundSubmix::execSetSubmixDryLevel },
			{ "SetSubmixOutputVolume", &USoundSubmix::execSetSubmixOutputVolume },
			{ "SetSubmixWetLevel", &USoundSubmix::execSetSubmixWetLevel },
			{ "StartEnvelopeFollowing", &USoundSubmix::execStartEnvelopeFollowing },
			{ "StartRecordingOutput", &USoundSubmix::execStartRecordingOutput },
			{ "StartSpectralAnalysis", &USoundSubmix::execStartSpectralAnalysis },
			{ "StopEnvelopeFollowing", &USoundSubmix::execStopEnvelopeFollowing },
			{ "StopRecordingOutput", &USoundSubmix::execStopRecordingOutput },
			{ "StopSpectralAnalysis", &USoundSubmix::execStopSpectralAnalysis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics
	{
		struct SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnSubmixEnvelopeBP;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixEnvelopeBP_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixEnvelopeBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP = { "OnSubmixEnvelopeBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, OnSubmixEnvelopeBP), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData)) }; // 163118216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "/**\n\x09 *\x09""Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.\n\x09 *\x09@param\x09OnSubmixEnvelopeBP\x09""Event to fire when new envelope data is available.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Adds an envelope follower delegate to the submix when envelope following is enabled on this submix.\n@param  OnSubmixEnvelopeBP      Event to fire when new envelope data is available." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddEnvelopeFollowerDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms), Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics
	{
		struct SoundSubmix_eventAddSpectralAnalysisDelegate_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSoundSubmixSpectralAnalysisBandSettings> InBandSettings;
			FScriptDelegate OnSubmixSpectralAnalysisBP;
			float UpdateRate;
			float DecibelNoiseFloor;
			bool bDoNormalize;
			bool bDoAutoRange;
			float AutoRangeAttackTime;
			float AutoRangeReleaseTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBandSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBandSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBandSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixSpectralAnalysisBP_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixSpectralAnalysisBP;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecibelNoiseFloor;
		static void NewProp_bDoNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNormalize;
		static void NewProp_bDoAutoRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAutoRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRangeAttackTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoRangeReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_Inner = { "InBandSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, METADATA_PARAMS(nullptr, 0) }; // 3766543794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings = { "InBandSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, InBandSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_MetaData)) }; // 3766543794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP = { "OnSubmixSpectralAnalysisBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, OnSubmixSpectralAnalysisBP), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData)) }; // 1255469137
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_DecibelNoiseFloor = { "DecibelNoiseFloor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, DecibelNoiseFloor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize_SetBit(void* Obj)
	{
		((SoundSubmix_eventAddSpectralAnalysisDelegate_Parms*)Obj)->bDoNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize = { "bDoNormalize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange_SetBit(void* Obj)
	{
		((SoundSubmix_eventAddSpectralAnalysisDelegate_Parms*)Obj)->bDoAutoRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange = { "bDoAutoRange", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeAttackTime = { "AutoRangeAttackTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, AutoRangeAttackTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeReleaseTime = { "AutoRangeReleaseTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventAddSpectralAnalysisDelegate_Parms, AutoRangeReleaseTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_InBandSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_UpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_DecibelNoiseFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_bDoAutoRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::NewProp_AutoRangeReleaseTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Spectrum" },
		{ "Comment", "/**\n\x09 *\x09""Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.\n\x09 *\x09@param\x09InBandsettings\x09\x09\x09\x09\x09The frequency bands to analyze and their envelope-following settings.\n\x09 *  @param  OnSubmixSpectralAnalysisBP\x09\x09""Event to fire when new spectral data is available.\n\x09 *\x09@param\x09UpdateRate\x09\x09\x09\x09\x09\x09How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.\n\x09 *\x09@param  InterpMethod                    Method to used for band peak calculation.\n\x09 *\x09@param  SpectrumType                    Metric to use when returning spectrum values.\n\x09 *\x09@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence when using a Decibel Spectrum Type.\n\x09 *\x09@param  bDoNormalize                    If true, output band values will be normalized between zero and one.\n\x09 *\x09@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.\n\x09 *\x09@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.\n\x09 *\x09@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range.\n\x09 */" },
		{ "CPP_Default_AutoRangeAttackTime", "0.100000" },
		{ "CPP_Default_AutoRangeReleaseTime", "60.000000" },
		{ "CPP_Default_bDoAutoRange", "false" },
		{ "CPP_Default_bDoNormalize", "true" },
		{ "CPP_Default_DecibelNoiseFloor", "-40.000000" },
		{ "CPP_Default_UpdateRate", "10.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Adds a spectral analysis delegate to receive notifications when this submix has spectrum analysis enabled.\n@param  InBandsettings                                  The frequency bands to analyze and their envelope-following settings.\n@param  OnSubmixSpectralAnalysisBP          Event to fire when new spectral data is available.\n@param  UpdateRate                                              How often to retrieve the data from the spectral analyzer and broadcast the event. Max is 30 times per second.\n@param  InterpMethod                    Method to used for band peak calculation.\n@param  SpectrumType                    Metric to use when returning spectrum values.\n@param  DecibelNoiseFloor               Decibel Noise Floor to consider as silence when using a Decibel Spectrum Type.\n@param  bDoNormalize                    If true, output band values will be normalized between zero and one.\n@param  bDoAutoRange                    If true, output band values will have their ranges automatically adjusted to the minimum and maximum values in the audio. Output band values will be normalized between zero and one.\n@param  AutoRangeAttackTime             The time (in seconds) it takes for the range to expand to 90% of a larger range.\n@param  AutoRangeReleaseTime            The time (in seconds) it takes for the range to shrink to 90% of a smaller range." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddSpectralAnalysisDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::SoundSubmix_eventAddSpectralAnalysisDelegate_Parms), Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics
	{
		struct SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnSubmixSpectralAnalysisBP;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixSpectralAnalysisBP_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixSpectralAnalysisBP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP = { "OnSubmixSpectralAnalysisBP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms, OnSubmixSpectralAnalysisBP), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP_MetaData)) }; // 1255469137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::NewProp_OnSubmixSpectralAnalysisBP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Spectrum" },
		{ "Comment", "/**\n\x09 *\x09Remove a spectral analysis delegate.\n\x09 *  @param  OnSubmixSpectralAnalysisBP\x09\x09The event delegate to remove.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Remove a spectral analysis delegate.\n@param  OnSubmixSpectralAnalysisBP          The event delegate to remove." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "RemoveSpectralAnalysisDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::SoundSubmix_eventRemoveSpectralAnalysisDelegate_Parms), Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics
	{
		struct SoundSubmix_eventSetSubmixDryLevel_Parms
		{
			const UObject* WorldContextObject;
			float InDryLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDryLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixDryLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_InDryLevel = { "InDryLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixDryLevel_Parms, InDryLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::NewProp_InDryLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the DryLevel property of this submix.  */" },
		{ "DisplayName", "SetSubmixDryLevel (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the DryLevel property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixDryLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::SoundSubmix_eventSetSubmixDryLevel_Parms), Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics
	{
		struct SoundSubmix_eventSetSubmixOutputVolume_Parms
		{
			const UObject* WorldContextObject;
			float InOutputVolume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOutputVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume = { "InOutputVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixOutputVolume_Parms, InOutputVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::NewProp_InOutputVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this submix.  */" },
		{ "DisplayName", "SetSubmixOutputVolume (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic volume acts as a multiplier on the OutputVolume property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixOutputVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::SoundSubmix_eventSetSubmixOutputVolume_Parms), Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics
	{
		struct SoundSubmix_eventSetSubmixWetLevel_Parms
		{
			const UObject* WorldContextObject;
			float InWetLevel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWetLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixWetLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_InWetLevel = { "InWetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventSetSubmixWetLevel_Parms, InWetLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::NewProp_InWetLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the WetLevel property of this submix.  */" },
		{ "DisplayName", "SetSubmixWetLevel (linear gain)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sets the output volume of the submix in linear gain. This dynamic level acts as a multiplier on the WetLevel property of this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "SetSubmixWetLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::SoundSubmix_eventSetSubmixWetLevel_Parms), Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStartEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartEnvelopeFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::SoundSubmix_eventStartEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics
	{
		struct SoundSubmix_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Start recording the audio from this submix.\n" },
		{ "DisplayName", "Start Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start recording the audio from this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::SoundSubmix_eventStartRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics
	{
		struct SoundSubmix_eventStartSpectralAnalysis_Parms
		{
			const UObject* WorldContextObject;
			EFFTSize FFTSize;
			EFFTPeakInterpolationMethod InterpolationMethod;
			EFFTWindowType WindowType;
			float HopSize;
			EAudioSpectrumType SpectrumType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HopSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, FFTSize), Z_Construct_UEnum_Engine_EFFTSize, METADATA_PARAMS(nullptr, 0) }; // 2209915647
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, InterpolationMethod), Z_Construct_UEnum_Engine_EFFTPeakInterpolationMethod, METADATA_PARAMS(nullptr, 0) }; // 3139256748
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(nullptr, 0) }; // 3488179203
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_HopSize = { "HopSize", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, HopSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStartSpectralAnalysis_Parms, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(nullptr, 0) }; // 1915632009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_FFTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_InterpolationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_WindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_HopSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::NewProp_SpectrumType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Start spectrum analysis of the audio output. */" },
		{ "CPP_Default_FFTSize", "DefaultSize" },
		{ "CPP_Default_HopSize", "0.000000" },
		{ "CPP_Default_InterpolationMethod", "Linear" },
		{ "CPP_Default_SpectrumType", "MagnitudeSpectrum" },
		{ "CPP_Default_WindowType", "Hann" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartSpectralAnalysis", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::SoundSubmix_eventStartSpectralAnalysis_Parms), Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStopEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "Comment", "// Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopEnvelopeFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::SoundSubmix_eventStopEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics
	{
		struct SoundSubmix_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundWave* ExistingSoundWaveToOverwrite;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) }; // 3384381609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "Comment", "// Finish recording the audio from this submix and export it as a wav file or a USoundWave.\n" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "DisplayName", "Finish Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Finish recording the audio from this submix and export it as a wav file or a USoundWave." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopRecordingOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::SoundSubmix_eventStopRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics
	{
		struct SoundSubmix_eventStopSpectralAnalysis_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmix_eventStopSpectralAnalysis_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "Comment", "/** Stop spectrum analysis of the audio output. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Stop spectrum analysis of the audio output." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopSpectralAnalysis", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::SoundSubmix_eventStopSpectralAnalysis_Parms), Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmix);
	UClass* Z_Construct_UClass_USoundSubmix_NoRegister()
	{
		return USoundSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMuteWhenBackgrounded_MetaData[];
#endif
		static void NewProp_bMuteWhenBackgrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMuteWhenBackgrounded;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsPluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AmbisonicsPluginSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVolumeModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVolumeModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevelModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WetLevelModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevelModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DryLevelModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendToAudioLink_MetaData[];
#endif
		static void NewProp_bSendToAudioLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendToAudioLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLinkSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioLinkSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSubmixRecordedFileDone_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubmixRecordedFileDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundSubmix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate, "AddEnvelopeFollowerDelegate" }, // 2354942467
		{ &Z_Construct_UFunction_USoundSubmix_AddSpectralAnalysisDelegate, "AddSpectralAnalysisDelegate" }, // 1384872187
		{ &Z_Construct_UFunction_USoundSubmix_RemoveSpectralAnalysisDelegate, "RemoveSpectralAnalysisDelegate" }, // 3486943087
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixDryLevel, "SetSubmixDryLevel" }, // 916378381
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixOutputVolume, "SetSubmixOutputVolume" }, // 2702631022
		{ &Z_Construct_UFunction_USoundSubmix_SetSubmixWetLevel, "SetSubmixWetLevel" }, // 1528580504
		{ &Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing, "StartEnvelopeFollowing" }, // 535277509
		{ &Z_Construct_UFunction_USoundSubmix_StartRecordingOutput, "StartRecordingOutput" }, // 3658464451
		{ &Z_Construct_UFunction_USoundSubmix_StartSpectralAnalysis, "StartSpectralAnalysis" }, // 1314123553
		{ &Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing, "StopEnvelopeFollowing" }, // 342902535
		{ &Z_Construct_UFunction_USoundSubmix_StopRecordingOutput, "StopRecordingOutput" }, // 1832968479
		{ &Z_Construct_UFunction_USoundSubmix_StopSpectralAnalysis, "StopSpectralAnalysis" }, // 3488921560
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for applying an effect to the downmixed sum of multiple audio sources." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Mute this submix when the application is muted or in the background. Used to prevent submix effect tails from continuing when tabbing out of application or if application is muted." },
	};
#endif
	void Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit(void* Obj)
	{
		((USoundSubmix*)Obj)->bMuteWhenBackgrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded = { "bMuteWhenBackgrounded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundSubmix), &Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "Comment", "/** Optional settings used by plugins which support ambisonics file playback. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Optional settings used by plugins which support ambisonics file playback." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings = { "AmbisonicsPluginSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, AmbisonicsPluginSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData[] = {
		{ "Comment", "/** Deprecated -- The output volume of the submix. Applied after submix effects and analysis are performed.*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Removed in favor of OutputVolumeModulation." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Deprecated -- The output volume of the submix. Applied after submix effects and analysis are performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume = { "OutputVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, OutputVolume), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Comment", "/** Deprecated -- The wet level of the submix. Applied after submix effects and analysis are performed. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Removed in favor of WetLevelModulation." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Deprecated -- The wet level of the submix. Applied after submix effects and analysis are performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, WetLevel), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Comment", "/** Deprecated -- The dry level of the submix. Applied before submix effects and analysis are performed. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.0 - Removed in favor of DryLevelModulation." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Deprecated -- The dry level of the submix. Applied before submix effects and analysis are performed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, DryLevel), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The output volume of the submix in Decibels. Applied after submix effects and analysis are performed.*/" },
		{ "DisplayName", "Output Volume (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The output volume of the submix in Decibels. Applied after submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation = { "OutputVolumeModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, OutputVolumeModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The wet level of the submixin Decibels. Applied after submix effects and analysis are performed. */" },
		{ "DisplayName", "Wet Level (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The wet level of the submixin Decibels. Applied after submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation = { "WetLevelModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, WetLevelModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation_MetaData[] = {
		{ "AudioParam", "Volume" },
		{ "AudioParamClass", "SoundModulationParameterVolume" },
		{ "Category", "SubmixLevel" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "/** The dry level of the submix in Decibels. Applied before submix effects and analysis are performed. */" },
		{ "DisplayName", "Dry Level (dB)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The dry level of the submix in Decibels. Applied before submix effects and analysis are performed." },
		{ "UIMax", "0.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation = { "DryLevelModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, DryLevelModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Whether to send this Submix to AudioLink (when AudioLink is Enabled)*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Whether to send this Submix to AudioLink (when AudioLink is Enabled)" },
	};
#endif
	void Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_SetBit(void* Obj)
	{
		((USoundSubmix*)Obj)->bSendToAudioLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink = { "bSendToAudioLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundSubmix), &Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings_MetaData[] = {
		{ "Category", "AudioLink" },
		{ "Comment", "/** Optional Audio Link Settings Object */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Optional Audio Link Settings Object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings = { "AudioLinkSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, AudioLinkSettings), Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData[] = {
		{ "Comment", "// Blueprint delegate for when a recorded file is finished exporting.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Blueprint delegate for when a recorded file is finished exporting." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone = { "OnSubmixRecordedFileDone", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmix, OnSubmixRecordedFileDone), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData)) }; // 1069363518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_bMuteWhenBackgrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OutputVolumeModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_WetLevelModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_DryLevelModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_bSendToAudioLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AudioLinkSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmix_Statics::ClassParams = {
		&USoundSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmix()
	{
		if (!Z_Registration_Info_UClass_USoundSubmix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmix.OuterSingleton, Z_Construct_UClass_USoundSubmix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmix.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundSubmix>()
	{
		return USoundSubmix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmix);
	USoundSubmix::~USoundSubmix() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSubmix)
	void USoundfieldSubmix::StaticRegisterNativesUSoundfieldSubmix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldSubmix);
	UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister()
	{
		return USoundfieldSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEncodingFormat_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoundfieldEncodingFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EncodingSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundfieldEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixWithParentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for use with soundfield formats, such as Ambisonics.\n */" },
		{ "DisplayName", "Sound Submix Soundfield" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for use with soundfield formats, such as Ambisonics." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat = { "SoundfieldEncodingFormat", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEncodingFormat), METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Which encoding settings to use the sound field. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Which encoding settings to use the sound field." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "Comment", "/** Soundfield effect chain to use for the sound field. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Soundfield effect chain to use for the sound field." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldSubmix, EncodingSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEncodingFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_SoundfieldEffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldSubmix_Statics::NewProp_EncodingSettingsClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldSubmix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams = {
		&USoundfieldSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldSubmix()
	{
		if (!Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton, Z_Construct_UClass_USoundfieldSubmix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldSubmix.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundfieldSubmix>()
	{
		return USoundfieldSubmix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldSubmix);
	USoundfieldSubmix::~USoundfieldSubmix() {}
	void UEndpointSubmix::StaticRegisterNativesUEndpointSubmix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndpointSubmix);
	UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister()
	{
		return UEndpointSubmix::StaticClass();
	}
	struct Z_Construct_UClass_UEndpointSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndpointType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EndpointSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndpointSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.\n */" },
		{ "DisplayName", "Sound Submix Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType = { "EndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEndpointSubmix, EndpointType), METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEndpointSubmix, EndpointSettings), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndpointSubmix_Statics::NewProp_EndpointSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndpointSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndpointSubmix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams = {
		&UEndpointSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndpointSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndpointSubmix()
	{
		if (!Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton, Z_Construct_UClass_UEndpointSubmix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEndpointSubmix.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEndpointSubmix>()
	{
		return UEndpointSubmix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndpointSubmix);
	UEndpointSubmix::~UEndpointSubmix() {}
	void USoundfieldEndpointSubmix::StaticRegisterNativesUSoundfieldEndpointSubmix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundfieldEndpointSubmix);
	UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister()
	{
		return USoundfieldEndpointSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEndpointType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoundfieldEndpointType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EndpointSettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EndpointSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EncodingSettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EncodingSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundfieldEffectChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundfieldEffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundfieldEffectChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSubmixBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics.\n */" },
		{ "DisplayName", "Sound Submix Soundfield Endpoint" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "Comment", "/** Currently used format. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Currently used format." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType = { "SoundfieldEndpointType", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEndpointType), METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass = { "EndpointSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, EndpointSettings), Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass = { "EncodingSettingsClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettingsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings = { "EncodingSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, EncodingSettings), Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundfieldEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData[] = {
		{ "Category", "Soundfield" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain = { "SoundfieldEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundfieldEndpointSubmix, SoundfieldEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEndpointType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EndpointSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_EncodingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::NewProp_SoundfieldEffectChain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSubmix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams = {
		&USoundfieldEndpointSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEndpointSubmix()
	{
		if (!Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton, Z_Construct_UClass_USoundfieldEndpointSubmix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundfieldEndpointSubmix.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundfieldEndpointSubmix>()
	{
		return USoundfieldEndpointSubmix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSubmix);
	USoundfieldEndpointSubmix::~USoundfieldEndpointSubmix() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::EnumInfo[] = {
		{ EFFTSize_StaticEnum, TEXT("EFFTSize"), &Z_Registration_Info_UEnum_EFFTSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2209915647U) },
		{ EFFTPeakInterpolationMethod_StaticEnum, TEXT("EFFTPeakInterpolationMethod"), &Z_Registration_Info_UEnum_EFFTPeakInterpolationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3139256748U) },
		{ EFFTWindowType_StaticEnum, TEXT("EFFTWindowType"), &Z_Registration_Info_UEnum_EFFTWindowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3488179203U) },
		{ EAudioSpectrumType_StaticEnum, TEXT("EAudioSpectrumType"), &Z_Registration_Info_UEnum_EAudioSpectrumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1915632009U) },
		{ EGainParamMode_StaticEnum, TEXT("EGainParamMode"), &Z_Registration_Info_UEnum_EGainParamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133461307U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixBase, USoundSubmixBase::StaticClass, TEXT("USoundSubmixBase"), &Z_Registration_Info_UClass_USoundSubmixBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixBase), 3049727190U) },
		{ Z_Construct_UClass_USoundSubmixWithParentBase, USoundSubmixWithParentBase::StaticClass, TEXT("USoundSubmixWithParentBase"), &Z_Registration_Info_UClass_USoundSubmixWithParentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixWithParentBase), 1411772863U) },
		{ Z_Construct_UClass_USoundSubmix, USoundSubmix::StaticClass, TEXT("USoundSubmix"), &Z_Registration_Info_UClass_USoundSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmix), 1071309714U) },
		{ Z_Construct_UClass_USoundfieldSubmix, USoundfieldSubmix::StaticClass, TEXT("USoundfieldSubmix"), &Z_Registration_Info_UClass_USoundfieldSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldSubmix), 2009842449U) },
		{ Z_Construct_UClass_UEndpointSubmix, UEndpointSubmix::StaticClass, TEXT("UEndpointSubmix"), &Z_Registration_Info_UClass_UEndpointSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndpointSubmix), 2449043204U) },
		{ Z_Construct_UClass_USoundfieldEndpointSubmix, USoundfieldEndpointSubmix::StaticClass, TEXT("USoundfieldEndpointSubmix"), &Z_Registration_Info_UClass_USoundfieldEndpointSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundfieldEndpointSubmix), 2202587736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_503763132(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
