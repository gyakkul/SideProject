// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/SnapshotCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotCompressionSettings() {}
// Cross Module References
	LEVELSNAPSHOTS_API UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel();
	LEVELSNAPSHOTS_API UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotCompressionSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapshotCompressionLevel;
	static UEnum* ESnapshotCompressionLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotCompressionLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapshotCompressionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ESnapshotCompressionLevel"));
		}
		return Z_Registration_Info_UEnum_ESnapshotCompressionLevel.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotCompressionLevel>()
	{
		return ESnapshotCompressionLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enumerators[] = {
		{ "ESnapshotCompressionLevel::HyperFast4", (int64)ESnapshotCompressionLevel::HyperFast4 },
		{ "ESnapshotCompressionLevel::HyperFast3", (int64)ESnapshotCompressionLevel::HyperFast3 },
		{ "ESnapshotCompressionLevel::HyperFast2", (int64)ESnapshotCompressionLevel::HyperFast2 },
		{ "ESnapshotCompressionLevel::HyperFast1", (int64)ESnapshotCompressionLevel::HyperFast1 },
		{ "ESnapshotCompressionLevel::None", (int64)ESnapshotCompressionLevel::None },
		{ "ESnapshotCompressionLevel::SuperFast", (int64)ESnapshotCompressionLevel::SuperFast },
		{ "ESnapshotCompressionLevel::VeryFast", (int64)ESnapshotCompressionLevel::VeryFast },
		{ "ESnapshotCompressionLevel::Fast", (int64)ESnapshotCompressionLevel::Fast },
		{ "ESnapshotCompressionLevel::Normal", (int64)ESnapshotCompressionLevel::Normal },
		{ "ESnapshotCompressionLevel::Optimal1", (int64)ESnapshotCompressionLevel::Optimal1 },
		{ "ESnapshotCompressionLevel::Optimal2", (int64)ESnapshotCompressionLevel::Optimal2 },
		{ "ESnapshotCompressionLevel::Optimal3", (int64)ESnapshotCompressionLevel::Optimal3 },
		{ "ESnapshotCompressionLevel::Optimal4", (int64)ESnapshotCompressionLevel::Optimal4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// ESnapshotCompressionLevel and ESnapshotCompressor copied from OodleDataCompression.h - there is no UENUM version at time of duplication\n" },
		{ "Fast.Name", "ESnapshotCompressionLevel::Fast" },
		{ "HyperFast1.Name", "ESnapshotCompressionLevel::HyperFast1" },
		{ "HyperFast2.Name", "ESnapshotCompressionLevel::HyperFast2" },
		{ "HyperFast3.Name", "ESnapshotCompressionLevel::HyperFast3" },
		{ "HyperFast4.Name", "ESnapshotCompressionLevel::HyperFast4" },
		{ "ModuleRelativePath", "Public/Settings/SnapshotCompressionSettings.h" },
		{ "None.Name", "ESnapshotCompressionLevel::None" },
		{ "Normal.Name", "ESnapshotCompressionLevel::Normal" },
		{ "Optimal1.Name", "ESnapshotCompressionLevel::Optimal1" },
		{ "Optimal2.Name", "ESnapshotCompressionLevel::Optimal2" },
		{ "Optimal3.Name", "ESnapshotCompressionLevel::Optimal3" },
		{ "Optimal4.Name", "ESnapshotCompressionLevel::Optimal4" },
		{ "SuperFast.Name", "ESnapshotCompressionLevel::SuperFast" },
		{ "ToolTip", "ESnapshotCompressionLevel and ESnapshotCompressor copied from OodleDataCompression.h - there is no UENUM version at time of duplication" },
		{ "VeryFast.Name", "ESnapshotCompressionLevel::VeryFast" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		"ESnapshotCompressionLevel",
		"ESnapshotCompressionLevel",
		Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotCompressionLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapshotCompressionLevel.InnerSingleton, Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapshotCompressionLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapshotCompressor;
	static UEnum* ESnapshotCompressor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotCompressor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapshotCompressor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ESnapshotCompressor"));
		}
		return Z_Registration_Info_UEnum_ESnapshotCompressor.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotCompressor>()
	{
		return ESnapshotCompressor_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enumerators[] = {
		{ "ESnapshotCompressor::Selkie", (int64)ESnapshotCompressor::Selkie },
		{ "ESnapshotCompressor::Mermaid", (int64)ESnapshotCompressor::Mermaid },
		{ "ESnapshotCompressor::Kraken", (int64)ESnapshotCompressor::Kraken },
		{ "ESnapshotCompressor::Leviathan", (int64)ESnapshotCompressor::Leviathan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enum_MetaDataParams[] = {
		{ "Kraken.Comment", "/** High compression with fast decoding */" },
		{ "Kraken.Name", "ESnapshotCompressor::Kraken" },
		{ "Kraken.ToolTip", "High compression with fast decoding" },
		{ "Leviathan.Comment", "/** Highest compression ration */" },
		{ "Leviathan.Name", "ESnapshotCompressor::Leviathan" },
		{ "Leviathan.ToolTip", "Highest compression ration" },
		{ "Mermaid.Comment", "/** Mid-level compression with fast decoding */" },
		{ "Mermaid.Name", "ESnapshotCompressor::Mermaid" },
		{ "Mermaid.ToolTip", "Mid-level compression with fast decoding" },
		{ "ModuleRelativePath", "Public/Settings/SnapshotCompressionSettings.h" },
		{ "Selkie.Comment", "/** Lower compression but fastest decodes */" },
		{ "Selkie.Name", "ESnapshotCompressor::Selkie" },
		{ "Selkie.ToolTip", "Lower compression but fastest decodes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		"ESnapshotCompressor",
		"ESnapshotCompressor",
		Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotCompressor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapshotCompressor.InnerSingleton, Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapshotCompressor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings;
class UScriptStruct* FSnapshotCompressionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotCompressionSettings, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotCompressionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotCompressionSettings>()
{
	return FSnapshotCompressionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CompressionLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressionLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressorAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressorAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressorAlgorithm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/SnapshotCompressionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotCompressionSettings>();
	}
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Trade-off between compression ratio and time.\n\x09 *\n\x09 * You usually do not want anything higher than Normal.\n\x09 * Normal > Optimal approx. reduces compressed size about 1-2% but increases computation time by about 10x. Each subsequent step has diminishing returns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/SnapshotCompressionSettings.h" },
		{ "ToolTip", "Trade-off between compression ratio and time.\n\nYou usually do not want anything higher than Normal.\nNormal > Optimal approx. reduces compressed size about 1-2% but increases computation time by about 10x. Each subsequent step has diminishing returns." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel = { "CompressionLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotCompressionSettings, CompressionLevel), Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressionLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel_MetaData)) }; // 3918670466
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/**\n\x09 * Specifies the algorithm to use for compressing & decompressing snapshot data.\n\x09 *\n\x09 * Test in July, 2022 for 5.1:\n\x09 * A 112 mb size snapshot was compressed with Optimal4 setting:\n\x09 *\x09- Selkie\x09\x09""15.8s\x09""14.3mb\n\x09 *\x09- Mermaid\x09\x09""23.6s\x09""10.9mb\n\x09 *\x09- Kraken \x09\x09""1m19s\x09""9.3mb\n\x09 *\x09- Leviathan \x09""1m51s\x09""9.0mb\n\x09 * Decompression took about 2.7s for each algorithm.\n\x09 * \n\x09 * @see http://www.radgametools.com/oodlecompressors.htm\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/SnapshotCompressionSettings.h" },
		{ "ToolTip", "Specifies the algorithm to use for compressing & decompressing snapshot data.\n\nTest in July, 2022 for 5.1:\nA 112 mb size snapshot was compressed with Optimal4 setting:\n     - Selkie                15.8s   14.3mb\n     - Mermaid               23.6s   10.9mb\n     - Kraken                1m19s   9.3mb\n     - Leviathan     1m51s   9.0mb\nDecompression took about 2.7s for each algorithm.\n\n@see http://www.radgametools.com/oodlecompressors.htm" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm = { "CompressorAlgorithm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotCompressionSettings, CompressorAlgorithm), Z_Construct_UEnum_LevelSnapshots_ESnapshotCompressor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm_MetaData)) }; // 949283666
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressionLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewProp_CompressorAlgorithm,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotCompressionSettings",
		sizeof(FSnapshotCompressionSettings),
		alignof(FSnapshotCompressionSettings),
		Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotCompressionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::EnumInfo[] = {
		{ ESnapshotCompressionLevel_StaticEnum, TEXT("ESnapshotCompressionLevel"), &Z_Registration_Info_UEnum_ESnapshotCompressionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3918670466U) },
		{ ESnapshotCompressor_StaticEnum, TEXT("ESnapshotCompressor"), &Z_Registration_Info_UEnum_ESnapshotCompressor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 949283666U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::ScriptStructInfo[] = {
		{ FSnapshotCompressionSettings::StaticStruct, Z_Construct_UScriptStruct_FSnapshotCompressionSettings_Statics::NewStructOps, TEXT("SnapshotCompressionSettings"), &Z_Registration_Info_UScriptStruct_SnapshotCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotCompressionSettings), 2439424729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_194740286(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_SnapshotCompressionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
