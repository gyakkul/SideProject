// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectEQ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectEQ() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEQPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEQPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQBand();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectEQBand;
class UScriptStruct* FSourceEffectEQBand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectEQBand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectEQBand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEQBand, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEQBand"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectEQBand.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEQBand>()
{
	return FSourceEffectEQBand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEQBand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The cutoff frequency of the band\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The cutoff frequency of the band" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEQBand, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The bandwidth (in octaves) of the band\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The bandwidth (in octaves) of the band" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEQBand, Bandwidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "Comment", "// The gain in decibels to apply to the eq band\n" },
		{ "DisplayName", "Gain (dB)" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The gain in decibels to apply to the eq band" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEQBand, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not the band is enabled. Allows changing bands on the fly.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "Whether or not the band is enabled. Allows changing bands on the fly." },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSourceEffectEQBand*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSourceEffectEQBand), &Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_Bandwidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_GainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEQBand",
		sizeof(FSourceEffectEQBand),
		alignof(FSourceEffectEQBand),
		Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQBand()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectEQBand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectEQBand.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectEQBand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectEQSettings;
class UScriptStruct* FSourceEffectEQSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectEQSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectEQSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectEQSettings>()
{
	return FSourceEffectEQSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// EQ source effect settings\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "EQ source effect settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectEQSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_Inner = { "EQBands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSourceEffectEQBand, METADATA_PARAMS(nullptr, 0) }; // 29901460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The EQ bands to use\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
		{ "ToolTip", "The EQ bands to use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands = { "EQBands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectEQSettings, EQBands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_MetaData)) }; // 29901460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewProp_EQBands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectEQSettings",
		sizeof(FSourceEffectEQSettings),
		alignof(FSourceEffectEQSettings),
		Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectEQSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectEQSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectEQPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectEQSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectEQPreset::StaticRegisterNativesUSourceEffectEQPreset()
	{
		UClass* Class = USourceEffectEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics
	{
		struct SourceEffectEQPreset_eventSetSettings_Parms
		{
			FSourceEffectEQSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectEQSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3218598567
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectEQPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::SourceEffectEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectEQPreset);
	UClass* Z_Construct_UClass_USourceEffectEQPreset_NoRegister()
	{
		return USourceEffectEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectEQPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectEQPreset_SetSettings, "SetSettings" }, // 2745001623
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectEQ.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectEQ.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectEQPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectEQSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings_MetaData)) }; // 3218598567
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectEQPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectEQPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectEQPreset_Statics::ClassParams = {
		&USourceEffectEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectEQPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton, Z_Construct_UClass_USourceEffectEQPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectEQPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectEQPreset>()
	{
		return USourceEffectEQPreset::StaticClass();
	}
	USourceEffectEQPreset::USourceEffectEQPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectEQPreset);
	USourceEffectEQPreset::~USourceEffectEQPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectEQBand::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectEQBand_Statics::NewStructOps, TEXT("SourceEffectEQBand"), &Z_Registration_Info_UScriptStruct_SourceEffectEQBand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectEQBand), 29901460U) },
		{ FSourceEffectEQSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectEQSettings_Statics::NewStructOps, TEXT("SourceEffectEQSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectEQSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectEQSettings), 3218598567U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectEQPreset, USourceEffectEQPreset::StaticClass, TEXT("USourceEffectEQPreset"), &Z_Registration_Info_UClass_USourceEffectEQPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectEQPreset), 880501859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_3462117586(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEQ_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
