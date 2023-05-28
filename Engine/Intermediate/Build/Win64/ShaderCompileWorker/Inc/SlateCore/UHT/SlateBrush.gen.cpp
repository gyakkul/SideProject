// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateBrush.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Types/SlateVector2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrush() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushDrawType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushImageType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FDeprecateSlateVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrushOutlineSettings();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateBrushDrawType;
	static UEnum* ESlateBrushDrawType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushDrawType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateBrushDrawType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushDrawType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushDrawType"));
		}
		return Z_Registration_Info_UEnum_ESlateBrushDrawType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateBrushDrawType::Type>()
	{
		return ESlateBrushDrawType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enumerators[] = {
		{ "ESlateBrushDrawType::NoDrawType", (int64)ESlateBrushDrawType::NoDrawType },
		{ "ESlateBrushDrawType::Box", (int64)ESlateBrushDrawType::Box },
		{ "ESlateBrushDrawType::Border", (int64)ESlateBrushDrawType::Border },
		{ "ESlateBrushDrawType::Image", (int64)ESlateBrushDrawType::Image },
		{ "ESlateBrushDrawType::RoundedBox", (int64)ESlateBrushDrawType::RoundedBox },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Border.Comment", "/** Draw a 3x3 border where the sides tile and the middle is empty */" },
		{ "Border.Name", "ESlateBrushDrawType::Border" },
		{ "Border.ToolTip", "Draw a 3x3 border where the sides tile and the middle is empty" },
		{ "Box.Comment", "/** Draw a 3x3 box, where the sides and the middle stretch based on the Margin */" },
		{ "Box.Name", "ESlateBrushDrawType::Box" },
		{ "Box.ToolTip", "Draw a 3x3 box, where the sides and the middle stretch based on the Margin" },
		{ "Comment", "/**\n * Enumerates ways in which an image can be drawn.\n */" },
		{ "Image.Comment", "/** Draw an image; margin is ignored */" },
		{ "Image.Name", "ESlateBrushDrawType::Image" },
		{ "Image.ToolTip", "Draw an image; margin is ignored" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "NoDrawType.Comment", "/** Don't do anything */" },
		{ "NoDrawType.DisplayName", "None" },
		{ "NoDrawType.Name", "ESlateBrushDrawType::NoDrawType" },
		{ "NoDrawType.ToolTip", "Don't do anything" },
		{ "RoundedBox.Comment", "/** Draw a solid rectangle with an outline and corner radius */" },
		{ "RoundedBox.Name", "ESlateBrushDrawType::RoundedBox" },
		{ "RoundedBox.ToolTip", "Draw a solid rectangle with an outline and corner radius" },
		{ "ToolTip", "Enumerates ways in which an image can be drawn." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateBrushDrawType",
		"ESlateBrushDrawType::Type",
		Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushDrawType()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushDrawType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateBrushDrawType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateBrushDrawType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateBrushDrawType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateBrushTileType;
	static UEnum* ESlateBrushTileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushTileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateBrushTileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushTileType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushTileType"));
		}
		return Z_Registration_Info_UEnum_ESlateBrushTileType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateBrushTileType::Type>()
	{
		return ESlateBrushTileType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enumerators[] = {
		{ "ESlateBrushTileType::NoTile", (int64)ESlateBrushTileType::NoTile },
		{ "ESlateBrushTileType::Horizontal", (int64)ESlateBrushTileType::Horizontal },
		{ "ESlateBrushTileType::Vertical", (int64)ESlateBrushTileType::Vertical },
		{ "ESlateBrushTileType::Both", (int64)ESlateBrushTileType::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "/** Tile in both directions */" },
		{ "Both.Name", "ESlateBrushTileType::Both" },
		{ "Both.ToolTip", "Tile in both directions" },
		{ "Comment", "/**\n * Enumerates tiling options for image drawing.\n */" },
		{ "Horizontal.Comment", "/** Tile the image horizontally */" },
		{ "Horizontal.Name", "ESlateBrushTileType::Horizontal" },
		{ "Horizontal.ToolTip", "Tile the image horizontally" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "NoTile.Comment", "/** Just stretch */" },
		{ "NoTile.Name", "ESlateBrushTileType::NoTile" },
		{ "NoTile.ToolTip", "Just stretch" },
		{ "ToolTip", "Enumerates tiling options for image drawing." },
		{ "Vertical.Comment", "/** Tile the image vertically */" },
		{ "Vertical.Name", "ESlateBrushTileType::Vertical" },
		{ "Vertical.ToolTip", "Tile the image vertically" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateBrushTileType",
		"ESlateBrushTileType::Type",
		Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushTileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateBrushTileType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateBrushTileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateBrushTileType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateBrushMirrorType;
	static UEnum* ESlateBrushMirrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushMirrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateBrushMirrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushMirrorType"));
		}
		return Z_Registration_Info_UEnum_ESlateBrushMirrorType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateBrushMirrorType::Type>()
	{
		return ESlateBrushMirrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enumerators[] = {
		{ "ESlateBrushMirrorType::NoMirror", (int64)ESlateBrushMirrorType::NoMirror },
		{ "ESlateBrushMirrorType::Horizontal", (int64)ESlateBrushMirrorType::Horizontal },
		{ "ESlateBrushMirrorType::Vertical", (int64)ESlateBrushMirrorType::Vertical },
		{ "ESlateBrushMirrorType::Both", (int64)ESlateBrushMirrorType::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Mirror in both directions. */" },
		{ "Both.Name", "ESlateBrushMirrorType::Both" },
		{ "Both.ToolTip", "Mirror in both directions." },
		{ "Comment", "/**\n * Possible options for mirroring the brush image\n */" },
		{ "Horizontal.Comment", "/** Mirror the image horizontally. */" },
		{ "Horizontal.Name", "ESlateBrushMirrorType::Horizontal" },
		{ "Horizontal.ToolTip", "Mirror the image horizontally." },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "NoMirror.Comment", "/** Don't mirror anything, just draw the texture as it is. */" },
		{ "NoMirror.Name", "ESlateBrushMirrorType::NoMirror" },
		{ "NoMirror.ToolTip", "Don't mirror anything, just draw the texture as it is." },
		{ "ToolTip", "Possible options for mirroring the brush image" },
		{ "Vertical.Comment", "/** Mirror the image vertically. */" },
		{ "Vertical.Name", "ESlateBrushMirrorType::Vertical" },
		{ "Vertical.ToolTip", "Mirror the image vertically." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateBrushMirrorType",
		"ESlateBrushMirrorType::Type",
		Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushMirrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateBrushMirrorType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateBrushMirrorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateBrushImageType;
	static UEnum* ESlateBrushImageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushImageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateBrushImageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushImageType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushImageType"));
		}
		return Z_Registration_Info_UEnum_ESlateBrushImageType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateBrushImageType::Type>()
	{
		return ESlateBrushImageType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enumerators[] = {
		{ "ESlateBrushImageType::NoImage", (int64)ESlateBrushImageType::NoImage },
		{ "ESlateBrushImageType::FullColor", (int64)ESlateBrushImageType::FullColor },
		{ "ESlateBrushImageType::Linear", (int64)ESlateBrushImageType::Linear },
		{ "ESlateBrushImageType::Vector", (int64)ESlateBrushImageType::Vector },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates brush image types.\n */" },
		{ "FullColor.Comment", "/** The image to be loaded is in full color. */" },
		{ "FullColor.Name", "ESlateBrushImageType::FullColor" },
		{ "FullColor.ToolTip", "The image to be loaded is in full color." },
		{ "Linear.Comment", "/** The image is a special texture in linear space (usually a rendering resource such as a lookup table). */" },
		{ "Linear.Name", "ESlateBrushImageType::Linear" },
		{ "Linear.ToolTip", "The image is a special texture in linear space (usually a rendering resource such as a lookup table)." },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "NoImage.Comment", "/** No image is loaded.  Color only brushes, transparent brushes etc. */" },
		{ "NoImage.Name", "ESlateBrushImageType::NoImage" },
		{ "NoImage.ToolTip", "No image is loaded.  Color only brushes, transparent brushes etc." },
		{ "ToolTip", "Enumerates brush image types." },
		{ "Vector.Comment", "/** The image is vector graphics and will be rendered and cached in full color using size/scale requested by slate */" },
		{ "Vector.Name", "ESlateBrushImageType::Vector" },
		{ "Vector.ToolTip", "The image is vector graphics and will be rendered and cached in full color using size/scale requested by slate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateBrushImageType",
		"ESlateBrushImageType::Type",
		Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushImageType()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushImageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateBrushImageType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateBrushImageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateBrushImageType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateBrushRoundingType;
	static UEnum* ESlateBrushRoundingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushRoundingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateBrushRoundingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESlateBrushRoundingType"));
		}
		return Z_Registration_Info_UEnum_ESlateBrushRoundingType.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESlateBrushRoundingType::Type>()
	{
		return ESlateBrushRoundingType_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enumerators[] = {
		{ "ESlateBrushRoundingType::FixedRadius", (int64)ESlateBrushRoundingType::FixedRadius },
		{ "ESlateBrushRoundingType::HalfHeightRadius", (int64)ESlateBrushRoundingType::HalfHeightRadius },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates rounding options\n */" },
		{ "FixedRadius.Comment", "/** Use the specified Radius **/" },
		{ "FixedRadius.Name", "ESlateBrushRoundingType::FixedRadius" },
		{ "FixedRadius.ToolTip", "Use the specified Radius *" },
		{ "HalfHeightRadius.Comment", "/** The rounding radius should be half the height such that it always looks perfectly round **/" },
		{ "HalfHeightRadius.Name", "ESlateBrushRoundingType::HalfHeightRadius" },
		{ "HalfHeightRadius.ToolTip", "The rounding radius should be half the height such that it always looks perfectly round *" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Enumerates rounding options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESlateBrushRoundingType",
		"ESlateBrushRoundingType::Type",
		Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType()
	{
		if (!Z_Registration_Info_UEnum_ESlateBrushRoundingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateBrushRoundingType.InnerSingleton, Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateBrushRoundingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings;
class UScriptStruct* FSlateBrushOutlineSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateBrushOutlineSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateBrushOutlineSettings>()
{
	return FSlateBrushOutlineSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadii_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRadii;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundingType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBrushTransparency_MetaData[];
#endif
		static void NewProp_bUseBrushTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBrushTransparency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Possible options for rounded box brush image\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Possible options for rounded box brush image" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateBrushOutlineSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_CornerRadii_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Radius in Slate Units applied to the outline at each corner. X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Radius in Slate Units applied to the outline at each corner. X = Top Left, Y = Top Right, Z = Bottom Right, W = Bottom Left" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_CornerRadii = { "CornerRadii", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrushOutlineSettings, CornerRadii), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_CornerRadii_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_CornerRadii_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Tinting applied to the border outline. */" },
		{ "DisplayName", "Outline" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Tinting applied to the border outline." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrushOutlineSettings, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Color_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Line width in Slate Units applied to the border outline. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Line width in Slate Units applied to the border outline." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrushOutlineSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_RoundingType_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** The Rounding Type **/" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "The Rounding Type *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_RoundingType = { "RoundingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrushOutlineSettings, RoundingType), Z_Construct_UEnum_SlateCore_ESlateBrushRoundingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_RoundingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_RoundingType_MetaData)) }; // 1606112441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** True if we should use the owning brush's transparency as our own **/" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "True if we should use the owning brush's transparency as our own *" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency_SetBit(void* Obj)
	{
		((FSlateBrushOutlineSettings*)Obj)->bUseBrushTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency = { "bUseBrushTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSlateBrushOutlineSettings), &Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_CornerRadii,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_RoundingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewProp_bUseBrushTransparency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateBrushOutlineSettings",
		sizeof(FSlateBrushOutlineSettings),
		alignof(FSlateBrushOutlineSettings),
		Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateBrushOutlineSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.InnerSingleton, Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateBrush;
class UScriptStruct* FSlateBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateBrush, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateBrush"));
	}
	return Z_Registration_Info_UScriptStruct_SlateBrush.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateBrush>()
{
	return FSlateBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicallyLoaded_MetaData[];
#endif
		static void NewProp_bIsDynamicallyLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicallyLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasUObject_MetaData[];
#endif
		static void NewProp_bHasUObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasUObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawAs_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawAs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mirroring_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mirroring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TintColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TintColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVRegion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVRegion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A brush which contains information about how to draw a Slate element\n *///, meta = (HasNativeMake = \"\"))\n" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "A brush which contains information about how to draw a Slate element\n //, meta = (HasNativeMake = \"\"))" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded_MetaData[] = {
		{ "Comment", "/** Whether or not the brush path is a path to a UObject */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Whether or not the brush path is a path to a UObject" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded_SetBit(void* Obj)
	{
		((FSlateBrush*)Obj)->bIsDynamicallyLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded = { "bIsDynamicallyLoaded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSlateBrush), &Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject_MetaData[] = {
		{ "Comment", "/** Whether or not the brush has a UTexture resource */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Whether or not the brush has a UTexture resource" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject_SetBit(void* Obj)
	{
		((FSlateBrush*)Obj)->bHasUObject_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject = { "bHasUObject", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSlateBrush), &Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_DrawAs_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** How to draw the image */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "How to draw the image" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_DrawAs = { "DrawAs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, DrawAs), Z_Construct_UEnum_SlateCore_ESlateBrushDrawType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_DrawAs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_DrawAs_MetaData)) }; // 2311007087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** How to tile the image in Image mode */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "How to tile the image in Image mode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, Tiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tiling_MetaData)) }; // 3702849228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Mirroring_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** How to mirror the image in Image mode.  This is normally only used for dynamic image brushes where the source texture\n\x09    comes from a hardware device such as a web camera. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "How to mirror the image in Image mode.  This is normally only used for dynamic image brushes where the source texture\n          comes from a hardware device such as a web camera." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Mirroring = { "Mirroring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, Mirroring), Z_Construct_UEnum_SlateCore_ESlateBrushMirrorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Mirroring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Mirroring_MetaData)) }; // 1115368787
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageType_MetaData[] = {
		{ "Comment", "/** The type of image */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "The type of image" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageType = { "ImageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, ImageType), Z_Construct_UEnum_SlateCore_ESlateBrushImageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageType_MetaData)) }; // 3711090066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Size of the resource in Slate Units */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Size of the resource in Slate Units" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, ImageSize), Z_Construct_UScriptStruct_FDeprecateSlateVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageSize_MetaData)) }; // 3533773233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** The margin to use in Box and Border modes */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "The margin to use in Box and Border modes" },
		{ "UVSpace", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Margin_MetaData)) }; // 2014822612
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tint_MetaData[] = {
		{ "Comment", "/** Tinting applied to the image. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Tinting applied to the image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x00100008a0000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, Tint_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_TintColor_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Tinting applied to the image. */" },
		{ "DisplayName", "Tint" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Tinting applied to the image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_TintColor = { "TintColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, TintColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_TintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_TintColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_OutlineSettings_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** How to draw the outline.  Currently only used for RoundedBox type brushes. */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "How to draw the outline.  Currently only used for RoundedBox type brushes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_OutlineSettings = { "OutlineSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, OutlineSettings), Z_Construct_UScriptStruct_FSlateBrushOutlineSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_OutlineSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_OutlineSettings_MetaData)) }; // 3251881569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Brush" },
		{ "Comment", "/**\n\x09 * The image to render for this brush, can be a UTexture or UMaterialInterface or an object implementing \n\x09 * the AtlasedTextureInterface. \n\x09 */" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayName", "Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "The image to render for this brush, can be a UTexture or UMaterialInterface or an object implementing\nthe AtlasedTextureInterface." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceName_MetaData[] = {
		{ "Comment", "/** The name of the rendering resource to use */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "The name of the rendering resource to use" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, ResourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_UVRegion_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Optional UV region for an image\n\x09 *  When valid - overrides UV region specified in resource proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/Styling/SlateBrush.h" },
		{ "ToolTip", "Optional UV region for an image\nWhen valid - overrides UV region specified in resource proxy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_UVRegion = { "UVRegion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateBrush, UVRegion), Z_Construct_UScriptStruct_FBox2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_UVRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_UVRegion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bIsDynamicallyLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_bHasUObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_DrawAs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Mirroring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Margin,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_Tint,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_TintColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_OutlineSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_ResourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateBrush_Statics::NewProp_UVRegion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateBrush",
		sizeof(FSlateBrush),
		alignof(FSlateBrush),
		Z_Construct_UScriptStruct_FSlateBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateBrush.InnerSingleton, Z_Construct_UScriptStruct_FSlateBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateBrush.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::EnumInfo[] = {
		{ ESlateBrushDrawType_StaticEnum, TEXT("ESlateBrushDrawType"), &Z_Registration_Info_UEnum_ESlateBrushDrawType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2311007087U) },
		{ ESlateBrushTileType_StaticEnum, TEXT("ESlateBrushTileType"), &Z_Registration_Info_UEnum_ESlateBrushTileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3702849228U) },
		{ ESlateBrushMirrorType_StaticEnum, TEXT("ESlateBrushMirrorType"), &Z_Registration_Info_UEnum_ESlateBrushMirrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1115368787U) },
		{ ESlateBrushImageType_StaticEnum, TEXT("ESlateBrushImageType"), &Z_Registration_Info_UEnum_ESlateBrushImageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3711090066U) },
		{ ESlateBrushRoundingType_StaticEnum, TEXT("ESlateBrushRoundingType"), &Z_Registration_Info_UEnum_ESlateBrushRoundingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1606112441U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::ScriptStructInfo[] = {
		{ FSlateBrushOutlineSettings::StaticStruct, Z_Construct_UScriptStruct_FSlateBrushOutlineSettings_Statics::NewStructOps, TEXT("SlateBrushOutlineSettings"), &Z_Registration_Info_UScriptStruct_SlateBrushOutlineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateBrushOutlineSettings), 3251881569U) },
		{ FSlateBrush::StaticStruct, Z_Construct_UScriptStruct_FSlateBrush_Statics::NewStructOps, TEXT("SlateBrush"), &Z_Registration_Info_UScriptStruct_SlateBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateBrush), 4256420591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_1826432816(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
