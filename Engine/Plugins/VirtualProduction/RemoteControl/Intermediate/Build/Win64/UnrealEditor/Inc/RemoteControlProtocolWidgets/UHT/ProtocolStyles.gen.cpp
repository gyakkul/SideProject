// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Styling/ProtocolStyles.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProtocolStyles() {}
// Cross Module References
	REMOTECONTROLPROTOCOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FProtocolWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UPackage* Z_Construct_UPackage__Script_RemoteControlProtocolWidgets();
// End Cross Module References

static_assert(std::is_polymorphic<FProtocolWidgetStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FProtocolWidgetStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle;
class UScriptStruct* FProtocolWidgetStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProtocolWidgetStyle, (UObject*)Z_Construct_UPackage__Script_RemoteControlProtocolWidgets(), TEXT("ProtocolWidgetStyle"));
	}
	return Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.OuterSingleton;
}
template<> REMOTECONTROLPROTOCOLWIDGETS_API UScriptStruct* StaticStruct<FProtocolWidgetStyle>()
{
	return FProtocolWidgetStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoldTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoldTextStyle;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaskButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlainTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlainTextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents all custom protocol widgets.\n */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Represents all custom protocol widgets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProtocolWidgetStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_BoldTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Mask Button Bold Text Style */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Mask Button Bold Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_BoldTextStyle = { "BoldTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, BoldTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_BoldTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_BoldTextStyle_MetaData)) }; // 622949925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel. */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrush = { "ContentAreaBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, ContentAreaBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushDark_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel (Dark). */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel (Dark)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushDark = { "ContentAreaBrushDark", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, ContentAreaBrushDark), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushDark_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushDark_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushLight_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush used by the RC Panels to draw the content associated with this panel (Light). */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Brush used by the RC Panels to draw the content associated with this panel (Light)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushLight = { "ContentAreaBrushLight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, ContentAreaBrushLight), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushLight_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_MaskButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Style used for the mask button */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Style used for the mask button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_MaskButtonStyle = { "MaskButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, MaskButtonStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_MaskButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_MaskButtonStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_PlainTextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Mask Button Plain Text Style */" },
		{ "ModuleRelativePath", "Private/Styling/ProtocolStyles.h" },
		{ "ToolTip", "Mask Button Plain Text Style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_PlainTextStyle = { "PlainTextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProtocolWidgetStyle, PlainTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_PlainTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_PlainTextStyle_MetaData)) }; // 622949925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_BoldTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushDark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_ContentAreaBrushLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_MaskButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewProp_PlainTextStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlProtocolWidgets,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"ProtocolWidgetStyle",
		sizeof(FProtocolWidgetStyle),
		alignof(FProtocolWidgetStyle),
		Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProtocolWidgetStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.InnerSingleton, Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_Styling_ProtocolStyles_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_Styling_ProtocolStyles_h_Statics::ScriptStructInfo[] = {
		{ FProtocolWidgetStyle::StaticStruct, Z_Construct_UScriptStruct_FProtocolWidgetStyle_Statics::NewStructOps, TEXT("ProtocolWidgetStyle"), &Z_Registration_Info_UScriptStruct_ProtocolWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProtocolWidgetStyle), 4176528394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_Styling_ProtocolStyles_h_1875181521(TEXT("/Script/RemoteControlProtocolWidgets"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_Styling_ProtocolStyles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlProtocolWidgets_Private_Styling_ProtocolStyles_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
