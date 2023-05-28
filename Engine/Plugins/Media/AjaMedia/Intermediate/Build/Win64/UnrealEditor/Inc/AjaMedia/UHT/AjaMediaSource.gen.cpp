// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaSource.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaSource() {}
// Cross Module References
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaMediaSource();
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaMediaSource_NoRegister();
	AJAMEDIA_API UEnum* Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel();
	AJAMEDIA_API UEnum* Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat;
	static UEnum* EAjaMediaSourceColorFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("EAjaMediaSourceColorFormat"));
		}
		return Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.OuterSingleton;
	}
	template<> AJAMEDIA_API UEnum* StaticEnum<EAjaMediaSourceColorFormat>()
	{
		return EAjaMediaSourceColorFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enumerators[] = {
		{ "EAjaMediaSourceColorFormat::YUV2_8bit", (int64)EAjaMediaSourceColorFormat::YUV2_8bit },
		{ "EAjaMediaSourceColorFormat::YUV_10bit", (int64)EAjaMediaSourceColorFormat::YUV_10bit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Native data format.\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Native data format." },
		{ "YUV2_8bit.DisplayName", "8bit YUV" },
		{ "YUV2_8bit.Name", "EAjaMediaSourceColorFormat::YUV2_8bit" },
		{ "YUV_10bit.DisplayName", "10bit YUV" },
		{ "YUV_10bit.Name", "EAjaMediaSourceColorFormat::YUV_10bit" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		"EAjaMediaSourceColorFormat",
		"EAjaMediaSourceColorFormat",
		Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.InnerSingleton, Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaMediaAudioChannel;
	static UEnum* EAjaMediaAudioChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaAudioChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaMediaAudioChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("EAjaMediaAudioChannel"));
		}
		return Z_Registration_Info_UEnum_EAjaMediaAudioChannel.OuterSingleton;
	}
	template<> AJAMEDIA_API UEnum* StaticEnum<EAjaMediaAudioChannel>()
	{
		return EAjaMediaAudioChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enumerators[] = {
		{ "EAjaMediaAudioChannel::Channel6", (int64)EAjaMediaAudioChannel::Channel6 },
		{ "EAjaMediaAudioChannel::Channel8", (int64)EAjaMediaAudioChannel::Channel8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enum_MetaDataParams[] = {
		{ "Channel6.Name", "EAjaMediaAudioChannel::Channel6" },
		{ "Channel8.Name", "EAjaMediaAudioChannel::Channel8" },
		{ "Comment", "/**\n * Available number of audio channel supported by Unreal Engine & AJA\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Available number of audio channel supported by Unreal Engine & AJA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		"EAjaMediaAudioChannel",
		"EAjaMediaAudioChannel",
		Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaAudioChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaMediaAudioChannel.InnerSingleton, Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaMediaAudioChannel.InnerSingleton;
	}
	void UAjaMediaSource::StaticRegisterNativesUAjaMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaSource);
	UClass* Z_Construct_UClass_UAjaMediaSource_NoRegister()
	{
		return UAjaMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoDetectableTimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectableTimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoDetectableTimecodeFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureWithAutoCirculating_MetaData[];
#endif
		static void NewProp_bCaptureWithAutoCirculating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureWithAutoCirculating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAncillary_MetaData[];
#endif
		static void NewProp_bCaptureAncillary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAncillary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumAncillaryFrameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumAncillaryFrameBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[];
#endif
		static void NewProp_bCaptureAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumAudioFrameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumAudioFrameBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureVideo_MetaData[];
#endif
		static void NewProp_bCaptureVideo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureVideo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSRGBInput_MetaData[];
#endif
		static void NewProp_bIsSRGBInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSRGBInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumVideoFrameBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumVideoFrameBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogDropFrame_MetaData[];
#endif
		static void NewProp_bLogDropFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogDropFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncodeTimecodeInTexel_MetaData[];
#endif
		static void NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncodeTimecodeInTexel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizableMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for AJA streams.\n */" },
		{ "HideCategories", "Platforms Object Object Object" },
		{ "IncludePath", "AjaMediaSource.h" },
		{ "MediaIOCustomLayout", "AJA" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Media source for AJA streams." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** The device, port and video settings that correspond to the input. */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "The device, port and video settings that correspond to the input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Comment", "/** Use the time code embedded in the input stream. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Use the time code embedded in the input stream." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, TimecodeFormat_DEPRECATED), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** Use the time code embedded in the input stream. */" },
		{ "DisplayName", "Timecode Format" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Use the time code embedded in the input stream." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat = { "AutoDetectableTimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, AutoDetectableTimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData)) }; // 1807212714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/**\n\x09 * Use a ring buffer to capture and transfer data.\n\x09 * This may decrease transfer latency but increase stability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Use a ring buffer to capture and transfer data.\nThis may decrease transfer latency but increase stability." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bCaptureWithAutoCirculating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating = { "bCaptureWithAutoCirculating", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary_MetaData[] = {
		{ "Category", "Ancillary" },
		{ "Comment", "/**\n\x09 * Capture Ancillary from the AJA source.\n\x09 * It will decrease performance\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Capture Ancillary from the AJA source.\nIt will decrease performance" },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bCaptureAncillary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary = { "bCaptureAncillary", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer_MetaData[] = {
		{ "Category", "Ancillary" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of ancillary data frames to buffer. */" },
		{ "EditCondition", "bCaptureAncillary" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Maximum number of ancillary data frames to buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer = { "MaxNumAncillaryFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, MaxNumAncillaryFrameBuffer), METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Capture Audio from the AJA source. */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Capture Audio from the AJA source." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bCaptureAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Desired number of audio channel to capture. */" },
		{ "EditCondition", "bCaptureAudio" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Desired number of audio channel to capture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel = { "AudioChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, AudioChannel), Z_Construct_UEnum_AjaMedia_EAjaMediaAudioChannel, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel_MetaData)) }; // 2442689935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of audio frames to buffer. */" },
		{ "EditCondition", "bCaptureAudio" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Maximum number of audio frames to buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer = { "MaxNumAudioFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, MaxNumAudioFrameBuffer), METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Capture Video from the AJA source. */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Capture Video from the AJA source." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bCaptureVideo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo = { "bCaptureVideo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Native data format internally used by the device after being converted from SDI/HDMI signal. */" },
		{ "EditCondition", "bCaptureVideo" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Native data format internally used by the device after being converted from SDI/HDMI signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, ColorFormat), Z_Construct_UEnum_AjaMedia_EAjaMediaSourceColorFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat_MetaData)) }; // 1237322470
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** \n\x09 * Whether the video input is in sRGB color space.\n\x09 * A sRGB to Linear conversion will be applied resulting in a texture in linear space.\n\x09 * @Note If the texture is not in linear space, it won't look correct in the editor. Another pass will be required either through Composure or other means.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Whether the video input is in sRGB color space.\nA sRGB to Linear conversion will be applied resulting in a texture in linear space.\n@Note If the texture is not in linear space, it won't look correct in the editor. Another pass will be required either through Composure or other means." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bIsSRGBInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput = { "bIsSRGBInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData[] = {
		{ "Category", "Video" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of video frames to buffer. */" },
		{ "EditCondition", "bCaptureVideo" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Maximum number of video frames to buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer = { "MaxNumVideoFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaSource, MaxNumVideoFrameBuffer), METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Log a warning when there's a drop frame. */" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Log a warning when there's a drop frame." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bLogDropFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame = { "bLogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * Burn Frame Timecode in the input texture without any frame number clipping.\n\x09 * @Note Only supported with progressive format.\n\x09 */" },
		{ "DisplayName", "Burn Frame Timecode" },
		{ "ModuleRelativePath", "Public/AjaMediaSource.h" },
		{ "ToolTip", "Burn Frame Timecode in the input texture without any frame number clipping.\n@Note Only supported with progressive format." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj)
	{
		((UAjaMediaSource*)Obj)->bEncodeTimecodeInTexel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel = { "bEncodeTimecodeInTexel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaSource), &Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAjaMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MediaConfiguration,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_TimecodeFormat,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureWithAutoCirculating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAncillary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAncillaryFrameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_AudioChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bCaptureVideo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_ColorFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bIsSRGBInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bLogDropFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaSource_Statics::NewProp_bEncodeTimecodeInTexel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaSource_Statics::ClassParams = {
		&UAjaMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAjaMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaSource()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaSource.OuterSingleton, Z_Construct_UClass_UAjaMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaSource.OuterSingleton;
	}
	template<> AJAMEDIA_API UClass* StaticClass<UAjaMediaSource>()
	{
		return UAjaMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaSource);
	UAjaMediaSource::~UAjaMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::EnumInfo[] = {
		{ EAjaMediaSourceColorFormat_StaticEnum, TEXT("EAjaMediaSourceColorFormat"), &Z_Registration_Info_UEnum_EAjaMediaSourceColorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1237322470U) },
		{ EAjaMediaAudioChannel_StaticEnum, TEXT("EAjaMediaAudioChannel"), &Z_Registration_Info_UEnum_EAjaMediaAudioChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2442689935U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaSource, UAjaMediaSource::StaticClass, TEXT("UAjaMediaSource"), &Z_Registration_Info_UClass_UAjaMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaSource), 2327618997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_23345845(TEXT("/Script/AjaMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaMediaSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
