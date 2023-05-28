// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsChatChromeStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsChatChromeStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatChromeStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsChatChromeStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsChatChromeStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle;
class UScriptStruct* FFriendsChatChromeStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsChatChromeStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsChatChromeStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsChatChromeStyle>()
{
	return FFriendsChatChromeStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatEntryBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatEntryBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoneActiveTabColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoneActiveTabColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabFontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabFontColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabFontColorInverted_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabFontColorInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TabWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TabPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatWindowPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatWindowPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatWindowToEntryMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatWindowToEntryMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatChannelPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatChannelPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatEntryPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatMenuBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatMenuBackgroundBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsChatChromeStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundBrush = { "ChatBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush = { "ChatEntryBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatEntryBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush = { "ChannelBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChannelBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundColor = { "ChatEntryBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatEntryBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabBackgroundBrush = { "TabBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, TabBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_NoneActiveTabColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_NoneActiveTabColor = { "NoneActiveTabColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, NoneActiveTabColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_NoneActiveTabColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_NoneActiveTabColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColor = { "TabFontColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, TabFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColorInverted_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColorInverted = { "TabFontColorInverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, TabFontColorInverted), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColorInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColorInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabWidth = { "TabWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, TabWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabPadding = { "TabPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowPadding = { "ChatWindowPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatWindowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowToEntryMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowToEntryMargin = { "ChatWindowToEntryMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatWindowToEntryMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowToEntryMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowToEntryMargin_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatChannelPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatChannelPadding = { "ChatChannelPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatChannelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatChannelPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatChannelPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryPadding = { "ChatEntryPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatEntryPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundColor = { "ChatBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatChromeStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatMenuBackgroundBrush = { "ChatMenuBackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatChromeStyle, ChatMenuBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_NoneActiveTabColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabFontColorInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_TabPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatWindowToEntryMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatChannelPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatEntryPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewProp_ChatMenuBackgroundBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsChatChromeStyle",
		sizeof(FFriendsChatChromeStyle),
		alignof(FFriendsChatChromeStyle),
		Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatChromeStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatChromeStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatChromeStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsChatChromeStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsChatChromeStyle_Statics::NewStructOps, TEXT("FriendsChatChromeStyle"), &Z_Registration_Info_UScriptStruct_FriendsChatChromeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsChatChromeStyle), 2751916429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatChromeStyle_h_3351214944(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatChromeStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatChromeStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
