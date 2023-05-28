// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMenuWidgetStyle.h"
#include "Layout/Margin.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMenuWidgetStyle() {}
// Cross Module References
	GAMEMENUBUILDER_API UClass* Z_Construct_UClass_UGameMenuWidgetStyle();
	GAMEMENUBUILDER_API UClass* Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister();
	GAMEMENUBUILDER_API UEnum* Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType();
	GAMEMENUBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_GameMenuBuilder();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_GameMenuLayoutType;
	static UEnum* GameMenuLayoutType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_GameMenuLayoutType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_GameMenuLayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType, (UObject*)Z_Construct_UPackage__Script_GameMenuBuilder(), TEXT("GameMenuLayoutType"));
		}
		return Z_Registration_Info_UEnum_GameMenuLayoutType.OuterSingleton;
	}
	template<> GAMEMENUBUILDER_API UEnum* StaticEnum<GameMenuLayoutType::Type>()
	{
		return GameMenuLayoutType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enumerators[] = {
		{ "GameMenuLayoutType::Single", (int64)GameMenuLayoutType::Single },
		{ "GameMenuLayoutType::SideBySide", (int64)GameMenuLayoutType::SideBySide },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "SideBySide.Comment", "/* Side by side menu. Main menu on left, any sub menu on right. */" },
		{ "SideBySide.Name", "GameMenuLayoutType::SideBySide" },
		{ "SideBySide.ToolTip", "Side by side menu. Main menu on left, any sub menu on right." },
		{ "Single.Comment", "/* Single one page menu. */" },
		{ "Single.Name", "GameMenuLayoutType::Single" },
		{ "Single.ToolTip", "Single one page menu." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameMenuBuilder,
		nullptr,
		"GameMenuLayoutType",
		"GameMenuLayoutType::Type",
		Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType()
	{
		if (!Z_Registration_Info_UEnum_GameMenuLayoutType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_GameMenuLayoutType.InnerSingleton, Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_GameMenuLayoutType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameMenuStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FGameMenuStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameMenuStyle;
class UScriptStruct* FGameMenuStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameMenuStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameMenuStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameMenuStyle, (UObject*)Z_Construct_UPackage__Script_GameMenuBuilder(), TEXT("GameMenuStyle"));
	}
	return Z_Registration_Info_UScriptStruct_GameMenuStyle.OuterSingleton;
}
template<> GAMEMENUBUILDER_API UScriptStruct* StaticStruct<FGameMenuStyle>()
{
	return FGameMenuStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameMenuStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuTopBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuTopBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuFrameBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuFrameBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSelectBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuSelectBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuEnterSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuEnterSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuBackSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuBackSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionChangeSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionChangeSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuItemChangeSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuItemChangeSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuItemInactiveSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuItemInactiveSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuItemChosenSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuItemChosenSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMarginPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftMarginPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuMarginPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubMenuMarginPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleBorderMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TitleBorderMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBorderMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemBorderMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleHorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TitleHorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TitleVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelsVerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PanelsVerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameMenuStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuTopBrush_MetaData[] = {
		{ "Category", "Brushes" },
		{ "Comment", "/**\n\x09 * The brush used to draw the top of the menu\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used to draw the top of the menu" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuTopBrush = { "MenuTopBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuTopBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuTopBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuTopBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuFrameBrush_MetaData[] = {
		{ "Category", "Brushes" },
		{ "Comment", "/**\n\x09 * The brush used to draw the menu border\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used to draw the menu border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuFrameBrush = { "MenuFrameBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuFrameBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuFrameBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuFrameBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackgroundBrush_MetaData[] = {
		{ "Category", "Brushes" },
		{ "Comment", "/**\n\x09* The brush used to draw the menu background\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used to draw the menu background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackgroundBrush = { "MenuBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuSelectBrush_MetaData[] = {
		{ "Category", "Brushes" },
		{ "Comment", "/**\n\x09 * The brush used to draw the selected menu item\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The brush used to draw the selected menu item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuSelectBrush = { "MenuSelectBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuSelectBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuSelectBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuSelectBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuEnterSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when entering a sub-menu\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when entering a sub-menu" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuEnterSound = { "MenuEnterSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuEnterSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuEnterSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuEnterSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when returning to a parent menu\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when returning to a parent menu" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackSound = { "MenuBackSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuBackSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_OptionChangeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when a menu option is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when a menu option is changed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_OptionChangeSound = { "OptionChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, OptionChangeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_OptionChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_OptionChangeSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when the selected menu item is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when the selected menu item is changed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChangeSound = { "MenuItemChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuItemChangeSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChangeSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemInactiveSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when the selected menu item is disabled or unbound\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when the selected menu item is disabled or unbound" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemInactiveSound = { "MenuItemInactiveSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuItemInactiveSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemInactiveSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemInactiveSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChosenSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * The sound the menu should play when the selected menu item is chosen\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The sound the menu should play when the selected menu item is chosen" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChosenSound = { "MenuItemChosenSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, MenuItemChosenSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChosenSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChosenSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LeftMarginPercent_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09 * The left hand margin for the main menu \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The left hand margin for the main menu" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LeftMarginPercent = { "LeftMarginPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, LeftMarginPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LeftMarginPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LeftMarginPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_SubMenuMarginPercent_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* The left hand margin for the sub menu\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "The left hand margin for the sub menu" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_SubMenuMarginPercent = { "SubMenuMarginPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, SubMenuMarginPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_SubMenuMarginPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_SubMenuMarginPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LayoutType_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Layout type.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Layout type." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, LayoutType), Z_Construct_UEnum_GameMenuBuilder_GameMenuLayoutType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LayoutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LayoutType_MetaData)) }; // 523145967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleBorderMargin_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Title border margin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Title border margin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleBorderMargin = { "TitleBorderMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, TitleBorderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleBorderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleBorderMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_ItemBorderMargin_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Item border margin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Item border margin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_ItemBorderMargin = { "ItemBorderMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, ItemBorderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_ItemBorderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_ItemBorderMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleHorizontalAlignment_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Title horizontal alignment.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Title horizontal alignment." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleHorizontalAlignment = { "TitleHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, TitleHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleHorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleHorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleVerticalAlignment_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Title vertical alignment.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Title vertical alignment." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleVerticalAlignment = { "TitleVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, TitleVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleVerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_PanelsVerticalAlignment_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/**\n\x09* Panel vertical alignment.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Panel vertical alignment." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_PanelsVerticalAlignment = { "PanelsVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, PanelsVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_PanelsVerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_PanelsVerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_AnimationSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Speed at which the menu initially appears. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Speed at which the menu initially appears." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_AnimationSpeed = { "AnimationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, AnimationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_AnimationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_AnimationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/**\n\x09* Color of the text.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ToolTip", "Color of the text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameMenuStyle, TextColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TextColor_MetaData)) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameMenuStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuTopBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuFrameBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuSelectBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuEnterSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuBackSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_OptionChangeSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChangeSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemInactiveSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_MenuItemChosenSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LeftMarginPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_SubMenuMarginPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_LayoutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleBorderMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_ItemBorderMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleHorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TitleVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_PanelsVerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_AnimationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewProp_TextColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameMenuStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameMenuBuilder,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"GameMenuStyle",
		sizeof(FGameMenuStyle),
		alignof(FGameMenuStyle),
		Z_Construct_UScriptStruct_FGameMenuStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameMenuStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameMenuStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameMenuStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameMenuStyle.InnerSingleton, Z_Construct_UScriptStruct_FGameMenuStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameMenuStyle.InnerSingleton;
	}
	void UGameMenuWidgetStyle::StaticRegisterNativesUGameMenuWidgetStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameMenuWidgetStyle);
	UClass* Z_Construct_UClass_UGameMenuWidgetStyle_NoRegister()
	{
		return UGameMenuWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UGameMenuWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameMenuWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameMenuBuilder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMenuWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GameMenuWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the menu's appearance. */" },
		{ "ModuleRelativePath", "Public/GameMenuWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the menu's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMenuWidgetStyle_Statics::NewProp_MenuStyle = { "MenuStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameMenuWidgetStyle, MenuStyle), Z_Construct_UScriptStruct_FGameMenuStyle, METADATA_PARAMS(Z_Construct_UClass_UGameMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMenuWidgetStyle_Statics::NewProp_MenuStyle_MetaData)) }; // 2331949210
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameMenuWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMenuWidgetStyle_Statics::NewProp_MenuStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameMenuWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMenuWidgetStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameMenuWidgetStyle_Statics::ClassParams = {
		&UGameMenuWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameMenuWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameMenuWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameMenuWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMenuWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameMenuWidgetStyle()
	{
		if (!Z_Registration_Info_UClass_UGameMenuWidgetStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameMenuWidgetStyle.OuterSingleton, Z_Construct_UClass_UGameMenuWidgetStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameMenuWidgetStyle.OuterSingleton;
	}
	template<> GAMEMENUBUILDER_API UClass* StaticClass<UGameMenuWidgetStyle>()
	{
		return UGameMenuWidgetStyle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMenuWidgetStyle);
	UGameMenuWidgetStyle::~UGameMenuWidgetStyle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::EnumInfo[] = {
		{ GameMenuLayoutType_StaticEnum, TEXT("GameMenuLayoutType"), &Z_Registration_Info_UEnum_GameMenuLayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 523145967U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ScriptStructInfo[] = {
		{ FGameMenuStyle::StaticStruct, Z_Construct_UScriptStruct_FGameMenuStyle_Statics::NewStructOps, TEXT("GameMenuStyle"), &Z_Registration_Info_UScriptStruct_GameMenuStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameMenuStyle), 2331949210U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameMenuWidgetStyle, UGameMenuWidgetStyle::StaticClass, TEXT("UGameMenuWidgetStyle"), &Z_Registration_Info_UClass_UGameMenuWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameMenuWidgetStyle), 426296795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_1595485550(TEXT("/Script/GameMenuBuilder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameMenuBuilder_Public_GameMenuWidgetStyle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
