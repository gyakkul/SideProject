// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectTapDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectTapDelay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ETapLineMode();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FTapDelayInfo();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETapLineMode;
	static UEnum* ETapLineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ETapLineMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ETapLineMode"));
		}
		return Z_Registration_Info_UEnum_ETapLineMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ETapLineMode>()
	{
		return ETapLineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ETapLineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enumerators[] = {
		{ "ETapLineMode::SendToChannel", (int64)ETapLineMode::SendToChannel },
		{ "ETapLineMode::Panning", (int64)ETapLineMode::Panning },
		{ "ETapLineMode::Disabled", (int64)ETapLineMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "// Disables the tap audio and performs a fadeout\n" },
		{ "Disabled.Name", "ETapLineMode::Disabled" },
		{ "Disabled.ToolTip", "Disables the tap audio and performs a fadeout" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "Panning.Comment", "// Allow tap to pan between channels based on azimuth angle\n" },
		{ "Panning.Name", "ETapLineMode::Panning" },
		{ "Panning.ToolTip", "Allow tap to pan between channels based on azimuth angle" },
		{ "SendToChannel.Comment", "// Send tap audio output to a channel directly\n" },
		{ "SendToChannel.Name", "ETapLineMode::SendToChannel" },
		{ "SendToChannel.ToolTip", "Send tap audio output to a channel directly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ETapLineMode",
		"ETapLineMode",
		Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ETapLineMode()
	{
		if (!Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ETapLineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETapLineMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TapDelayInfo;
class UScriptStruct* FTapDelayInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTapDelayInfo, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("TapDelayInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TapDelayInfo.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FTapDelayInfo>()
{
	return FTapDelayInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTapDelayInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TapLineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapLineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TapLineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanInDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PanInDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTapDelayInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "// Whether the tap line should send directly to a channel, pan, or not produce sound at all.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Whether the tap line should send directly to a channel, pan, or not produce sound at all." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode = { "TapLineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, TapLineMode), Z_Construct_UEnum_Synthesis_ETapLineMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_MetaData)) }; // 263272569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of time before this echo is heard in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Amount of time before this echo is heard in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength = { "DelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, DelayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// How loud this echo should be, in decibels.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "How loud this echo should be, in decibels." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "Comment", "// When the Tap Line Mode is set to Send To Channel, designates index of channel from which the echo should play.\n" },
		{ "EditCondition", "TapLineMode == ETapLineMode::SendToChannel" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "When the Tap Line Mode is set to Send To Channel, designates index of channel from which the echo should play." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel = { "OutputChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, OutputChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "Comment", "// When the Tap Line Mode is set to Panning, designates the angle at which the echo should be panned.\n// On Surround systems, 0 is directly in front of the listener, -90 is left, 90 is right, and 180/-180 is directly behind the listener.\n// On Stereo systems, <-90 is fully in the left ear, and >90 is fully in the right ear\n" },
		{ "EditCondition", "TapLineMode == ETapLineMode::Panning" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "When the Tap Line Mode is set to Panning, designates the angle at which the echo should be panned.\nOn Surround systems, 0 is directly in front of the listener, -90 is left, 90 is right, and 180/-180 is directly behind the listener.\nOn Stereo systems, <-90 is fully in the left ear, and >90 is fully in the right ear" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees = { "PanInDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, PanInDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTapDelayInfo, TapId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapLineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_DelayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_OutputChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_PanInDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewProp_TapId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTapDelayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"TapDelayInfo",
		sizeof(FTapDelayInfo),
		alignof(FTapDelayInfo),
		Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTapDelayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTapDelayInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton, Z_Construct_UScriptStruct_FTapDelayInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TapDelayInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings;
class UScriptStruct* FSubmixEffectTapDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectTapDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectTapDelaySettings>()
{
	return FSubmixEffectTapDelaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDelayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDelayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Taps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Taps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Taps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FTapDelaySubmixPresetSettings\n// UStruct used to define user-exposed params for use with your effect.\n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "FTapDelaySubmixPresetSettings\nUStruct used to define user-exposed params for use with your effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectTapDelaySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Maximum possible length for a delay, in milliseconds. Changing this at runtime will reset the effect." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength = { "MaximumDelayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, MaximumDelayLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Number of milliseconds over which a tap will reach it's set length and gain. Smaller values are more responsive, while larger values will make pitching less dramatic." },
		{ "UIMax", "20000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_Inner = { "Taps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(nullptr, 0) }; // 2756820784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "// Each tap's metadata\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Each tap's metadata" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps = { "Taps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectTapDelaySettings, Taps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_MetaData)) }; // 2756820784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_MaximumDelayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_InterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewProp_Taps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectTapDelaySettings",
		sizeof(FSubmixEffectTapDelaySettings),
		alignof(FSubmixEffectTapDelaySettings),
		Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetInterpolationTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolationTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetMaxDelayInMilliseconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDelayInMilliseconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetTapIds)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_TapIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTapIds(Z_Param_Out_TapIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execGetTap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
		P_GET_STRUCT_REF(FTapDelayInfo,Z_Param_Out_TapInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTap(Z_Param_TapId,Z_Param_Out_TapInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetTap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
		P_GET_STRUCT_REF(FTapDelayInfo,Z_Param_Out_TapInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTap(Z_Param_TapId,Z_Param_Out_TapInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execRemoveTap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TapId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTap(Z_Param_TapId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execAddTap)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TapId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTap(Z_Param_Out_TapId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectTapDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectTapDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectTapDelayPreset::StaticRegisterNativesUSubmixEffectTapDelayPreset()
	{
		UClass* Class = USubmixEffectTapDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTap", &USubmixEffectTapDelayPreset::execAddTap },
			{ "GetMaxDelayInMilliseconds", &USubmixEffectTapDelayPreset::execGetMaxDelayInMilliseconds },
			{ "GetTap", &USubmixEffectTapDelayPreset::execGetTap },
			{ "GetTapIds", &USubmixEffectTapDelayPreset::execGetTapIds },
			{ "RemoveTap", &USubmixEffectTapDelayPreset::execRemoveTap },
			{ "SetInterpolationTime", &USubmixEffectTapDelayPreset::execSetInterpolationTime },
			{ "SetSettings", &USubmixEffectTapDelayPreset::execSetSettings },
			{ "SetTap", &USubmixEffectTapDelayPreset::execSetTap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics
	{
		struct SubmixEffectTapDelayPreset_eventAddTap_Parms
		{
			int32 TapId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventAddTap_Parms, TapId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::NewProp_TapId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Adds a dynamic tap delay with the given settings. Returns the tap id. \n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Adds a dynamic tap delay with the given settings. Returns the tap id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "AddTap", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::SubmixEffectTapDelayPreset_eventAddTap_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics
	{
		struct SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Get the maximum delay possible.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Get the maximum delay possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetMaxDelayInMilliseconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::SubmixEffectTapDelayPreset_eventGetMaxDelayInMilliseconds_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics
	{
		struct SubmixEffectTapDelayPreset_eventGetTap_Parms
		{
			int32 TapId;
			FTapDelayInfo TapInfo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTap_Parms, TapId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapInfo = { "TapInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTap_Parms, TapInfo), Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(nullptr, 0) }; // 2756820784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::NewProp_TapInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Get the current info about a specific tap.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Get the current info about a specific tap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetTap", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::SubmixEffectTapDelayPreset_eventGetTap_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics
	{
		struct SubmixEffectTapDelayPreset_eventGetTapIds_Parms
		{
			TArray<int32> TapIds;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TapIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds_Inner = { "TapIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds = { "TapIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventGetTapIds_Parms, TapIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::NewProp_TapIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Retrieve an array of all tap ids for the submix effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Retrieve an array of all tap ids for the submix effect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "GetTapIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::SubmixEffectTapDelayPreset_eventGetTapIds_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics
	{
		struct SubmixEffectTapDelayPreset_eventRemoveTap_Parms
		{
			int32 TapId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventRemoveTap_Parms, TapId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::NewProp_TapId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Remove the tap from the preset.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Remove the tap from the preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "RemoveTap", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::SubmixEffectTapDelayPreset_eventRemoveTap_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics
	{
		struct SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms
		{
			float Time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Set the time it takes to interpolate between parameters, in milliseconds.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Set the time it takes to interpolate between parameters, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetInterpolationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::SubmixEffectTapDelayPreset_eventSetInterpolationTime_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics
	{
		struct SubmixEffectTapDelayPreset_eventSetSettings_Parms
		{
			FSubmixEffectTapDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1950305092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Set all tap delay setting. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Set all tap delay setting. This will replace any dynamically added or modified taps." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::SubmixEffectTapDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics
	{
		struct SubmixEffectTapDelayPreset_eventSetTap_Parms
		{
			int32 TapId;
			FTapDelayInfo TapInfo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TapId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapId = { "TapId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetTap_Parms, TapId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo = { "TapInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectTapDelayPreset_eventSetTap_Parms, TapInfo), Z_Construct_UScriptStruct_FTapDelayInfo, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo_MetaData)) }; // 2756820784
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::NewProp_TapInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|TapDelay" },
		{ "Comment", "// Modify a specific tap.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "Modify a specific tap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectTapDelayPreset, nullptr, "SetTap", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::SubmixEffectTapDelayPreset_eventSetTap_Parms), Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectTapDelayPreset);
	UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset_NoRegister()
	{
		return USubmixEffectTapDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_AddTap, "AddTap" }, // 3630594923
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds, "GetMaxDelayInMilliseconds" }, // 1475560677
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTap, "GetTap" }, // 559914282
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_GetTapIds, "GetTapIds" }, // 1904645792
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_RemoveTap, "RemoveTap" }, // 163964145
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetInterpolationTime, "SetInterpolationTime" }, // 2063429134
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetSettings, "SetSettings" }, // 3687408480
		{ &Z_Construct_UFunction_USubmixEffectTapDelayPreset_SetTap, "SetTap" }, // 1299632348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Realtime" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// UTapDelaySubmixPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ToolTip", "UTapDelaySubmixPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectTapDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectTapDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings_MetaData)) }; // 1950305092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectTapDelayPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::ClassParams = {
		&USubmixEffectTapDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectTapDelayPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectTapDelayPreset>()
	{
		return USubmixEffectTapDelayPreset::StaticClass();
	}
	USubmixEffectTapDelayPreset::USubmixEffectTapDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectTapDelayPreset);
	USubmixEffectTapDelayPreset::~USubmixEffectTapDelayPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::EnumInfo[] = {
		{ ETapLineMode_StaticEnum, TEXT("ETapLineMode"), &Z_Registration_Info_UEnum_ETapLineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 263272569U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ScriptStructInfo[] = {
		{ FTapDelayInfo::StaticStruct, Z_Construct_UScriptStruct_FTapDelayInfo_Statics::NewStructOps, TEXT("TapDelayInfo"), &Z_Registration_Info_UScriptStruct_TapDelayInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTapDelayInfo), 2756820784U) },
		{ FSubmixEffectTapDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics::NewStructOps, TEXT("SubmixEffectTapDelaySettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectTapDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectTapDelaySettings), 1950305092U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectTapDelayPreset, USubmixEffectTapDelayPreset::StaticClass, TEXT("USubmixEffectTapDelayPreset"), &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectTapDelayPreset), 2187343163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_2283962811(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
