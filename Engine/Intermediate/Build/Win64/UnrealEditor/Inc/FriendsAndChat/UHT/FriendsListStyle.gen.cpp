// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsListStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsListStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsListStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsListStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsListStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsListStyle;
class UScriptStruct* FFriendsListStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsListStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsListStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsListStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsListStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsListStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsListStyle>()
{
	return FFriendsListStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsListStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalChatButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalChatButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalChatIcon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalChatIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfirmButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonContentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonContentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonHoverContentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonHoverContentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMenuArrowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMenuArrowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipArrowBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolTipArrowBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendListActionButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendListActionButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddFriendButtonContentBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddFriendButtonContentBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatusIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PCIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EpicIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EpicIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendImageBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendImageBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfflineBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OfflineBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnlineBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AwayBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AwayBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectateBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpectateBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsContainerBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsContainerBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddFriendEditableTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddFriendEditableTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPresenceImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPresenceImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOptionBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedOptionBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeperatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeperatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceSeperatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresenceSeperatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSizeBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontSizeBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButtonContentMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackButtonContentMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListNoFriendsMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListNoFriendsMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListHeaderMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListHeaderMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListHeaderCountMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListHeaderCountMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonContentMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderButtonContentMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemStatusMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemStatusMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemPresenceMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemPresenceMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemPlatformMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemPlatformMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendItemTextScrollerMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendItemTextScrollerMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationBorderMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfirmationBorderMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfirmationButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationButtonContentMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfirmationButtonContentMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoneFriendContentMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoneFriendContentMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoneFriendContentHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoneFriendContentHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoneFriendIconWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoneFriendIconWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuBackIconMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuBackIconMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuPageIconMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuPageIconMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadioSettingTitleMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadioSettingTitleMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSearchIconMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuSearchIconMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSearchTextMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuSearchTextMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuBackButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuBackButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSettingButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuSettingButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuListMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubMenuListMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMenuSeperatorThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubMenuSeperatorThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceSeperatorThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PresenceSeperatorThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendTipMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendTipMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendTipSeperatorMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendTipSeperatorMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolTipMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipStatusMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipStatusMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddButtonMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddButtonMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddButtonSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddButtonSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClanDetailsBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClanDetailsBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClanMembersBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClanMembersBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsListStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Friends List Style\n" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friends List Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatButtonStyle = { "GlobalChatButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, GlobalChatButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatIcon_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatIcon = { "GlobalChatIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, GlobalChatIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatIcon_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Open Button style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friends List Open Button style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemButtonStyle = { "FriendItemButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmButtonStyle = { "ConfirmButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ConfirmButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_CancelButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_CancelButtonStyle = { "CancelButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, CancelButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_CancelButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_CancelButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonContentColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonContentColor = { "ButtonContentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ButtonContentColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonContentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonContentColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonHoverContentColor = { "ButtonHoverContentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ButtonHoverContentColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Optional content for the Add Friend button */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Optional content for the Add Friend button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ActionMenuArrowBrush = { "ActionMenuArrowBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ActionMenuArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipArrowBrush = { "ToolTipArrowBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ToolTipArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonStyle = { "BackButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, BackButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonStyle = { "HeaderButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, HeaderButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends List Action Button style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friends List Action Button style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendListActionButtonStyle = { "FriendListActionButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendListActionButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Optional content for the Add Friend button */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Optional content for the Add Friend button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendButtonContentBrush = { "AddFriendButtonContentBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, AddFriendButtonContentBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_StatusIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friend Image brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friend Image brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_StatusIconBrush = { "StatusIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, StatusIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_StatusIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_StatusIconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PCIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PCIconBrush = { "PCIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, PCIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PCIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PCIconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConsoleIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConsoleIconBrush = { "ConsoleIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ConsoleIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConsoleIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConsoleIconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_EpicIconBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_EpicIconBrush = { "EpicIconBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, EpicIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_EpicIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_EpicIconBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendImageBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friend Image brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friend Image brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendImageBrush = { "FriendImageBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendImageBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendImageBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendImageBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OfflineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Offline brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Offline brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OfflineBrush = { "OfflineBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, OfflineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OfflineBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OfflineBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OnlineBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Online brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Online brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OnlineBrush = { "OnlineBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, OnlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OnlineBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OnlineBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AwayBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Away brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Away brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AwayBrush = { "AwayBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, AwayBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AwayBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AwayBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SpectateBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Away brush style */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Away brush style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SpectateBrush = { "SpectateBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SpectateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SpectateBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SpectateBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsContainerBackground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends window background */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friends window background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsContainerBackground = { "FriendsContainerBackground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsContainerBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsContainerBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsContainerBackground_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListBackground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Friends window background */" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Friends window background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListBackground = { "FriendsListBackground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsListBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListBackground_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendEditableTextStyle = { "AddFriendEditableTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, AddFriendEditableTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_UserPresenceImageSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_UserPresenceImageSize = { "UserPresenceImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, UserPresenceImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_UserPresenceImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_UserPresenceImageSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackBrush = { "BackBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, BackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SelectedOptionBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SelectedOptionBrush = { "SelectedOptionBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SelectedOptionBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SelectedOptionBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SelectedOptionBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SettingsBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SettingsBrush = { "SettingsBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SettingsBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SettingsBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SettingsBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SeperatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SeperatorBrush = { "SeperatorBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SeperatorBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SeperatorBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorBrush = { "PresenceSeperatorBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, PresenceSeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FontSizeBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FontSizeBrush = { "FontSizeBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FontSizeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FontSizeBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FontSizeBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SearchBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SearchBrush = { "SearchBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SearchBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SearchBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SearchBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonMargin = { "BackButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, BackButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonMargin = { "HeaderButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, HeaderButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListMargin = { "FriendsListMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsListMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonContentMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonContentMargin = { "BackButtonContentMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, BackButtonContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonContentMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonContentMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListNoFriendsMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListNoFriendsMargin = { "FriendsListNoFriendsMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsListNoFriendsMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListNoFriendsMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListNoFriendsMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderMargin = { "FriendsListHeaderMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsListHeaderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderCountMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderCountMargin = { "FriendsListHeaderCountMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendsListHeaderCountMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderCountMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderCountMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonContentMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonContentMargin = { "HeaderButtonContentMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, HeaderButtonContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonContentMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonContentMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemMargin = { "FriendItemMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemStatusMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemStatusMargin = { "FriendItemStatusMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemStatusMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemStatusMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPresenceMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPresenceMargin = { "FriendItemPresenceMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemPresenceMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPresenceMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPresenceMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPlatformMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPlatformMargin = { "FriendItemPlatformMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemPlatformMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPlatformMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPlatformMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemTextScrollerMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemTextScrollerMargin = { "FriendItemTextScrollerMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendItemTextScrollerMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemTextScrollerMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemTextScrollerMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationBorderMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationBorderMargin = { "ConfirmationBorderMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ConfirmationBorderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationBorderMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationBorderMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonMargin = { "ConfirmationButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ConfirmationButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonContentMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonContentMargin = { "ConfirmationButtonContentMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ConfirmationButtonContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonContentMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonContentMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentMargin = { "NoneFriendContentMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, NoneFriendContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentHeight = { "NoneFriendContentHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, NoneFriendContentHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendIconWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendIconWidth = { "NoneFriendIconWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, NoneFriendIconWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendIconWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendIconWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackIconMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackIconMargin = { "SubMenuBackIconMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuBackIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackIconMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackIconMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuPageIconMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuPageIconMargin = { "SubMenuPageIconMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuPageIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuPageIconMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuPageIconMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_RadioSettingTitleMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_RadioSettingTitleMargin = { "RadioSettingTitleMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, RadioSettingTitleMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_RadioSettingTitleMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_RadioSettingTitleMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchIconMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchIconMargin = { "SubMenuSearchIconMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuSearchIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchIconMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchIconMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchTextMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchTextMargin = { "SubMenuSearchTextMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuSearchTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchTextMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchTextMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackButtonMargin = { "SubMenuBackButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuBackButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSettingButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSettingButtonMargin = { "SubMenuSettingButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuSettingButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSettingButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSettingButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuListMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuListMargin = { "SubMenuListMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuListMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuListMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuListMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSeperatorThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSeperatorThickness = { "SubMenuSeperatorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, SubMenuSeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSeperatorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorThickness = { "PresenceSeperatorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, PresenceSeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipMargin = { "FriendTipMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendTipMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipSeperatorMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipSeperatorMargin = { "FriendTipSeperatorMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, FriendTipSeperatorMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipSeperatorMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipSeperatorMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipMargin = { "ToolTipMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ToolTipMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_TipStatusMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_TipStatusMargin = { "TipStatusMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, TipStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_TipStatusMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_TipStatusMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonMargin = { "AddButtonMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, AddButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonSpacing_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonSpacing = { "AddButtonSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, AddButtonSpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanDetailsBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Clan Settings\n" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
		{ "ToolTip", "Clan Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanDetailsBrush = { "ClanDetailsBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ClanDetailsBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanDetailsBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanDetailsBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanMembersBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsListStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanMembersBrush = { "ClanMembersBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsListStyle, ClanMembersBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanMembersBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanMembersBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsListStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_GlobalChatIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_CancelButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonContentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ButtonHoverContentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ActionMenuArrowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipArrowBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendListActionButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendButtonContentBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_StatusIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PCIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConsoleIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_EpicIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendImageBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OfflineBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_OnlineBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AwayBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SpectateBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsContainerBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddFriendEditableTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_UserPresenceImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SelectedOptionBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SettingsBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SeperatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FontSizeBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SearchBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_BackButtonContentMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListNoFriendsMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendsListHeaderCountMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_HeaderButtonContentMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemStatusMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPresenceMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemPlatformMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendItemTextScrollerMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationBorderMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ConfirmationButtonContentMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendContentHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_NoneFriendIconWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackIconMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuPageIconMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_RadioSettingTitleMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchIconMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSearchTextMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuBackButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSettingButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuListMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_SubMenuSeperatorThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_PresenceSeperatorThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_FriendTipSeperatorMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ToolTipMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_TipStatusMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_AddButtonSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanDetailsBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewProp_ClanMembersBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsListStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsListStyle",
		sizeof(FFriendsListStyle),
		alignof(FFriendsListStyle),
		Z_Construct_UScriptStruct_FFriendsListStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsListStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsListStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsListStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsListStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsListStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsListStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsListStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsListStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsListStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsListStyle_Statics::NewStructOps, TEXT("FriendsListStyle"), &Z_Registration_Info_UScriptStruct_FriendsListStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsListStyle), 1763155224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsListStyle_h_2426103396(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsListStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsListStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
