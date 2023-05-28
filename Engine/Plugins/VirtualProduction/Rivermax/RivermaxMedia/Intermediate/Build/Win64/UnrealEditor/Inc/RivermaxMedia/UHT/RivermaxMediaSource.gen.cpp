// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxMediaSource() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaSource();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaSource_NoRegister();
	RIVERMAXMEDIA_API UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat();
	RIVERMAXMEDIA_API UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode();
	UPackage* Z_Construct_UPackage__Script_RivermaxMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat;
	static UEnum* ERivermaxMediaSourcePixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat, (UObject*)Z_Construct_UPackage__Script_RivermaxMedia(), TEXT("ERivermaxMediaSourcePixelFormat"));
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UEnum* StaticEnum<ERivermaxMediaSourcePixelFormat>()
	{
		return ERivermaxMediaSourcePixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enumerators[] = {
		{ "ERivermaxMediaSourcePixelFormat::YUV422_8bit", (int64)ERivermaxMediaSourcePixelFormat::YUV422_8bit },
		{ "ERivermaxMediaSourcePixelFormat::YUV422_10bit", (int64)ERivermaxMediaSourcePixelFormat::YUV422_10bit },
		{ "ERivermaxMediaSourcePixelFormat::RGB_8bit", (int64)ERivermaxMediaSourcePixelFormat::RGB_8bit },
		{ "ERivermaxMediaSourcePixelFormat::RGB_10bit", (int64)ERivermaxMediaSourcePixelFormat::RGB_10bit },
		{ "ERivermaxMediaSourcePixelFormat::RGB_12bit", (int64)ERivermaxMediaSourcePixelFormat::RGB_12bit },
		{ "ERivermaxMediaSourcePixelFormat::RGB_16bit_Float", (int64)ERivermaxMediaSourcePixelFormat::RGB_16bit_Float },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Native data format.\n */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "RGB_10bit.DisplayName", "10bit RGB" },
		{ "RGB_10bit.Name", "ERivermaxMediaSourcePixelFormat::RGB_10bit" },
		{ "RGB_12bit.DisplayName", "12bit RGB" },
		{ "RGB_12bit.Name", "ERivermaxMediaSourcePixelFormat::RGB_12bit" },
		{ "RGB_16bit_Float.DisplayName", "16bit Float RGB" },
		{ "RGB_16bit_Float.Name", "ERivermaxMediaSourcePixelFormat::RGB_16bit_Float" },
		{ "RGB_8bit.DisplayName", "8bit RGB" },
		{ "RGB_8bit.Name", "ERivermaxMediaSourcePixelFormat::RGB_8bit" },
		{ "ToolTip", "Native data format." },
		{ "YUV422_10bit.DisplayName", "10bit YUV422" },
		{ "YUV422_10bit.Name", "ERivermaxMediaSourcePixelFormat::YUV422_10bit" },
		{ "YUV422_8bit.DisplayName", "8bit YUV422" },
		{ "YUV422_8bit.Name", "ERivermaxMediaSourcePixelFormat::YUV422_8bit" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivermaxMedia,
		nullptr,
		"ERivermaxMediaSourcePixelFormat",
		"ERivermaxMediaSourcePixelFormat",
		Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.InnerSingleton, Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERivermaxPlayerMode;
	static UEnum* ERivermaxPlayerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxPlayerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERivermaxPlayerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode, (UObject*)Z_Construct_UPackage__Script_RivermaxMedia(), TEXT("ERivermaxPlayerMode"));
		}
		return Z_Registration_Info_UEnum_ERivermaxPlayerMode.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UEnum* StaticEnum<ERivermaxPlayerMode>()
	{
		return ERivermaxPlayerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enumerators[] = {
		{ "ERivermaxPlayerMode::Latest", (int64)ERivermaxPlayerMode::Latest },
		{ "ERivermaxPlayerMode::Framelock", (int64)ERivermaxPlayerMode::Framelock },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Player mode to be used.\n */" },
		{ "Framelock.Comment", "// Uses latest sample available\n" },
		{ "Framelock.Name", "ERivermaxPlayerMode::Framelock" },
		{ "Framelock.ToolTip", "Uses latest sample available" },
		{ "Latest.Name", "ERivermaxPlayerMode::Latest" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Player mode to be used." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivermaxMedia,
		nullptr,
		"ERivermaxPlayerMode",
		"ERivermaxPlayerMode",
		Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxPlayerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERivermaxPlayerMode.InnerSingleton, Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERivermaxPlayerMode.InnerSingleton;
	}
	void URivermaxMediaSource::StaticRegisterNativesURivermaxMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxMediaSource);
	UClass* Z_Construct_UClass_URivermaxMediaSource_NoRegister()
	{
		return URivermaxMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseZeroLatency_MetaData[];
#endif
		static void NewProp_bUseZeroLatency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseZeroLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResolution_MetaData[];
#endif
		static void NewProp_bOverrideResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSRGBInput_MetaData[];
#endif
		static void NewProp_bIsSRGBInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSRGBInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGPUDirect_MetaData[];
#endif
		static void NewProp_bUseGPUDirect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGPUDirect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizableMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for Rivermax streams.\n */" },
		{ "DisplayName", "NVIDIA Rivermax Source" },
		{ "HideCategories", "Platforms Object Object Object" },
		{ "IncludePath", "RivermaxMediaSource.h" },
		{ "MediaIOCustomLayout", "Rivermax" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Media source for Rivermax streams." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Player mode to be used.\n\x09 * Latest : Default mode. Will use latest available at render time. No alignment.\n\x09 * Framelock : Will match sample's frame number with engine frame number. Meant to be used for UE-UE contexts like for nDisplay\n\x09 *           : Will wait for an expected to arrive before moving with render\n\x09 */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Player mode to be used.\nLatest : Default mode. Will use latest available at render time. No alignment.\nFramelock : Will match sample's frame number with engine frame number. Meant to be used for UE-UE contexts like for nDisplay\n          : Will wait for an expected to arrive before moving with render" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode = { "PlayerMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, PlayerMode), Z_Construct_UEnum_RivermaxMedia_ERivermaxPlayerMode, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode_MetaData)) }; // 4267406613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/** \n\x09 * If true, when looking for the sample to render, the current frame number will be looked for.\n\x09 * If expected frame hasn't been received, waiting will occur.\n\x09 * If false, player will look for one frame behind\n\x09 */" },
		{ "EditCondition", "PlayerMode == ERivermaxPlayerMode::Framelock" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "If true, when looking for the sample to render, the current frame number will be looked for.\nIf expected frame hasn't been received, waiting will occur.\nIf false, player will look for one frame behind" },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency_SetBit(void* Obj)
	{
		((URivermaxMediaSource*)Obj)->bUseZeroLatency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency = { "bUseZeroLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaSource), &Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** If false, use the default source buffer size. If true, a specific resolution will be used. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "If false, use the default source buffer size. If true, a specific resolution will be used." },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution_SetBit(void* Obj)
	{
		((URivermaxMediaSource*)Obj)->bOverrideResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution = { "bOverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaSource), &Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Incoming stream video resolution */" },
		{ "EditCondition", "bOverrideResolution" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Incoming stream video resolution" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Incoming stream video frame rate */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Incoming stream video frame rate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Incoming stream pixel format */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Incoming stream pixel format" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, PixelFormat), Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaSourcePixelFormat, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat_MetaData)) }; // 2367919543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_InterfaceAddress_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** \n\x09 * Network card interface to use to receive data\n\x09 * Wildcards are supported to match against an interface found on the machine\n\x09 * 192.*.0.110\n\x09 * 192.168.0.1?0\n\x09 * 192.168.0.1*\n\x09 */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Network card interface to use to receive data\nWildcards are supported to match against an interface found on the machine\n192.*.0.110\n192.168.0.1?0\n192.168.0.1*" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_InterfaceAddress = { "InterfaceAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, InterfaceAddress), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_InterfaceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_InterfaceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_StreamAddress_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** IP address where incoming stream is coming from */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "IP address where incoming stream is coming from" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_StreamAddress = { "StreamAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, StreamAddress), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_StreamAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_StreamAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Port used by the sender to send its stream */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Port used by the sender to send its stream" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaSource, Port), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Whether the video input is in sRGB color space.If true, sRGBToLinear will be done on incoming pixels before writing to media texture */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Whether the video input is in sRGB color space.If true, sRGBToLinear will be done on incoming pixels before writing to media texture" },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput_SetBit(void* Obj)
	{
		((URivermaxMediaSource*)Obj)->bIsSRGBInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput = { "bIsSRGBInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaSource), &Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Whether to use GPUDirect if available (Memcopy from NIC to GPU directly bypassing system memory) if available */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaSource.h" },
		{ "ToolTip", "Whether to use GPUDirect if available (Memcopy from NIC to GPU directly bypassing system memory) if available" },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect_SetBit(void* Obj)
	{
		((URivermaxMediaSource*)Obj)->bUseGPUDirect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect = { "bUseGPUDirect", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaSource), &Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivermaxMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PlayerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseZeroLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bOverrideResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_InterfaceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_StreamAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bIsSRGBInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaSource_Statics::NewProp_bUseGPUDirect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxMediaSource_Statics::ClassParams = {
		&URivermaxMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URivermaxMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxMediaSource()
	{
		if (!Z_Registration_Info_UClass_URivermaxMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxMediaSource.OuterSingleton, Z_Construct_UClass_URivermaxMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxMediaSource.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UClass* StaticClass<URivermaxMediaSource>()
	{
		return URivermaxMediaSource::StaticClass();
	}
	URivermaxMediaSource::URivermaxMediaSource() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxMediaSource);
	URivermaxMediaSource::~URivermaxMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::EnumInfo[] = {
		{ ERivermaxMediaSourcePixelFormat_StaticEnum, TEXT("ERivermaxMediaSourcePixelFormat"), &Z_Registration_Info_UEnum_ERivermaxMediaSourcePixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2367919543U) },
		{ ERivermaxPlayerMode_StaticEnum, TEXT("ERivermaxPlayerMode"), &Z_Registration_Info_UEnum_ERivermaxPlayerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4267406613U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxMediaSource, URivermaxMediaSource::StaticClass, TEXT("URivermaxMediaSource"), &Z_Registration_Info_UClass_URivermaxMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxMediaSource), 1868450674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_3551262808(TEXT("/Script/RivermaxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
