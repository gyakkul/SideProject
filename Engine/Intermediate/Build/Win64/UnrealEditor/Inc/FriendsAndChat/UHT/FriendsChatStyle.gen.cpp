// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsChatStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsChatStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsChatStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsChatStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsChatStyle;
class UScriptStruct* FFriendsChatStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsChatStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsChatStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsChatStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsChatStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsChatStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsChatStyle>()
{
	return FFriendsChatStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsChatStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStampTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStampTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStampOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStampOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhisperChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WhisperChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FounderChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FounderChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartyChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdminChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdminChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameAdminChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameAdminChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedItemChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedItemChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedItemChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedItemChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscardedItemChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiscardedItemChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhisperHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WhisperHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FounderHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FounderHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TeamHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyHyperlinkChatColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartyHyperlinkChatColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendlyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatEntryTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatDisplayTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatDisplayTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBorderStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBorderStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageNotificationBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageNotificationBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatEntryPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChatEntryHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendActionPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendActionPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendActionHeaderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendActionHeaderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendActionStatusMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendActionStatusMargin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsChatStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text Style */" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
		{ "ToolTip", "Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Time Stamp Text Style */" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
		{ "ToolTip", "Time Stamp Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampTextStyle = { "TimeStampTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, TimeStampTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampOpacity = { "TimeStampOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, TimeStampOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DefaultChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DefaultChatColor = { "DefaultChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, DefaultChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DefaultChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DefaultChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperChatColor = { "WhisperChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, WhisperChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalChatColor = { "GlobalChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, GlobalChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderChatColor = { "FounderChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FounderChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameChatColor = { "GameChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, GameChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamChatColor = { "TeamChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, TeamChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyChatColor = { "PartyChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, PartyChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AdminChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AdminChatColor = { "AdminChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, AdminChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AdminChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AdminChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameAdminChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameAdminChatColor = { "GameAdminChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, GameAdminChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameAdminChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameAdminChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AddedItemChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AddedItemChatColor = { "AddedItemChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, AddedItemChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AddedItemChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AddedItemChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_CompletedItemChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_CompletedItemChatColor = { "CompletedItemChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, CompletedItemChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_CompletedItemChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_CompletedItemChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DiscardedItemChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DiscardedItemChatColor = { "DiscardedItemChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, DiscardedItemChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DiscardedItemChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DiscardedItemChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperHyperlinkChatColor = { "WhisperHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, WhisperHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalHyperlinkChatColor = { "GlobalHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, GlobalHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderHyperlinkChatColor = { "FounderHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FounderHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameHyperlinkChatColor = { "GameHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, GameHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamHyperlinkChatColor = { "TeamHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, TeamHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyHyperlinkChatColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyHyperlinkChatColor = { "PartyHyperlinkChatColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, PartyHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyHyperlinkChatColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_EnemyColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_EnemyColor = { "EnemyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, EnemyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_EnemyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_EnemyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendlyColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendlyColor = { "FriendlyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FriendlyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendlyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendlyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryTextStyle = { "ChatEntryTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, ChatEntryTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatDisplayTextStyle = { "ChatDisplayTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, ChatDisplayTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData)) }; // 255857817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ScrollBorderStyle = { "ScrollBorderStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, ScrollBorderStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData)) }; // 3926364971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_MessageNotificationBrush = { "MessageNotificationBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, MessageNotificationBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryPadding = { "ChatEntryPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, ChatEntryPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryHeight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryHeight = { "ChatEntryHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, ChatEntryHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionPadding = { "FriendActionPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FriendActionPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionHeaderPadding = { "FriendActionHeaderPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FriendActionHeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionStatusMargin = { "FriendActionStatusMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsChatStyle, FriendActionStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TimeStampOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DefaultChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AdminChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameAdminChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_AddedItemChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_CompletedItemChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_DiscardedItemChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_WhisperHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GlobalHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FounderHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_GameHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_TeamHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_PartyHyperlinkChatColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_EnemyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendlyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatDisplayTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ScrollBorderStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_MessageNotificationBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_ChatEntryHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionHeaderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewProp_FriendActionStatusMargin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsChatStyle",
		sizeof(FFriendsChatStyle),
		alignof(FFriendsChatStyle),
		Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsChatStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsChatStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsChatStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsChatStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsChatStyle_Statics::NewStructOps, TEXT("FriendsChatStyle"), &Z_Registration_Info_UScriptStruct_FriendsChatStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsChatStyle), 1248223364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatStyle_h_2139288828(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsChatStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
