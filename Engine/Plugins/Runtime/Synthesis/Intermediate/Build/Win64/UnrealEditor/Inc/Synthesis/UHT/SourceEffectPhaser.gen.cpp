// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectPhaser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectPhaser() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPhaserPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EPhaserLFOType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhaserLFOType;
	static UEnum* EPhaserLFOType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EPhaserLFOType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EPhaserLFOType"));
		}
		return Z_Registration_Info_UEnum_EPhaserLFOType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EPhaserLFOType>()
	{
		return EPhaserLFOType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enumerators[] = {
		{ "EPhaserLFOType::Sine", (int64)EPhaserLFOType::Sine },
		{ "EPhaserLFOType::UpSaw", (int64)EPhaserLFOType::UpSaw },
		{ "EPhaserLFOType::DownSaw", (int64)EPhaserLFOType::DownSaw },
		{ "EPhaserLFOType::Square", (int64)EPhaserLFOType::Square },
		{ "EPhaserLFOType::Triangle", (int64)EPhaserLFOType::Triangle },
		{ "EPhaserLFOType::Exponential", (int64)EPhaserLFOType::Exponential },
		{ "EPhaserLFOType::RandomSampleHold", (int64)EPhaserLFOType::RandomSampleHold },
		{ "EPhaserLFOType::Count", (int64)EPhaserLFOType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EPhaserLFOType::Count" },
		{ "DownSaw.Name", "EPhaserLFOType::DownSaw" },
		{ "Exponential.Name", "EPhaserLFOType::Exponential" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "RandomSampleHold.Name", "EPhaserLFOType::RandomSampleHold" },
		{ "Sine.Name", "EPhaserLFOType::Sine" },
		{ "Square.Name", "EPhaserLFOType::Square" },
		{ "Triangle.Name", "EPhaserLFOType::Triangle" },
		{ "UpSaw.Name", "EPhaserLFOType::UpSaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"EPhaserLFOType",
		"EPhaserLFOType",
		Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_EPhaserLFOType()
	{
		if (!Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton, Z_Construct_UEnum_Synthesis_EPhaserLFOType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhaserLFOType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings;
class UScriptStruct* FSourceEffectPhaserSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectPhaserSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectPhaserSettings>()
{
	return FSourceEffectPhaserSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LFOType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LFOType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LFOType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseQuadraturePhase_MetaData[];
#endif
		static void NewProp_UseQuadraturePhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseQuadraturePhase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectPhaserSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The wet level of the phaser effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectPhaserSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The LFO frequency of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The LFO frequency of the phaser effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectPhaserSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the phaser effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The feedback of the phaser effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectPhaserSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The phaser LFO type\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The phaser LFO type" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType = { "LFOType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectPhaserSettings, LFOType), Z_Construct_UEnum_Synthesis_EPhaserLFOType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_MetaData)) }; // 4257479572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Whether or not to use quadtrature phase for the LFO modulation\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "Whether or not to use quadtrature phase for the LFO modulation" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_SetBit(void* Obj)
	{
		((FSourceEffectPhaserSettings*)Obj)->UseQuadraturePhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase = { "UseQuadraturePhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSourceEffectPhaserSettings), &Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_LFOType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewProp_UseQuadraturePhase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectPhaserSettings",
		sizeof(FSourceEffectPhaserSettings),
		alignof(FSourceEffectPhaserSettings),
		Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectPhaserSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectPhaserPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectPhaserSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectPhaserPreset::StaticRegisterNativesUSourceEffectPhaserPreset()
	{
		UClass* Class = USourceEffectPhaserPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectPhaserPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics
	{
		struct SourceEffectPhaserPreset_eventSetSettings_Parms
		{
			FSourceEffectPhaserSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectPhaserPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3186553374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectPhaserPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::SourceEffectPhaserPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectPhaserPreset);
	UClass* Z_Construct_UClass_USourceEffectPhaserPreset_NoRegister()
	{
		return USourceEffectPhaserPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectPhaserPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectPhaserPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectPhaserPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectPhaserPreset_SetSettings, "SetSettings" }, // 3435968711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectPhaser.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectPhaser.h" },
		{ "ToolTip", "The depth of the chorus effect" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectPhaserPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectPhaserSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings_MetaData)) }; // 3186553374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectPhaserPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectPhaserPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectPhaserPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectPhaserPreset_Statics::ClassParams = {
		&USourceEffectPhaserPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectPhaserPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton, Z_Construct_UClass_USourceEffectPhaserPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectPhaserPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectPhaserPreset>()
	{
		return USourceEffectPhaserPreset::StaticClass();
	}
	USourceEffectPhaserPreset::USourceEffectPhaserPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectPhaserPreset);
	USourceEffectPhaserPreset::~USourceEffectPhaserPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::EnumInfo[] = {
		{ EPhaserLFOType_StaticEnum, TEXT("EPhaserLFOType"), &Z_Registration_Info_UEnum_EPhaserLFOType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4257479572U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectPhaserSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectPhaserSettings_Statics::NewStructOps, TEXT("SourceEffectPhaserSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectPhaserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectPhaserSettings), 3186553374U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectPhaserPreset, USourceEffectPhaserPreset::StaticClass, TEXT("USourceEffectPhaserPreset"), &Z_Registration_Info_UClass_USourceEffectPhaserPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectPhaserPreset), 89704516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_2401478679(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPhaser_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
