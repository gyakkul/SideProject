// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectMidSideSpreader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectMidSideSpreader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoChannelMode;
	static UEnum* EStereoChannelMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoChannelMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoChannelMode"));
		}
		return Z_Registration_Info_UEnum_EStereoChannelMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EStereoChannelMode>()
	{
		return EStereoChannelMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enumerators[] = {
		{ "EStereoChannelMode::MidSide", (int64)EStereoChannelMode::MidSide },
		{ "EStereoChannelMode::LeftRight", (int64)EStereoChannelMode::LeftRight },
		{ "EStereoChannelMode::count", (int64)EStereoChannelMode::count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Stereo channel mode\n" },
		{ "count.Hidden", "" },
		{ "count.Name", "EStereoChannelMode::count" },
		{ "LeftRight.Name", "EStereoChannelMode::LeftRight" },
		{ "MidSide.Name", "EStereoChannelMode::MidSide" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Stereo channel mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"EStereoChannelMode",
		"EStereoChannelMode",
		Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_EStereoChannelMode()
	{
		if (!Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton, Z_Construct_UEnum_Synthesis_EStereoChannelMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStereoChannelMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings;
class UScriptStruct* FSourceEffectMidSideSpreaderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectMidSideSpreaderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectMidSideSpreaderSettings>()
{
	return FSourceEffectMidSideSpreaderSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEqualPower_MetaData[];
#endif
		static void NewProp_bEqualPower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEqualPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSourceEffectMidSideSpreaderSettings\n// This is the source effect's setting struct. \n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "FSourceEffectMidSideSpreaderSettings\nThis is the source effect's setting struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectMidSideSpreaderSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Amount of Mid/Side Spread. 0.0 is no spread, 1.0 is full wide." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount = { "SpreadAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, SpreadAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the input signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the input signal" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, InputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_MetaData)) }; // 622581878
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate the channel mode of the output signal\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate the channel mode of the output signal" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMidSideSpreaderSettings, OutputMode), Z_Construct_UEnum_Synthesis_EStereoChannelMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_MetaData)) }; // 622581878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Indicate whether an equal power relationship between the mid and side channels should be maintained\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Indicate whether an equal power relationship between the mid and side channels should be maintained" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit(void* Obj)
	{
		((FSourceEffectMidSideSpreaderSettings*)Obj)->bEqualPower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower = { "bEqualPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSourceEffectMidSideSpreaderSettings), &Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_SpreadAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_OutputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewProp_bEqualPower,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectMidSideSpreaderSettings",
		sizeof(FSourceEffectMidSideSpreaderSettings),
		alignof(FSourceEffectMidSideSpreaderSettings),
		Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectMidSideSpreaderPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectMidSideSpreaderSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectMidSideSpreaderPreset::StaticRegisterNativesUSourceEffectMidSideSpreaderPreset()
	{
		UClass* Class = USourceEffectMidSideSpreaderPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectMidSideSpreaderPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics
	{
		struct SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms
		{
			FSourceEffectMidSideSpreaderSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2784770429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Change settings of your effect from blueprints. Will broadcast changes to active instances.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "Change settings of your effect from blueprints. Will broadcast changes to active instances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::SourceEffectMidSideSpreaderPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectMidSideSpreaderPreset);
	UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister()
	{
		return USourceEffectMidSideSpreaderPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectMidSideSpreaderPreset_SetSettings, "SetSettings" }, // 3347056179
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// USourceEffectMidSideSpreaderPreset\n// This code exposes your preset settings and effect class to the editor.\n// And allows for a handle to setting/updating effect settings dynamically.\n// ========================================================================\n" },
		{ "IncludePath", "SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "USourceEffectMidSideSpreaderPreset\nThis code exposes your preset settings and effect class to the editor.\nAnd allows for a handle to setting/updating effect settings dynamically." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// The copy of the settings struct. Can't be written to in BP, but can be read.\n// Note that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMidSideSpreader.h" },
		{ "ToolTip", "The copy of the settings struct. Can't be written to in BP, but can be read.\nNote that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectMidSideSpreaderPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings_MetaData)) }; // 2784770429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectMidSideSpreaderPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams = {
		&USourceEffectMidSideSpreaderPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton, Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectMidSideSpreaderPreset>()
	{
		return USourceEffectMidSideSpreaderPreset::StaticClass();
	}
	USourceEffectMidSideSpreaderPreset::USourceEffectMidSideSpreaderPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectMidSideSpreaderPreset);
	USourceEffectMidSideSpreaderPreset::~USourceEffectMidSideSpreaderPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::EnumInfo[] = {
		{ EStereoChannelMode_StaticEnum, TEXT("EStereoChannelMode"), &Z_Registration_Info_UEnum_EStereoChannelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 622581878U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectMidSideSpreaderSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics::NewStructOps, TEXT("SourceEffectMidSideSpreaderSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectMidSideSpreaderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectMidSideSpreaderSettings), 2784770429U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectMidSideSpreaderPreset, USourceEffectMidSideSpreaderPreset::StaticClass, TEXT("USourceEffectMidSideSpreaderPreset"), &Z_Registration_Info_UClass_USourceEffectMidSideSpreaderPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectMidSideSpreaderPreset), 2398595482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_1815587726(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
