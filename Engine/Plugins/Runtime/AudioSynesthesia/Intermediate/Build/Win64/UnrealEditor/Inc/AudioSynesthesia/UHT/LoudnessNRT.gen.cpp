// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoudnessNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudnessNRT() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessNRTSettings_NoRegister();
	AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum;
	static UEnum* ELoudnessNRTCurveTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("ELoudnessNRTCurveTypeEnum"));
		}
		return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<ELoudnessNRTCurveTypeEnum>()
	{
		return ELoudnessNRTCurveTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enumerators[] = {
		{ "ELoudnessNRTCurveTypeEnum::A", (int64)ELoudnessNRTCurveTypeEnum::A },
		{ "ELoudnessNRTCurveTypeEnum::B", (int64)ELoudnessNRTCurveTypeEnum::B },
		{ "ELoudnessNRTCurveTypeEnum::C", (int64)ELoudnessNRTCurveTypeEnum::C },
		{ "ELoudnessNRTCurveTypeEnum::D", (int64)ELoudnessNRTCurveTypeEnum::D },
		{ "ELoudnessNRTCurveTypeEnum::None", (int64)ELoudnessNRTCurveTypeEnum::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "A.Comment", "/** Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds. */" },
		{ "A.DisplayName", "A" },
		{ "A.Name", "ELoudnessNRTCurveTypeEnum::A" },
		{ "A.ToolTip", "Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds." },
		{ "B.Comment", "/** Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz. */" },
		{ "B.DisplayName", "B" },
		{ "B.Name", "ELoudnessNRTCurveTypeEnum::B" },
		{ "B.ToolTip", "Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz." },
		{ "BlueprintType", "true" },
		{ "C.Comment", "/** Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz. */" },
		{ "C.DisplayName", "C" },
		{ "C.Name", "ELoudnessNRTCurveTypeEnum::C" },
		{ "C.ToolTip", "Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz." },
		{ "Comment", "/** ELoudnessNRTCurveTypeEnum\n *\n * Enumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications.\n */" },
		{ "D.Comment", "/** Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range. */" },
		{ "D.DisplayName", "D" },
		{ "D.Name", "ELoudnessNRTCurveTypeEnum::D" },
		{ "D.ToolTip", "Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range." },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "None.Comment", "/** No loudness curve weighting. */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELoudnessNRTCurveTypeEnum::None" },
		{ "None.ToolTip", "No loudness curve weighting." },
		{ "ToolTip", "ELoudnessNRTCurveTypeEnum\n\nEnumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		"ELoudnessNRTCurveTypeEnum",
		"ELoudnessNRTCurveTypeEnum",
		Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum.InnerSingleton;
	}
	void ULoudnessNRTSettings::StaticRegisterNativesULoudnessNRTSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessNRTSettings);
	UClass* Z_Construct_UClass_ULoudnessNRTSettings_NoRegister()
	{
		return ULoudnessNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULoudnessNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudnessNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessNRTSettings\n *\n * Settings for a ULoudnessNRT analyzer.\n */" },
		{ "IncludePath", "LoudnessNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "ULoudnessNRTSettings\n\nSettings for a ULoudnessNRT analyzer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between loudness measurements */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Number of seconds between loudness measurements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRTSettings, AnalysisPeriod), METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Minimum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Minimum analysis frequency for calculating loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRTSettings, MinimumFrequency), METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Maximum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Maximum analysis frequency for calculating loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRTSettings, MaximumFrequency), METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of equal loudness curve used in calculations */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Type of equal loudness curve used in calculations" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRTSettings, CurveType), Z_Construct_UEnum_AudioSynesthesia_ELoudnessNRTCurveTypeEnum, METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_MetaData)) }; // 2965207153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** dB level to denote silence.  Used when calculating normalized loudness. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "dB level to denote silence.  Used when calculating normalized loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRTSettings, NoiseFloorDb), METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_AnalysisPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MinimumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_MaximumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRTSettings_Statics::NewProp_NoiseFloorDb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudnessNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessNRTSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessNRTSettings_Statics::ClassParams = {
		&ULoudnessNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudnessNRTSettings()
	{
		if (!Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton, Z_Construct_UClass_ULoudnessNRTSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoudnessNRTSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessNRTSettings>()
	{
		return ULoudnessNRTSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessNRTSettings);
	ULoudnessNRTSettings::~ULoudnessNRTSettings() {}
	DEFINE_FUNCTION(ULoudnessNRT::execGetNormalizedChannelLoudnessAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedChannelLoudnessAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutLoudness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoudnessNRT::execGetNormalizedLoudnessAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedLoudnessAtTime(Z_Param_InSeconds,Z_Param_Out_OutLoudness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoudnessNRT::execGetChannelLoudnessAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChannelLoudnessAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutLoudness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoudnessNRT::execGetLoudnessAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLoudness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLoudnessAtTime(Z_Param_InSeconds,Z_Param_Out_OutLoudness);
		P_NATIVE_END;
	}
	void ULoudnessNRT::StaticRegisterNativesULoudnessNRT()
	{
		UClass* Class = ULoudnessNRT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannelLoudnessAtTime", &ULoudnessNRT::execGetChannelLoudnessAtTime },
			{ "GetLoudnessAtTime", &ULoudnessNRT::execGetLoudnessAtTime },
			{ "GetNormalizedChannelLoudnessAtTime", &ULoudnessNRT::execGetNormalizedChannelLoudnessAtTime },
			{ "GetNormalizedLoudnessAtTime", &ULoudnessNRT::execGetNormalizedLoudnessAtTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics
	{
		struct LoudnessNRT_eventGetChannelLoudnessAtTime_Parms
		{
			float InSeconds;
			int32 InChannel;
			float OutLoudness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetChannelLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::NewProp_OutLoudness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel loudness of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get a specific channel loudness of the analyzed sound at a given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetChannelLoudnessAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetChannelLoudnessAtTime_Parms), Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics
	{
		struct LoudnessNRT_eventGetLoudnessAtTime_Parms
		{
			float InSeconds;
			float OutLoudness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::NewProp_OutLoudness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get the overall loudness of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get the overall loudness of the analyzed sound at a given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetLoudnessAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::LoudnessNRT_eventGetLoudnessAtTime_Parms), Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics
	{
		struct LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms
		{
			float InSeconds;
			int32 InChannel;
			float OutLoudness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::NewProp_OutLoudness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/**\n\x09\x09 * Get a specific channel normalized loudness of the analyzed sound at a given time. Normalized \n\x09\x09 * loudness is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the \n\x09\x09 * maximum loudness in the sound.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get a specific channel normalized loudness of the analyzed sound at a given time. Normalized\nloudness is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the\nmaximum loudness in the sound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetNormalizedChannelLoudnessAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedChannelLoudnessAtTime_Parms), Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics
	{
		struct LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms
		{
			float InSeconds;
			float OutLoudness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutLoudness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_OutLoudness = { "OutLoudness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms, OutLoudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::NewProp_OutLoudness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/**\n\x09\x09 * Get the normalized overall loudness of the analyzed sound at a given time. Normalized loudness\n\x09\x09 * is always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the maximum \n\x09\x09 * loudness in the sound.\n\x09\x09 */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "Get the normalized overall loudness of the analyzed sound at a given time. Normalized loudness\nis always between 0.0 to 1.0. 0.0 refers to the noise floor while 1.0 refers to the maximum\nloudness in the sound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudnessNRT, nullptr, "GetNormalizedLoudnessAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::LoudnessNRT_eventGetNormalizedLoudnessAtTime_Parms), Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessNRT);
	UClass* Z_Construct_UClass_ULoudnessNRT_NoRegister()
	{
		return ULoudnessNRT::StaticClass();
	}
	struct Z_Construct_UClass_ULoudnessNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudnessNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoudnessNRT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoudnessNRT_GetChannelLoudnessAtTime, "GetChannelLoudnessAtTime" }, // 1857680815
		{ &Z_Construct_UFunction_ULoudnessNRT_GetLoudnessAtTime, "GetLoudnessAtTime" }, // 4103152083
		{ &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedChannelLoudnessAtTime, "GetNormalizedChannelLoudnessAtTime" }, // 1604670329
		{ &Z_Construct_UFunction_ULoudnessNRT_GetNormalizedLoudnessAtTime, "GetNormalizedLoudnessAtTime" }, // 2160019610
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessNRT\n *\n * ULoudnessNRT calculates the temporal evolution of perceptual loudness for a given \n * sound. Loudness is available for individual channels or the overall sound asset. Normalized \n * loudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\n * maximum loudness of the particular sound.\n */" },
		{ "IncludePath", "LoudnessNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "ULoudnessNRT\n\nULoudnessNRT calculates the temporal evolution of perceptual loudness for a given\nsound. Loudness is available for individual channels or the overall sound asset. Normalized\nloudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\nmaximum loudness of the particular sound." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/LoudnessNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessNRT, Settings), Z_Construct_UClass_ULoudnessNRTSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessNRT_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudnessNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessNRT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessNRT_Statics::ClassParams = {
		&ULoudnessNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoudnessNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudnessNRT()
	{
		if (!Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton, Z_Construct_UClass_ULoudnessNRT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoudnessNRT.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessNRT>()
	{
		return ULoudnessNRT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessNRT);
	ULoudnessNRT::~ULoudnessNRT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::EnumInfo[] = {
		{ ELoudnessNRTCurveTypeEnum_StaticEnum, TEXT("ELoudnessNRTCurveTypeEnum"), &Z_Registration_Info_UEnum_ELoudnessNRTCurveTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2965207153U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoudnessNRTSettings, ULoudnessNRTSettings::StaticClass, TEXT("ULoudnessNRTSettings"), &Z_Registration_Info_UClass_ULoudnessNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessNRTSettings), 3407420641U) },
		{ Z_Construct_UClass_ULoudnessNRT, ULoudnessNRT::StaticClass, TEXT("ULoudnessNRT"), &Z_Registration_Info_UClass_ULoudnessNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessNRT), 2991834222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_516054507(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
