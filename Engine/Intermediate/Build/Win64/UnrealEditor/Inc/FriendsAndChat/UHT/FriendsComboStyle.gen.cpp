// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsComboStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsComboStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsComboStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsComboStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsComboStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsComboStyle;
class UScriptStruct* FFriendsComboStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsComboStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsComboStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsComboStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsComboStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsComboStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsComboStyle>()
{
	return FFriendsComboStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsComboStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemTextColorNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemTextColorNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemTextColorInverted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemTextColorInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsComboTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsComboTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusButtonSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusButtonSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionComboButtonSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionComboButtonSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionComboButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionComboButtonTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionComboButtonTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboMenuPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboMenuPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboItemContentPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboItemContentPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendComboBackgroundLeftBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendComboBackgroundLeftBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendComboBackgroundRightBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendComboBackgroundRightBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendComboBackgroundLeftFlippedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendComboBackgroundLeftFlippedBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendComboBackgroundRightFlippedBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendComboBackgroundRightFlippedBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendListComboButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendListComboButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsComboStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemButtonStyle = { "ComboItemButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorNormal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorNormal = { "ComboItemTextColorNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemTextColorNormal), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorInverted_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorInverted = { "ComboItemTextColorInverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemTextColorInverted), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextStyle = { "ComboItemTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendsComboTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendsComboTextStyle = { "FriendsComboTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendsComboTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendsComboTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendsComboTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_StatusButtonSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_StatusButtonSize = { "StatusButtonSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, StatusButtonSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_StatusButtonSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_StatusButtonSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonSize = { "ActionComboButtonSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ActionComboButtonSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonStyle = { "ActionComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ActionComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonStyle_MetaData)) }; // 3302369615
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonTextStyle = { "ActionComboButtonTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ActionComboButtonTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboMenuPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboMenuPadding = { "ComboMenuPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboMenuPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboMenuPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboMenuPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemPadding = { "ComboItemPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemContentPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemContentPadding = { "ComboItemContentPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, ComboItemContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemContentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemContentPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Combo Button menu background image (left) */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Friends List Combo Button menu background image (left)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftBrush = { "FriendComboBackgroundLeftBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendComboBackgroundLeftBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Combo Button menu background image (right) */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Friends List Combo Button menu background image (right)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightBrush = { "FriendComboBackgroundRightBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendComboBackgroundRightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftFlippedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Combo Button menu background image (left-flipped) - for MenuPlacement_ComboBoxRight menus */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Friends List Combo Button menu background image (left-flipped) - for MenuPlacement_ComboBoxRight menus" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftFlippedBrush = { "FriendComboBackgroundLeftFlippedBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendComboBackgroundLeftFlippedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftFlippedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftFlippedBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightFlippedBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Combo Button menu background image (right-flipped) - for MenuPlacement_ComboBoxRight menus */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Friends List Combo Button menu background image (right-flipped) - for MenuPlacement_ComboBoxRight menus" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightFlippedBrush = { "FriendComboBackgroundRightFlippedBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendComboBackgroundRightFlippedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightFlippedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightFlippedBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendListComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Combo Button style */" },
		{ "ModuleRelativePath", "Public/FriendsComboStyle.h" },
		{ "ToolTip", "Friends List Combo Button style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendListComboButtonStyle = { "FriendListComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsComboStyle, FriendListComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendListComboButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendListComboButtonStyle_MetaData)) }; // 3302369615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextColorInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendsComboTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_StatusButtonSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ActionComboButtonTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboMenuPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_ComboItemContentPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundLeftFlippedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendComboBackgroundRightFlippedBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewProp_FriendListComboButtonStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsComboStyle",
		sizeof(FFriendsComboStyle),
		alignof(FFriendsComboStyle),
		Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsComboStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsComboStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsComboStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsComboStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsComboStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsComboStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsComboStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsComboStyle_Statics::NewStructOps, TEXT("FriendsComboStyle"), &Z_Registration_Info_UScriptStruct_FriendsComboStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsComboStyle), 3364991996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsComboStyle_h_2882377547(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsComboStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsComboStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
