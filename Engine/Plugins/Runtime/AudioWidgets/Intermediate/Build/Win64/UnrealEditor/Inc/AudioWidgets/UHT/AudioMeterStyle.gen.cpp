// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMeterStyle.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMeterStyle() {}
// Cross Module References
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMeterStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

static_assert(std::is_polymorphic<FAudioMeterStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioMeterStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMeterStyle;
class UScriptStruct* FAudioMeterStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMeterStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMeterStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioMeterStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMeterStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioMeterStyle>()
{
	return FAudioMeterStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioMeterStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterValueImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterValueImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterValueBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterValueBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterPeakImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterPeakImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterValuePadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterValuePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakValueWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakValueWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueRangeDb_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValueRangeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowScale_MetaData[];
#endif
		static void NewProp_bShowScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleSide_MetaData[];
#endif
		static void NewProp_bScaleSide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleHashHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleHashHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecibelsPerHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DecibelsPerHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SAudioMeter\n */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Represents the appearance of an SAudioMeter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMeterStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use to represent the meter value. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Image to use to represent the meter value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueImage = { "MeterValueImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterValueImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use to represent the background. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Image to use to represent the background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_BackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use to represent the meter background. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Image to use to represent the meter background." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterBackgroundImage = { "MeterBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterBackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use to draw behind the meter value. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Image to use to draw behind the meter value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueBackgroundImage = { "MeterValueBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterValueBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueBackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPeakImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image to use to represent the meter peak. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Image to use to represent the meter peak." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPeakImage = { "MeterPeakImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterPeakImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPeakImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPeakImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// How thick to draw the meter\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "How thick to draw the meter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterSize = { "MeterSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// How much padding to add around the meter\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "How much padding to add around the meter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPadding = { "MeterPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValuePadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// How much padding to add around the meter value\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "How much padding to add around the meter value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValuePadding = { "MeterValuePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, MeterValuePadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValuePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValuePadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_PeakValueWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// How wide to draw the peak value indicator\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "How wide to draw the peak value indicator" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_PeakValueWidth = { "PeakValueWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, PeakValueWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_PeakValueWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_PeakValueWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ValueRangeDb_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The minimum and maximum value to display in dB (values are clamped in this range)\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "The minimum and maximum value to display in dB (values are clamped in this range)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ValueRangeDb = { "ValueRangeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, ValueRangeDb), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ValueRangeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ValueRangeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Whether or not to show the decibel scale alongside the meter\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Whether or not to show the decibel scale alongside the meter" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale_SetBit(void* Obj)
	{
		((FAudioMeterStyle*)Obj)->bShowScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale = { "bShowScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMeterStyle), &Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Which side to show the scale. If vertical, true means left side, false means right side. If horizontal, true means above, false means below.\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Which side to show the scale. If vertical, true means left side, false means right side. If horizontal, true means above, false means below." },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide_SetBit(void* Obj)
	{
		((FAudioMeterStyle*)Obj)->bScaleSide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide = { "bScaleSide", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMeterStyle), &Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Offset for the hashes\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Offset for the hashes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashOffset = { "ScaleHashOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, ScaleHashOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The width of each hash mark\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "The width of each hash mark" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashWidth = { "ScaleHashWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, ScaleHashWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// The height of each hash mark\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "The height of each hash mark" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashHeight = { "ScaleHashHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, ScaleHashHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_DecibelsPerHash_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "3" },
		{ "Comment", "// How wide to draw the decibel scale, if it's enabled\n" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "How wide to draw the decibel scale, if it's enabled" },
		{ "UIMax", "10" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_DecibelsPerHash = { "DecibelsPerHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, DecibelsPerHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_DecibelsPerHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_DecibelsPerHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font family and size to be used when displaying the meter scale. */" },
		{ "ModuleRelativePath", "Public/AudioMeterStyle.h" },
		{ "ToolTip", "Font family and size to be used when displaying the meter scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMeterStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_Font_MetaData)) }; // 192883377
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValueBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPeakImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_MeterValuePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_PeakValueWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ValueRangeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bShowScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_bScaleSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_ScaleHashHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_DecibelsPerHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewProp_Font,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"AudioMeterStyle",
		sizeof(FAudioMeterStyle),
		alignof(FAudioMeterStyle),
		Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioMeterStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioMeterStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMeterStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioMeterStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h_Statics::ScriptStructInfo[] = {
		{ FAudioMeterStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioMeterStyle_Statics::NewStructOps, TEXT("AudioMeterStyle"), &Z_Registration_Info_UScriptStruct_AudioMeterStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMeterStyle), 1788390445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h_3053476551(TEXT("/Script/AudioWidgets"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeterStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
