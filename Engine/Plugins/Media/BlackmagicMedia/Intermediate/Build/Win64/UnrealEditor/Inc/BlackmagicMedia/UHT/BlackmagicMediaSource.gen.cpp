// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicMediaSource.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaSource() {}
// Cross Module References
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicMediaSource();
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicMediaSource_NoRegister();
	BLACKMAGICMEDIA_API UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel();
	BLACKMAGICMEDIA_API UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat;
	static UEnum* EBlackmagicMediaSourceColorFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("EBlackmagicMediaSourceColorFormat"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaSourceColorFormat>()
	{
		return EBlackmagicMediaSourceColorFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enumerators[] = {
		{ "EBlackmagicMediaSourceColorFormat::YUV8", (int64)EBlackmagicMediaSourceColorFormat::YUV8 },
		{ "EBlackmagicMediaSourceColorFormat::YUV10", (int64)EBlackmagicMediaSourceColorFormat::YUV10 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Native data format.\n */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Native data format." },
		{ "YUV10.DisplayName", "10bit YUV" },
		{ "YUV10.Name", "EBlackmagicMediaSourceColorFormat::YUV10" },
		{ "YUV8.DisplayName", "8bit YUV" },
		{ "YUV8.Name", "EBlackmagicMediaSourceColorFormat::YUV8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		"EBlackmagicMediaSourceColorFormat",
		"EBlackmagicMediaSourceColorFormat",
		Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.InnerSingleton, Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel;
	static UEnum* EBlackmagicMediaAudioChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("EBlackmagicMediaAudioChannel"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaAudioChannel>()
	{
		return EBlackmagicMediaAudioChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enumerators[] = {
		{ "EBlackmagicMediaAudioChannel::Stereo2", (int64)EBlackmagicMediaAudioChannel::Stereo2 },
		{ "EBlackmagicMediaAudioChannel::Surround8", (int64)EBlackmagicMediaAudioChannel::Surround8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Available number of audio channel supported by Unreal Engine & Capture card.\n */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "Stereo2.Name", "EBlackmagicMediaAudioChannel::Stereo2" },
		{ "Surround8.Name", "EBlackmagicMediaAudioChannel::Surround8" },
		{ "ToolTip", "Available number of audio channel supported by Unreal Engine & Capture card." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		"EBlackmagicMediaAudioChannel",
		"EBlackmagicMediaAudioChannel",
		Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.InnerSingleton, Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel.InnerSingleton;
	}
	void UBlackmagicMediaSource::StaticRegisterNativesUBlackmagicMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicMediaSource);
	UClass* Z_Construct_UClass_UBlackmagicMediaSource_NoRegister()
	{
		return UBlackmagicMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicMediaSource_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAudio_MetaData[];
#endif
		static void NewProp_bCaptureAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAudio;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioChannels;
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
	UObject* (*const Z_Construct_UClass_UBlackmagicMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeSynchronizableMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source description for Blackmagic.\n */" },
		{ "HideCategories", "Platforms Object Object Object" },
		{ "IncludePath", "BlackmagicMediaSource.h" },
		{ "MediaIOCustomLayout", "Blackmagic" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Media source description for Blackmagic." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "Blackmagic" },
		{ "Comment", "/** The device, port and video settings that correspond to the input. */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "The device, port and video settings that correspond to the input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Comment", "/** Use the time code embedded in the input stream. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Use the time code embedded in the input stream." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, TimecodeFormat_DEPRECATED), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData[] = {
		{ "Category", "Blackmagic" },
		{ "Comment", "/** Use the time code embedded in the input stream. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Use the time code embedded in the input stream." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat = { "AutoDetectableTimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, AutoDetectableTimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOAutoDetectableTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_MetaData)) }; // 1807212714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Capture Audio from the Blackmagic source. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Capture Audio from the Blackmagic source." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio_SetBit(void* Obj)
	{
		((UBlackmagicMediaSource*)Obj)->bCaptureAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio = { "bCaptureAudio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaSource), &Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Desired number of audio channel to capture. */" },
		{ "EditCondition", "bCaptureAudio" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Desired number of audio channel to capture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels = { "AudioChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, AudioChannels), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaAudioChannel, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels_MetaData)) }; // 2792475430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of audio frames to buffer. */" },
		{ "EditCondition", "bCaptureAudio" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Maximum number of audio frames to buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer = { "MaxNumAudioFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, MaxNumAudioFrameBuffer), METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Capture Video from the Blackmagic source. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Capture Video from the Blackmagic source." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo_SetBit(void* Obj)
	{
		((UBlackmagicMediaSource*)Obj)->bCaptureVideo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo = { "bCaptureVideo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaSource), &Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Native data format internally used by the device after being converted from SDI/HDMI signal. */" },
		{ "EditCondition", "bCaptureVideo" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Native data format internally used by the device after being converted from SDI/HDMI signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat = { "ColorFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, ColorFormat), Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaSourceColorFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat_MetaData)) }; // 2009735864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/**\n\x09 * Whether the video input is in sRGB color space.\n\x09 * A sRGB to Linear conversion will be applied resulting in a texture in linear space.\n\x09 * @Note If the texture is not in linear space, it won't look correct in the editor. Another pass will be required either through Composure or other means.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Whether the video input is in sRGB color space.\nA sRGB to Linear conversion will be applied resulting in a texture in linear space.\n@Note If the texture is not in linear space, it won't look correct in the editor. Another pass will be required either through Composure or other means." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput_SetBit(void* Obj)
	{
		((UBlackmagicMediaSource*)Obj)->bIsSRGBInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput = { "bIsSRGBInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaSource), &Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData[] = {
		{ "Category", "Video" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum number of video frames to buffer. */" },
		{ "EditCondition", "bCaptureVideo" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Maximum number of video frames to buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer = { "MaxNumVideoFrameBuffer", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaSource, MaxNumVideoFrameBuffer), METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Log a warning when there's a drop frame. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Log a warning when there's a drop frame." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame_SetBit(void* Obj)
	{
		((UBlackmagicMediaSource*)Obj)->bLogDropFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame = { "bLogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaSource), &Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09 * Burn Frame Timecode in the input texture without any frame number clipping.\n\x09 * @Note Only supported in progressive format.\n\x09 */" },
		{ "DisplayName", "Burn Frame Timecode" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaSource.h" },
		{ "ToolTip", "Burn Frame Timecode in the input texture without any frame number clipping.\n@Note Only supported in progressive format." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj)
	{
		((UBlackmagicMediaSource*)Obj)->bEncodeTimecodeInTexel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel = { "bEncodeTimecodeInTexel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaSource), &Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackmagicMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MediaConfiguration,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_TimecodeFormat,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AutoDetectableTimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_AudioChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumAudioFrameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bCaptureVideo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_ColorFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bIsSRGBInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_MaxNumVideoFrameBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bLogDropFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaSource_Statics::NewProp_bEncodeTimecodeInTexel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicMediaSource_Statics::ClassParams = {
		&UBlackmagicMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackmagicMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicMediaSource()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicMediaSource.OuterSingleton, Z_Construct_UClass_UBlackmagicMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicMediaSource.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UClass* StaticClass<UBlackmagicMediaSource>()
	{
		return UBlackmagicMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicMediaSource);
	UBlackmagicMediaSource::~UBlackmagicMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::EnumInfo[] = {
		{ EBlackmagicMediaSourceColorFormat_StaticEnum, TEXT("EBlackmagicMediaSourceColorFormat"), &Z_Registration_Info_UEnum_EBlackmagicMediaSourceColorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009735864U) },
		{ EBlackmagicMediaAudioChannel_StaticEnum, TEXT("EBlackmagicMediaAudioChannel"), &Z_Registration_Info_UEnum_EBlackmagicMediaAudioChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2792475430U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicMediaSource, UBlackmagicMediaSource::StaticClass, TEXT("UBlackmagicMediaSource"), &Z_Registration_Info_UClass_UBlackmagicMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicMediaSource), 10996998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_3494248256(TEXT("/Script/BlackmagicMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicMediaSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
