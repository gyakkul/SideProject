// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ToolBarStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolBarStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

static_assert(std::is_polymorphic<FToolBarStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FToolBarStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolBarStyle;
class UScriptStruct* FToolBarStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolBarStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ToolBarStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ToolBarStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FToolBarStyle>()
{
	return FToolBarStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolBarStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpandBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsComboButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsComboButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsToggleButton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsToggleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparatorPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeparatorPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndentedBlockPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndentedBlockPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLabels_MetaData[];
#endif
		static void NewProp_bShowLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLabels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of a toolbar \n */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "Represents the appearance of a toolbar" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolBarStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the background of the toolbar */" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the background of the toolbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu*/" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
		{ "ToolTip", "The brush used for the expand arrow when the toolbar runs out of room and needs to display toolbar items in a menu" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush = { "ExpandBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ExpandBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush = { "SeparatorBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, SeparatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle = { "LabelStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, LabelStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle = { "EditableTextStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, EditableTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton = { "ToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle_MetaData)) }; // 3302369615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle = { "SettingsButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, SettingsButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton = { "SettingsComboButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, SettingsComboButton), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton_MetaData)) }; // 3302369615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton = { "SettingsToggleButton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, SettingsToggleButton), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding = { "LabelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, LabelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding = { "SeparatorPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, SeparatorPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding = { "ComboButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ComboButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding = { "CheckBoxPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, CheckBoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding = { "BlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, BlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding = { "IndentedBlockPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, IndentedBlockPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding = { "BackgroundPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, BackgroundPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolBarStyle, IconSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize_MetaData)) }; // 3533773233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Styling/ToolBarStyle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit(void* Obj)
	{
		((FToolBarStyle*)Obj)->bShowLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels = { "bShowLabels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FToolBarStyle), &Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ExpandBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_EditableTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ToggleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsComboButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SettingsToggleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_LabelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_SeparatorPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ComboButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_ButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_CheckBoxPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BlockPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IndentedBlockPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_BackgroundPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewProp_bShowLabels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ToolBarStyle",
		sizeof(FToolBarStyle),
		alignof(FToolBarStyle),
		Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolBarStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolBarStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton, Z_Construct_UScriptStruct_FToolBarStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolBarStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo[] = {
		{ FToolBarStyle::StaticStruct, Z_Construct_UScriptStruct_FToolBarStyle_Statics::NewStructOps, TEXT("ToolBarStyle"), &Z_Registration_Info_UScriptStruct_ToolBarStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolBarStyle), 1820318101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_3779043003(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_ToolBarStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
