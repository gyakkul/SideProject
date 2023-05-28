// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaIOCoreDefinitions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOInputType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConnection();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIODevice();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOInputConfiguration();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOMode();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOOutputConfiguration();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOTransportType;
	static UEnum* EMediaIOTransportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOTransportType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOTransportType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOTransportType>()
	{
		return EMediaIOTransportType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enumerators[] = {
		{ "EMediaIOTransportType::SingleLink", (int64)EMediaIOTransportType::SingleLink },
		{ "EMediaIOTransportType::DualLink", (int64)EMediaIOTransportType::DualLink },
		{ "EMediaIOTransportType::QuadLink", (int64)EMediaIOTransportType::QuadLink },
		{ "EMediaIOTransportType::HDMI", (int64)EMediaIOTransportType::HDMI },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Media transport type.\n */" },
		{ "DualLink.Name", "EMediaIOTransportType::DualLink" },
		{ "HDMI.Name", "EMediaIOTransportType::HDMI" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "QuadLink.Name", "EMediaIOTransportType::QuadLink" },
		{ "SingleLink.Name", "EMediaIOTransportType::SingleLink" },
		{ "ToolTip", "Media transport type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOTransportType",
		"EMediaIOTransportType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOTransportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType;
	static UEnum* EMediaIOQuadLinkTransportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOQuadLinkTransportType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOQuadLinkTransportType>()
	{
		return EMediaIOQuadLinkTransportType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enumerators[] = {
		{ "EMediaIOQuadLinkTransportType::SquareDivision", (int64)EMediaIOQuadLinkTransportType::SquareDivision },
		{ "EMediaIOQuadLinkTransportType::TwoSampleInterleave", (int64)EMediaIOQuadLinkTransportType::TwoSampleInterleave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Quad link transport type.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "SquareDivision.Name", "EMediaIOQuadLinkTransportType::SquareDivision" },
		{ "ToolTip", "Quad link transport type." },
		{ "TwoSampleInterleave.Name", "EMediaIOQuadLinkTransportType::TwoSampleInterleave" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOQuadLinkTransportType",
		"EMediaIOQuadLinkTransportType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOStandardType;
	static UEnum* EMediaIOStandardType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOStandardType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOStandardType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOStandardType>()
	{
		return EMediaIOStandardType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enumerators[] = {
		{ "EMediaIOStandardType::Progressive", (int64)EMediaIOStandardType::Progressive },
		{ "EMediaIOStandardType::Interlaced", (int64)EMediaIOStandardType::Interlaced },
		{ "EMediaIOStandardType::ProgressiveSegmentedFrame", (int64)EMediaIOStandardType::ProgressiveSegmentedFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * SDI transport type.\n */" },
		{ "Interlaced.Name", "EMediaIOStandardType::Interlaced" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "Progressive.Name", "EMediaIOStandardType::Progressive" },
		{ "ProgressiveSegmentedFrame.Name", "EMediaIOStandardType::ProgressiveSegmentedFrame" },
		{ "ToolTip", "SDI transport type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOStandardType",
		"EMediaIOStandardType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOStandardType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOTimecodeFormat;
	static UEnum* EMediaIOTimecodeFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOTimecodeFormat"));
		}
		return Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOTimecodeFormat>()
	{
		return EMediaIOTimecodeFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enumerators[] = {
		{ "EMediaIOTimecodeFormat::None", (int64)EMediaIOTimecodeFormat::None },
		{ "EMediaIOTimecodeFormat::LTC", (int64)EMediaIOTimecodeFormat::LTC },
		{ "EMediaIOTimecodeFormat::VITC", (int64)EMediaIOTimecodeFormat::VITC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Timecode formats.\n */" },
		{ "LTC.Name", "EMediaIOTimecodeFormat::LTC" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "None.Name", "EMediaIOTimecodeFormat::None" },
		{ "ToolTip", "Timecode formats." },
		{ "VITC.Name", "EMediaIOTimecodeFormat::VITC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOTimecodeFormat",
		"EMediaIOTimecodeFormat",
		Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOTimecodeFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat;
	static UEnum* EMediaIOAutoDetectableTimecodeFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOAutoDetectableTimecodeFormat"));
		}
		return Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOAutoDetectableTimecodeFormat>()
	{
		return EMediaIOAutoDetectableTimecodeFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enumerators[] = {
		{ "EMediaIOAutoDetectableTimecodeFormat::None", (int64)EMediaIOAutoDetectableTimecodeFormat::None },
		{ "EMediaIOAutoDetectableTimecodeFormat::LTC", (int64)EMediaIOAutoDetectableTimecodeFormat::LTC },
		{ "EMediaIOAutoDetectableTimecodeFormat::VITC", (int64)EMediaIOAutoDetectableTimecodeFormat::VITC },
		{ "EMediaIOAutoDetectableTimecodeFormat::Auto", (int64)EMediaIOAutoDetectableTimecodeFormat::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EMediaIOAutoDetectableTimecodeFormat::Auto" },
		{ "Comment", "/**\n * Timecode formats.\n */" },
		{ "LTC.Name", "EMediaIOAutoDetectableTimecodeFormat::LTC" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "None.Name", "EMediaIOAutoDetectableTimecodeFormat::None" },
		{ "ToolTip", "Timecode formats." },
		{ "VITC.Name", "EMediaIOAutoDetectableTimecodeFormat::VITC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOAutoDetectableTimecodeFormat",
		"EMediaIOAutoDetectableTimecodeFormat",
		Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup;
class UScriptStruct* FMediaIOAutoDetectableTimecodeFormat_Backup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOAutoDetectableTimecodeFormat_Backup"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOAutoDetectableTimecodeFormat_Backup>()
{
	return FMediaIOAutoDetectableTimecodeFormat_Backup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetect_MetaData[];
#endif
		static void NewProp_bAutoDetect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOAutoDetectableTimecodeFormat_Backup>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The timecode format if not autodetected. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The timecode format if not autodetected." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOAutoDetectableTimecodeFormat_Backup, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Whether the timecode should be autodetected. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Whether the timecode should be autodetected." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect_SetBit(void* Obj)
	{
		((FMediaIOAutoDetectableTimecodeFormat_Backup*)Obj)->bAutoDetect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect = { "bAutoDetect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaIOAutoDetectableTimecodeFormat_Backup), &Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_TimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewProp_bAutoDetect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOAutoDetectableTimecodeFormat_Backup",
		sizeof(FMediaIOAutoDetectableTimecodeFormat_Backup),
		alignof(FMediaIOAutoDetectableTimecodeFormat_Backup),
		Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOInputType;
	static UEnum* EMediaIOInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOInputType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOInputType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOInputType>()
	{
		return EMediaIOInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enumerators[] = {
		{ "EMediaIOInputType::Fill", (int64)EMediaIOInputType::Fill },
		{ "EMediaIOInputType::FillAndKey", (int64)EMediaIOInputType::FillAndKey },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * SDI Input type.\n */" },
		{ "Fill.DisplayName", "Fill" },
		{ "Fill.Name", "EMediaIOInputType::Fill" },
		{ "FillAndKey.DisplayName", "Fill & Key" },
		{ "FillAndKey.Name", "EMediaIOInputType::FillAndKey" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "SDI Input type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOInputType",
		"EMediaIOInputType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOInputType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOInputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOOutputType;
	static UEnum* EMediaIOOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOOutputType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOOutputType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOOutputType>()
	{
		return EMediaIOOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enumerators[] = {
		{ "EMediaIOOutputType::Fill", (int64)EMediaIOOutputType::Fill },
		{ "EMediaIOOutputType::FillAndKey", (int64)EMediaIOOutputType::FillAndKey },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * SDI Output type.\n */" },
		{ "Fill.DisplayName", "Fill" },
		{ "Fill.Name", "EMediaIOOutputType::Fill" },
		{ "FillAndKey.DisplayName", "Fill & Key" },
		{ "FillAndKey.Name", "EMediaIOOutputType::FillAndKey" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "SDI Output type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOOutputType",
		"EMediaIOOutputType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOOutputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaIOReferenceType;
	static UEnum* EMediaIOReferenceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaIOReferenceType"));
		}
		return Z_Registration_Info_UEnum_EMediaIOReferenceType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOReferenceType>()
	{
		return EMediaIOReferenceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enumerators[] = {
		{ "EMediaIOReferenceType::FreeRun", (int64)EMediaIOReferenceType::FreeRun },
		{ "EMediaIOReferenceType::External", (int64)EMediaIOReferenceType::External },
		{ "EMediaIOReferenceType::Input", (int64)EMediaIOReferenceType::Input },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * SDI Output type.\n */" },
		{ "External.Name", "EMediaIOReferenceType::External" },
		{ "FreeRun.Name", "EMediaIOReferenceType::FreeRun" },
		{ "Input.Name", "EMediaIOReferenceType::Input" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "SDI Output type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaIOReferenceType",
		"EMediaIOReferenceType",
		Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType()
	{
		if (!Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaIOReferenceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIODevice;
class UScriptStruct* FMediaIODevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIODevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIODevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIODevice, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIODevice"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIODevice.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIODevice>()
{
	return FMediaIODevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIODevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIODevice_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Identifies a device.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Identifies a device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIODevice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Device" },
		{ "Comment", "/** The retail/display name of the Device. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The retail/display name of the Device." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIODevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceIdentifier_MetaData[] = {
		{ "Category", "Device" },
		{ "Comment", "/** The device identifier. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The device identifier." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceIdentifier = { "DeviceIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIODevice, DeviceIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIODevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewProp_DeviceIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIODevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIODevice",
		sizeof(FMediaIODevice),
		alignof(FMediaIODevice),
		Z_Construct_UScriptStruct_FMediaIODevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIODevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIODevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIODevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIODevice()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIODevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIODevice.InnerSingleton, Z_Construct_UScriptStruct_FMediaIODevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIODevice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOConnection;
class UScriptStruct* FMediaIOConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOConnection, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOConnection"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOConnection.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOConnection>()
{
	return FMediaIOConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Protocol;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TransportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransportType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_QuadTransportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadTransportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuadTransportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PortIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Identifies an media connection.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Identifies an media connection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** The device identifier. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The device identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConnection, Device), Z_Construct_UScriptStruct_FMediaIODevice, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Device_MetaData)) }; // 2214718791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Protocol_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** The protocol used by the MediaFramework. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The protocol used by the MediaFramework." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConnection, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Protocol_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** The type of cable link used for that configuration */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The type of cable link used for that configuration" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType = { "TransportType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConnection, TransportType), Z_Construct_UEnum_MediaIOCore_EMediaIOTransportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType_MetaData)) }; // 3931408324
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** The type of cable link used for that configuration */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The type of cable link used for that configuration" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType = { "QuadTransportType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConnection, QuadTransportType), Z_Construct_UEnum_MediaIOCore_EMediaIOQuadLinkTransportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType_MetaData)) }; // 1634622017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_PortIdentifier_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** The port of the video channel on the device. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The port of the video channel on the device." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_PortIdentifier = { "PortIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConnection, PortIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_PortIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_PortIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_Protocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_TransportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_QuadTransportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewProp_PortIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOConnection",
		sizeof(FMediaIOConnection),
		alignof(FMediaIOConnection),
		Z_Construct_UScriptStruct_FMediaIOConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOConnection.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOConnection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOMode;
class UScriptStruct* FMediaIOMode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOMode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOMode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOMode, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOMode"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOMode.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOMode>()
{
	return FMediaIOMode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Standard_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standard_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Standard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceModeIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeviceModeIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOMode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Identifies a media mode.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Identifies a media mode." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOMode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Mode" },
		{ "Comment", "/** The mode's frame rate. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The mode's frame rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOMode, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Mode" },
		{ "Comment", "/** The mode's image resolution. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The mode's image resolution." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOMode, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Resolution_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard_MetaData[] = {
		{ "Category", "Mode" },
		{ "Comment", "/** The mode's scanning type. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The mode's scanning type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard = { "Standard", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOMode, Standard), Z_Construct_UEnum_MediaIOCore_EMediaIOStandardType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard_MetaData)) }; // 3873394326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_DeviceModeIdentifier_MetaData[] = {
		{ "Category", "Mode" },
		{ "Comment", "/** The mode's identifier for the device. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The mode's identifier for the device." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_DeviceModeIdentifier = { "DeviceModeIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOMode, DeviceModeIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_DeviceModeIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_DeviceModeIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_Standard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewProp_DeviceModeIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOMode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOMode",
		sizeof(FMediaIOMode),
		alignof(FMediaIOMode),
		Z_Construct_UScriptStruct_FMediaIOMode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOMode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOMode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOMode()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOMode.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOMode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOConfiguration;
class UScriptStruct* FMediaIOConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOConfiguration, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOConfiguration.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOConfiguration>()
{
	return FMediaIOConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInput_MetaData[];
#endif
		static void NewProp_bIsInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaMode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of a device input / output.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Configuration of a device input / output." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_MetaData[] = {
		{ "Comment", "/** Configured as an input or output. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Configured as an input or output." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_SetBit(void* Obj)
	{
		((FMediaIOConfiguration*)Obj)->bIsInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput = { "bIsInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaIOConfiguration), &Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaConnection_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The configuration's device and transport type. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The configuration's device and transport type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaConnection = { "MediaConnection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConfiguration, MediaConnection), Z_Construct_UScriptStruct_FMediaIOConnection, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaConnection_MetaData)) }; // 1492337661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaMode_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The configuration's video mode. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The configuration's video mode." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaMode = { "MediaMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOConfiguration, MediaMode), Z_Construct_UScriptStruct_FMediaIOMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaMode_MetaData)) }; // 3898953866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_bIsInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewProp_MediaMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOConfiguration",
		sizeof(FMediaIOConfiguration),
		alignof(FMediaIOConfiguration),
		Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration;
class UScriptStruct* FMediaIOInputConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOInputConfiguration, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOInputConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOInputConfiguration>()
{
	return FMediaIOInputConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPortIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyPortIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of a device input.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Configuration of a device input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOInputConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The signal input format. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The signal input format." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOInputConfiguration, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Whether to input the fill or the fill and key. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Whether to input the fill or the fill and key." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOInputConfiguration, InputType), Z_Construct_UEnum_MediaIOCore_EMediaIOInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType_MetaData)) }; // 3618987509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The port of the video channel on the device to input the key from. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The port of the video channel on the device to input the key from." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_KeyPortIdentifier = { "KeyPortIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOInputConfiguration, KeyPortIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewProp_KeyPortIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOInputConfiguration",
		sizeof(FMediaIOInputConfiguration),
		alignof(FMediaIOInputConfiguration),
		Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOInputConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration;
class UScriptStruct* FMediaIOOutputConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOOutputConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOOutputConfiguration>()
{
	return FMediaIOOutputConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPortIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyPortIdentifier;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputReference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputReference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePortIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReferencePortIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of a device output.\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Configuration of a device output." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOOutputConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The signal output format. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The signal output format." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOOutputConfiguration, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Whether to output the fill or the fill and key. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Whether to output the fill or the fill and key." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOOutputConfiguration, OutputType), Z_Construct_UEnum_MediaIOCore_EMediaIOOutputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType_MetaData)) }; // 3092089606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/**\n\x09 * The port of the video channel on the device to output the key to.\n\x09 * @note\x09'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha.\n\x09 * @note\x09'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The port of the video channel on the device to output the key to.\n@note        'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha.\n@note        'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper'." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_KeyPortIdentifier = { "KeyPortIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOOutputConfiguration, KeyPortIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_KeyPortIdentifier_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The Device output sync with either its internal clock, an external reference, or an other input. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The Device output sync with either its internal clock, an external reference, or an other input." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference = { "OutputReference", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOOutputConfiguration, OutputReference), Z_Construct_UEnum_MediaIOCore_EMediaIOReferenceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference_MetaData)) }; // 2475341341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_ReferencePortIdentifier_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** The port of the video channel on the device to output the synchronize to. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "The port of the video channel on the device to output the synchronize to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_ReferencePortIdentifier = { "ReferencePortIdentifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOOutputConfiguration, ReferencePortIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_ReferencePortIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_ReferencePortIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_KeyPortIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_OutputReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewProp_ReferencePortIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOOutputConfiguration",
		sizeof(FMediaIOOutputConfiguration),
		alignof(FMediaIOOutputConfiguration),
		Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOOutputConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration;
class UScriptStruct* FMediaIOVideoTimecodeConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaIOVideoTimecodeConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaIOVideoTimecodeConfiguration>()
{
	return FMediaIOVideoTimecodeConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of a Timecode from Video\n */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Configuration of a Timecode from Video" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaIOVideoTimecodeConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Read the timecode from a video signal. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Read the timecode from a video signal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOVideoTimecodeConfiguration, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "/** Timecode format to read from a video signal. */" },
		{ "ModuleRelativePath", "Public/MediaIOCoreDefinitions.h" },
		{ "ToolTip", "Timecode format to read from a video signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaIOVideoTimecodeConfiguration, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1807212714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewProp_TimecodeFormat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaIOVideoTimecodeConfiguration",
		sizeof(FMediaIOVideoTimecodeConfiguration),
		alignof(FMediaIOVideoTimecodeConfiguration),
		Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::EnumInfo[] = {
		{ EMediaIOTransportType_StaticEnum, TEXT("EMediaIOTransportType"), &Z_Registration_Info_UEnum_EMediaIOTransportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3931408324U) },
		{ EMediaIOQuadLinkTransportType_StaticEnum, TEXT("EMediaIOQuadLinkTransportType"), &Z_Registration_Info_UEnum_EMediaIOQuadLinkTransportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1634622017U) },
		{ EMediaIOStandardType_StaticEnum, TEXT("EMediaIOStandardType"), &Z_Registration_Info_UEnum_EMediaIOStandardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3873394326U) },
		{ EMediaIOTimecodeFormat_StaticEnum, TEXT("EMediaIOTimecodeFormat"), &Z_Registration_Info_UEnum_EMediaIOTimecodeFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1430363538U) },
		{ EMediaIOAutoDetectableTimecodeFormat_StaticEnum, TEXT("EMediaIOAutoDetectableTimecodeFormat"), &Z_Registration_Info_UEnum_EMediaIOAutoDetectableTimecodeFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1807212714U) },
		{ EMediaIOInputType_StaticEnum, TEXT("EMediaIOInputType"), &Z_Registration_Info_UEnum_EMediaIOInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3618987509U) },
		{ EMediaIOOutputType_StaticEnum, TEXT("EMediaIOOutputType"), &Z_Registration_Info_UEnum_EMediaIOOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092089606U) },
		{ EMediaIOReferenceType_StaticEnum, TEXT("EMediaIOReferenceType"), &Z_Registration_Info_UEnum_EMediaIOReferenceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2475341341U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FMediaIOAutoDetectableTimecodeFormat_Backup::StaticStruct, Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics::NewStructOps, TEXT("MediaIOAutoDetectableTimecodeFormat_Backup"), &Z_Registration_Info_UScriptStruct_MediaIOAutoDetectableTimecodeFormat_Backup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOAutoDetectableTimecodeFormat_Backup), 1278057337U) },
		{ FMediaIODevice::StaticStruct, Z_Construct_UScriptStruct_FMediaIODevice_Statics::NewStructOps, TEXT("MediaIODevice"), &Z_Registration_Info_UScriptStruct_MediaIODevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIODevice), 2214718791U) },
		{ FMediaIOConnection::StaticStruct, Z_Construct_UScriptStruct_FMediaIOConnection_Statics::NewStructOps, TEXT("MediaIOConnection"), &Z_Registration_Info_UScriptStruct_MediaIOConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOConnection), 1492337661U) },
		{ FMediaIOMode::StaticStruct, Z_Construct_UScriptStruct_FMediaIOMode_Statics::NewStructOps, TEXT("MediaIOMode"), &Z_Registration_Info_UScriptStruct_MediaIOMode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOMode), 3898953866U) },
		{ FMediaIOConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics::NewStructOps, TEXT("MediaIOConfiguration"), &Z_Registration_Info_UScriptStruct_MediaIOConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOConfiguration), 4044872615U) },
		{ FMediaIOInputConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics::NewStructOps, TEXT("MediaIOInputConfiguration"), &Z_Registration_Info_UScriptStruct_MediaIOInputConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOInputConfiguration), 2330505538U) },
		{ FMediaIOOutputConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics::NewStructOps, TEXT("MediaIOOutputConfiguration"), &Z_Registration_Info_UScriptStruct_MediaIOOutputConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOOutputConfiguration), 3319849652U) },
		{ FMediaIOVideoTimecodeConfiguration::StaticStruct, Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics::NewStructOps, TEXT("MediaIOVideoTimecodeConfiguration"), &Z_Registration_Info_UScriptStruct_MediaIOVideoTimecodeConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaIOVideoTimecodeConfiguration), 3209305699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_197994465(TEXT("/Script/MediaIOCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
