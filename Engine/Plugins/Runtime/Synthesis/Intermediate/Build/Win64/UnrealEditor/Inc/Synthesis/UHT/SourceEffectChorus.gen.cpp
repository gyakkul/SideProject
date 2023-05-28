// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectChorus.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectChorus() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationDestinationSettings();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings;
class UScriptStruct* FSourceEffectChorusBaseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusBaseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusBaseSettings>()
{
	return FSourceEffectChorusBaseSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusBaseSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusBaseSettings, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewProp_Spread,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectChorusBaseSettings",
		sizeof(FSourceEffectChorusBaseSettings),
		alignof(FSourceEffectChorusBaseSettings),
		Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings;
class UScriptStruct* FSourceEffectChorusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChorusSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectChorusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectChorusSettings>()
{
	return FSourceEffectChorusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DepthModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrequencyModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeedbackModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WetModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DryModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpreadModulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChorusSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The depth of the chorus effect\n" },
		{ "DisplayName", "Depth" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The depth of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation = { "DepthModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, DepthModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData[] = {
		{ "AudioParam", "LowRateFrequency" },
		{ "AudioParamClass", "SoundModulationParameterFrequency" },
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The frequency of the chorus effect\n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The frequency of the chorus effect" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation = { "FrequencyModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, FrequencyModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The feedback of the chorus effect\n" },
		{ "DisplayName", "Feedback" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The feedback of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation = { "FeedbackModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, FeedbackModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The wet level of the chorus effect\n" },
		{ "DisplayName", "Wet Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The wet level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation = { "WetModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, WetModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the chorus effect\n" },
		{ "DisplayName", "Dry Level" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The dry level of the chorus effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation = { "DryModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, DryModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation_MetaData)) }; // 552980304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData[] = {
		{ "AudioParamClass", "SoundModulationParameter" },
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The spread of the effect (larger means greater difference between left and right delay lines)\n" },
		{ "DisplayName", "Spread" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "The spread of the effect (larger means greater difference between left and right delay lines)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation = { "SpreadModulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectChorusSettings, SpreadModulation), Z_Construct_UScriptStruct_FSoundModulationDestinationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation_MetaData)) }; // 552980304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_Spread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DepthModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FrequencyModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_FeedbackModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_WetModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_DryModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewProp_SpreadModulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectChorusSettings",
		sizeof(FSourceEffectChorusSettings),
		alignof(FSourceEffectChorusSettings),
		Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChorusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetModulationSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectChorusSettings,Z_Param_Out_ModulationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModulationSettings(Z_Param_Out_ModulationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectChorusBaseSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpreadModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpreadModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpreadModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpreadModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetSpread)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpread(Z_Param_Spread);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDryModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDryModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDryModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDry)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DryAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDry(Z_Param_DryAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWetModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWetModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWetModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetWet)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WetAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWet(Z_Param_WetAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequencyModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequencyModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequencyModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequencyModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_Frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedbackModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedbackModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedbackModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedbackModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Feedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFeedback(Z_Param_Feedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepthModulators)
	{
		P_GET_TSET_REF(USoundModulatorBase*,Z_Param_Out_Modulators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepthModulators(Z_Param_Out_Modulators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepthModulator)
	{
		P_GET_OBJECT(USoundModulatorBase,Z_Param_Modulator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepthModulator(Z_Param_Modulator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USourceEffectChorusPreset::execSetDepth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Depth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepth(Z_Param_Depth);
		P_NATIVE_END;
	}
	void USourceEffectChorusPreset::StaticRegisterNativesUSourceEffectChorusPreset()
	{
		UClass* Class = USourceEffectChorusPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDepth", &USourceEffectChorusPreset::execSetDepth },
			{ "SetDepthModulator", &USourceEffectChorusPreset::execSetDepthModulator },
			{ "SetDepthModulators", &USourceEffectChorusPreset::execSetDepthModulators },
			{ "SetDry", &USourceEffectChorusPreset::execSetDry },
			{ "SetDryModulator", &USourceEffectChorusPreset::execSetDryModulator },
			{ "SetDryModulators", &USourceEffectChorusPreset::execSetDryModulators },
			{ "SetFeedback", &USourceEffectChorusPreset::execSetFeedback },
			{ "SetFeedbackModulator", &USourceEffectChorusPreset::execSetFeedbackModulator },
			{ "SetFeedbackModulators", &USourceEffectChorusPreset::execSetFeedbackModulators },
			{ "SetFrequency", &USourceEffectChorusPreset::execSetFrequency },
			{ "SetFrequencyModulator", &USourceEffectChorusPreset::execSetFrequencyModulator },
			{ "SetFrequencyModulators", &USourceEffectChorusPreset::execSetFrequencyModulators },
			{ "SetModulationSettings", &USourceEffectChorusPreset::execSetModulationSettings },
			{ "SetSettings", &USourceEffectChorusPreset::execSetSettings },
			{ "SetSpread", &USourceEffectChorusPreset::execSetSpread },
			{ "SetSpreadModulator", &USourceEffectChorusPreset::execSetSpreadModulator },
			{ "SetSpreadModulators", &USourceEffectChorusPreset::execSetSpreadModulators },
			{ "SetWet", &USourceEffectChorusPreset::execSetWet },
			{ "SetWetModulator", &USourceEffectChorusPreset::execSetWetModulator },
			{ "SetWetModulators", &USourceEffectChorusPreset::execSetWetModulators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics
	{
		struct SourceEffectChorusPreset_eventSetDepth_Parms
		{
			float Depth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepth_Parms, Depth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::NewProp_Depth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::SourceEffectChorusPreset_eventSetDepth_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetDepthModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepthModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepthModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::SourceEffectChorusPreset_eventSetDepthModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetDepthModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDepthModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDepthModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::SourceEffectChorusPreset_eventSetDepthModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics
	{
		struct SourceEffectChorusPreset_eventSetDry_Parms
		{
			float DryAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount = { "DryAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDry_Parms, DryAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::NewProp_DryAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDry", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::SourceEffectChorusPreset_eventSetDry_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetDryModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDryModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDryModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::SourceEffectChorusPreset_eventSetDryModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetDryModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetDryModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetDryModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::SourceEffectChorusPreset_eventSetDryModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics
	{
		struct SourceEffectChorusPreset_eventSetFeedback_Parms
		{
			float Feedback;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedback_Parms, Feedback), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::SourceEffectChorusPreset_eventSetFeedback_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetFeedbackModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedbackModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedbackModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::SourceEffectChorusPreset_eventSetFeedbackModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetFeedbackModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFeedbackModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFeedbackModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::SourceEffectChorusPreset_eventSetFeedbackModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics
	{
		struct SourceEffectChorusPreset_eventSetFrequency_Parms
		{
			float Frequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::SourceEffectChorusPreset_eventSetFrequency_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetFrequencyModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequencyModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequencyModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::SourceEffectChorusPreset_eventSetFrequencyModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetFrequencyModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetFrequencyModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetFrequencyModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::SourceEffectChorusPreset_eventSetFrequencyModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics
	{
		struct SourceEffectChorusPreset_eventSetModulationSettings_Parms
		{
			FSourceEffectChorusSettings ModulationSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings = { "ModulationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetModulationSettings_Parms, ModulationSettings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings_MetaData)) }; // 3826918565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::NewProp_ModulationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetModulationSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::SourceEffectChorusPreset_eventSetModulationSettings_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics
	{
		struct SourceEffectChorusPreset_eventSetSettings_Parms
		{
			FSourceEffectChorusBaseSettings Settings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings_MetaData)) }; // 3380137009
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "Comment", "// Sets just base (i.e. carrier) setting values without modifying modulation source references\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
		{ "ToolTip", "Sets just base (i.e. carrier) setting values without modifying modulation source references" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::SourceEffectChorusPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics
	{
		struct SourceEffectChorusPreset_eventSetSpread_Parms
		{
			float Spread;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpread_Parms, Spread), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::NewProp_Spread,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpread", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::SourceEffectChorusPreset_eventSetSpread_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetSpreadModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpreadModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpreadModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::SourceEffectChorusPreset_eventSetSpreadModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetSpreadModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetSpreadModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetSpreadModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::SourceEffectChorusPreset_eventSetSpreadModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics
	{
		struct SourceEffectChorusPreset_eventSetWet_Parms
		{
			float WetAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount = { "WetAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWet_Parms, WetAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::NewProp_WetAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::SourceEffectChorusPreset_eventSetWet_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics
	{
		struct SourceEffectChorusPreset_eventSetWetModulator_Parms
		{
			const USoundModulatorBase* Modulator;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator = { "Modulator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWetModulator_Parms, Modulator), Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::NewProp_Modulator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWetModulator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::SourceEffectChorusPreset_eventSetWetModulator_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics
	{
		struct SourceEffectChorusPreset_eventSetWetModulators_Parms
		{
			TSet<USoundModulatorBase*> Modulators;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modulators_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modulators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_ElementProp = { "Modulators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectChorusPreset_eventSetWetModulators_Parms, Modulators), METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::NewProp_Modulators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Chorus" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectChorusPreset, nullptr, "SetWetModulators", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::SourceEffectChorusPreset_eventSetWetModulators_Parms), Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectChorusPreset);
	UClass* Z_Construct_UClass_USourceEffectChorusPreset_NoRegister()
	{
		return USourceEffectChorusPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectChorusPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectChorusPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectChorusPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepth, "SetDepth" }, // 2578922259
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulator, "SetDepthModulator" }, // 3856491958
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDepthModulators, "SetDepthModulators" }, // 1128351777
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDry, "SetDry" }, // 4129421304
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulator, "SetDryModulator" }, // 4065764260
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetDryModulators, "SetDryModulators" }, // 2551828973
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedback, "SetFeedback" }, // 3962338871
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulator, "SetFeedbackModulator" }, // 1336060311
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFeedbackModulators, "SetFeedbackModulators" }, // 1791005657
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequency, "SetFrequency" }, // 3725179523
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulator, "SetFrequencyModulator" }, // 2024324550
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetFrequencyModulators, "SetFrequencyModulators" }, // 3269466293
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetModulationSettings, "SetModulationSettings" }, // 306070054
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSettings, "SetSettings" }, // 318939288
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpread, "SetSpread" }, // 599025948
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulator, "SetSpreadModulator" }, // 2467281698
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetSpreadModulators, "SetSpreadModulators" }, // 2945406029
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWet, "SetWet" }, // 2686802360
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulator, "SetWetModulator" }, // 2262107924
		{ &Z_Construct_UFunction_USourceEffectChorusPreset_SetWetModulators, "SetWetModulators" }, // 435058679
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectChorus.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectChorus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectChorusPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectChorusSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings_MetaData)) }; // 3826918565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectChorusPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectChorusPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectChorusPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams = {
		&USourceEffectChorusPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectChorusPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectChorusPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton, Z_Construct_UClass_USourceEffectChorusPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectChorusPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectChorusPreset>()
	{
		return USourceEffectChorusPreset::StaticClass();
	}
	USourceEffectChorusPreset::USourceEffectChorusPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectChorusPreset);
	USourceEffectChorusPreset::~USourceEffectChorusPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectChorusBaseSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChorusBaseSettings_Statics::NewStructOps, TEXT("SourceEffectChorusBaseSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectChorusBaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChorusBaseSettings), 3380137009U) },
		{ FSourceEffectChorusSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectChorusSettings_Statics::NewStructOps, TEXT("SourceEffectChorusSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectChorusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectChorusSettings), 3826918565U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectChorusPreset, USourceEffectChorusPreset::StaticClass, TEXT("USourceEffectChorusPreset"), &Z_Registration_Info_UClass_USourceEffectChorusPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectChorusPreset), 1651569335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_220970358(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectChorus_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
