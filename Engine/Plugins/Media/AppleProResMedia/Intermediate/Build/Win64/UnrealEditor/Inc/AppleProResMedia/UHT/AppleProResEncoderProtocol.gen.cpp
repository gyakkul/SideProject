// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleProResEncoderProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleProResEncoderProtocol() {}
// Cross Module References
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UAppleProResEncoderProtocol();
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UAppleProResEncoderProtocol_NoRegister();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	UPackage* Z_Construct_UPackage__Script_AppleProResMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderFormats;
	static UEnum* EAppleProResEncoderFormats_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderFormats.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderFormats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderFormats"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderFormats.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderFormats>()
	{
		return EAppleProResEncoderFormats_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enumerators[] = {
		{ "EAppleProResEncoderFormats::F_422HQ", (int64)EAppleProResEncoderFormats::F_422HQ },
		{ "EAppleProResEncoderFormats::F_422", (int64)EAppleProResEncoderFormats::F_422 },
		{ "EAppleProResEncoderFormats::F_422LT", (int64)EAppleProResEncoderFormats::F_422LT },
		{ "EAppleProResEncoderFormats::F_422Proxy", (int64)EAppleProResEncoderFormats::F_422Proxy },
		{ "EAppleProResEncoderFormats::F_4444", (int64)EAppleProResEncoderFormats::F_4444 },
		{ "EAppleProResEncoderFormats::F_4444XQ", (int64)EAppleProResEncoderFormats::F_4444XQ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enum_MetaDataParams[] = {
		{ "F_422.DisplayName", "422" },
		{ "F_422.Name", "EAppleProResEncoderFormats::F_422" },
		{ "F_422HQ.DisplayName", "422 HQ" },
		{ "F_422HQ.Name", "EAppleProResEncoderFormats::F_422HQ" },
		{ "F_422LT.DisplayName", "422 LT" },
		{ "F_422LT.Name", "EAppleProResEncoderFormats::F_422LT" },
		{ "F_422Proxy.DisplayName", "422 Proxy" },
		{ "F_422Proxy.Name", "EAppleProResEncoderFormats::F_422Proxy" },
		{ "F_4444.DisplayName", "4444" },
		{ "F_4444.Name", "EAppleProResEncoderFormats::F_4444" },
		{ "F_4444XQ.DisplayName", "4444 XQ" },
		{ "F_4444XQ.Name", "EAppleProResEncoderFormats::F_4444XQ" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderFormats",
		"EAppleProResEncoderFormats",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderFormats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderFormats.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderFormats.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription;
	static UEnum* EAppleProResEncoderColorDescription_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderColorDescription"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderColorDescription>()
	{
		return EAppleProResEncoderColorDescription_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enumerators[] = {
		{ "EAppleProResEncoderColorDescription::CD_SDREC601_525_60HZ", (int64)EAppleProResEncoderColorDescription::CD_SDREC601_525_60HZ },
		{ "EAppleProResEncoderColorDescription::CD_SDREC601_625_50HZ", (int64)EAppleProResEncoderColorDescription::CD_SDREC601_625_50HZ },
		{ "EAppleProResEncoderColorDescription::CD_HDREC709", (int64)EAppleProResEncoderColorDescription::CD_HDREC709 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enum_MetaDataParams[] = {
		{ "CD_HDREC709.DisplayName", "HD Rec. 709" },
		{ "CD_HDREC709.Name", "EAppleProResEncoderColorDescription::CD_HDREC709" },
		{ "CD_SDREC601_525_60HZ.DisplayName", "SD Rec. 601 525/60Hz" },
		{ "CD_SDREC601_525_60HZ.Name", "EAppleProResEncoderColorDescription::CD_SDREC601_525_60HZ" },
		{ "CD_SDREC601_625_50HZ.DisplayName", "SD Rec. 601 625/50Hz" },
		{ "CD_SDREC601_625_50HZ.Name", "EAppleProResEncoderColorDescription::CD_SDREC601_625_50HZ" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderColorDescription",
		"EAppleProResEncoderColorDescription",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleProResEncoderScanType;
	static UEnum* EAppleProResEncoderScanType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderScanType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleProResEncoderScanType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType, (UObject*)Z_Construct_UPackage__Script_AppleProResMedia(), TEXT("EAppleProResEncoderScanType"));
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderScanType.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderScanType>()
	{
		return EAppleProResEncoderScanType_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enumerators[] = {
		{ "EAppleProResEncoderScanType::IM_PROGRESSIVE_SCAN", (int64)EAppleProResEncoderScanType::IM_PROGRESSIVE_SCAN },
		{ "EAppleProResEncoderScanType::IM_INTERLACED_TOP_FIELD_FIRST", (int64)EAppleProResEncoderScanType::IM_INTERLACED_TOP_FIELD_FIRST },
		{ "EAppleProResEncoderScanType::IM_INTERLATED_BOTTOM_FIRST_FIRST", (int64)EAppleProResEncoderScanType::IM_INTERLATED_BOTTOM_FIRST_FIRST },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enum_MetaDataParams[] = {
		{ "IM_INTERLACED_TOP_FIELD_FIRST.DisplayName", "Interlaced mode; first (top) image line belongs to first temporal field" },
		{ "IM_INTERLACED_TOP_FIELD_FIRST.Name", "EAppleProResEncoderScanType::IM_INTERLACED_TOP_FIELD_FIRST" },
		{ "IM_INTERLATED_BOTTOM_FIRST_FIRST.DisplayName", "Interlaced mode; second (bottom) image line belongs to first temporal field" },
		{ "IM_INTERLATED_BOTTOM_FIRST_FIRST.Name", "EAppleProResEncoderScanType::IM_INTERLATED_BOTTOM_FIRST_FIRST" },
		{ "IM_PROGRESSIVE_SCAN.DisplayName", "Progressive encoding mode" },
		{ "IM_PROGRESSIVE_SCAN.Name", "EAppleProResEncoderScanType::IM_PROGRESSIVE_SCAN" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleProResMedia,
		nullptr,
		"EAppleProResEncoderScanType",
		"EAppleProResEncoderScanType",
		Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType()
	{
		if (!Z_Registration_Info_UEnum_EAppleProResEncoderScanType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleProResEncoderScanType.InnerSingleton, Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleProResEncoderScanType.InnerSingleton;
	}
	void UAppleProResEncoderProtocol::StaticRegisterNativesUAppleProResEncoderProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleProResEncoderProtocol);
	UClass* Z_Construct_UClass_UAppleProResEncoderProtocol_NoRegister()
	{
		return UAppleProResEncoderProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UAppleProResEncoderProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorDescription_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorDescription_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScanType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScanType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScanType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEncodingThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfEncodingThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmbedTimecodeTrack_MetaData[];
#endif
		static void NewProp_bEmbedTimecodeTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmbedTimecodeTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropFrameTimecode_MetaData[];
#endif
		static void NewProp_bDropFrameTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropFrameTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleProResMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "AppleProRes" },
		{ "DisplayName", "Apple ProRes Encoder (mov)" },
		{ "IncludePath", "AppleProResEncoderProtocol.h" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat = { "EncodingFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleProResEncoderProtocol, EncodingFormat), Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderFormats, METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat_MetaData)) }; // 144493479
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription = { "ColorDescription", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleProResEncoderProtocol, ColorDescription), Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderColorDescription, METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription_MetaData)) }; // 1259659393
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType = { "ScanType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleProResEncoderProtocol, ScanType), Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderScanType, METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType_MetaData)) }; // 3954231907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "ClampMax", "64.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
		{ "UIMax", "64.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads = { "NumberOfEncodingThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleProResEncoderProtocol, NumberOfEncodingThreads), METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
	};
#endif
	void Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack_SetBit(void* Obj)
	{
		((UAppleProResEncoderProtocol*)Obj)->bEmbedTimecodeTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack = { "bEmbedTimecodeTrack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleProResEncoderProtocol), &Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode_MetaData[] = {
		{ "Category", "Apple ProRes Settings" },
		{ "Comment", "/** Use Drop Frame Timecode when applicable (29.97p or 59.94i). */" },
		{ "ModuleRelativePath", "Private/AppleProResEncoderProtocol.h" },
		{ "ToolTip", "Use Drop Frame Timecode when applicable (29.97p or 59.94i)." },
	};
#endif
	void Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode_SetBit(void* Obj)
	{
		((UAppleProResEncoderProtocol*)Obj)->bDropFrameTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode = { "bDropFrameTimecode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleProResEncoderProtocol), &Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_EncodingFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ColorDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_ScanType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bEmbedTimecodeTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::NewProp_bDropFrameTimecode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleProResEncoderProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::ClassParams = {
		&UAppleProResEncoderProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleProResEncoderProtocol()
	{
		if (!Z_Registration_Info_UClass_UAppleProResEncoderProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleProResEncoderProtocol.OuterSingleton, Z_Construct_UClass_UAppleProResEncoderProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleProResEncoderProtocol.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UClass* StaticClass<UAppleProResEncoderProtocol>()
	{
		return UAppleProResEncoderProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleProResEncoderProtocol);
	UAppleProResEncoderProtocol::~UAppleProResEncoderProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::EnumInfo[] = {
		{ EAppleProResEncoderFormats_StaticEnum, TEXT("EAppleProResEncoderFormats"), &Z_Registration_Info_UEnum_EAppleProResEncoderFormats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 144493479U) },
		{ EAppleProResEncoderColorDescription_StaticEnum, TEXT("EAppleProResEncoderColorDescription"), &Z_Registration_Info_UEnum_EAppleProResEncoderColorDescription, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1259659393U) },
		{ EAppleProResEncoderScanType_StaticEnum, TEXT("EAppleProResEncoderScanType"), &Z_Registration_Info_UEnum_EAppleProResEncoderScanType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3954231907U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleProResEncoderProtocol, UAppleProResEncoderProtocol::StaticClass, TEXT("UAppleProResEncoderProtocol"), &Z_Registration_Info_UClass_UAppleProResEncoderProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleProResEncoderProtocol), 2829410431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_2093633879(TEXT("/Script/AppleProResMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
