// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateColor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateColorStylingMode;
	static UEnum* ESlateColorStylingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateColorStylingMode"));
		}
		return Z_Registration_Info_UEnum_ESlateColorStylingMode.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateColorStylingMode>()
	{
		return ESlateColorStylingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enumerators[] = {
		{ "ESlateColorStylingMode::UseColor_Specified", (int64)ESlateColorStylingMode::UseColor_Specified },
		{ "ESlateColorStylingMode::UseColor_ColorTable", (int64)ESlateColorStylingMode::UseColor_ColorTable },
		{ "ESlateColorStylingMode::UseColor_Foreground", (int64)ESlateColorStylingMode::UseColor_Foreground },
		{ "ESlateColorStylingMode::UseColor_Foreground_Subdued", (int64)ESlateColorStylingMode::UseColor_Foreground_Subdued },
		{ "ESlateColorStylingMode::UseColor_UseStyle", (int64)ESlateColorStylingMode::UseColor_UseStyle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates types of color values that can be held by Slate color.\n *\n * Should we use the specified color? If not, then which color from the style should we use.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "Enumerates types of color values that can be held by Slate color.\n\nShould we use the specified color? If not, then which color from the style should we use." },
		{ "UseColor_ColorTable.Comment", "/** Color value is stored in the linked color table. */" },
		{ "UseColor_ColorTable.Hidden", "" },
		{ "UseColor_ColorTable.Name", "ESlateColorStylingMode::UseColor_ColorTable" },
		{ "UseColor_ColorTable.ToolTip", "Color value is stored in the linked color table." },
		{ "UseColor_Foreground.Comment", "/** Use the widget's foreground color. */" },
		{ "UseColor_Foreground.DisplayName", "Foreground Color" },
		{ "UseColor_Foreground.Name", "ESlateColorStylingMode::UseColor_Foreground" },
		{ "UseColor_Foreground.ToolTip", "Use the widget's foreground color." },
		{ "UseColor_Foreground_Subdued.Comment", "/** Use the widget's subdued color. */" },
		{ "UseColor_Foreground_Subdued.Hidden", "" },
		{ "UseColor_Foreground_Subdued.Name", "ESlateColorStylingMode::UseColor_Foreground_Subdued" },
		{ "UseColor_Foreground_Subdued.ToolTip", "Use the widget's subdued color." },
		{ "UseColor_Specified.Comment", "/** Color value is stored in this Slate color. */" },
		{ "UseColor_Specified.DisplayName", "Specified Color" },
		{ "UseColor_Specified.Name", "ESlateColorStylingMode::UseColor_Specified" },
		{ "UseColor_Specified.ToolTip", "Color value is stored in this Slate color." },
		{ "UseColor_UseStyle.Comment", "/** Use the foreground color defined in a widget specific style. */" },
		{ "UseColor_UseStyle.Hidden", "" },
		{ "UseColor_UseStyle.Name", "ESlateColorStylingMode::UseColor_UseStyle" },
		{ "UseColor_UseStyle.ToolTip", "Use the foreground color defined in a widget specific style." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateColorStylingMode",
		"ESlateColorStylingMode",
		Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateColorStylingMode()
	{
		if (!Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateColorStylingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateColorStylingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateColor;
class UScriptStruct* FSlateColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateColor, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateColor"));
	}
	return Z_Registration_Info_UScriptStruct_SlateColor.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateColor>()
{
	return FSlateColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecifiedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecifiedColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorUseRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorUseRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorUseRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "A Slate color can be a directly specified value, or the color can be pulled from a WidgetStyle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "// The current specified color; only meaningful when ColorToUse == UseColor_Specified.\n" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The current specified color; only meaningful when ColorToUse == UseColor_Specified." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor = { "SpecifiedColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateColor, SpecifiedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "// The rule for which color to pick.\n" },
		{ "ModuleRelativePath", "Public/Styling/SlateColor.h" },
		{ "ToolTip", "The rule for which color to pick." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule = { "ColorUseRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateColor, ColorUseRule), Z_Construct_UEnum_SlateCore_ESlateColorStylingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_MetaData)) }; // 3916515885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_SpecifiedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateColor_Statics::NewProp_ColorUseRule,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateColor",
		sizeof(FSlateColor),
		alignof(FSlateColor),
		Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateColor()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton, Z_Construct_UScriptStruct_FSlateColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateColor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::EnumInfo[] = {
		{ ESlateColorStylingMode_StaticEnum, TEXT("ESlateColorStylingMode"), &Z_Registration_Info_UEnum_ESlateColorStylingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3916515885U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::ScriptStructInfo[] = {
		{ FSlateColor::StaticStruct, Z_Construct_UScriptStruct_FSlateColor_Statics::NewStructOps, TEXT("SlateColor"), &Z_Registration_Info_UScriptStruct_SlateColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateColor), 3007839000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_518708327(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
