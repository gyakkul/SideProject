// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectRingModulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectRingModulation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect;
	static UEnum* ERingModulatorTypeSourceEffect_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ERingModulatorTypeSourceEffect"));
		}
		return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ERingModulatorTypeSourceEffect>()
	{
		return ERingModulatorTypeSourceEffect_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enumerators[] = {
		{ "ERingModulatorTypeSourceEffect::Sine", (int64)ERingModulatorTypeSourceEffect::Sine },
		{ "ERingModulatorTypeSourceEffect::Saw", (int64)ERingModulatorTypeSourceEffect::Saw },
		{ "ERingModulatorTypeSourceEffect::Triangle", (int64)ERingModulatorTypeSourceEffect::Triangle },
		{ "ERingModulatorTypeSourceEffect::Square", (int64)ERingModulatorTypeSourceEffect::Square },
		{ "ERingModulatorTypeSourceEffect::Count", (int64)ERingModulatorTypeSourceEffect::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ERingModulatorTypeSourceEffect::Count" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "Saw.Name", "ERingModulatorTypeSourceEffect::Saw" },
		{ "Sine.Name", "ERingModulatorTypeSourceEffect::Sine" },
		{ "Square.Name", "ERingModulatorTypeSourceEffect::Square" },
		{ "Triangle.Name", "ERingModulatorTypeSourceEffect::Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ERingModulatorTypeSourceEffect",
		"ERingModulatorTypeSourceEffect",
		Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect()
	{
		if (!Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton, Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings;
class UScriptStruct* FSourceEffectRingModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectRingModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectRingModulationSettings>()
{
	return FSourceEffectRingModulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModulatorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulatorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulatorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBusModulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioBusModulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectRingModulationSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation modulator oscillator type\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation modulator oscillator type" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType = { "ModulatorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, ModulatorType), Z_Construct_UEnum_Synthesis_ERingModulatorTypeSourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_MetaData)) }; // 1182609657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// Ring modulation frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation frequency" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Ring modulation depth\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Ring modulation depth" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the dry signal (no ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the dry signal (no ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Gain for the wet signal (with ring mod)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Gain for the wet signal (with ring mod)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Audio bus to use to modulate the effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
		{ "ToolTip", "Audio bus to use to modulate the effect" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator = { "AudioBusModulator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectRingModulationSettings, AudioBusModulator), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_ModulatorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewProp_AudioBusModulator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectRingModulationSettings",
		sizeof(FSourceEffectRingModulationSettings),
		alignof(FSourceEffectRingModulationSettings),
		Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectRingModulationPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectRingModulationSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectRingModulationPreset::StaticRegisterNativesUSourceEffectRingModulationPreset()
	{
		UClass* Class = USourceEffectRingModulationPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectRingModulationPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics
	{
		struct SourceEffectRingModulationPreset_eventSetSettings_Parms
		{
			FSourceEffectRingModulationSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectRingModulationPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1634282328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectRingModulationPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::SourceEffectRingModulationPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectRingModulationPreset);
	UClass* Z_Construct_UClass_USourceEffectRingModulationPreset_NoRegister()
	{
		return USourceEffectRingModulationPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectRingModulationPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectRingModulationPreset_SetSettings, "SetSettings" }, // 1672636864
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectRingModulation.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectRingModulation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectRingModulationPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings_MetaData)) }; // 1634282328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectRingModulationPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams = {
		&USourceEffectRingModulationPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectRingModulationPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton, Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectRingModulationPreset>()
	{
		return USourceEffectRingModulationPreset::StaticClass();
	}
	USourceEffectRingModulationPreset::USourceEffectRingModulationPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectRingModulationPreset);
	USourceEffectRingModulationPreset::~USourceEffectRingModulationPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::EnumInfo[] = {
		{ ERingModulatorTypeSourceEffect_StaticEnum, TEXT("ERingModulatorTypeSourceEffect"), &Z_Registration_Info_UEnum_ERingModulatorTypeSourceEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1182609657U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectRingModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectRingModulationSettings_Statics::NewStructOps, TEXT("SourceEffectRingModulationSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectRingModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectRingModulationSettings), 1634282328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectRingModulationPreset, USourceEffectRingModulationPreset::StaticClass, TEXT("USourceEffectRingModulationPreset"), &Z_Registration_Info_UClass_USourceEffectRingModulationPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectRingModulationPreset), 4046171206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_1377933961(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectRingModulation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
