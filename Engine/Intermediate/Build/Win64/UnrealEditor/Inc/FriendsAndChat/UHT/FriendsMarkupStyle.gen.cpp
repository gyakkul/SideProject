// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FriendsMarkupStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsMarkupStyle() {}
// Cross Module References
	FRIENDSANDCHAT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsMarkupStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_FriendsAndChat();
// End Cross Module References

static_assert(std::is_polymorphic<FFriendsMarkupStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FFriendsMarkupStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FriendsMarkupStyle;
class UScriptStruct* FFriendsMarkupStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsMarkupStyle, (UObject*)Z_Construct_UPackage__Script_FriendsAndChat(), TEXT("FriendsMarkupStyle"));
	}
	return Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.OuterSingleton;
}
template<> FRIENDSANDCHAT_API UScriptStruct* StaticStruct<FFriendsMarkupStyle>()
{
	return FFriendsMarkupStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkupButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkupButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkupTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkupTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkupBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkupBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonHoverColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonHoverColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeperatorBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeperatorBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeperatorThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SeperatorThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkupPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkupPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interface for the services manager.\n */" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
		{ "ToolTip", "Interface for the services manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsMarkupStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Markup Button style */" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
		{ "ToolTip", "Markup Button style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupButtonStyle = { "MarkupButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, MarkupButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupTextStyle = { "MarkupTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, MarkupTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupBackground_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupBackground = { "MarkupBackground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, MarkupBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupBackground_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonColor = { "ButtonColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, ButtonColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonHoverColor = { "ButtonHoverColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, ButtonHoverColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_TipColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_TipColor = { "TipColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, TipColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_TipColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_TipColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorBrush = { "SeperatorBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, SeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorThickness = { "SeperatorThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, SeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupPadding = { "MarkupPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, MarkupPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/FriendsMarkupStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFriendsMarkupStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonPadding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonHoverColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_TipColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_SeperatorThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_MarkupPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewProp_ButtonPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FriendsAndChat,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"FriendsMarkupStyle",
		sizeof(FFriendsMarkupStyle),
		alignof(FFriendsMarkupStyle),
		Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsMarkupStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.InnerSingleton, Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FriendsMarkupStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsMarkupStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsMarkupStyle_h_Statics::ScriptStructInfo[] = {
		{ FFriendsMarkupStyle::StaticStruct, Z_Construct_UScriptStruct_FFriendsMarkupStyle_Statics::NewStructOps, TEXT("FriendsMarkupStyle"), &Z_Registration_Info_UScriptStruct_FriendsMarkupStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFriendsMarkupStyle), 507313117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsMarkupStyle_h_2143743077(TEXT("/Script/FriendsAndChat"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsMarkupStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FriendsAndChat_Public_FriendsMarkupStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
