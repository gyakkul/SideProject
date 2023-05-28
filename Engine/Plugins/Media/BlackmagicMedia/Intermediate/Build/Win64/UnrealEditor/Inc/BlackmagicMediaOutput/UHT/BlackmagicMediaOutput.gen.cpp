// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicMediaOutput.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaOutput() {}
// Cross Module References
	BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaOutput();
	BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaOutput_NoRegister();
	BLACKMAGICMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount();
	BLACKMAGICMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth();
	BLACKMAGICMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate();
	BLACKMAGICMEDIAOUTPUT_API UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOOutputConfiguration();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMediaOutput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat;
	static UEnum* EBlackmagicMediaOutputPixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat, (UObject*)Z_Construct_UPackage__Script_BlackmagicMediaOutput(), TEXT("EBlackmagicMediaOutputPixelFormat"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputPixelFormat>()
	{
		return EBlackmagicMediaOutputPixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enumerators[] = {
		{ "EBlackmagicMediaOutputPixelFormat::PF_8BIT_YUV", (int64)EBlackmagicMediaOutputPixelFormat::PF_8BIT_YUV },
		{ "EBlackmagicMediaOutputPixelFormat::PF_10BIT_YUV", (int64)EBlackmagicMediaOutputPixelFormat::PF_10BIT_YUV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Native data format.\n */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "PF_10BIT_YUV.DisplayName", "10bit YUV" },
		{ "PF_10BIT_YUV.Name", "EBlackmagicMediaOutputPixelFormat::PF_10BIT_YUV" },
		{ "PF_8BIT_YUV.DisplayName", "8bit YUV" },
		{ "PF_8BIT_YUV.Name", "EBlackmagicMediaOutputPixelFormat::PF_8BIT_YUV" },
		{ "ToolTip", "Native data format." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
		nullptr,
		"EBlackmagicMediaOutputPixelFormat",
		"EBlackmagicMediaOutputPixelFormat",
		Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.InnerSingleton, Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate;
	static UEnum* EBlackmagicMediaOutputAudioSampleRate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate, (UObject*)Z_Construct_UPackage__Script_BlackmagicMediaOutput(), TEXT("EBlackmagicMediaOutputAudioSampleRate"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioSampleRate>()
	{
		return EBlackmagicMediaOutputAudioSampleRate_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enumerators[] = {
		{ "EBlackmagicMediaOutputAudioSampleRate::SR_48k", (int64)EBlackmagicMediaOutputAudioSampleRate::SR_48k },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "SR_48k.DisplayName", "48 kHz" },
		{ "SR_48k.Name", "EBlackmagicMediaOutputAudioSampleRate::SR_48k" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
		nullptr,
		"EBlackmagicMediaOutputAudioSampleRate",
		"EBlackmagicMediaOutputAudioSampleRate",
		Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.InnerSingleton, Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount;
	static UEnum* EBlackmagicMediaAudioOutputChannelCount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount, (UObject*)Z_Construct_UPackage__Script_BlackmagicMediaOutput(), TEXT("EBlackmagicMediaAudioOutputChannelCount"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaAudioOutputChannelCount>()
	{
		return EBlackmagicMediaAudioOutputChannelCount_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enumerators[] = {
		{ "EBlackmagicMediaAudioOutputChannelCount::CH_2", (int64)EBlackmagicMediaAudioOutputChannelCount::CH_2 },
		{ "EBlackmagicMediaAudioOutputChannelCount::CH_8", (int64)EBlackmagicMediaAudioOutputChannelCount::CH_8 },
		{ "EBlackmagicMediaAudioOutputChannelCount::CH_16", (int64)EBlackmagicMediaAudioOutputChannelCount::CH_16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enum_MetaDataParams[] = {
		{ "CH_16.DisplayName", "16" },
		{ "CH_16.Name", "EBlackmagicMediaAudioOutputChannelCount::CH_16" },
		{ "CH_2.DisplayName", "2" },
		{ "CH_2.Name", "EBlackmagicMediaAudioOutputChannelCount::CH_2" },
		{ "CH_8.DisplayName", "8" },
		{ "CH_8.Name", "EBlackmagicMediaAudioOutputChannelCount::CH_8" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
		nullptr,
		"EBlackmagicMediaAudioOutputChannelCount",
		"EBlackmagicMediaAudioOutputChannelCount",
		Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.InnerSingleton, Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth;
	static UEnum* EBlackmagicMediaOutputAudioBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth, (UObject*)Z_Construct_UPackage__Script_BlackmagicMediaOutput(), TEXT("EBlackmagicMediaOutputAudioBitDepth"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UEnum* StaticEnum<EBlackmagicMediaOutputAudioBitDepth>()
	{
		return EBlackmagicMediaOutputAudioBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enumerators[] = {
		{ "EBlackmagicMediaOutputAudioBitDepth::Signed_16Bits", (int64)EBlackmagicMediaOutputAudioBitDepth::Signed_16Bits },
		{ "EBlackmagicMediaOutputAudioBitDepth::Signed_32Bits", (int64)EBlackmagicMediaOutputAudioBitDepth::Signed_32Bits },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "Signed_16Bits.DisplayName", "16 bits signed" },
		{ "Signed_16Bits.Name", "EBlackmagicMediaOutputAudioBitDepth::Signed_16Bits" },
		{ "Signed_32Bits.DisplayName", "32 bits signed" },
		{ "Signed_32Bits.Name", "EBlackmagicMediaOutputAudioBitDepth::Signed_32Bits" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
		nullptr,
		"EBlackmagicMediaOutputAudioBitDepth",
		"EBlackmagicMediaOutputAudioBitDepth",
		Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.InnerSingleton, Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth.InnerSingleton;
	}
	void UBlackmagicMediaOutput::StaticRegisterNativesUBlackmagicMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicMediaOutput);
	UClass* Z_Construct_UClass_UBlackmagicMediaOutput_NoRegister()
	{
		return UBlackmagicMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicMediaOutput_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioBufferSize;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioSampleRate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioSampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputChannelCount_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputChannelCount_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputChannelCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioBitDepth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioBitDepth;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBlackmagicBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBlackmagicBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData[];
#endif
		static void NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterlacedFieldsTimecodeNeedToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMultithreadedScheduling_MetaData[];
#endif
		static void NewProp_bUseMultithreadedScheduling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMultithreadedScheduling;
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
	UObject* (*const Z_Construct_UClass_UBlackmagicMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output information for a MediaCapture.\n * @note\x09'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n * @note\x09'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BlackmagicMediaOutput.h" },
		{ "MediaIOCustomLayout", "Blackmagic" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Output information for a MediaCapture.\n@note       'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n@note       'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputConfiguration_MetaData[] = {
		{ "Category", "Blackmagic" },
		{ "Comment", "/** The device, port and video settings that correspond to the output. */" },
		{ "DisplayName", "Configuration" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "The device, port and video settings that correspond to the output." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputConfiguration = { "OutputConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, OutputConfiguration), Z_Construct_UScriptStruct_FMediaIOOutputConfiguration, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputConfiguration_MetaData)) }; // 3319849652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBufferSize_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Size of the buffer that holds rendered audio samples, a bigger buffer will produce an output of greater quality but will introduce more delay. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Size of the buffer that holds rendered audio samples, a bigger buffer will produce an output of greater quality but will introduce more delay." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBufferSize = { "AudioBufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, AudioBufferSize), METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBufferSize_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Sample rate of the audio output. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Sample rate of the audio output." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, AudioSampleRate), Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioSampleRate, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate_MetaData)) }; // 3873921491
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Number of audio channels to output. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Number of audio channels to output." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount = { "OutputChannelCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, OutputChannelCount), Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaAudioOutputChannelCount, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount_MetaData)) }; // 477371526
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Bit depth of each audio sample. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Bit depth of each audio sample." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth = { "AudioBitDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, AudioBitDepth), Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputAudioBitDepth, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth_MetaData)) }; // 826513391
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Whether to embed the Engine's timecode to the output frame. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Whether to embed the Engine's timecode to the output frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Native data format internally used by the device before being converted to SDI/HDMI signal. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Native data format internally used by the device before being converted to SDI/HDMI signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, PixelFormat), Z_Construct_UEnum_BlackmagicMediaOutput_EBlackmagicMediaOutputPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat_MetaData)) }; // 327034346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Invert Key Output */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Invert Key Output" },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bInvertKeyOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput = { "bInvertKeyOutput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Whether to capture and output audio from the engine. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Whether to capture and output audio from the engine." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bOutputAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio = { "bOutputAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_NumberOfBlackmagicBuffers_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMax", "4" },
		{ "ClampMin", "3" },
		{ "Comment", "/**\n\x09 * Number of frame used to transfer from the system memory to the Blackmagic card.\n\x09 * A smaller number is most likely to cause missed frame.\n\x09 * A bigger number is most likely to increase latency.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Number of frame used to transfer from the system memory to the Blackmagic card.\nA smaller number is most likely to cause missed frame.\nA bigger number is most likely to increase latency." },
		{ "UIMax", "4" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_NumberOfBlackmagicBuffers = { "NumberOfBlackmagicBuffers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicMediaOutput, NumberOfBlackmagicBuffers), METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_NumberOfBlackmagicBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_NumberOfBlackmagicBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * Only make sense in interlaced mode.\n\x09 * When creating a new Frame the 2 fields need to have the same timecode value.\n\x09 * The Engine's need a TimecodeProvider (or the default system clock) that is in sync with the generated fields.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Only make sense in interlaced mode.\nWhen creating a new Frame the 2 fields need to have the same timecode value.\nThe Engine's need a TimecodeProvider (or the default system clock) that is in sync with the generated fields." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bInterlacedFieldsTimecodeNeedToMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch = { "bInterlacedFieldsTimecodeNeedToMatch", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/**\n\x09 * Whether to use multi threaded scheduling which should improve performance when outputting 4k and 8k content. (Experimental)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Whether to use multi threaded scheduling which should improve performance when outputting 4k and 8k content. (Experimental)" },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bUseMultithreadedScheduling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling = { "bUseMultithreadedScheduling", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Try to maintain a the engine \"Genlock\" with the VSync signal. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Try to maintain a the engine \"Genlock\" with the VSync signal." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bWaitForSyncEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent = { "bWaitForSyncEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Log a warning when there's a drop frame. */" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Log a warning when there's a drop frame." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bLogDropFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame = { "bLogDropFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Burn Frame Timecode on the output without any frame number clipping. */" },
		{ "DisplayName", "Burn Frame Timecode" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaOutput.h" },
		{ "ToolTip", "Burn Frame Timecode on the output without any frame number clipping." },
	};
#endif
	void Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_SetBit(void* Obj)
	{
		((UBlackmagicMediaOutput*)Obj)->bEncodeTimecodeInTexel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel = { "bEncodeTimecodeInTexel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicMediaOutput), &Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackmagicMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_OutputChannelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_AudioBitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_TimecodeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInvertKeyOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bOutputAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_NumberOfBlackmagicBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bInterlacedFieldsTimecodeNeedToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bUseMultithreadedScheduling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bWaitForSyncEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bLogDropFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicMediaOutput_Statics::NewProp_bEncodeTimecodeInTexel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicMediaOutput_Statics::ClassParams = {
		&UBlackmagicMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackmagicMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicMediaOutput.OuterSingleton, Z_Construct_UClass_UBlackmagicMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicMediaOutput.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UClass* StaticClass<UBlackmagicMediaOutput>()
	{
		return UBlackmagicMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicMediaOutput);
	UBlackmagicMediaOutput::~UBlackmagicMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::EnumInfo[] = {
		{ EBlackmagicMediaOutputPixelFormat_StaticEnum, TEXT("EBlackmagicMediaOutputPixelFormat"), &Z_Registration_Info_UEnum_EBlackmagicMediaOutputPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 327034346U) },
		{ EBlackmagicMediaOutputAudioSampleRate_StaticEnum, TEXT("EBlackmagicMediaOutputAudioSampleRate"), &Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3873921491U) },
		{ EBlackmagicMediaAudioOutputChannelCount_StaticEnum, TEXT("EBlackmagicMediaAudioOutputChannelCount"), &Z_Registration_Info_UEnum_EBlackmagicMediaAudioOutputChannelCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 477371526U) },
		{ EBlackmagicMediaOutputAudioBitDepth_StaticEnum, TEXT("EBlackmagicMediaOutputAudioBitDepth"), &Z_Registration_Info_UEnum_EBlackmagicMediaOutputAudioBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 826513391U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicMediaOutput, UBlackmagicMediaOutput::StaticClass, TEXT("UBlackmagicMediaOutput"), &Z_Registration_Info_UClass_UBlackmagicMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicMediaOutput), 2132154909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_2138811449(TEXT("/Script/BlackmagicMediaOutput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
