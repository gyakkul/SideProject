// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Font.h"
#include "../../Source/Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Fonts/CompositeFont.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFont() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UFont();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFontCacheType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontImportOptionsData();
	SLATECORE_API UClass* Z_Construct_UClass_UFontProviderInterface_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeFont();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontCacheType;
	static UEnum* EFontCacheType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFontCacheType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFontCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFontCacheType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFontCacheType"));
		}
		return Z_Registration_Info_UEnum_EFontCacheType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFontCacheType>()
	{
		return EFontCacheType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFontCacheType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enumerators[] = {
		{ "EFontCacheType::Offline", (int64)EFontCacheType::Offline },
		{ "EFontCacheType::Runtime", (int64)EFontCacheType::Runtime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumerates supported font caching types. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "Offline.Comment", "/** The font is using offline caching (this is how UFont traditionally worked). */" },
		{ "Offline.Name", "EFontCacheType::Offline" },
		{ "Offline.ToolTip", "The font is using offline caching (this is how UFont traditionally worked)." },
		{ "Runtime.Comment", "/** The font is using runtime caching (this is how Slate fonts work). */" },
		{ "Runtime.Name", "EFontCacheType::Runtime" },
		{ "Runtime.ToolTip", "The font is using runtime caching (this is how Slate fonts work)." },
		{ "ToolTip", "Enumerates supported font caching types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFontCacheType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFontCacheType",
		"EFontCacheType",
		Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFontCacheType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFontCacheType()
	{
		if (!Z_Registration_Info_UEnum_EFontCacheType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontCacheType.InnerSingleton, Z_Construct_UEnum_Engine_EFontCacheType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFontCacheType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontCharacter;
class UScriptStruct* FFontCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontCharacter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FontCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_FontCharacter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontCharacter>()
{
	return FFontCharacter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFontCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartU_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartV_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_USize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_USize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This struct is serialized using native serialization so any changes to it require a package version bump. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "This struct is serialized using native serialization so any changes to it require a package version bump." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFontCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontCharacter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU = { "StartU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, StartU), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV = { "StartV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, StartV), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize = { "USize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, USize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize = { "VSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, VSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, TextureIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData[] = {
		{ "Category", "FontCharacter" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset = { "VerticalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFontCharacter, VerticalOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_StartV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_USize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_TextureIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontCharacter_Statics::NewProp_VerticalOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FontCharacter",
		sizeof(FFontCharacter),
		alignof(FFontCharacter),
		Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFontCharacter()
	{
		if (!Z_Registration_Info_UScriptStruct_FontCharacter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontCharacter.InnerSingleton, Z_Construct_UScriptStruct_FFontCharacter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FontCharacter.InnerSingleton;
	}
	void UFont::StaticRegisterNativesUFont()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFont);
	UClass* Z_Construct_UClass_UFont_NoRegister()
	{
		return UFont::StaticClass();
	}
	struct Z_Construct_UClass_UFont_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FontCacheType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontCacheType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FontCacheType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRemapped_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IsRemapped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ascent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ascent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Descent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leading_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Leading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Kerning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCharacters;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharHeight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharHeight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaxCharHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyFontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LegacyFontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyFontName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LegacyFontName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeFont_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompositeFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFont_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Font" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A font object, for use by Slate, UMG, and Canvas.\n *\n * A font can either be:\n *   * Runtime cached - The font contains a series of TTF files that combine to form a composite font. The glyphs are cached on demand when required at runtime.\n *   * Offline cached - The font contains a series of textures containing pre-baked cached glyphs and their associated texture coordinates.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Font.h" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "A font object, for use by Slate, UMG, and Canvas.\n\nA font can either be:\n  * Runtime cached - The font contains a series of TTF files that combine to form a composite font. The glyphs are cached on demand when required at runtime.\n  * Offline cached - The font contains a series of textures containing pre-baked cached glyphs and their associated texture coordinates." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData[] = {
		{ "Category", "Font" },
		{ "Comment", "/** What kind of font caching should we use? This controls which options we see */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "What kind of font caching should we use? This controls which options we see" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType = { "FontCacheType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, FontCacheType), Z_Construct_UEnum_Engine_EFontCacheType, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_MetaData)) }; // 4126055074
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFontCharacter, METADATA_PARAMS(nullptr, 0) }; // 345986492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** List of characters in the font.  For a MultiFont, this will include all characters in all sub-fonts!  Thus,\n\x09\x09the number of characters in this array isn't necessary the number of characters available in the font */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "List of characters in the font.  For a MultiFont, this will include all characters in all sub-fonts!  Thus,\n              the number of characters in this array isn't necessary the number of characters available in the font" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Characters_MetaData)) }; // 345986492
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData[] = {
		{ "Comment", "/** Textures that store this font's glyph image data *///NOTE: Do not expose this to the editor as it has nasty crash potential\n" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Textures that store this font's glyph image data //NOTE: Do not expose this to the editor as it has nasty crash potential" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData[] = {
		{ "Comment", "/** True if font is 'remapped'.  That is, the character array is not a direct mapping to unicode values.  Instead,\n\x09\x09""all characters are indexed indirectly through the CharRemap array */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "True if font is 'remapped'.  That is, the character array is not a direct mapping to unicode values.  Instead,\n              all characters are indexed indirectly through the CharRemap array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped = { "IsRemapped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, IsRemapped), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** Font metrics. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Font metrics." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_EmScale = { "EmScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, EmScale), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_EmScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Ascent = { "Ascent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Ascent), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Ascent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Descent = { "Descent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Descent), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Descent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Leading = { "Leading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Leading), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Leading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** Default horizontal spacing between characters when rendering text with this font */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Default horizontal spacing between characters when rendering text with this font" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, Kerning), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_Kerning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** Options used when importing this font */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Options used when importing this font" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, ImportOptions), Z_Construct_UScriptStruct_FFontImportOptionsData, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions_MetaData)) }; // 4147592040
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData[] = {
		{ "Comment", "/** Number of characters in the font, not including multiple instances of the same character (for multi-fonts).\n\x09\x09This is cached at load-time or creation time, and is never serialized. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Number of characters in the font, not including multiple instances of the same character (for multi-fonts).\n              This is cached at load-time or creation time, and is never serialized." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters = { "NumCharacters", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, NumCharacters), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_Inner = { "MaxCharHeight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData[] = {
		{ "Comment", "/** The maximum height of a character in this font.  For multi-fonts, this array will contain a maximum\n\x09\x09""character height for each multi-font, otherwise the array will contain only a single element.  This is\n\x09\x09""cached at load-time or creation time, and is never serialized. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The maximum height of a character in this font.  For multi-fonts, this array will contain a maximum\n              character height for each multi-font, otherwise the array will contain only a single element.  This is\n              cached at load-time or creation time, and is never serialized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight = { "MaxCharHeight", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, MaxCharHeight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "OfflineFont" },
		{ "Comment", "/** Scale to apply to the font. */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Scale to apply to the font." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, ScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData[] = {
		{ "Category", "RuntimeFont" },
		{ "Comment", "/** The default size of the font used for legacy Canvas APIs that don't specify a font size */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The default size of the font used for legacy Canvas APIs that don't specify a font size" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize = { "LegacyFontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, LegacyFontSize), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData[] = {
		{ "Category", "RuntimeFont" },
		{ "Comment", "/** The default font name to use for legacy Canvas APIs that don't specify a font name */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "The default font name to use for legacy Canvas APIs that don't specify a font name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName = { "LegacyFontName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, LegacyFontName), METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData[] = {
		{ "Comment", "/** Embedded composite font data */" },
		{ "ModuleRelativePath", "Classes/Engine/Font.h" },
		{ "ToolTip", "Embedded composite font data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont = { "CompositeFont", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFont, CompositeFont), Z_Construct_UScriptStruct_FCompositeFont, METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont_MetaData)) }; // 692943438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_FontCacheType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Characters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Characters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_IsRemapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_EmScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Ascent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Descent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Leading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_Kerning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_ImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_NumCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_MaxCharHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_LegacyFontName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFont_Statics::NewProp_CompositeFont,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFont_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFontProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UFont, IFontProviderInterface), false },  // 2375322940
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFont_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFont>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFont_Statics::ClassParams = {
		&UFont::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFont_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFont_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFont_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFont()
	{
		if (!Z_Registration_Info_UClass_UFont.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFont.OuterSingleton, Z_Construct_UClass_UFont_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFont.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UFont>()
	{
		return UFont::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFont);
	UFont::~UFont() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFont)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::EnumInfo[] = {
		{ EFontCacheType_StaticEnum, TEXT("EFontCacheType"), &Z_Registration_Info_UEnum_EFontCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4126055074U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ScriptStructInfo[] = {
		{ FFontCharacter::StaticStruct, Z_Construct_UScriptStruct_FFontCharacter_Statics::NewStructOps, TEXT("FontCharacter"), &Z_Registration_Info_UScriptStruct_FontCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontCharacter), 345986492U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFont, UFont::StaticClass, TEXT("UFont"), &Z_Registration_Info_UClass_UFont, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFont), 3910001526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_1748268668(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Font_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
