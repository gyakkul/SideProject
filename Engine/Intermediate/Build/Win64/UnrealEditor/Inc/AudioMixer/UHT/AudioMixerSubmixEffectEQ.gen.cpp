// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/AudioMixerSubmixEffectEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectEQBand;
class UScriptStruct* FSubmixEffectEQBand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectEQBand"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectEQBand>()
{
	return FSubmixEffectEQBand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bandwidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A multiband EQ submix effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "A multiband EQ submix effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, Bandwidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "DisplayName", "Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectEQBand, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectEQBand*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectEQBand), &Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectEQBand",
		sizeof(FSubmixEffectEQBand),
		alignof(FSubmixEffectEQBand),
		Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectEQBand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings;
class UScriptStruct* FSubmixEffectSubmixEQSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectSubmixEQSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectSubmixEQSettings>()
{
	return FSubmixEffectSubmixEQSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQBands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQBands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EQBands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// EQ submix effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "EQ submix effect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner = { "EQBands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubmixEffectEQBand, METADATA_PARAMS(nullptr, 0) }; // 2213637284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "Comment", "// The EQ bands to use. \n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "The EQ bands to use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands = { "EQBands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectSubmixEQSettings, EQBands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData)) }; // 2213637284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectSubmixEQSettings",
		sizeof(FSubmixEffectSubmixEQSettings),
		alignof(FSubmixEffectSubmixEQSettings),
		Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectSubmixEQPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectSubmixEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset()
	{
		UClass* Class = USubmixEffectSubmixEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectSubmixEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics
	{
		struct SubmixEffectSubmixEQPreset_eventSetSettings_Parms
		{
			FSubmixEffectSubmixEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectSubmixEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2965162538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectSubmixEQPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::SubmixEffectSubmixEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectSubmixEQPreset);
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings, "SetSettings" }, // 1299988950
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectSubmixEQPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData)) }; // 2965162538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectSubmixEQPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams = {
		&USubmixEffectSubmixEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectSubmixEQPreset>()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	USubmixEffectSubmixEQPreset::USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectSubmixEQPreset);
	USubmixEffectSubmixEQPreset::~USubmixEffectSubmixEQPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectEQBand::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewStructOps, TEXT("SubmixEffectEQBand"), &Z_Registration_Info_UScriptStruct_SubmixEffectEQBand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectEQBand), 2213637284U) },
		{ FSubmixEffectSubmixEQSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewStructOps, TEXT("SubmixEffectSubmixEQSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectSubmixEQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectSubmixEQSettings), 2965162538U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectSubmixEQPreset, USubmixEffectSubmixEQPreset::StaticClass, TEXT("USubmixEffectSubmixEQPreset"), &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectSubmixEQPreset), 3927949519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_4132450916(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
