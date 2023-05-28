// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/FontCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontCache() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextShapingMethod;
	static UEnum* ETextShapingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextShapingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextShapingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextShapingMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextShapingMethod"));
		}
		return Z_Registration_Info_UEnum_ETextShapingMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextShapingMethod>()
	{
		return ETextShapingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enumerators[] = {
		{ "ETextShapingMethod::Auto", (int64)ETextShapingMethod::Auto },
		{ "ETextShapingMethod::KerningOnly", (int64)ETextShapingMethod::KerningOnly },
		{ "ETextShapingMethod::FullShaping", (int64)ETextShapingMethod::FullShaping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/**\n\x09 * Automatically picks the fastest possible shaping method (either KerningOnly or FullShaping) based on the reading direction of the text.\n\x09 * Left-to-right text uses the KerningOnly method, and right-to-left text uses the FullShaping method.\n\x09 */" },
		{ "Auto.Name", "ETextShapingMethod::Auto" },
		{ "Auto.ToolTip", "Automatically picks the fastest possible shaping method (either KerningOnly or FullShaping) based on the reading direction of the text.\nLeft-to-right text uses the KerningOnly method, and right-to-left text uses the FullShaping method." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Methods that can be used to shape text.\n * @note If you change this enum, make sure and update CVarDefaultTextShapingMethod and GetDefaultTextShapingMethod.\n */" },
		{ "FullShaping.Comment", "/**\n\x09 * Provides full text shaping, allowing accurate rendering of complex right-to-left or bi-directional glyphs (such as Arabic).\n\x09 * This mode will perform ligature replacement for all languages (such as the combined \"fi\" glyph in English).\n\x09 */" },
		{ "FullShaping.Name", "ETextShapingMethod::FullShaping" },
		{ "FullShaping.ToolTip", "Provides full text shaping, allowing accurate rendering of complex right-to-left or bi-directional glyphs (such as Arabic).\nThis mode will perform ligature replacement for all languages (such as the combined \"fi\" glyph in English)." },
		{ "KerningOnly.Comment", "/** \n\x09 * Provides fake shaping using only kerning data.\n\x09 * This can be faster than full shaping, but won't render complex right-to-left or bi-directional glyphs (such as Arabic) correctly.\n\x09 * This can be useful as an optimization when you know your text block will only show simple glyphs (such as numbers).\n\x09 */" },
		{ "KerningOnly.Name", "ETextShapingMethod::KerningOnly" },
		{ "KerningOnly.ToolTip", "Provides fake shaping using only kerning data.\nThis can be faster than full shaping, but won't render complex right-to-left or bi-directional glyphs (such as Arabic) correctly.\nThis can be useful as an optimization when you know your text block will only show simple glyphs (such as numbers)." },
		{ "ModuleRelativePath", "Public/Fonts/FontCache.h" },
		{ "ToolTip", "Methods that can be used to shape text.\n@note If you change this enum, make sure and update CVarDefaultTextShapingMethod and GetDefaultTextShapingMethod." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ETextShapingMethod",
		"ETextShapingMethod",
		Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod()
	{
		if (!Z_Registration_Info_UEnum_ETextShapingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextShapingMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextShapingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextShapingMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontCache_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontCache_h_Statics::EnumInfo[] = {
		{ ETextShapingMethod_StaticEnum, TEXT("ETextShapingMethod"), &Z_Registration_Info_UEnum_ETextShapingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2909449771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontCache_h_4210739095(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontCache_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
