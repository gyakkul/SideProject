// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CalibratedMapFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalibratedMapFormat() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCalibratedMapFormat();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin;
	static UEnum* ECalibratedMapPixelOrigin_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ECalibratedMapPixelOrigin"));
		}
		return Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ECalibratedMapPixelOrigin>()
	{
		return ECalibratedMapPixelOrigin_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enumerators[] = {
		{ "ECalibratedMapPixelOrigin::TopLeft", (int64)ECalibratedMapPixelOrigin::TopLeft },
		{ "ECalibratedMapPixelOrigin::BottomLeft", (int64)ECalibratedMapPixelOrigin::BottomLeft },
		{ "ECalibratedMapPixelOrigin::MAX", (int64)ECalibratedMapPixelOrigin::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enum_MetaDataParams[] = {
		{ "BottomLeft.Name", "ECalibratedMapPixelOrigin::BottomLeft" },
		{ "Comment", "/** Specifies the location of the pixel origin in a calibrated map */" },
		{ "MAX.Name", "ECalibratedMapPixelOrigin::MAX" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "ToolTip", "Specifies the location of the pixel origin in a calibrated map" },
		{ "TopLeft.Name", "ECalibratedMapPixelOrigin::TopLeft" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ECalibratedMapPixelOrigin",
		"ECalibratedMapPixelOrigin",
		Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin()
	{
		if (!Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECalibratedMapChannels;
	static UEnum* ECalibratedMapChannels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECalibratedMapChannels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECalibratedMapChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ECalibratedMapChannels"));
		}
		return Z_Registration_Info_UEnum_ECalibratedMapChannels.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ECalibratedMapChannels>()
	{
		return ECalibratedMapChannels_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enumerators[] = {
		{ "ECalibratedMapChannels::RG", (int64)ECalibratedMapChannels::RG },
		{ "ECalibratedMapChannels::BA", (int64)ECalibratedMapChannels::BA },
		{ "ECalibratedMapChannels::None", (int64)ECalibratedMapChannels::None },
		{ "ECalibratedMapChannels::MAX", (int64)ECalibratedMapChannels::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enum_MetaDataParams[] = {
		{ "BA.Name", "ECalibratedMapChannels::BA" },
		{ "Comment", "/** Specifies which two channels contain the calibrated map data (or None if there is no data) */" },
		{ "MAX.Name", "ECalibratedMapChannels::MAX" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "None.Name", "ECalibratedMapChannels::None" },
		{ "RG.Name", "ECalibratedMapChannels::RG" },
		{ "ToolTip", "Specifies which two channels contain the calibrated map data (or None if there is no data)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ECalibratedMapChannels",
		"ECalibratedMapChannels",
		Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels()
	{
		if (!Z_Registration_Info_UEnum_ECalibratedMapChannels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECalibratedMapChannels.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECalibratedMapChannels.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CalibratedMapFormat;
class UScriptStruct* FCalibratedMapFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CalibratedMapFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CalibratedMapFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalibratedMapFormat, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("CalibratedMapFormat"));
	}
	return Z_Registration_Info_UScriptStruct_CalibratedMapFormat.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FCalibratedMapFormat>()
{
	return FCalibratedMapFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelOrigin_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelOrigin;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UndistortionChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortionChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UndistortionChannels;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistortionChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistortionChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Formatting options for processing a calibrated map */" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "ToolTip", "Formatting options for processing a calibrated map" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalibratedMapFormat>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Specifies where in the image the (0, 0) pixel is */" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "ToolTip", "Specifies where in the image the (0, 0) pixel is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin = { "PixelOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCalibratedMapFormat, PixelOrigin), Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapPixelOrigin, METADATA_PARAMS(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin_MetaData)) }; // 45010288
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Specifies which two channels contain the undistortion map (or None if there is no undistortion data) */" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "ToolTip", "Specifies which two channels contain the undistortion map (or None if there is no undistortion data)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels = { "UndistortionChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCalibratedMapFormat, UndistortionChannels), Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels_MetaData)) }; // 2065135282
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels_MetaData[] = {
		{ "Category", "Format" },
		{ "Comment", "/** Specifies which two channels contain the distortion map (or None if there is no distortion data) */" },
		{ "ModuleRelativePath", "Public/CalibratedMapFormat.h" },
		{ "ToolTip", "Specifies which two channels contain the distortion map (or None if there is no distortion data)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels = { "DistortionChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCalibratedMapFormat, DistortionChannels), Z_Construct_UEnum_CameraCalibrationCore_ECalibratedMapChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels_MetaData)) }; // 2065135282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_PixelOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_UndistortionChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewProp_DistortionChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"CalibratedMapFormat",
		sizeof(FCalibratedMapFormat),
		alignof(FCalibratedMapFormat),
		Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCalibratedMapFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_CalibratedMapFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CalibratedMapFormat.InnerSingleton, Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CalibratedMapFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::EnumInfo[] = {
		{ ECalibratedMapPixelOrigin_StaticEnum, TEXT("ECalibratedMapPixelOrigin"), &Z_Registration_Info_UEnum_ECalibratedMapPixelOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 45010288U) },
		{ ECalibratedMapChannels_StaticEnum, TEXT("ECalibratedMapChannels"), &Z_Registration_Info_UEnum_ECalibratedMapChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2065135282U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::ScriptStructInfo[] = {
		{ FCalibratedMapFormat::StaticStruct, Z_Construct_UScriptStruct_FCalibratedMapFormat_Statics::NewStructOps, TEXT("CalibratedMapFormat"), &Z_Registration_Info_UScriptStruct_CalibratedMapFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCalibratedMapFormat), 3781044598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_2286654174(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CalibratedMapFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
