// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFilterPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixFilterType;
	static UEnum* ESubmixFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixFilterType"));
		}
		return Z_Registration_Info_UEnum_ESubmixFilterType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterType>()
	{
		return ESubmixFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enumerators[] = {
		{ "ESubmixFilterType::LowPass", (int64)ESubmixFilterType::LowPass },
		{ "ESubmixFilterType::HighPass", (int64)ESubmixFilterType::HighPass },
		{ "ESubmixFilterType::BandPass", (int64)ESubmixFilterType::BandPass },
		{ "ESubmixFilterType::BandStop", (int64)ESubmixFilterType::BandStop },
		{ "ESubmixFilterType::Count", (int64)ESubmixFilterType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BandPass.Name", "ESubmixFilterType::BandPass" },
		{ "BandStop.Name", "ESubmixFilterType::BandStop" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixFilterType::Count" },
		{ "HighPass.Name", "ESubmixFilterType::HighPass" },
		{ "LowPass.Name", "ESubmixFilterType::LowPass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESubmixFilterType",
		"ESubmixFilterType",
		Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterType()
	{
		if (!Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESubmixFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixFilterAlgorithm;
	static UEnum* ESubmixFilterAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixFilterAlgorithm"));
		}
		return Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterAlgorithm>()
	{
		return ESubmixFilterAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enumerators[] = {
		{ "ESubmixFilterAlgorithm::OnePole", (int64)ESubmixFilterAlgorithm::OnePole },
		{ "ESubmixFilterAlgorithm::StateVariable", (int64)ESubmixFilterAlgorithm::StateVariable },
		{ "ESubmixFilterAlgorithm::Ladder", (int64)ESubmixFilterAlgorithm::Ladder },
		{ "ESubmixFilterAlgorithm::Count", (int64)ESubmixFilterAlgorithm::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixFilterAlgorithm::Count" },
		{ "Ladder.Name", "ESubmixFilterAlgorithm::Ladder" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "OnePole.Name", "ESubmixFilterAlgorithm::OnePole" },
		{ "StateVariable.Name", "ESubmixFilterAlgorithm::StateVariable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESubmixFilterAlgorithm",
		"ESubmixFilterAlgorithm",
		Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton, Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixFilterAlgorithm.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings;
class UScriptStruct* FSubmixEffectFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectFilterSettings>()
{
	return FSubmixEffectFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterAlgorithm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSubmixEffectFilterSettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "FSubmixEffectFilterSettings\nUStruct used to define user-exposed params for use with your effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectFilterSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// What type of filter to use for the submix filter effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "What type of filter to use for the submix filter effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterType), Z_Construct_UEnum_Synthesis_ESubmixFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_MetaData)) }; // 1318347464
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// What type of filter algorithm to use for the submix filter effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "What type of filter algorithm to use for the submix filter effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm = { "FilterAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterAlgorithm), Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_MetaData)) }; // 1359025630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The output filter cutoff frequency (hz) [0.0, 20000.0]\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "The output filter cutoff frequency (hz) [0.0, 20000.0]" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The output filter resonance (Q) [0.5, 10]\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "The output filter resonance (Q) [0.5, 10]" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectFilterSettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewProp_FilterQ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectFilterSettings",
		sizeof(FSubmixEffectFilterSettings),
		alignof(FSubmixEffectFilterSettings),
		Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterQMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQMod(Z_Param_InQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterQ)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterQ(Z_Param_InQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterCutoffFrequencyMod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterCutoffFrequencyMod(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterCutoffFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterCutoffFrequency(Z_Param_InFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterAlgorithm)
	{
		P_GET_ENUM(ESubmixFilterAlgorithm,Z_Param_InAlgorithm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterAlgorithm(ESubmixFilterAlgorithm(Z_Param_InAlgorithm));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetFilterType)
	{
		P_GET_ENUM(ESubmixFilterType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterType(ESubmixFilterType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectFilterPreset::StaticRegisterNativesUSubmixEffectFilterPreset()
	{
		UClass* Class = USubmixEffectFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilterAlgorithm", &USubmixEffectFilterPreset::execSetFilterAlgorithm },
			{ "SetFilterCutoffFrequency", &USubmixEffectFilterPreset::execSetFilterCutoffFrequency },
			{ "SetFilterCutoffFrequencyMod", &USubmixEffectFilterPreset::execSetFilterCutoffFrequencyMod },
			{ "SetFilterQ", &USubmixEffectFilterPreset::execSetFilterQ },
			{ "SetFilterQMod", &USubmixEffectFilterPreset::execSetFilterQMod },
			{ "SetFilterType", &USubmixEffectFilterPreset::execSetFilterType },
			{ "SetSettings", &USubmixEffectFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms
		{
			ESubmixFilterAlgorithm InAlgorithm;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAlgorithm_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAlgorithm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm = { "InAlgorithm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms, InAlgorithm), Z_Construct_UEnum_Synthesis_ESubmixFilterAlgorithm, METADATA_PARAMS(nullptr, 0) }; // 1359025630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::NewProp_InAlgorithm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter algorithm\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter algorithm" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterAlgorithm", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::SubmixEffectFilterPreset_eventSetFilterAlgorithm_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms
		{
			float InFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the base filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the base filter cutoff frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterCutoffFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::SubmixEffectFilterPreset_eventSetFilterCutoffFrequency_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms
		{
			float InFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::NewProp_InFrequency = { "InFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms, InFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::NewProp_InFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the mod filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the mod filter cutoff frequency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterCutoffFrequencyMod", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::SubmixEffectFilterPreset_eventSetFilterCutoffFrequencyMod_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterQ_Parms
		{
			float InQ;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::NewProp_InQ = { "InQ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterQ_Parms, InQ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::NewProp_InQ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter Q\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter Q" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterQ", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::SubmixEffectFilterPreset_eventSetFilterQ_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterQMod_Parms
		{
			float InQ;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::NewProp_InQ = { "InQ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterQMod_Parms, InQ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::NewProp_InQ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter Q\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter Q" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterQMod", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::SubmixEffectFilterPreset_eventSetFilterQMod_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics
	{
		struct SubmixEffectFilterPreset_eventSetFilterType_Parms
		{
			ESubmixFilterType InType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetFilterType_Parms, InType), Z_Construct_UEnum_Synthesis_ESubmixFilterType, METADATA_PARAMS(nullptr, 0) }; // 1318347464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::NewProp_InType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Sets the filter type\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Sets the filter type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetFilterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::SubmixEffectFilterPreset_eventSetFilterType_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics
	{
		struct SubmixEffectFilterPreset_eventSetSettings_Parms
		{
			FSubmixEffectFilterSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1222980971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Filter" },
		{ "Comment", "// Set all filter effect settings\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "Set all filter effect settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::SubmixEffectFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectFilterPreset);
	UClass* Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister()
	{
		return USubmixEffectFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterAlgorithm, "SetFilterAlgorithm" }, // 3510329917
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequency, "SetFilterCutoffFrequency" }, // 169589914
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod, "SetFilterCutoffFrequencyMod" }, // 3264506660
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQ, "SetFilterQ" }, // 4285812671
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterQMod, "SetFilterQMod" }, // 1242597347
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetFilterType, "SetFilterType" }, // 1260709554
		{ &Z_Construct_UFunction_USubmixEffectFilterPreset_SetSettings, "SetSettings" }, // 1344009523
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectFilterPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectFilter.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ToolTip", "USubmixEffectFilterPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectFilterPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectFilterSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings_MetaData)) }; // 1222980971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectFilterPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectFilterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectFilterPreset_Statics::ClassParams = {
		&USubmixEffectFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectFilterPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectFilterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectFilterPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectFilterPreset>()
	{
		return USubmixEffectFilterPreset::StaticClass();
	}
	USubmixEffectFilterPreset::USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectFilterPreset);
	USubmixEffectFilterPreset::~USubmixEffectFilterPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::EnumInfo[] = {
		{ ESubmixFilterType_StaticEnum, TEXT("ESubmixFilterType"), &Z_Registration_Info_UEnum_ESubmixFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1318347464U) },
		{ ESubmixFilterAlgorithm_StaticEnum, TEXT("ESubmixFilterAlgorithm"), &Z_Registration_Info_UEnum_ESubmixFilterAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1359025630U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics::NewStructOps, TEXT("SubmixEffectFilterSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectFilterSettings), 1222980971U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectFilterPreset, USubmixEffectFilterPreset::StaticClass, TEXT("USubmixEffectFilterPreset"), &Z_Registration_Info_UClass_USubmixEffectFilterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectFilterPreset), 1428365063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_2136115486(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
