// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LedWallArucoGenerationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLedWallArucoGenerationOptions() {}
// Cross Module References
	LEDWALLCALIBRATION_API UEnum* Z_Construct_UEnum_LedWallCalibration_EArucoDictionary();
	LEDWALLCALIBRATION_API UScriptStruct* Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions();
	UPackage* Z_Construct_UPackage__Script_LedWallCalibration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArucoDictionary;
	static UEnum* EArucoDictionary_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LedWallCalibration_EArucoDictionary, (UObject*)Z_Construct_UPackage__Script_LedWallCalibration(), TEXT("EArucoDictionary"));
		}
		return Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton;
	}
	template<> LEDWALLCALIBRATION_API UEnum* StaticEnum<EArucoDictionary>()
	{
		return EArucoDictionary_StaticEnum();
	}
	struct Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enumerators[] = {
		{ "DICT_4X4_50", (int64)DICT_4X4_50 },
		{ "DICT_4X4_100", (int64)DICT_4X4_100 },
		{ "DICT_4X4_250", (int64)DICT_4X4_250 },
		{ "DICT_4X4_1000", (int64)DICT_4X4_1000 },
		{ "DICT_5X5_50", (int64)DICT_5X5_50 },
		{ "DICT_5X5_100", (int64)DICT_5X5_100 },
		{ "DICT_5X5_250", (int64)DICT_5X5_250 },
		{ "DICT_5X5_1000", (int64)DICT_5X5_1000 },
		{ "DICT_6X6_50", (int64)DICT_6X6_50 },
		{ "DICT_6X6_100", (int64)DICT_6X6_100 },
		{ "DICT_6X6_250", (int64)DICT_6X6_250 },
		{ "DICT_6X6_1000", (int64)DICT_6X6_1000 },
		{ "DICT_7X7_50", (int64)DICT_7X7_50 },
		{ "DICT_7X7_100", (int64)DICT_7X7_100 },
		{ "DICT_7X7_250", (int64)DICT_7X7_250 },
		{ "DICT_7X7_1000", (int64)DICT_7X7_1000 },
		{ "DICT_ARUCO_ORIGINAL", (int64)DICT_ARUCO_ORIGINAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumeration of known Aruco dictionaries */" },
		{ "DICT_4X4_100.DisplayName", "DICT_4X4_100" },
		{ "DICT_4X4_100.Name", "DICT_4X4_100" },
		{ "DICT_4X4_1000.DisplayName", "DICT_4X4_1000" },
		{ "DICT_4X4_1000.Name", "DICT_4X4_1000" },
		{ "DICT_4X4_250.DisplayName", "DICT_4X4_250" },
		{ "DICT_4X4_250.Name", "DICT_4X4_250" },
		{ "DICT_4X4_50.DisplayName", "DICT_4X4_50" },
		{ "DICT_4X4_50.Name", "DICT_4X4_50" },
		{ "DICT_5X5_100.DisplayName", "DICT_5X5_100" },
		{ "DICT_5X5_100.Name", "DICT_5X5_100" },
		{ "DICT_5X5_1000.DisplayName", "DICT_5X5_1000" },
		{ "DICT_5X5_1000.Name", "DICT_5X5_1000" },
		{ "DICT_5X5_250.DisplayName", "DICT_5X5_250" },
		{ "DICT_5X5_250.Name", "DICT_5X5_250" },
		{ "DICT_5X5_50.DisplayName", "DICT_5X5_50" },
		{ "DICT_5X5_50.Name", "DICT_5X5_50" },
		{ "DICT_6X6_100.DisplayName", "DICT_6X6_100" },
		{ "DICT_6X6_100.Name", "DICT_6X6_100" },
		{ "DICT_6X6_1000.DisplayName", "DICT_6X6_1000" },
		{ "DICT_6X6_1000.Name", "DICT_6X6_1000" },
		{ "DICT_6X6_250.DisplayName", "DICT_6X6_250" },
		{ "DICT_6X6_250.Name", "DICT_6X6_250" },
		{ "DICT_6X6_50.DisplayName", "DICT_6X6_50" },
		{ "DICT_6X6_50.Name", "DICT_6X6_50" },
		{ "DICT_7X7_100.DisplayName", "DICT_7X7_100" },
		{ "DICT_7X7_100.Name", "DICT_7X7_100" },
		{ "DICT_7X7_1000.DisplayName", "DICT_7X7_1000" },
		{ "DICT_7X7_1000.Name", "DICT_7X7_1000" },
		{ "DICT_7X7_250.DisplayName", "DICT_7X7_250" },
		{ "DICT_7X7_250.Name", "DICT_7X7_250" },
		{ "DICT_7X7_50.DisplayName", "DICT_7X7_50" },
		{ "DICT_7X7_50.Name", "DICT_7X7_50" },
		{ "DICT_ARUCO_ORIGINAL.DisplayName", "DICT_ARUCO_ORIGINAL" },
		{ "DICT_ARUCO_ORIGINAL.Name", "DICT_ARUCO_ORIGINAL" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Enumeration of known Aruco dictionaries" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LedWallCalibration,
		nullptr,
		"EArucoDictionary",
		"EArucoDictionary",
		Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LedWallCalibration_EArucoDictionary()
	{
		if (!Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton, Z_Construct_UEnum_LedWallCalibration_EArucoDictionary_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions;
class UScriptStruct* FLedWallArucoGenerationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions, (UObject*)Z_Construct_UPackage__Script_LedWallCalibration(), TEXT("LedWallArucoGenerationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.OuterSingleton;
}
template<> LEDWALLCALIBRATION_API UScriptStruct* StaticStruct<FLedWallArucoGenerationOptions>()
{
	return FLedWallArucoGenerationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArucoDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ArucoDictionary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MarkerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaceModulus_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlaceModulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure that can be passed to the Aruco generation function\n */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Structure that can be passed to the Aruco generation function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLedWallArucoGenerationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureWidth_MetaData[] = {
		{ "Category", "Aruco" },
		{ "Comment", "/** Width of the texture that will contain the Aruco markers */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Width of the texture that will contain the Aruco markers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLedWallArucoGenerationOptions, TextureWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "Category", "Aruco" },
		{ "Comment", "/** Height of the texture that will contain the Aruco markers */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Height of the texture that will contain the Aruco markers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLedWallArucoGenerationOptions, TextureHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_ArucoDictionary_MetaData[] = {
		{ "Category", "Aruco" },
		{ "Comment", "/** Aruco dictionary to use when generating the markers */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Aruco dictionary to use when generating the markers" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_ArucoDictionary = { "ArucoDictionary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLedWallArucoGenerationOptions, ArucoDictionary), Z_Construct_UEnum_LedWallCalibration_EArucoDictionary, METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_ArucoDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_ArucoDictionary_MetaData)) }; // 2211297397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_MarkerId_MetaData[] = {
		{ "Category", "Aruco" },
		{ "Comment", "/** Starting marker Id. Arucos will be generated with consecutive Marker Ids, starting from this one */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Starting marker Id. Arucos will be generated with consecutive Marker Ids, starting from this one" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLedWallArucoGenerationOptions, MarkerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_MarkerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_MarkerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_PlaceModulus_MetaData[] = {
		{ "Category", "Aruco" },
		{ "Comment", "/** \n\x09 * Used to avoid using up the symbols in the dictionary as quickly.\n\x09 * Will place the next marker id when [(row + column) mod PlaceModulus] is zero.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LedWallArucoGenerationOptions.h" },
		{ "ToolTip", "Used to avoid using up the symbols in the dictionary as quickly.\nWill place the next marker id when [(row + column) mod PlaceModulus] is zero." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_PlaceModulus = { "PlaceModulus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLedWallArucoGenerationOptions, PlaceModulus), METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_PlaceModulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_PlaceModulus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_TextureHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_ArucoDictionary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_MarkerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewProp_PlaceModulus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LedWallCalibration,
		nullptr,
		&NewStructOps,
		"LedWallArucoGenerationOptions",
		sizeof(FLedWallArucoGenerationOptions),
		alignof(FLedWallArucoGenerationOptions),
		Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.InnerSingleton, Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::EnumInfo[] = {
		{ EArucoDictionary_StaticEnum, TEXT("EArucoDictionary"), &Z_Registration_Info_UEnum_EArucoDictionary, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2211297397U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::ScriptStructInfo[] = {
		{ FLedWallArucoGenerationOptions::StaticStruct, Z_Construct_UScriptStruct_FLedWallArucoGenerationOptions_Statics::NewStructOps, TEXT("LedWallArucoGenerationOptions"), &Z_Registration_Info_UScriptStruct_LedWallArucoGenerationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLedWallArucoGenerationOptions), 2028557768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_2116544704(TEXT("/Script/LedWallCalibration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_LedWallCalibration_Source_LedWallCalibration_Public_LedWallArucoGenerationOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
