// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsFontStyle.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsFontStyle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsFontStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsFontStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsFontStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsFontStyle;
class UScriptStruct* FFriendsFontStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsFontStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsFontStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsFontStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsFontStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsFontStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsFontStyle>()
{
	return FFriendsFontStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsFontStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontSmall_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontSmallBold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontSmallBold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontNormalBold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontNormalBold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontLarge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsFontLargeBold_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsFontLargeBold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendsChatFont_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FriendsChatFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFontColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvertedFontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InvertedFontColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDullFontColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultDullFontColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsFontStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmall_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmall = { "FriendsFontSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontSmall), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmall_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmallBold_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmallBold = { "FriendsFontSmallBold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontSmallBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmallBold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmallBold_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormal_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormal = { "FriendsFontNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontNormal), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormal_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormalBold_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormalBold = { "FriendsFontNormalBold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontNormalBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormalBold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormalBold_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLarge_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLarge = { "FriendsFontLarge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontLarge), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLarge_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLargeBold_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLargeBold = { "FriendsFontLargeBold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsFontLargeBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLargeBold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLargeBold_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsChatFont_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Font Style */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Font Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsChatFont = { "FriendsChatFont", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, FriendsChatFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsChatFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsChatFont_MetaData)) }; // 192883377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultFontColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Default Font Color */" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
		{ "ToolTip", "Default Font Color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultFontColor = { "DefaultFontColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, DefaultFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultFontColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_InvertedFontColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_InvertedFontColor = { "InvertedFontColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, InvertedFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_InvertedFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_InvertedFontColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsFontStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultDullFontColor = { "DefaultDullFontColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsFontStyle, DefaultDullFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontSmallBold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontNormalBold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsFontLargeBold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_FriendsChatFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultFontColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_InvertedFontColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewProp_DefaultDullFontColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsFontStyle",
		sizeof(FFriendsFontStyle),
		alignof(FFriendsFontStyle),
		Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsFontStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsFontStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsFontStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsFontStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsFontStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsFontStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsFontStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsFontStyle_Statics::NewStructOps, TEXT("FriendsFontStyle"), &Z_Registration_Info_UScriptStruct_FriendsFontStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsFontStyle), 1053355015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsFontStyle_h_1526801043(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsFontStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsFontStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
