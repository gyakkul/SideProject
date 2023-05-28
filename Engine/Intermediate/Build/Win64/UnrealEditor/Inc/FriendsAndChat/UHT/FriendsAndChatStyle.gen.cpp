// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsAndChatStyle.h"
#include "FriendsChatChromeStyle.h"
#include "FriendsChatStyle.h"
#include "FriendsFontStyle.h"
#include "FriendsListStyle.h"
#include "FriendsMarkupStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsAndChatStyle() {}
// Cross Module References
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsAndChatStyle();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatChromeStyle();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsChatStyle();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsFontStyle();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsListStyle();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsMarkupStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsAndChatStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsAndChatStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsAndChatStyle;
class UScriptStruct* FFriendsAndChatStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsAndChatStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsAndChatStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsAndChatStyle>()
{
	return FFriendsAndChatStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsSmallFontStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsSmallFontStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsNormalFontStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsNormalFontStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsLargeFontStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsLargeFontStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatFontStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatFontStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadioBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadioBoxStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsListStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsListStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsChatStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsChatStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsChatChromeStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsChatChromeStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsMarkupStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsMarkupStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsAndChatStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Common Style\n" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
		{ "ToolTip", "Common Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ScrollBarStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ScrollBarStyle_MetaData)) }; // 2161279079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ActionButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** SFriendActions Action Button style */" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
		{ "ToolTip", "SFriendActions Action Button style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ActionButtonStyle = { "ActionButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, ActionButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ActionButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ActionButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsSmallFontStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsSmallFontStyle = { "FriendsSmallFontStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsSmallFontStyle), Z_Construct_UScriptStruct_FFriendsFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsSmallFontStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsSmallFontStyle_MetaData)) }; // 1053355015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsNormalFontStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsNormalFontStyle = { "FriendsNormalFontStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsNormalFontStyle), Z_Construct_UScriptStruct_FFriendsFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsNormalFontStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsNormalFontStyle_MetaData)) }; // 1053355015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsLargeFontStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsLargeFontStyle = { "FriendsLargeFontStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsLargeFontStyle), Z_Construct_UScriptStruct_FFriendsFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsLargeFontStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsLargeFontStyle_MetaData)) }; // 1053355015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ChatFontStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ChatFontStyle = { "ChatFontStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, ChatFontStyle), Z_Construct_UScriptStruct_FFriendsFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ChatFontStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ChatFontStyle_MetaData)) }; // 1053355015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_CheckBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_CheckBoxStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_RadioBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_RadioBoxStyle = { "RadioBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, RadioBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_RadioBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_RadioBoxStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsListStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsListStyle = { "FriendsListStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsListStyle), Z_Construct_UScriptStruct_FFriendsListStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsListStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsListStyle_MetaData)) }; // 1763155224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatStyle = { "FriendsChatStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsChatStyle), Z_Construct_UScriptStruct_FFriendsChatStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatStyle_MetaData)) }; // 1248223364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatChromeStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatChromeStyle = { "FriendsChatChromeStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsChatChromeStyle), Z_Construct_UScriptStruct_FFriendsChatChromeStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatChromeStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatChromeStyle_MetaData)) }; // 2751916429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsMarkupStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsAndChatStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsMarkupStyle = { "FriendsMarkupStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsAndChatStyle, FriendsMarkupStyle), Z_Construct_UScriptStruct_FFriendsMarkupStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsMarkupStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsMarkupStyle_MetaData)) }; // 507313117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ScrollBarStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ActionButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsSmallFontStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsNormalFontStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsLargeFontStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_ChatFontStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_CheckBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_RadioBoxStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsListStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsChatChromeStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewProp_FriendsMarkupStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsAndChatStyle",
		sizeof(FFriendsAndChatStyle),
		alignof(FFriendsAndChatStyle),
		Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsAndChatStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsAndChatStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsAndChatStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsAndChatStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsAndChatStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsAndChatStyle_Statics::NewStructOps, TEXT("FriendsAndChatStyle"), &Z_Registration_Info_UScriptStruct_FriendsAndChatStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsAndChatStyle), 1215375768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsAndChatStyle_h_3822785417(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsAndChatStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsAndChatStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
