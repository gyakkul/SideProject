// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTableSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	UPackage* Z_Construct_UPackage__Script_WaveTable();
	WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve();
	WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableResolution;
	static UEnum* EWaveTableResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableResolution, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableResolution"));
		}
		return Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton;
	}
	template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableResolution>()
	{
		return EWaveTableResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enumerators[] = {
		{ "EWaveTableResolution::None", (int64)EWaveTableResolution::None },
		{ "EWaveTableResolution::Res_8", (int64)EWaveTableResolution::Res_8 },
		{ "EWaveTableResolution::Res_16", (int64)EWaveTableResolution::Res_16 },
		{ "EWaveTableResolution::Res_32", (int64)EWaveTableResolution::Res_32 },
		{ "EWaveTableResolution::Res_64", (int64)EWaveTableResolution::Res_64 },
		{ "EWaveTableResolution::Res_128", (int64)EWaveTableResolution::Res_128 },
		{ "EWaveTableResolution::Res_256", (int64)EWaveTableResolution::Res_256 },
		{ "EWaveTableResolution::Res_512", (int64)EWaveTableResolution::Res_512 },
		{ "EWaveTableResolution::Res_1024", (int64)EWaveTableResolution::Res_1024 },
		{ "EWaveTableResolution::Res_2048", (int64)EWaveTableResolution::Res_2048 },
		{ "EWaveTableResolution::Res_4096", (int64)EWaveTableResolution::Res_4096 },
		{ "EWaveTableResolution::Res_Max", (int64)EWaveTableResolution::Res_Max },
		{ "EWaveTableResolution::Maximum", (int64)EWaveTableResolution::Maximum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace WaveTable\n" },
		{ "Maximum.Comment", "// Takes largest source file length (if WaveTable was produced\n// by a file, PCM stream, SoundWave, etc.) of superset of waves,\n// or Res_Max if all superset of waves were produced by curves. This\n// can be very memory intensive if source file is large!\n" },
		{ "Maximum.Name", "EWaveTableResolution::Maximum" },
		{ "Maximum.ToolTip", "Takes largest source file length (if WaveTable was produced\nby a file, PCM stream, SoundWave, etc.) of superset of waves,\nor Res_Max if all superset of waves were produced by curves. This\ncan be very memory intensive if source file is large!" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EWaveTableResolution::None" },
		{ "Res_1024.DisplayName", "1024" },
		{ "Res_1024.Name", "EWaveTableResolution::Res_1024" },
		{ "Res_128.DisplayName", "128" },
		{ "Res_128.Name", "EWaveTableResolution::Res_128" },
		{ "Res_16.DisplayName", "16" },
		{ "Res_16.Name", "EWaveTableResolution::Res_16" },
		{ "Res_2048.DisplayName", "2048" },
		{ "Res_2048.Name", "EWaveTableResolution::Res_2048" },
		{ "Res_256.DisplayName", "256" },
		{ "Res_256.Name", "EWaveTableResolution::Res_256" },
		{ "Res_32.DisplayName", "32" },
		{ "Res_32.Name", "EWaveTableResolution::Res_32" },
		{ "Res_4096.DisplayName", "4096" },
		{ "Res_4096.Name", "EWaveTableResolution::Res_4096" },
		{ "Res_512.DisplayName", "512" },
		{ "Res_512.Name", "EWaveTableResolution::Res_512" },
		{ "Res_64.DisplayName", "64" },
		{ "Res_64.Name", "EWaveTableResolution::Res_64" },
		{ "Res_8.DisplayName", "8" },
		{ "Res_8.Name", "EWaveTableResolution::Res_8" },
		{ "Res_Max.Comment", "// Maximum \"static\" power-of-two WaveTable resolution\n" },
		{ "Res_Max.Hidden", "" },
		{ "Res_Max.Name", "EWaveTableResolution::Res_Max" },
		{ "Res_Max.ToolTip", "Maximum \"static\" power-of-two WaveTable resolution" },
		{ "ToolTip", "namespace WaveTable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		"EWaveTableResolution",
		"EWaveTableResolution",
		Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableSettings;
class UScriptStruct* FWaveTableSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableSettings, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableSettings.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableSettings>()
{
	return FWaveTableSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveTableSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tail_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeIn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[];
#endif
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOffset_MetaData[];
#endif
		static void NewProp_bRemoveOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourcePCMData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePCMData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcePCMData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// File to import\n" },
		{ "FilePathFilter", "Audio Files (*.aif, *.flac, *.ogg, *.wav)|*.aif;*.flac;*.ogg;*.wav" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "File to import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, FilePath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Index of channel in file to build WaveTable from (wraps if channel is greater than number in file)\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Index of channel in file to build WaveTable from (wraps if channel is greater than number in file)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, ChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to phase shift of table\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to phase shift of table" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, Phase), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to remove from beginning of sampled WaveTable.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to remove from beginning of sampled WaveTable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to remove from end of sampled WaveTable.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to remove from end of sampled WaveTable." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail = { "Tail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, Tail), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to fade in over.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to fade in over." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, FadeIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percent to fade out over.\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Percent to fade out over." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut = { "FadeOut", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, FadeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether or not to normalize the WaveTable.\n" },
		{ "DisplayAfter", "FilePath" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Whether or not to normalize the WaveTable." },
	};
#endif
	void Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((FWaveTableSettings*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaveTableSettings), &Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Whether or not to remove offset from original file\n// (analogous to \"DC offset\" in circuit theory).\n" },
		{ "DisplayAfter", "bNormalize" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "Whether or not to remove offset from original file\n(analogous to \"DC offset\" in circuit theory)." },
	};
#endif
	void Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_SetBit(void* Obj)
	{
		((FWaveTableSettings*)Obj)->bRemoveOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset = { "bRemoveOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaveTableSettings), &Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_Inner = { "SourcePCMData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_MetaData[] = {
		{ "Comment", "// SourcePCM Data\n" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "ToolTip", "SourcePCM Data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData = { "SourcePCMData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableSettings, SourcePCMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_Tail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_FadeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_SourcePCMData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		&NewStructOps,
		"WaveTableSettings",
		sizeof(FWaveTableSettings),
		alignof(FWaveTableSettings),
		Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveTableSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableCurve;
	static UEnum* EWaveTableCurve_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableCurve, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("EWaveTableCurve"));
		}
		return Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton;
	}
	template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableCurve>()
	{
		return EWaveTableCurve_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enumerators[] = {
		{ "EWaveTableCurve::Linear", (int64)EWaveTableCurve::Linear },
		{ "EWaveTableCurve::Linear_Inv", (int64)EWaveTableCurve::Linear_Inv },
		{ "EWaveTableCurve::Exp", (int64)EWaveTableCurve::Exp },
		{ "EWaveTableCurve::Exp_Inverse", (int64)EWaveTableCurve::Exp_Inverse },
		{ "EWaveTableCurve::Log", (int64)EWaveTableCurve::Log },
		{ "EWaveTableCurve::Sin", (int64)EWaveTableCurve::Sin },
		{ "EWaveTableCurve::Sin_Full", (int64)EWaveTableCurve::Sin_Full },
		{ "EWaveTableCurve::SCurve", (int64)EWaveTableCurve::SCurve },
		{ "EWaveTableCurve::Shared", (int64)EWaveTableCurve::Shared },
		{ "EWaveTableCurve::Custom", (int64)EWaveTableCurve::Custom },
		{ "EWaveTableCurve::File", (int64)EWaveTableCurve::File },
		{ "EWaveTableCurve::Count", (int64)EWaveTableCurve::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EWaveTableCurve::Count" },
		{ "Custom.Comment", "// Design a custom curve unique to the owning transform\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EWaveTableCurve::Custom" },
		{ "Custom.ToolTip", "Design a custom curve unique to the owning transform" },
		{ "Exp.DisplayName", "Exponential" },
		{ "Exp.Name", "EWaveTableCurve::Exp" },
		{ "Exp_Inverse.DisplayName", "Exponential (Inverse)" },
		{ "Exp_Inverse.Name", "EWaveTableCurve::Exp_Inverse" },
		{ "File.Comment", "// Generate WaveTable from audio file\n" },
		{ "File.DisplayName", "File" },
		{ "File.Name", "EWaveTableCurve::File" },
		{ "File.ToolTip", "Generate WaveTable from audio file" },
		{ "Linear.DisplayName", "Linear (Ramp In)" },
		{ "Linear.Name", "EWaveTableCurve::Linear" },
		{ "Linear_Inv.DisplayName", "Linear (Ramp Out)" },
		{ "Linear_Inv.Name", "EWaveTableCurve::Linear_Inv" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EWaveTableCurve::Log" },
		{ "ModuleRelativePath", "Public/WaveTableSettings.h" },
		{ "SCurve.DisplayName", "Sin (+/- 90 deg)" },
		{ "SCurve.Name", "EWaveTableCurve::SCurve" },
		{ "Shared.Comment", "// Reference a shared curve asset\n" },
		{ "Shared.DisplayName", "Shared" },
		{ "Shared.Name", "EWaveTableCurve::Shared" },
		{ "Shared.ToolTip", "Reference a shared curve asset" },
		{ "Sin.DisplayName", "Sin (90 deg)" },
		{ "Sin.Name", "EWaveTableCurve::Sin" },
		{ "Sin_Full.DisplayName", "Sin (360 deg)" },
		{ "Sin_Full.Name", "EWaveTableCurve::Sin_Full" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		"EWaveTableCurve",
		"EWaveTableCurve",
		Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton, Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::EnumInfo[] = {
		{ EWaveTableResolution_StaticEnum, TEXT("EWaveTableResolution"), &Z_Registration_Info_UEnum_EWaveTableResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2544383181U) },
		{ EWaveTableCurve_StaticEnum, TEXT("EWaveTableCurve"), &Z_Registration_Info_UEnum_EWaveTableCurve, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1596869494U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaveTableSettings::StaticStruct, Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewStructOps, TEXT("WaveTableSettings"), &Z_Registration_Info_UScriptStruct_WaveTableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableSettings), 1070595053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_1206965110(TEXT("/Script/WaveTable"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
