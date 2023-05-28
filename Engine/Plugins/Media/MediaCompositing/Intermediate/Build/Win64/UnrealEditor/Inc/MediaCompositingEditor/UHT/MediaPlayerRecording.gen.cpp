// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/MediaPlayerRecording.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerRecording() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaPlayerRecording();
	MEDIACOMPOSITINGEDITOR_API UClass* Z_Construct_UClass_UMediaPlayerRecording_NoRegister();
	MEDIACOMPOSITINGEDITOR_API UEnum* Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat();
	MEDIACOMPOSITINGEDITOR_API UEnum* Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle();
	MEDIACOMPOSITINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase();
	UPackage* Z_Construct_UPackage__Script_MediaCompositingEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle;
	static UEnum* EMediaPlayerRecordingNumerationStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle, (UObject*)Z_Construct_UPackage__Script_MediaCompositingEditor(), TEXT("EMediaPlayerRecordingNumerationStyle"));
		}
		return Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.OuterSingleton;
	}
	template<> MEDIACOMPOSITINGEDITOR_API UEnum* StaticEnum<EMediaPlayerRecordingNumerationStyle>()
	{
		return EMediaPlayerRecordingNumerationStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enumerators[] = {
		{ "EMediaPlayerRecordingNumerationStyle::AppendFrameNumber", (int64)EMediaPlayerRecordingNumerationStyle::AppendFrameNumber },
		{ "EMediaPlayerRecordingNumerationStyle::AppendSampleTime", (int64)EMediaPlayerRecordingNumerationStyle::AppendSampleTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enum_MetaDataParams[] = {
		{ "AppendFrameNumber.Name", "EMediaPlayerRecordingNumerationStyle::AppendFrameNumber" },
		{ "AppendSampleTime.Name", "EMediaPlayerRecordingNumerationStyle::AppendSampleTime" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaCompositingEditor,
		nullptr,
		"EMediaPlayerRecordingNumerationStyle",
		"EMediaPlayerRecordingNumerationStyle",
		Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.InnerSingleton, Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat;
	static UEnum* EMediaPlayerRecordingImageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat, (UObject*)Z_Construct_UPackage__Script_MediaCompositingEditor(), TEXT("EMediaPlayerRecordingImageFormat"));
		}
		return Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.OuterSingleton;
	}
	template<> MEDIACOMPOSITINGEDITOR_API UEnum* StaticEnum<EMediaPlayerRecordingImageFormat>()
	{
		return EMediaPlayerRecordingImageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enumerators[] = {
		{ "EMediaPlayerRecordingImageFormat::PNG", (int64)EMediaPlayerRecordingImageFormat::PNG },
		{ "EMediaPlayerRecordingImageFormat::JPEG", (int64)EMediaPlayerRecordingImageFormat::JPEG },
		{ "EMediaPlayerRecordingImageFormat::BMP", (int64)EMediaPlayerRecordingImageFormat::BMP },
		{ "EMediaPlayerRecordingImageFormat::EXR", (int64)EMediaPlayerRecordingImageFormat::EXR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enum_MetaDataParams[] = {
		{ "BMP.Name", "EMediaPlayerRecordingImageFormat::BMP" },
		{ "EXR.Name", "EMediaPlayerRecordingImageFormat::EXR" },
		{ "JPEG.Name", "EMediaPlayerRecordingImageFormat::JPEG" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "PNG.Name", "EMediaPlayerRecordingImageFormat::PNG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaCompositingEditor,
		nullptr,
		"EMediaPlayerRecordingImageFormat",
		"EMediaPlayerRecordingImageFormat",
		Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.InnerSingleton, Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings;
class UScriptStruct* FMediaPlayerRecordingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings, (UObject*)Z_Construct_UPackage__Script_MediaCompositingEditor(), TEXT("MediaPlayerRecordingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.OuterSingleton;
}
template<> MEDIACOMPOSITINGEDITOR_API UScriptStruct* StaticStruct<FMediaPlayerRecordingSettings>()
{
	return FMediaPlayerRecordingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordMediaFrame_MetaData[];
#endif
		static void NewProp_bRecordMediaFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordMediaFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseFilename;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumerationStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumerationStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumerationStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImageFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAlpha_MetaData[];
#endif
		static void NewProp_bResetAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerRecordingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "MediaPlayer Event Recording" },
		{ "Comment", "/** Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed. */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FMediaPlayerRecordingSettings*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaPlayerRecordingSettings), &Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/** Whether this MediaPlayer is active and the image frame will be recorded when the 'Record' button is pressed. */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "Whether this MediaPlayer is active and the image frame will be recorded when the 'Record' button is pressed." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame_SetBit(void* Obj)
	{
		((FMediaPlayerRecordingSettings*)Obj)->bRecordMediaFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame = { "bRecordMediaFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaPlayerRecordingSettings), &Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_BaseFilename_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/** How to name each frame. */" },
		{ "EditCondition", "bRecordMediaFrame" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "How to name each frame." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_BaseFilename = { "BaseFilename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerRecordingSettings, BaseFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_BaseFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_BaseFilename_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/** How to numerate the filename. */" },
		{ "EditCondition", "bRecordMediaFrame" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "How to numerate the filename." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle = { "NumerationStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerRecordingSettings, NumerationStyle), Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingNumerationStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle_MetaData)) }; // 824652554
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/** The image format we wish to record to. */" },
		{ "EditCondition", "bRecordMediaFrame" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "The image format we wish to record to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat = { "ImageFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerRecordingSettings, ImageFormat), Z_Construct_UEnum_MediaCompositingEditor_EMediaPlayerRecordingImageFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat_MetaData)) }; // 2408592717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/**\n\x09 * An image format specific compression setting.\n\x09 * For EXRs, either 0 (Default) or 1 (Uncompressed)\n\x09 * For PNGs & JPEGs, 0 (Default) or a value between 1 (worst quality, best compression) and 100 (best quality, worst compression)\n\x09 */" },
		{ "EditCondition", "bRecordMediaFrame" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "An image format specific compression setting.\nFor EXRs, either 0 (Default) or 1 (Uncompressed)\nFor PNGs & JPEGs, 0 (Default) or a value between 1 (worst quality, best compression) and 100 (best quality, worst compression)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaPlayerRecordingSettings, CompressionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha_MetaData[] = {
		{ "Category", "MediaPlayer Frame Recording" },
		{ "Comment", "/**\n\x09 * If the format support it, set the alpha to 1 (or 255).\n\x09 * @note Removing alpha increase the memory foot print.\n\x09 */" },
		{ "EditCondition", "bRecordMediaFrame" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "If the format support it, set the alpha to 1 (or 255).\n@note Removing alpha increase the memory foot print." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha_SetBit(void* Obj)
	{
		((FMediaPlayerRecordingSettings*)Obj)->bResetAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha = { "bResetAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaPlayerRecordingSettings), &Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bRecordMediaFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_BaseFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_NumerationStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_ImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_CompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewProp_bResetAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositingEditor,
		nullptr,
		&NewStructOps,
		"MediaPlayerRecordingSettings",
		sizeof(FMediaPlayerRecordingSettings),
		alignof(FMediaPlayerRecordingSettings),
		Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings.InnerSingleton;
	}
	void UMediaPlayerRecording::StaticRegisterNativesUMediaPlayerRecording()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerRecording);
	UClass* Z_Construct_UClass_UMediaPlayerRecording_NoRegister()
	{
		return UMediaPlayerRecording::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerRecording_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayerToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MediaPlayerToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerRecording_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequenceRecordingBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerRecording_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/MediaPlayerRecording.h" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_RecordingSettings_MetaData[] = {
		{ "Category", "MediaPlayer Recording" },
		{ "Comment", "/** Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed. */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_RecordingSettings = { "RecordingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerRecording, RecordingSettings), Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_RecordingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_RecordingSettings_MetaData)) }; // 2045696146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_MediaPlayerToRecord_MetaData[] = {
		{ "Category", "MediaPlayer Recording" },
		{ "Comment", "/** The MediaPlayer we want to record */" },
		{ "ModuleRelativePath", "Private/Sequencer/MediaPlayerRecording.h" },
		{ "ToolTip", "The MediaPlayer we want to record" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_MediaPlayerToRecord = { "MediaPlayerToRecord", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerRecording, MediaPlayerToRecord), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_MediaPlayerToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_MediaPlayerToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlayerRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_RecordingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerRecording_Statics::NewProp_MediaPlayerToRecord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerRecording_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerRecording>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerRecording_Statics::ClassParams = {
		&UMediaPlayerRecording::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaPlayerRecording_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerRecording_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerRecording_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerRecording_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerRecording()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerRecording.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerRecording.OuterSingleton, Z_Construct_UClass_UMediaPlayerRecording_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerRecording.OuterSingleton;
	}
	template<> MEDIACOMPOSITINGEDITOR_API UClass* StaticClass<UMediaPlayerRecording>()
	{
		return UMediaPlayerRecording::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerRecording);
	UMediaPlayerRecording::~UMediaPlayerRecording() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::EnumInfo[] = {
		{ EMediaPlayerRecordingNumerationStyle_StaticEnum, TEXT("EMediaPlayerRecordingNumerationStyle"), &Z_Registration_Info_UEnum_EMediaPlayerRecordingNumerationStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 824652554U) },
		{ EMediaPlayerRecordingImageFormat_StaticEnum, TEXT("EMediaPlayerRecordingImageFormat"), &Z_Registration_Info_UEnum_EMediaPlayerRecordingImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2408592717U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ScriptStructInfo[] = {
		{ FMediaPlayerRecordingSettings::StaticStruct, Z_Construct_UScriptStruct_FMediaPlayerRecordingSettings_Statics::NewStructOps, TEXT("MediaPlayerRecordingSettings"), &Z_Registration_Info_UScriptStruct_MediaPlayerRecordingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaPlayerRecordingSettings), 2045696146U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerRecording, UMediaPlayerRecording::StaticClass, TEXT("UMediaPlayerRecording"), &Z_Registration_Info_UClass_UMediaPlayerRecording, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerRecording), 1504089128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_580392581(TEXT("/Script/MediaCompositingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositingEditor_Private_Sequencer_MediaPlayerRecording_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
