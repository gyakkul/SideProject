// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioWidgetsSlateTypes.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioWidgetsSlateTypes() {}
// Cross Module References
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioRadialSliderStyle();
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSliderStyle();
	AUDIOWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioTextBoxStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UPackage* Z_Construct_UPackage__Script_AudioWidgets();
// End Cross Module References

static_assert(std::is_polymorphic<FAudioTextBoxStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioTextBoxStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioTextBoxStyle;
class UScriptStruct* FAudioTextBoxStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioTextBoxStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioTextBoxStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioTextBoxStyle>()
{
	return FAudioTextBoxStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Text Box \n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Text Box" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioTextBoxStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image for the label border */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Image for the label border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioTextBoxStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the label background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the label background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioTextBoxStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor_MetaData)) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewProp_BackgroundColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"AudioTextBoxStyle",
		sizeof(FAudioTextBoxStyle),
		alignof(FAudioTextBoxStyle),
		Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioTextBoxStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioTextBoxStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAudioSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioSliderStyle;
class UScriptStruct* FAudioSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSliderStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioSliderStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioSliderStyle>()
{
	return FAudioSliderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioSliderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBackgroundSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBackgroundSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderThumbColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderThumbColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetBackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Slider\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Slider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSliderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the underlying SSlider. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the underlying SSlider." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle = { "SliderStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, SliderStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle_MetaData)) }; // 4127039365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle_MetaData)) }; // 2464650021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Image for the widget background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Image for the widget background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage = { "WidgetBackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, WidgetBackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor = { "SliderBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, SliderBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the slider background (slider default is vertical)*/" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the slider background (slider default is vertical)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize = { "SliderBackgroundSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, SliderBackgroundSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the padding between the label and the slider */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the padding between the label and the slider" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, LabelPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider bar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, SliderBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider thumb (handle) */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider thumb (handle)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor = { "SliderThumbColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, SliderThumbColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the widget background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the widget background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor = { "WidgetBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioSliderStyle, WidgetBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor_MetaData)) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_TextBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBackgroundSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_LabelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_SliderThumbColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewProp_WidgetBackgroundColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"AudioSliderStyle",
		sizeof(FAudioSliderStyle),
		alignof(FAudioSliderStyle),
		Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioSliderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioSliderStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAudioRadialSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FAudioRadialSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle;
class UScriptStruct* FAudioRadialSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioRadialSliderStyle, (UObject*)Z_Construct_UPackage__Script_AudioWidgets(), TEXT("AudioRadialSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.OuterSingleton;
}
template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<FAudioRadialSliderStyle>()
{
	return FAudioRadialSliderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderProgressColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderProgressColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSliderRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSliderRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an Audio Radial Slider\n */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of an Audio Radial Slider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioRadialSliderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The style to use for the audio text box widget. */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "The style to use for the audio text box widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle = { "TextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, TextBoxStyle), Z_Construct_UScriptStruct_FAudioTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle_MetaData)) }; // 2464650021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the slider center background */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the slider center background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor = { "CenterBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, CenterBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the unprogressed slider bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the unprogressed slider bar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, SliderBarColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Color used to draw the progress bar */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Color used to draw the progress bar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor = { "SliderProgressColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, SliderProgressColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Size of the padding between the label and the slider */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Size of the padding between the label and the slider" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, LabelPadding), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Default size of the slider itself (not including label) */" },
		{ "ModuleRelativePath", "Public/AudioWidgetsSlateTypes.h" },
		{ "ToolTip", "Default size of the slider itself (not including label)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius = { "DefaultSliderRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioRadialSliderStyle, DefaultSliderRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_TextBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_CenterBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_SliderProgressColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_LabelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewProp_DefaultSliderRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"AudioRadialSliderStyle",
		sizeof(FAudioRadialSliderStyle),
		alignof(FAudioRadialSliderStyle),
		Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioRadialSliderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics::ScriptStructInfo[] = {
		{ FAudioTextBoxStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioTextBoxStyle_Statics::NewStructOps, TEXT("AudioTextBoxStyle"), &Z_Registration_Info_UScriptStruct_AudioTextBoxStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioTextBoxStyle), 2464650021U) },
		{ FAudioSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioSliderStyle_Statics::NewStructOps, TEXT("AudioSliderStyle"), &Z_Registration_Info_UScriptStruct_AudioSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSliderStyle), 3402025596U) },
		{ FAudioRadialSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FAudioRadialSliderStyle_Statics::NewStructOps, TEXT("AudioRadialSliderStyle"), &Z_Registration_Info_UScriptStruct_AudioRadialSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioRadialSliderStyle), 3053237098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_2103633303(TEXT("/Script/AudioWidgets"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioWidgetsSlateTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
