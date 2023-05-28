// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaOutput.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaOutput() {}
// Cross Module References
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaOutput();
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaOutput_NoRegister();
	AJAMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate();
	AJAMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration();
	AJAMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOOutputConfiguration();
	UPackage* Z_Construct_UPackage__Script_AjaMediaOutput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat;
	static UEnum* EAjaMediaOutputPixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat, (UObject*)Z_Construct_UPackage__Script_AjaMediaOutput(), TEXT("EAjaMediaOutputPixelFormat"));
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputPixelFormat>()
	{
		return EAjaMediaOutputPixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enumerators[] = {
		{ "EAjaMediaOutputPixelFormat::PF_8BIT_YUV", (int64)EAjaMediaOutputPixelFormat::PF_8BIT_YUV },
		{ "EAjaMediaOutputPixelFormat::PF_10BIT_YUV", (int64)EAjaMediaOutputPixelFormat::PF_10BIT_YUV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Native data format.\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "PF_10BIT_YUV.DisplayName", "10bit YUV" },
		{ "PF_10BIT_YUV.Name", "EAjaMediaOutputPixelFormat::PF_10BIT_YUV" },
		{ "PF_8BIT_YUV.DisplayName", "8bit YUV" },
		{ "PF_8BIT_YUV.Name", "EAjaMediaOutputPixelFormat::PF_8BIT_YUV" },
		{ "ToolTip", "Native data format." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMediaOutput,
		nullptr,
		"EAjaMediaOutputPixelFormat",
		"EAjaMediaOutputPixelFormat",
		Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.InnerSingleton, Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate;
	static UEnum* EAjaMediaOutputAudioSampleRate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate, (UObject*)Z_Construct_UPackage__Script_AjaMediaOutput(), TEXT("EAjaMediaOutputAudioSampleRate"));
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputAudioSampleRate>()
	{
		return EAjaMediaOutputAudioSampleRate_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enumerators[] = {
		{ "EAjaMediaOutputAudioSampleRate::SR_48k", (int64)EAjaMediaOutputAudioSampleRate::SR_48k },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "SR_48k.DisplayName", "48 kHz" },
		{ "SR_48k.Name", "EAjaMediaOutputAudioSampleRate::SR_48k" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMediaOutput,
		nullptr,
		"EAjaMediaOutputAudioSampleRate",
		"EAjaMediaOutputAudioSampleRate",
		Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.InnerSingleton, Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration;
	static UEnum* EAjaMediaOutputChannelConfiguration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration, (UObject*)Z_Construct_UPackage__Script_AjaMediaOutput(), TEXT("EAjaMediaOutputChannelConfiguration"));
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UEnum* StaticEnum<EAjaMediaOutputChannelConfiguration>()
	{
		return EAjaMediaOutputChannelConfiguration_StaticEnum();
	}
	struct Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enumerators[] = {
		{ "EAjaMediaOutputChannelConfiguration::CH_6", (int64)EAjaMediaOutputChannelConfiguration::CH_6 },
		{ "EAjaMediaOutputChannelConfiguration::CH_8", (int64)EAjaMediaOutputChannelConfiguration::CH_8 },
		{ "EAjaMediaOutputChannelConfiguration::CH_16", (int64)EAjaMediaOutputChannelConfiguration::CH_16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enum_MetaDataParams[] = {
		{ "CH_16.DisplayName", "16 Channels" },
		{ "CH_16.Name", "EAjaMediaOutputChannelConfiguration::CH_16" },
		{ "CH_6.DisplayName", "6 Channels" },
		{ "CH_6.Name", "EAjaMediaOutputChannelConfiguration::CH_6" },
		{ "CH_8.DisplayName", "8 Channels" },
		{ "CH_8.Name", "EAjaMediaOutputChannelConfiguration::CH_8" },
		{ "Comment", "/**\n * Number of output audio channels\n */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Number of output audio channels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AjaMediaOutput,
		nullptr,
		"EAjaMediaOutputChannelConfiguration",
		"EAjaMediaOutputChannelConfiguration",
		Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration()
	{
		if (!Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.InnerSingleton, Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration.InnerSingleton;
	}
	void UAjaMediaOutput::StaticRegisterNativesUAjaMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaOutput);
	UClass* Z_Construct_UClass_UAjaMediaOutput_NoRegister()
	{
		return UAjaMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputWithAutoCirculating_MetaData[];
#endif
		static void NewProp_bOutputWithAutoCirculating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputWithAutoCirculating;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputIn3GLevelB_MetaData[];
#endif
		static void NewProp_bOutputIn3GLevelB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputIn3GLevelB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertKeyOutput_MetaData[];
#endif
		static void NewProp_bInvertKeyOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertKeyOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputAudio_MetaData[];
#endif
		static void NewProp_bOutputAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioBufferSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumOutputAudioChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputAudioChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumOutputAudioChannels;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSampleRate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputAudioOnAudioThread_MetaData[];
#endif
		static void NewProp_bOutputAudioOnAudioThread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputAudioOnAudioThread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAJABuffers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAJABuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData[];
#endif
		static void NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterlacedFieldsTimecodeNeedToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForSyncEvent_MetaData[];
#endif
		static void NewProp_bWaitForSyncEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForSyncEvent;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output information for an aja media capture.\n * @note\x09'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n * @note\x09'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AjaMediaOutput.h" },
		{ "MediaIOCustomLayout", "AJA" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Output information for an aja media capture.\n@note       'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n@note       'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_OutputConfiguration_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** The device, port and video settings that correspond to the output. */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "The device, port and video settings that correspond to the output." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_OutputConfiguration = { "OutputConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, OutputConfiguration), Z_Construct_UScriptStruct_FMediaIOOutputConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_OutputConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_OutputConfiguration_MetaData)) }; // 3319849652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * The output of the Audio, Ancillary and/or video will be perform at the same time.\n\x09 * This may decrease transfer performance but each the data will be sync in relation with each other.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "The output of the Audio, Ancillary and/or video will be perform at the same time.\nThis may decrease transfer performance but each the data will be sync in relation with each other." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bOutputWithAutoCirculating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating = { "bOutputWithAutoCirculating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Whether to embed the Engine's timecode to the output frame. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Whether to embed the Engine's timecode to the output frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Native data format internally used by the device before being converted to SDI/HDMI signal. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Native data format internally used by the device before being converted to SDI/HDMI signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, PixelFormat), Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat_MetaData)) }; // 2207405149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** If the video format is compatible with 3G Level A, do the conversion to output in LevelB. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "If the video format is compatible with 3G Level A, do the conversion to output in LevelB." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bOutputIn3GLevelB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB = { "bOutputIn3GLevelB", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Invert Key Output */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Invert Key Output" },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bInvertKeyOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput = { "bInvertKeyOutput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Whether to capture and output audio from the engine. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Whether to capture and output audio from the engine." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bOutputAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio = { "bOutputAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioBufferSize_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Size of the buffer that holds rendered audio samples, a bigger buffer will produce a more stable output signal but will introduce more delay. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Size of the buffer that holds rendered audio samples, a bigger buffer will produce a more stable output signal but will introduce more delay." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioBufferSize = { "AudioBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, AudioBufferSize), METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioBufferSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Number of audio channels used when output audio on the card. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Number of audio channels used when output audio on the card." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels = { "NumOutputAudioChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, NumOutputAudioChannels), Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputChannelConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels_MetaData)) }; // 1638709997
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Audio output sample rate. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Audio output sample rate." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, AudioSampleRate), Z_Construct_UEnum_AjaMediaOutput_EAjaMediaOutputAudioSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate_MetaData)) }; // 687113487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Whether to output audio on the audio thread instead of the rendering thread. Only available in Ping Pong mode. (Experimental) */" },
		{ "EditCondition", "bOutputWithAutoCirculating == false" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Whether to output audio on the audio thread instead of the rendering thread. Only available in Ping Pong mode. (Experimental)" },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bOutputAudioOnAudioThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread = { "bOutputAudioOnAudioThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumberOfAJABuffers_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMax", "4" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Number of frame used to transfer from the system memory to the AJA card.\n\x09 * A smaller number is most likely to cause missed frame.\n\x09 * A bigger number is most likely to increase latency.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Number of frame used to transfer from the system memory to the AJA card.\nA smaller number is most likely to cause missed frame.\nA bigger number is most likely to increase latency." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumberOfAJABuffers = { "NumberOfAJABuffers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaMediaOutput, NumberOfAJABuffers), METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumberOfAJABuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumberOfAJABuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * Only make sense in interlaced mode.\n\x09 * When creating a new Frame the 2 fields need to have the same timecode value.\n\x09 * The Engine's need a TimecodeProvider (or the default system clock) that is in sync with the generated fields.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Only make sense in interlaced mode.\nWhen creating a new Frame the 2 fields need to have the same timecode value.\nThe Engine's need a TimecodeProvider (or the default system clock) that is in sync with the generated fields." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bInterlacedFieldsTimecodeNeedToMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch = { "bInterlacedFieldsTimecodeNeedToMatch", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Try to maintain a the engine \"Genlock\" with the VSync signal. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Try to maintain a the engine \"Genlock\" with the VSync signal." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bWaitForSyncEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent = { "bWaitForSyncEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Log a warning when there's a drop frame. */" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Log a warning when there's a drop frame." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bLogDropFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame = { "bLogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Burn Frame Timecode on the output without any frame number clipping. */" },
		{ "DisplayName", "Burn Frame Timecode" },
		{ "ModuleRelativePath", "Public/AjaMediaOutput.h" },
		{ "ToolTip", "Burn Frame Timecode on the output without any frame number clipping." },
	};
#endif
	void Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj)
	{
		((UAjaMediaOutput*)Obj)->bEncodeTimecodeInTexel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel = { "bEncodeTimecodeInTexel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaMediaOutput), &Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAjaMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_OutputConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputWithAutoCirculating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_TimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputIn3GLevelB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInvertKeyOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumOutputAudioChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_AudioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bOutputAudioOnAudioThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_NumberOfAJABuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bWaitForSyncEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bLogDropFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaOutput_Statics::ClassParams = {
		&UAjaMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAjaMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaOutput.OuterSingleton, Z_Construct_UClass_UAjaMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaOutput.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UClass* StaticClass<UAjaMediaOutput>()
	{
		return UAjaMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaOutput);
	UAjaMediaOutput::~UAjaMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::EnumInfo[] = {
		{ EAjaMediaOutputPixelFormat_StaticEnum, TEXT("EAjaMediaOutputPixelFormat"), &Z_Registration_Info_UEnum_EAjaMediaOutputPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2207405149U) },
		{ EAjaMediaOutputAudioSampleRate_StaticEnum, TEXT("EAjaMediaOutputAudioSampleRate"), &Z_Registration_Info_UEnum_EAjaMediaOutputAudioSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 687113487U) },
		{ EAjaMediaOutputChannelConfiguration_StaticEnum, TEXT("EAjaMediaOutputChannelConfiguration"), &Z_Registration_Info_UEnum_EAjaMediaOutputChannelConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1638709997U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaOutput, UAjaMediaOutput::StaticClass, TEXT("UAjaMediaOutput"), &Z_Registration_Info_UClass_UAjaMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaOutput), 3320081737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_2050161565(TEXT("/Script/AjaMediaOutput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
