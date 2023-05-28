// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SegmentedControlStyle.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSegmentedControlStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSegmentedControlStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

static_assert(std::is_polymorphic<FSegmentedControlStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSegmentedControlStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SegmentedControlStyle;
class UScriptStruct* FSegmentedControlStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSegmentedControlStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SegmentedControlStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SegmentedControlStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSegmentedControlStyle>()
{
	return FSegmentedControlStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstControlStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstControlStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastControlStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastControlStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniformPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSegmentedControl\n */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSegmentedControl" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSegmentedControlStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Center Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Center Control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle = { "ControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSegmentedControlStyle, ControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Left Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Left Control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle = { "FirstControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSegmentedControlStyle, FirstControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The style to use for our Left Control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "The style to use for our Left Control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle = { "LastControlStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSegmentedControlStyle, LastControlStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle_MetaData)) }; // 1946304471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Background of the segmented control */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Background of the segmented control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush = { "BackgroundBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSegmentedControlStyle, BackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Padding between each control\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SegmentedControlStyle.h" },
		{ "ToolTip", "Padding between each control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding = { "UniformPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSegmentedControlStyle, UniformPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_ControlStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_FirstControlStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_LastControlStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_BackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewProp_UniformPadding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SegmentedControlStyle",
		sizeof(FSegmentedControlStyle),
		alignof(FSegmentedControlStyle),
		Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSegmentedControlStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton, Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SegmentedControlStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics::ScriptStructInfo[] = {
		{ FSegmentedControlStyle::StaticStruct, Z_Construct_UScriptStruct_FSegmentedControlStyle_Statics::NewStructOps, TEXT("SegmentedControlStyle"), &Z_Registration_Info_UScriptStruct_SegmentedControlStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSegmentedControlStyle), 3211973421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_2541186965(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SegmentedControlStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
