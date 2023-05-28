// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fonts/CompositeFont.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeFont() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFallbackFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFontData();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypeface();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontHinting;
	static UEnum* EFontHinting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFontHinting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFontHinting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontHinting, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontHinting"));
		}
		return Z_Registration_Info_UEnum_EFontHinting.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontHinting>()
	{
		return EFontHinting_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EFontHinting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enumerators[] = {
		{ "EFontHinting::Default", (int64)EFontHinting::Default },
		{ "EFontHinting::Auto", (int64)EFontHinting::Auto },
		{ "EFontHinting::AutoLight", (int64)EFontHinting::AutoLight },
		{ "EFontHinting::Monochrome", (int64)EFontHinting::Monochrome },
		{ "EFontHinting::None", (int64)EFontHinting::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Force the use of an automatic hinting algorithm. */" },
		{ "Auto.Name", "EFontHinting::Auto" },
		{ "Auto.ToolTip", "Force the use of an automatic hinting algorithm." },
		{ "AutoLight.Comment", "/** Force the use of an automatic light hinting algorithm, optimized for non-monochrome displays. */" },
		{ "AutoLight.Name", "EFontHinting::AutoLight" },
		{ "AutoLight.ToolTip", "Force the use of an automatic light hinting algorithm, optimized for non-monochrome displays." },
		{ "Default.Comment", "/** Use the default hinting specified in the font. */" },
		{ "Default.Name", "EFontHinting::Default" },
		{ "Default.ToolTip", "Use the default hinting specified in the font." },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "Monochrome.Comment", "/** Force the use of an automatic hinting algorithm optimized for monochrome displays. */" },
		{ "Monochrome.Name", "EFontHinting::Monochrome" },
		{ "Monochrome.ToolTip", "Force the use of an automatic hinting algorithm optimized for monochrome displays." },
		{ "None.Comment", "/** Do not use hinting. */" },
		{ "None.Name", "EFontHinting::None" },
		{ "None.ToolTip", "Do not use hinting." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFontHinting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EFontHinting",
		"EFontHinting",
		Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontHinting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EFontHinting()
	{
		if (!Z_Registration_Info_UEnum_EFontHinting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontHinting.InnerSingleton, Z_Construct_UEnum_SlateCore_EFontHinting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFontHinting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontLoadingPolicy;
	static UEnum* EFontLoadingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFontLoadingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFontLoadingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLoadingPolicy"));
		}
		return Z_Registration_Info_UEnum_EFontLoadingPolicy.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontLoadingPolicy>()
	{
		return EFontLoadingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enumerators[] = {
		{ "EFontLoadingPolicy::LazyLoad", (int64)EFontLoadingPolicy::LazyLoad },
		{ "EFontLoadingPolicy::Stream", (int64)EFontLoadingPolicy::Stream },
		{ "EFontLoadingPolicy::Inline", (int64)EFontLoadingPolicy::Inline },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Inline.Comment", "/** Embed the font data within the asset. This will consume more memory than Streaming, however it is guaranteed to be hitch free (only valid for font data within a Font Face asset). */" },
		{ "Inline.Name", "EFontLoadingPolicy::Inline" },
		{ "Inline.ToolTip", "Embed the font data within the asset. This will consume more memory than Streaming, however it is guaranteed to be hitch free (only valid for font data within a Font Face asset)." },
		{ "LazyLoad.Comment", "/** Lazy load the entire font into memory. This will consume more memory than Streaming, however there will be zero file-IO when rendering glyphs within the font, although the initial load may cause a hitch. */" },
		{ "LazyLoad.Name", "EFontLoadingPolicy::LazyLoad" },
		{ "LazyLoad.ToolTip", "Lazy load the entire font into memory. This will consume more memory than Streaming, however there will be zero file-IO when rendering glyphs within the font, although the initial load may cause a hitch." },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "Stream.Comment", "/** Stream the font from disk. This will consume less memory than LazyLoad or Inline, however there will be file-IO when rendering glyphs, which may cause hitches under certain circumstances or on certain platforms. */" },
		{ "Stream.Name", "EFontLoadingPolicy::Stream" },
		{ "Stream.ToolTip", "Stream the font from disk. This will consume less memory than LazyLoad or Inline, however there will be file-IO when rendering glyphs, which may cause hitches under certain circumstances or on certain platforms." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EFontLoadingPolicy",
		"EFontLoadingPolicy",
		Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EFontLoadingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontLoadingPolicy.InnerSingleton, Z_Construct_UEnum_SlateCore_EFontLoadingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFontLoadingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontLayoutMethod;
	static UEnum* EFontLayoutMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFontLayoutMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFontLayoutMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFontLayoutMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFontLayoutMethod"));
		}
		return Z_Registration_Info_UEnum_EFontLayoutMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFontLayoutMethod>()
	{
		return EFontLayoutMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enumerators[] = {
		{ "EFontLayoutMethod::Metrics", (int64)EFontLayoutMethod::Metrics },
		{ "EFontLayoutMethod::BoundingBox", (int64)EFontLayoutMethod::BoundingBox },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enum_MetaDataParams[] = {
		{ "BoundingBox.Comment", "/** Layout the font using the values from its bounding box. This typically yields a larger line height for fonts that have valid metrics, however it can also produce much better results for fonts that have broken or incorrect metrics. */" },
		{ "BoundingBox.Name", "EFontLayoutMethod::BoundingBox" },
		{ "BoundingBox.ToolTip", "Layout the font using the values from its bounding box. This typically yields a larger line height for fonts that have valid metrics, however it can also produce much better results for fonts that have broken or incorrect metrics." },
		{ "Metrics.Comment", "/** Layout the font using the metrics data available in the font. This is typically the desired option, however some fonts have broken or incorrect metrics so may yield better results when using the bounding box values to layout the font. */" },
		{ "Metrics.Name", "EFontLayoutMethod::Metrics" },
		{ "Metrics.ToolTip", "Layout the font using the metrics data available in the font. This is typically the desired option, however some fonts have broken or incorrect metrics so may yield better results when using the bounding box values to layout the font." },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EFontLayoutMethod",
		"EFontLayoutMethod",
		Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod()
	{
		if (!Z_Registration_Info_UEnum_EFontLayoutMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontLayoutMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_EFontLayoutMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFontLayoutMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontData;
class UScriptStruct* FFontData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontData, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("FontData"));
	}
	return Z_Registration_Info_UScriptStruct_FontData.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFontData>()
{
	return FFontData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFontData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FontFilename;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hinting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubFaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubFaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontFaceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontFaceAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulkDataPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BulkDataPtr;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FontData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Payload data describing an individual font in a typeface. Keep this lean as it's also used as a key! */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Payload data describing an individual font in a typeface. Keep this lean as it's also used as a key!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData[] = {
		{ "Comment", "/**\n\x09 * The filename of the font to use.\n\x09 * This variable is ignored if we have a font face asset, and is set to the .ufont file in a cooked build.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The filename of the font to use.\nThis variable is ignored if we have a font face asset, and is set to the .ufont file in a cooked build." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename = { "FontFilename", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, FontFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData[] = {
		{ "Comment", "/**\n\x09 * The hinting algorithm to use with the font.\n\x09 * This variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The hinting algorithm to use with the font.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_MetaData)) }; // 3162113740
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Comment", "/**\n\x09 * Enum controlling how this font should be loaded at runtime. See the enum for more explanations of the options.\n\x09 * This variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Enum controlling how this font should be loaded at runtime. See the enum for more explanations of the options.\nThis variable is ignored if we have a font face asset, and is synchronized with the font face asset on load in a cooked build." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_MetaData)) }; // 2103977933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * The index of the sub-face that should be used.\n\x09 * This is typically zero unless using a TTC/OTC font.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The index of the sub-face that should be used.\nThis is typically zero unless using a TTC/OTC font." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex = { "SubFaceIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, SubFaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData[] = {
		{ "Comment", "/**\n\x09 * Font data v3. This points to a font face asset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Font data v3. This points to a font face asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset = { "FontFaceAsset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, FontFaceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData[] = {
		{ "Comment", "/**\n\x09 * Legacy font data v2. This used to be where font data was stored prior to font face assets. \n\x09 * This can be removed once we no longer support loading packages older than FEditorObjectVersion::AddedFontFaceAssets (as can UFontBulkData itself).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Legacy font data v2. This used to be where font data was stored prior to font face assets.\nThis can be removed once we no longer support loading packages older than FEditorObjectVersion::AddedFontFaceAssets (as can UFontBulkData itself)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr = { "BulkDataPtr", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, BulkDataPtr_DEPRECATED), Z_Construct_UClass_UFontBulkData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_Inner = { "FontData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Legacy font data v1. This used to be where font data was stored prior to font bulk data.\n\x09 * This can be removed once we no longer support loading packages older than VER_UE4_SLATE_BULK_FONT_DATA.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Legacy font data v1. This used to be where font data was stored prior to font bulk data.\nThis can be removed once we no longer support loading packages older than VER_UE4_SLATE_BULK_FONT_DATA." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData = { "FontData", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontData, FontData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_Hinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_LoadingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_SubFaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontFaceAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_BulkDataPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontData_Statics::NewProp_FontData,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FontData",
		sizeof(FFontData),
		alignof(FFontData),
		Z_Construct_UScriptStruct_FFontData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontData()
	{
		if (!Z_Registration_Info_UScriptStruct_FontData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontData.InnerSingleton, Z_Construct_UScriptStruct_FFontData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FontData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypefaceEntry;
class UScriptStruct* FTypefaceEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypefaceEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypefaceEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypefaceEntry, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("TypefaceEntry"));
	}
	return Z_Registration_Info_UScriptStruct_TypefaceEntry.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTypefaceEntry>()
{
	return FTypefaceEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypefaceEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single entry in a typeface */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "A single entry in a typeface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypefaceEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name used to identify this font within its typeface */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Name used to identify this font within its typeface" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypefaceEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData[] = {
		{ "Comment", "/** Raw font data for this font */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Raw font data for this font" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypefaceEntry, Font), Z_Construct_UScriptStruct_FFontData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font_MetaData)) }; // 2266299449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewProp_Font,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypefaceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"TypefaceEntry",
		sizeof(FTypefaceEntry),
		alignof(FTypefaceEntry),
		Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypefaceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypefaceEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_TypefaceEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypefaceEntry.InnerSingleton, Z_Construct_UScriptStruct_FTypefaceEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypefaceEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Typeface;
class UScriptStruct* FTypeface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Typeface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Typeface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeface, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("Typeface"));
	}
	return Z_Registration_Info_UScriptStruct_Typeface.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FTypeface>()
{
	return FTypeface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypeface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fonts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fonts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fonts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Definition for a typeface (a family of fonts) */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Definition for a typeface (a family of fonts)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeface>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_Inner = { "Fonts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTypefaceEntry, METADATA_PARAMS(nullptr, 0) }; // 484110809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData[] = {
		{ "Comment", "/** The fonts contained within this family */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The fonts contained within this family" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts = { "Fonts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypeface, Fonts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_MetaData)) }; // 484110809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeface_Statics::NewProp_Fonts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"Typeface",
		sizeof(FTypeface),
		alignof(FTypeface),
		Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeface()
	{
		if (!Z_Registration_Info_UScriptStruct_Typeface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Typeface.InnerSingleton, Z_Construct_UScriptStruct_FTypeface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Typeface.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeFallbackFont;
class UScriptStruct* FCompositeFallbackFont::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeFallbackFont.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeFallbackFont.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFallbackFont, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeFallbackFont"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeFallbackFont.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeFallbackFont>()
{
	return FCompositeFallbackFont::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Typeface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Typeface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeFallbackFont>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData[] = {
		{ "Comment", "/** Typeface data for this sub-font */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Typeface data for this sub-font" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface = { "Typeface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeFallbackFont, Typeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface_MetaData)) }; // 597798179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Comment", "/** Amount to scale this sub-font so that it better matches the size of the default font */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Amount to scale this sub-font so that it better matches the size of the default font" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeFallbackFont, ScalingFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_Typeface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewProp_ScalingFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CompositeFallbackFont",
		sizeof(FCompositeFallbackFont),
		alignof(FCompositeFallbackFont),
		Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeFallbackFont()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositeFallbackFont.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeFallbackFont.InnerSingleton, Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositeFallbackFont.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCompositeSubFont>() == std::is_polymorphic<FCompositeFallbackFont>(), "USTRUCT FCompositeSubFont cannot be polymorphic unless super FCompositeFallbackFont is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeSubFont;
class UScriptStruct* FCompositeSubFont::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeSubFont.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeSubFont.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSubFont, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeSubFont"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeSubFont.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeSubFont>()
{
	return FCompositeSubFont::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositeSubFont_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterRanges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRanges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterRanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cultures_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cultures;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditorName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSubFont>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_Inner = { "CharacterRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData[] = {
		{ "Comment", "/** Array of character ranges for which this sub-font should be used */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Array of character ranges for which this sub-font should be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges = { "CharacterRanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSubFont, CharacterRanges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData[] = {
		{ "Comment", "/** Optional semi-colon separated list of cultures that this sub-font should be used with (if specified, this sub-font will be favored by those cultures and ignored by others) */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Optional semi-colon separated list of cultures that this sub-font should be used with (if specified, this sub-font will be favored by those cultures and ignored by others)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures = { "Cultures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSubFont, Cultures), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData[] = {
		{ "Comment", "/** Name of this sub-font. Only used by the editor UI as a convenience to let you state the purpose of the font family. */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Name of this sub-font. Only used by the editor UI as a convenience to let you state the purpose of the font family." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName = { "EditorName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeSubFont, EditorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_CharacterRanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_Cultures,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewProp_EditorName,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeSubFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FCompositeFallbackFont,
		&NewStructOps,
		"CompositeSubFont",
		sizeof(FCompositeSubFont),
		alignof(FCompositeSubFont),
		Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSubFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeSubFont()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositeSubFont.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeSubFont.InnerSingleton, Z_Construct_UScriptStruct_FCompositeSubFont_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositeSubFont.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeFont;
class UScriptStruct* FCompositeFont::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeFont.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeFont.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeFont, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CompositeFont"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeFont.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCompositeFont>()
{
	return FCompositeFont::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositeFont_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTypeface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTypeface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackTypeface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackTypeface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubTypefaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubTypefaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubTypefaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeFont_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeFont>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData[] = {
		{ "Comment", "/** The default typeface that will be used when not overridden by a sub-typeface */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The default typeface that will be used when not overridden by a sub-typeface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface = { "DefaultTypeface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeFont, DefaultTypeface), Z_Construct_UScriptStruct_FTypeface, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface_MetaData)) }; // 597798179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData[] = {
		{ "Comment", "/** The fallback typeface that will be used as a last resort when no other typeface provides a match */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "The fallback typeface that will be used as a last resort when no other typeface provides a match" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface = { "FallbackTypeface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeFont, FallbackTypeface), Z_Construct_UScriptStruct_FCompositeFallbackFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface_MetaData)) }; // 2924470867
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_Inner = { "SubTypefaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompositeSubFont, METADATA_PARAMS(nullptr, 0) }; // 1533906974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData[] = {
		{ "Comment", "/** Sub-typefaces to use for a specific set of characters */" },
		{ "ModuleRelativePath", "Public/Fonts/CompositeFont.h" },
		{ "ToolTip", "Sub-typefaces to use for a specific set of characters" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces = { "SubTypefaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeFont, SubTypefaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_MetaData)) }; // 1533906974
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_DefaultTypeface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_FallbackTypeface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeFont_Statics::NewProp_SubTypefaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeFont_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CompositeFont",
		sizeof(FCompositeFont),
		alignof(FCompositeFont),
		Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeFont_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositeFont.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeFont.InnerSingleton, Z_Construct_UScriptStruct_FCompositeFont_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositeFont.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::EnumInfo[] = {
		{ EFontHinting_StaticEnum, TEXT("EFontHinting"), &Z_Registration_Info_UEnum_EFontHinting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3162113740U) },
		{ EFontLoadingPolicy_StaticEnum, TEXT("EFontLoadingPolicy"), &Z_Registration_Info_UEnum_EFontLoadingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2103977933U) },
		{ EFontLayoutMethod_StaticEnum, TEXT("EFontLayoutMethod"), &Z_Registration_Info_UEnum_EFontLayoutMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 839056090U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::ScriptStructInfo[] = {
		{ FFontData::StaticStruct, Z_Construct_UScriptStruct_FFontData_Statics::NewStructOps, TEXT("FontData"), &Z_Registration_Info_UScriptStruct_FontData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontData), 2266299449U) },
		{ FTypefaceEntry::StaticStruct, Z_Construct_UScriptStruct_FTypefaceEntry_Statics::NewStructOps, TEXT("TypefaceEntry"), &Z_Registration_Info_UScriptStruct_TypefaceEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypefaceEntry), 484110809U) },
		{ FTypeface::StaticStruct, Z_Construct_UScriptStruct_FTypeface_Statics::NewStructOps, TEXT("Typeface"), &Z_Registration_Info_UScriptStruct_Typeface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypeface), 597798179U) },
		{ FCompositeFallbackFont::StaticStruct, Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics::NewStructOps, TEXT("CompositeFallbackFont"), &Z_Registration_Info_UScriptStruct_CompositeFallbackFont, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeFallbackFont), 2924470867U) },
		{ FCompositeSubFont::StaticStruct, Z_Construct_UScriptStruct_FCompositeSubFont_Statics::NewStructOps, TEXT("CompositeSubFont"), &Z_Registration_Info_UScriptStruct_CompositeSubFont, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeSubFont), 1533906974U) },
		{ FCompositeFont::StaticStruct, Z_Construct_UScriptStruct_FCompositeFont_Statics::NewStructOps, TEXT("CompositeFont"), &Z_Registration_Info_UScriptStruct_CompositeFont, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeFont), 692943438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_2970364034(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
