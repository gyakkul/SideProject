// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveformEditorSlateTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformEditorSlateTypes() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_WaveformEditorWidgets();
	WAVEFORMEDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle();
	WAVEFORMEDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase();
	WAVEFORMEDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle();
	WAVEFORMEDITORWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveformViewerStyle();
// End Cross Module References

static_assert(std::is_polymorphic<FWaveformEditorWidgetStyleBase>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FWaveformEditorWidgetStyleBase cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase;
class UScriptStruct* FWaveformEditorWidgetStyleBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase, (UObject*)Z_Construct_UPackage__Script_WaveformEditorWidgets(), TEXT("WaveformEditorWidgetStyleBase"));
	}
	return Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.OuterSingleton;
}
template<> WAVEFORMEDITORWIDGETS_API UScriptStruct* StaticStruct<FWaveformEditorWidgetStyleBase>()
{
	return FWaveformEditorWidgetStyleBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveformEditorWidgetStyleBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditorWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WaveformEditorWidgetStyleBase",
		sizeof(FWaveformEditorWidgetStyleBase),
		alignof(FWaveformEditorWidgetStyleBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.InnerSingleton, Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaveformViewerStyle>() == std::is_polymorphic<FWaveformEditorWidgetStyleBase>(), "USTRUCT FWaveformViewerStyle cannot be polymorphic unless super FWaveformEditorWidgetStyleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveformViewerStyle;
class UScriptStruct* FWaveformViewerStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveformViewerStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveformViewerStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveformViewerStyle, (UObject*)Z_Construct_UPackage__Script_WaveformEditorWidgets(), TEXT("WaveformViewerStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WaveformViewerStyle.OuterSingleton;
}
template<> WAVEFORMEDITORWIDGETS_API UScriptStruct* StaticStruct<FWaveformViewerStyle>()
{
	return FWaveformViewerStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveformColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveformColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveformLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveformLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MajorGridLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MajorGridLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinorGridLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinorGridLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroCrossingLineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZeroCrossingLineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroCrossingLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZeroCrossingLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleMarkersSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleMarkersSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveformBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveformBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Waveform Viewer\n */" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Waveform Viewer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveformViewerStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformColor = { "WaveformColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, WaveformColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformLineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformLineThickness = { "WaveformLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, WaveformLineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MajorGridLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MajorGridLineColor = { "MajorGridLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, MajorGridLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MajorGridLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MajorGridLineColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MinorGridLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MinorGridLineColor = { "MinorGridLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, MinorGridLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MinorGridLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MinorGridLineColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineColor = { "ZeroCrossingLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, ZeroCrossingLineColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineThickness = { "ZeroCrossingLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, ZeroCrossingLineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_SampleMarkersSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_SampleMarkersSize = { "SampleMarkersSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, SampleMarkersSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_SampleMarkersSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_SampleMarkersSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformBackgroundColor = { "WaveformBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, WaveformBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformBackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, DesiredWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerStyle, DesiredHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MajorGridLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_MinorGridLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_ZeroCrossingLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_SampleMarkersSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_WaveformBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewProp_DesiredHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditorWidgets,
		Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase,
		&NewStructOps,
		"WaveformViewerStyle",
		sizeof(FWaveformViewerStyle),
		alignof(FWaveformViewerStyle),
		Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveformViewerStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveformViewerStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveformViewerStyle.InnerSingleton, Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveformViewerStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaveformViewerOverlayStyle>() == std::is_polymorphic<FWaveformEditorWidgetStyleBase>(), "USTRUCT FWaveformViewerOverlayStyle cannot be polymorphic unless super FWaveformEditorWidgetStyleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle;
class UScriptStruct* FWaveformViewerOverlayStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle, (UObject*)Z_Construct_UPackage__Script_WaveformEditorWidgets(), TEXT("WaveformViewerOverlayStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.OuterSingleton;
}
template<> WAVEFORMEDITORWIDGETS_API UScriptStruct* StaticStruct<FWaveformViewerOverlayStyle>()
{
	return FWaveformViewerOverlayStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayheadColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayheadColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayheadWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayheadWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Waveform Viewer Overlay style\n */" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Waveform Viewer Overlay style" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveformViewerOverlayStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadColor = { "PlayheadColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerOverlayStyle, PlayheadColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadWidth = { "PlayheadWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerOverlayStyle, PlayheadWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerOverlayStyle, DesiredWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformViewerOverlayStyle, DesiredHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_PlayheadWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewProp_DesiredHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditorWidgets,
		Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase,
		&NewStructOps,
		"WaveformViewerOverlayStyle",
		sizeof(FWaveformViewerOverlayStyle),
		alignof(FWaveformViewerOverlayStyle),
		Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.InnerSingleton, Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaveformEditorTimeRulerStyle>() == std::is_polymorphic<FWaveformEditorWidgetStyleBase>(), "USTRUCT FWaveformEditorTimeRulerStyle cannot be polymorphic unless super FWaveformEditorWidgetStyleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle;
class UScriptStruct* FWaveformEditorTimeRulerStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle, (UObject*)Z_Construct_UPackage__Script_WaveformEditorWidgets(), TEXT("WaveformEditorTimeRulerStyle"));
	}
	return Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.OuterSingleton;
}
template<> WAVEFORMEDITORWIDGETS_API UScriptStruct* StaticStruct<FWaveformEditorTimeRulerStyle>()
{
	return FWaveformEditorTimeRulerStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TicksColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TicksTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextFont_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TicksTextFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksTextOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TicksTextOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a Waveform Editor Time Ruler\n */" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
		{ "ToolTip", "Represents the appearance of a Waveform Editor Time Ruler" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveformEditorTimeRulerStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleWidth = { "HandleWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, HandleWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleColor = { "HandleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, HandleColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleBrush = { "HandleBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, HandleBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksColor = { "TicksColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, TicksColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextColor = { "TicksTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, TicksTextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextFont_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextFont = { "TicksTextFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, TicksTextFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextFont_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextOffset_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextOffset = { "TicksTextOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, TicksTextOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, BackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredWidth = { "DesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, DesiredWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WaveformEditorSlateTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredHeight = { "DesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveformEditorTimeRulerStyle, DesiredHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_HandleBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_TicksTextOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewProp_DesiredHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditorWidgets,
		Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase,
		&NewStructOps,
		"WaveformEditorTimeRulerStyle",
		sizeof(FWaveformEditorTimeRulerStyle),
		alignof(FWaveformEditorTimeRulerStyle),
		Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.InnerSingleton, Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Public_WaveformEditorSlateTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Public_WaveformEditorSlateTypes_h_Statics::ScriptStructInfo[] = {
		{ FWaveformEditorWidgetStyleBase::StaticStruct, Z_Construct_UScriptStruct_FWaveformEditorWidgetStyleBase_Statics::NewStructOps, TEXT("WaveformEditorWidgetStyleBase"), &Z_Registration_Info_UScriptStruct_WaveformEditorWidgetStyleBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveformEditorWidgetStyleBase), 3454588020U) },
		{ FWaveformViewerStyle::StaticStruct, Z_Construct_UScriptStruct_FWaveformViewerStyle_Statics::NewStructOps, TEXT("WaveformViewerStyle"), &Z_Registration_Info_UScriptStruct_WaveformViewerStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveformViewerStyle), 3193564008U) },
		{ FWaveformViewerOverlayStyle::StaticStruct, Z_Construct_UScriptStruct_FWaveformViewerOverlayStyle_Statics::NewStructOps, TEXT("WaveformViewerOverlayStyle"), &Z_Registration_Info_UScriptStruct_WaveformViewerOverlayStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveformViewerOverlayStyle), 3071254889U) },
		{ FWaveformEditorTimeRulerStyle::StaticStruct, Z_Construct_UScriptStruct_FWaveformEditorTimeRulerStyle_Statics::NewStructOps, TEXT("WaveformEditorTimeRulerStyle"), &Z_Registration_Info_UScriptStruct_WaveformEditorTimeRulerStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveformEditorTimeRulerStyle), 1400356227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Public_WaveformEditorSlateTypes_h_1021991161(TEXT("/Script/WaveformEditorWidgets"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Public_WaveformEditorSlateTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditorWidgets_Public_WaveformEditorSlateTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
