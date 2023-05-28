// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleProResEncoder/AppleProResEncoder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleProResEncoder() {}
// Cross Module References
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode();
	UPackage* Z_Construct_UPackage__Script_AppleProResMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderCodec;
	static UEnum* EAppleProResEncoderCodec_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderCodec.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderCodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderCodec"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderCodec.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderCodec>()
	{
		return EAppleProResEncoderCodec_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enumerators[] = {
		{ "EAppleProResEncoderCodec::ProRes_422Proxy", (int64)EAppleProResEncoderCodec::ProRes_422Proxy },
		{ "EAppleProResEncoderCodec::ProRes_422LT", (int64)EAppleProResEncoderCodec::ProRes_422LT },
		{ "EAppleProResEncoderCodec::ProRes_422", (int64)EAppleProResEncoderCodec::ProRes_422 },
		{ "EAppleProResEncoderCodec::ProRes_422HQ", (int64)EAppleProResEncoderCodec::ProRes_422HQ },
		{ "EAppleProResEncoderCodec::ProRes_4444", (int64)EAppleProResEncoderCodec::ProRes_4444 },
		{ "EAppleProResEncoderCodec::ProRes_4444XQ", (int64)EAppleProResEncoderCodec::ProRes_4444XQ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AppleProResEncoder/AppleProResEncoder.h" },
		{ "ProRes_422.Comment", "/** High Quality Compression for 422 RGB Sources. Approximately 150mbps @ 1920x1080@30fps*/" },
		{ "ProRes_422.DisplayName", "Apple ProRes 422" },
		{ "ProRes_422.Name", "EAppleProResEncoderCodec::ProRes_422" },
		{ "ProRes_422.ToolTip", "High Quality Compression for 422 RGB Sources. Approximately 150mbps @ 1920x1080@30fps" },
		{ "ProRes_422HQ.Comment", "/** A higher bit-rate version of Apple ProRes 422. Approximately 225mbps @ 1920x1080@30fps*/" },
		{ "ProRes_422HQ.DisplayName", "Apple ProRes 422 HQ" },
		{ "ProRes_422HQ.Name", "EAppleProResEncoderCodec::ProRes_422HQ" },
		{ "ProRes_422HQ.ToolTip", "A higher bit-rate version of Apple ProRes 422. Approximately 225mbps @ 1920x1080@30fps" },
		{ "ProRes_422LT.Comment", "/** High compression. Approximately 100mbps @ 1920x1080@30fps */" },
		{ "ProRes_422LT.DisplayName", "Apple ProRes 422 LT" },
		{ "ProRes_422LT.Name", "EAppleProResEncoderCodec::ProRes_422LT" },
		{ "ProRes_422LT.ToolTip", "High compression. Approximately 100mbps @ 1920x1080@30fps" },
		{ "ProRes_422Proxy.Comment", "/** Highest Compression. Approximately 45mbps @ 1920x1080@30fps */" },
		{ "ProRes_422Proxy.DisplayName", "Apple ProRes 422 Proxy" },
		{ "ProRes_422Proxy.Name", "EAppleProResEncoderCodec::ProRes_422Proxy" },
		{ "ProRes_422Proxy.ToolTip", "Highest Compression. Approximately 45mbps @ 1920x1080@30fps" },
		{ "ProRes_4444.Comment", "/** Extremely high quality and supports alpha channels. Can support both RGB and YCbCr formats. Very large file size. Approximately 330mbps @ 1920x1080@30fps */" },
		{ "ProRes_4444.DisplayName", "Apple ProRes 4444" },
		{ "ProRes_4444.Name", "EAppleProResEncoderCodec::ProRes_4444" },
		{ "ProRes_4444.ToolTip", "Extremely high quality and supports alpha channels. Can support both RGB and YCbCr formats. Very large file size. Approximately 330mbps @ 1920x1080@30fps" },
		{ "ProRes_4444XQ.Comment", "/** Highest quality storage with support for alpha channel with up to 12 bits precision for RGB and 16 bits for Alpha. Extremely large file size. Approximately 500mbps @ 1920x1080@30fps */" },
		{ "ProRes_4444XQ.DisplayName", "Apple ProRes 4444 XQ" },
		{ "ProRes_4444XQ.Name", "EAppleProResEncoderCodec::ProRes_4444XQ" },
		{ "ProRes_4444XQ.ToolTip", "Highest quality storage with support for alpha channel with up to 12 bits precision for RGB and 16 bits for Alpha. Extremely large file size. Approximately 500mbps @ 1920x1080@30fps" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderCodec",
		"EAppleProResEncoderCodec",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderCodec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderCodec.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderCodec.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries;
	static UEnum* EAppleProResEncoderColorPrimaries_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderColorPrimaries"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderColorPrimaries>()
	{
		return EAppleProResEncoderColorPrimaries_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enumerators[] = {
		{ "EAppleProResEncoderColorPrimaries::CD_SDREC601_525_60HZ", (int64)EAppleProResEncoderColorPrimaries::CD_SDREC601_525_60HZ },
		{ "EAppleProResEncoderColorPrimaries::CD_SDREC601_625_50HZ", (int64)EAppleProResEncoderColorPrimaries::CD_SDREC601_625_50HZ },
		{ "EAppleProResEncoderColorPrimaries::CD_HDREC709", (int64)EAppleProResEncoderColorPrimaries::CD_HDREC709 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CD_HDREC709.DisplayName", "HD Rec. 709" },
		{ "CD_HDREC709.Name", "EAppleProResEncoderColorPrimaries::CD_HDREC709" },
		{ "CD_SDREC601_525_60HZ.DisplayName", "SD Rec. 601 525/60Hz" },
		{ "CD_SDREC601_525_60HZ.Name", "EAppleProResEncoderColorPrimaries::CD_SDREC601_525_60HZ" },
		{ "CD_SDREC601_625_50HZ.DisplayName", "SD Rec. 601 625/50Hz" },
		{ "CD_SDREC601_625_50HZ.Name", "EAppleProResEncoderColorPrimaries::CD_SDREC601_625_50HZ" },
		{ "ModuleRelativePath", "Public/AppleProResEncoder/AppleProResEncoder.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderColorPrimaries",
		"EAppleProResEncoderColorPrimaries",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorPrimaries_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderScanMode;
	static UEnum* EAppleProResEncoderScanMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderScanMode"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderScanMode>()
	{
		return EAppleProResEncoderScanMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enumerators[] = {
		{ "EAppleProResEncoderScanMode::IM_PROGRESSIVE_SCAN", (int64)EAppleProResEncoderScanMode::IM_PROGRESSIVE_SCAN },
		{ "EAppleProResEncoderScanMode::IM_INTERLACED_TOP_FIELD_FIRST", (int64)EAppleProResEncoderScanMode::IM_INTERLACED_TOP_FIELD_FIRST },
		{ "EAppleProResEncoderScanMode::IM_INTERLATED_BOTTOM_FIRST_FIRST", (int64)EAppleProResEncoderScanMode::IM_INTERLATED_BOTTOM_FIRST_FIRST },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IM_INTERLACED_TOP_FIELD_FIRST.DisplayName", "Interlaced; first (top) image line belongs to first temporal field" },
		{ "IM_INTERLACED_TOP_FIELD_FIRST.Name", "EAppleProResEncoderScanMode::IM_INTERLACED_TOP_FIELD_FIRST" },
		{ "IM_INTERLATED_BOTTOM_FIRST_FIRST.DisplayName", "Interlaced; second (bottom) image line belongs to first temporal field" },
		{ "IM_INTERLATED_BOTTOM_FIRST_FIRST.Name", "EAppleProResEncoderScanMode::IM_INTERLATED_BOTTOM_FIRST_FIRST" },
		{ "IM_PROGRESSIVE_SCAN.DisplayName", "Progressive" },
		{ "IM_PROGRESSIVE_SCAN.Name", "EAppleProResEncoderScanMode::IM_PROGRESSIVE_SCAN" },
		{ "ModuleRelativePath", "Public/AppleProResEncoder/AppleProResEncoder.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderScanMode",
		"EAppleProResEncoderScanMode",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderScanMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h_Statics::EnumInfo[] = {
		{ EAppleProResEncoderCodec_StaticEnum, TEXT("EAppleProResEncoderCodec"), &Z_Registration_Info_UEnum_EAppleProResEncoderCodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3236136595U) },
		{ EAppleProResEncoderColorPrimaries_StaticEnum, TEXT("EAppleProResEncoderColorPrimaries"), &Z_Registration_Info_UEnum_EAppleProResEncoderColorPrimaries, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2056002660U) },
		{ EAppleProResEncoderScanMode_StaticEnum, TEXT("EAppleProResEncoderScanMode"), &Z_Registration_Info_UEnum_EAppleProResEncoderScanMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1142736667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h_2812929640(TEXT("/Script/AppleProResMedia"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
