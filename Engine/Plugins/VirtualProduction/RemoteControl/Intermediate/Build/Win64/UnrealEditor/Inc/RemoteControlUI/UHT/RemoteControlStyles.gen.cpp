// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Styling/RemoteControlStyles.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlStyles() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	REMOTECONTROLUI_API UScriptStruct* Z_Construct_UScriptStruct_FRCPanelStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHeaderRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableViewStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_RemoteControlUI();
// End Cross Module References

static_assert(std::is_polymorphic<FRCPanelStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FRCPanelStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPanelStyle;
class UScriptStruct* FRCPanelStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPanelStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPanelStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPanelStyle, (UObject*)Z_Construct_UPackage__Script_RemoteControlUI(), TEXT("RCPanelStyle"));
	}
	return Z_Registration_Info_UScriptStruct_RCPanelStyle.OuterSingleton;
}
template<> REMOTECONTROLUI_API UScriptStruct* StaticStruct<FRCPanelStyle>()
{
	return FRCPanelStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPanelStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrushDark_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrushDark;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAreaBrushLight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentAreaBrushLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlatButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlatButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderRowPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderRowPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderRowStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderRowStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanelTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionHeaderTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionHeaderTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionHeaderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionHeaderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableRowStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TableRowStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableViewStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TableViewStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitterHandleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitterHandleSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the appearance of an RC Panel.\n */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Represents the appearance of an RC Panel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPanelStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel. */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrush = { "ContentAreaBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, ContentAreaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushDark_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel (Dark). */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel (Dark)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushDark = { "ContentAreaBrushDark", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, ContentAreaBrushDark), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushDark_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushDark_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushLight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel (Light). */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel (Light)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushLight = { "ContentAreaBrushLight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, ContentAreaBrushLight), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushLight_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_FlatButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the flat button */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Style used for the flat button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_FlatButtonStyle = { "FlatButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, FlatButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_FlatButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_FlatButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Header Row Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Header Row Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowPadding = { "HeaderRowPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, HeaderRowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Header Row Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Header Row Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowStyle = { "HeaderRowStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, HeaderRowStyle), Z_Construct_UScriptStruct_FHeaderRowStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowStyle_MetaData)) }; // 4072558022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Header Text Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Header Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderTextStyle = { "HeaderTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, HeaderTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding used around this panel */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Padding used around this panel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_IconSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Padding used around this panel */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Padding used around this panel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelPadding = { "PanelPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, PanelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Text Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelTextStyle = { "PanelTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, PanelTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Section Header Text Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Section Header Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderTextStyle = { "SectionHeaderTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, SectionHeaderTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the section header associated with this panel. */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the section header associated with this panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderBrush = { "SectionHeaderBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, SectionHeaderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableRowStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Table Row Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Table Row Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableRowStyle = { "TableRowStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, TableRowStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableRowStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableRowStyle_MetaData)) }; // 129873581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableViewStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Panel Table View Style */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Panel Table View Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableViewStyle = { "TableViewStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, TableViewStyle), Z_Construct_UScriptStruct_FTableViewStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableViewStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableViewStyle_MetaData)) }; // 2891893037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SwitchButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the switch button */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Style used for the switch button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SwitchButtonStyle = { "SwitchButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, SwitchButtonStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SwitchButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SwitchButtonStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ToggleButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the toggle button */" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Style used for the toggle button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ToggleButtonStyle = { "ToggleButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, ToggleButtonStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ToggleButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ToggleButtonStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SplitterHandleSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Splitter handle size*/" },
		{ "ModuleRelativePath", "Private/Styling/RemoteControlStyles.h" },
		{ "ToolTip", "Splitter handle size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SplitterHandleSize = { "SplitterHandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPanelStyle, SplitterHandleSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SplitterHandleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SplitterHandleSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPanelStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushDark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ContentAreaBrushLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_FlatButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderRowStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_HeaderTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_PanelTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SectionHeaderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableRowStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_TableViewStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SwitchButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_ToggleButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewProp_SplitterHandleSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPanelStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlUI,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"RCPanelStyle",
		sizeof(FRCPanelStyle),
		alignof(FRCPanelStyle),
		Z_Construct_UScriptStruct_FRCPanelStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPanelStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPanelStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPanelStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPanelStyle.InnerSingleton, Z_Construct_UScriptStruct_FRCPanelStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPanelStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Styling_RemoteControlStyles_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Styling_RemoteControlStyles_h_Statics::ScriptStructInfo[] = {
		{ FRCPanelStyle::StaticStruct, Z_Construct_UScriptStruct_FRCPanelStyle_Statics::NewStructOps, TEXT("RCPanelStyle"), &Z_Registration_Info_UScriptStruct_RCPanelStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPanelStyle), 2771952978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Styling_RemoteControlStyles_h_379720419(TEXT("/Script/RemoteControlUI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Styling_RemoteControlStyles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Styling_RemoteControlStyles_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
