// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateFontInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontOutlineSettings;
class UScriptStruct* FFontOutlineSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontOutlineSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontOutlineSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontOutlineSettings, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("FontOutlineSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FontOutlineSettings.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontOutlineSettings>()
{
	return FFontOutlineSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFontOutlineSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutlineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateFillAlpha_MetaData[];
#endif
		static void NewProp_bSeparateFillAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateFillAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOutlineToDropShadows_MetaData[];
#endif
		static void NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOutlineToDropShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutlineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for applying an outline to a font\n */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontOutlineSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Size of the outline in slate units (at 1.0 font scale this unit is a pixel)*/" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Size of the outline in slate units (at 1.0 font scale this unit is a pixel)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontOutlineSettings, OutlineSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/**\n\x09 * When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value\n\x09 * The trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be completely translucent where the filled area will be.  This allows for a separate fill alpha value\nThe trade off when enabling this is slightly worse quality for completely opaque fills where the inner outline border meets the fill area" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bSeparateFillAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha = { "bSeparateFillAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/**\n\x09 * When enabled the outline will be applied to any drop shadow that uses this font\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "When enabled the outline will be applied to any drop shadow that uses this font" },
	};
#endif
	void Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit(void* Obj)
	{
		((FFontOutlineSettings*)Obj)->bApplyOutlineToDropShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows = { "bApplyOutlineToDropShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFontOutlineSettings), &Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** Optional material to apply to the outline */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Optional material to apply to the outline" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontOutlineSettings, OutlineMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "OutlineSettings" },
		{ "Comment", "/** The color of the outline for any character in this font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The color of the outline for any character in this font" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontOutlineSettings, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bSeparateFillAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_bApplyOutlineToDropShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewProp_OutlineColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FontOutlineSettings",
		sizeof(FFontOutlineSettings),
		alignof(FFontOutlineSettings),
		Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontOutlineSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FontOutlineSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontOutlineSettings.InnerSingleton, Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FontOutlineSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateFontInfo;
class UScriptStruct* FSlateFontInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateFontInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateFontInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateFontInfo, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateFontInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SlateFontInfo.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateFontInfo>()
{
	return FSlateFontInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateFontInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LetterSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LetterSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkewAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkewAmount;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FontName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hinting;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A representation of a font in Slate.\n */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "A representation of a font in Slate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateFontInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Font" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The font object (valid when used from UMG or a Slate widget style asset) */" },
		{ "DisplayName", "Font Family" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The font object (valid when used from UMG or a Slate widget style asset)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject = { "FontObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, FontObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The material to use when rendering this font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The material to use when rendering this font" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial = { "FontMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, FontMaterial), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** Settings for applying an outline to a font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "Settings for applying an outline to a font" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings = { "OutlineSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, OutlineSettings), Z_Construct_UScriptStruct_FFontOutlineSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings_MetaData)) }; // 1332472460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "Comment", "/** The name of the font to use from the default typeface (None will use the first entry) */" },
		{ "DisplayName", "Typeface" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font to use from the default typeface (None will use the first entry)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName = { "TypefaceFontName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, TypefaceFontName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The font size is a measure in point values. The conversion of points to Slate Units is done at 96 dpi.  So if \n\x09 * you're using a tool like Photoshop to prototype layouts and UI mock ups, be sure to change the default dpi \n\x09 * measurements from 72 dpi to 96 dpi.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The font size is a measure in point values. The conversion of points to Slate Units is done at 96 dpi.  So if\nyou're using a tool like Photoshop to prototype layouts and UI mock ups, be sure to change the default dpi\nmeasurements from 72 dpi to 96 dpi." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_LetterSpacing_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/** The uniform spacing (or tracking) between all characters in the text. */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The uniform spacing (or tracking) between all characters in the text." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_LetterSpacing = { "LetterSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, LetterSpacing), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_LetterSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_LetterSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_SkewAmount_MetaData[] = {
		{ "Category", "SlateStyleRules" },
		{ "ClampMax", "5" },
		{ "ClampMin", "-5" },
		{ "Comment", "/** A skew amount to apply to the text. */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "A skew amount to apply to the text." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_SkewAmount = { "SkewAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, SkewAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_SkewAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_SkewAmount_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData[] = {
		{ "Comment", "/** The name of the font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The name of the font" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName = { "FontName", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, FontName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData[] = {
		{ "Comment", "/** The hinting algorithm to use with the font */" },
		{ "ModuleRelativePath", "Public/Fonts/SlateFontInfo.h" },
		{ "ToolTip", "The hinting algorithm to use with the font" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateFontInfo, Hinting_DEPRECATED), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_MetaData)) }; // 3162113740
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_OutlineSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_TypefaceFontName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_LetterSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_SkewAmount,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_FontName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewProp_Hinting,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateFontInfo",
		sizeof(FSlateFontInfo),
		alignof(FSlateFontInfo),
		Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateFontInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateFontInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateFontInfo.InnerSingleton, Z_Construct_UScriptStruct_FSlateFontInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateFontInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_Statics::ScriptStructInfo[] = {
		{ FFontOutlineSettings::StaticStruct, Z_Construct_UScriptStruct_FFontOutlineSettings_Statics::NewStructOps, TEXT("FontOutlineSettings"), &Z_Registration_Info_UScriptStruct_FontOutlineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontOutlineSettings), 1332472460U) },
		{ FSlateFontInfo::StaticStruct, Z_Construct_UScriptStruct_FSlateFontInfo_Statics::NewStructOps, TEXT("SlateFontInfo"), &Z_Registration_Info_UScriptStruct_SlateFontInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateFontInfo), 192883377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_2393718666(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
