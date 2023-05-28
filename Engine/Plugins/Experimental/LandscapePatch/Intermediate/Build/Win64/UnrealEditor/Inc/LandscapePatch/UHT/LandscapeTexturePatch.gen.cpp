// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeTexturePatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeTexturePatch() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeTexturePatch();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeTexturePatch_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightPatchTextureInfo();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_NoRegister();
	LANDSCAPEPATCH_API UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding();
	LANDSCAPEPATCH_API UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning();
	LANDSCAPEPATCH_API UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode();
	LANDSCAPEPATCH_API UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode();
	LANDSCAPEPATCH_API UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode();
	LANDSCAPEPATCH_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode;
	static UEnum* ELandscapeTexturePatchSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("ELandscapeTexturePatchSourceMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchSourceMode>()
	{
		return ELandscapeTexturePatchSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enumerators[] = {
		{ "ELandscapeTexturePatchSourceMode::None", (int64)ELandscapeTexturePatchSourceMode::None },
		{ "ELandscapeTexturePatchSourceMode::InternalTexture", (int64)ELandscapeTexturePatchSourceMode::InternalTexture },
		{ "ELandscapeTexturePatchSourceMode::TextureBackedRenderTarget", (int64)ELandscapeTexturePatchSourceMode::TextureBackedRenderTarget },
		{ "ELandscapeTexturePatchSourceMode::TextureAsset", (int64)ELandscapeTexturePatchSourceMode::TextureAsset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines where the patch gets its information, which affects its memory usage in editor (not in runtime,\n * since patches are baked directly into landscape and removed for runtime).\n */" },
		{ "InternalTexture.Comment", "/**\n\x09 * The data will be read from an internally-stored UTexture2D. In this mode, the patch can't be written-to via\n\x09 * blueprints, but it avoids storing the extra render target needed for TextureBackedRenderTarget.\n\x09 */" },
		{ "InternalTexture.Name", "ELandscapeTexturePatchSourceMode::InternalTexture" },
		{ "InternalTexture.ToolTip", "The data will be read from an internally-stored UTexture2D. In this mode, the patch can't be written-to via\nblueprints, but it avoids storing the extra render target needed for TextureBackedRenderTarget." },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "None.Comment", "/**\n\x09 * The patch is considered not to have any data stored for this element. Setting source mode to this is\n\x09 * a way to discard any internally stored data.\n\x09 */" },
		{ "None.Name", "ELandscapeTexturePatchSourceMode::None" },
		{ "None.ToolTip", "The patch is considered not to have any data stored for this element. Setting source mode to this is\na way to discard any internally stored data." },
		{ "TextureAsset.Comment", "/**\n\x09 * The data will be read from a UTexture asset (which can be a render target). Allows multiple patches\n\x09 * to share the same texture.\n\x09 */" },
		{ "TextureAsset.Name", "ELandscapeTexturePatchSourceMode::TextureAsset" },
		{ "TextureAsset.ToolTip", "The data will be read from a UTexture asset (which can be a render target). Allows multiple patches\nto share the same texture." },
		{ "TextureBackedRenderTarget.Comment", "/**\n\x09* The patch data will be read from an internally-stored render target, which can be written to via Blueprints\n\x09* and which gets serialized to an internally stored UTexture2D when needed. Uses double the memory of InternalTexture.\n\x09*/" },
		{ "TextureBackedRenderTarget.Name", "ELandscapeTexturePatchSourceMode::TextureBackedRenderTarget" },
		{ "TextureBackedRenderTarget.ToolTip", "The patch data will be read from an internally-stored render target, which can be written to via Blueprints\nand which gets serialized to an internally stored UTexture2D when needed. Uses double the memory of InternalTexture." },
		{ "ToolTip", "Determines where the patch gets its information, which affects its memory usage in editor (not in runtime,\nsince patches are baked directly into landscape and removed for runtime)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		"ELandscapeTexturePatchSourceMode",
		"ELandscapeTexturePatchSourceMode",
		Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.InnerSingleton, Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode.InnerSingleton;
	}
	static_assert(!int64(ELandscapeTexturePatchBlendMode::AlphaBlend)||!int64(ELandscapeTexturePatchBlendMode::Additive)||!int64(ELandscapeTexturePatchBlendMode::Min)||!int64(ELandscapeTexturePatchBlendMode::Max), "'ELandscapeTexturePatchBlendMode' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode;
	static UEnum* ELandscapeTexturePatchBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("ELandscapeTexturePatchBlendMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchBlendMode>()
	{
		return ELandscapeTexturePatchBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enumerators[] = {
		{ "ELandscapeTexturePatchBlendMode::AlphaBlend", (int64)ELandscapeTexturePatchBlendMode::AlphaBlend },
		{ "ELandscapeTexturePatchBlendMode::Additive", (int64)ELandscapeTexturePatchBlendMode::Additive },
		{ "ELandscapeTexturePatchBlendMode::Min", (int64)ELandscapeTexturePatchBlendMode::Min },
		{ "ELandscapeTexturePatchBlendMode::Max", (int64)ELandscapeTexturePatchBlendMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "// Interpreting the landscape mid value as 0, use the texture patch as an offset to\n// apply to the landscape. Falloff/alpha will just affect the degree to which the offset\n// is applied (e.g. alpha of 0.5 will apply just half the offset).\n" },
		{ "Additive.Name", "ELandscapeTexturePatchBlendMode::Additive" },
		{ "Additive.ToolTip", "Interpreting the landscape mid value as 0, use the texture patch as an offset to\napply to the landscape. Falloff/alpha will just affect the degree to which the offset\nis applied (e.g. alpha of 0.5 will apply just half the offset)." },
		{ "AlphaBlend.Comment", "// Let the patch specify the actual target height, and blend that with the existing\n// height using falloff/alpha. E.g. with no falloff and alpha 1, the landscape will\n// be set directly to the height sampled from patch. With alpha 0.5, landscape height \n// will be averaged evenly with patch height.\n" },
		{ "AlphaBlend.Name", "ELandscapeTexturePatchBlendMode::AlphaBlend" },
		{ "AlphaBlend.ToolTip", "Let the patch specify the actual target height, and blend that with the existing\nheight using falloff/alpha. E.g. with no falloff and alpha 1, the landscape will\nbe set directly to the height sampled from patch. With alpha 0.5, landscape height\nwill be averaged evenly with patch height." },
		{ "BlueprintType", "true" },
		{ "Comment", "// Determines how the patch is combined with the previous state of the landscape.\n" },
		{ "Max.Comment", "// Like Alpha Blend mode, but limited to only raising the existing landscape values\n" },
		{ "Max.Name", "ELandscapeTexturePatchBlendMode::Max" },
		{ "Max.ToolTip", "Like Alpha Blend mode, but limited to only raising the existing landscape values" },
		{ "Min.Comment", "// Like Alpha Blend mode, but limited to only lowering the existing landscape values\n" },
		{ "Min.Name", "ELandscapeTexturePatchBlendMode::Min" },
		{ "Min.ToolTip", "Like Alpha Blend mode, but limited to only lowering the existing landscape values" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Determines how the patch is combined with the previous state of the landscape." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		"ELandscapeTexturePatchBlendMode",
		"ELandscapeTexturePatchBlendMode",
		Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.InnerSingleton, Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode;
	static UEnum* ELandscapeTexturePatchFalloffMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("ELandscapeTexturePatchFalloffMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTexturePatchFalloffMode>()
	{
		return ELandscapeTexturePatchFalloffMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enumerators[] = {
		{ "ELandscapeTexturePatchFalloffMode::Circle", (int64)ELandscapeTexturePatchFalloffMode::Circle },
		{ "ELandscapeTexturePatchFalloffMode::RoundedRectangle", (int64)ELandscapeTexturePatchFalloffMode::RoundedRectangle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Comment", "// Affect landscape in a circle inscribed in the patch, and fall off across\n// a margin extending into that circle.\n" },
		{ "Circle.Name", "ELandscapeTexturePatchFalloffMode::Circle" },
		{ "Circle.ToolTip", "Affect landscape in a circle inscribed in the patch, and fall off across\na margin extending into that circle." },
		{ "Comment", "// Determines falloff method for the patch's influence.\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "RoundedRectangle.Comment", "// Affect entire rectangle of patch (except for circular corners), and fall off\n// across a margin extending inward from the boundary.\n" },
		{ "RoundedRectangle.Name", "ELandscapeTexturePatchFalloffMode::RoundedRectangle" },
		{ "RoundedRectangle.ToolTip", "Affect entire rectangle of patch (except for circular corners), and fall off\nacross a margin extending inward from the boundary." },
		{ "ToolTip", "Determines falloff method for the patch's influence." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		"ELandscapeTexturePatchFalloffMode",
		"ELandscapeTexturePatchFalloffMode",
		Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.InnerSingleton, Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding;
	static UEnum* ELandscapeTextureHeightPatchEncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("ELandscapeTextureHeightPatchEncoding"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTextureHeightPatchEncoding>()
	{
		return ELandscapeTextureHeightPatchEncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enumerators[] = {
		{ "ELandscapeTextureHeightPatchEncoding::ZeroToOne", (int64)ELandscapeTextureHeightPatchEncoding::ZeroToOne },
		{ "ELandscapeTextureHeightPatchEncoding::WorldUnits", (int64)ELandscapeTextureHeightPatchEncoding::WorldUnits },
		{ "ELandscapeTextureHeightPatchEncoding::NativePackedHeight", (int64)ELandscapeTextureHeightPatchEncoding::NativePackedHeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "NativePackedHeight.Comment", "// Values in texture are stored the same way they are in landscape actors: as 16 bit integers packed \n// into two bytes, mapping to [-256, 256 - 1/128] before applying landscape scale.\n" },
		{ "NativePackedHeight.Name", "ELandscapeTextureHeightPatchEncoding::NativePackedHeight" },
		{ "NativePackedHeight.ToolTip", "Values in texture are stored the same way they are in landscape actors: as 16 bit integers packed\ninto two bytes, mapping to [-256, 256 - 1/128] before applying landscape scale." },
		{ "WorldUnits.Comment", "// Values in texture are direct world-space heights.\n" },
		{ "WorldUnits.Name", "ELandscapeTextureHeightPatchEncoding::WorldUnits" },
		{ "WorldUnits.ToolTip", "Values in texture are direct world-space heights." },
		{ "ZeroToOne.Comment", "// Values in texture should be interpreted as being floats in the range [0,1]. User specifies what\n// value corresponds to height 0 (i.e. height when landscape is \"cleared\"), and the size of the \n// range in world units.\n" },
		{ "ZeroToOne.Name", "ELandscapeTextureHeightPatchEncoding::ZeroToOne" },
		{ "ZeroToOne.ToolTip", "Values in texture should be interpreted as being floats in the range [0,1]. User specifies what\nvalue corresponds to height 0 (i.e. height when landscape is \"cleared\"), and the size of the\nrange in world units." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		"ELandscapeTextureHeightPatchEncoding",
		"ELandscapeTextureHeightPatchEncoding",
		Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.InnerSingleton, Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning;
	static UEnum* ELandscapeTextureHeightPatchZeroHeightMeaning_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("ELandscapeTextureHeightPatchZeroHeightMeaning"));
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UEnum* StaticEnum<ELandscapeTextureHeightPatchZeroHeightMeaning>()
	{
		return ELandscapeTextureHeightPatchZeroHeightMeaning_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enumerators[] = {
		{ "ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ", (int64)ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ },
		{ "ELandscapeTextureHeightPatchZeroHeightMeaning::LandscapeZ", (int64)ELandscapeTextureHeightPatchZeroHeightMeaning::LandscapeZ },
		{ "ELandscapeTextureHeightPatchZeroHeightMeaning::WorldZero", (int64)ELandscapeTextureHeightPatchZeroHeightMeaning::WorldZero },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LandscapeZ.Comment", "// Zero height corresponds to Z = 0 in the local space of the landscape, regardless of the patch vertical\n// position. For instance, if landscape transform has z=-100 in world, then writing height 0 will correspond\n// to z=-100 in world coordinates, regardless of patch Z. \n" },
		{ "LandscapeZ.Name", "ELandscapeTextureHeightPatchZeroHeightMeaning::LandscapeZ" },
		{ "LandscapeZ.ToolTip", "Zero height corresponds to Z = 0 in the local space of the landscape, regardless of the patch vertical\nposition. For instance, if landscape transform has z=-100 in world, then writing height 0 will correspond\nto z=-100 in world coordinates, regardless of patch Z." },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "PatchZ.Comment", "// Zero height corresponds to the patch vertical position relative to the landscape. This moves\n// the results up and down as the patch moves up and down.\n" },
		{ "PatchZ.Name", "ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ" },
		{ "PatchZ.ToolTip", "Zero height corresponds to the patch vertical position relative to the landscape. This moves\nthe results up and down as the patch moves up and down." },
		{ "WorldZero.Comment", "// Zero height corresponds to the height of the world origin relative to landscape. In other words, writing\n// height 0 will correspond to world z = 0 regardless of patch Z or landscape transform (as long as landscape\n// transform still has Z up in world coordinates).\n" },
		{ "WorldZero.Name", "ELandscapeTextureHeightPatchZeroHeightMeaning::WorldZero" },
		{ "WorldZero.ToolTip", "Zero height corresponds to the height of the world origin relative to landscape. In other words, writing\nheight 0 will correspond to world z = 0 regardless of patch Z or landscape transform (as long as landscape\ntransform still has Z up in world coordinates)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		"ELandscapeTextureHeightPatchZeroHeightMeaning",
		"ELandscapeTextureHeightPatchZeroHeightMeaning",
		Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.InnerSingleton, Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings;
class UScriptStruct* FLandscapeTexturePatchEncodingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("LandscapeTexturePatchEncodingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.OuterSingleton;
}
template<> LANDSCAPEPATCH_API UScriptStruct* StaticStruct<FLandscapeTexturePatchEncodingSettings>()
{
	return FLandscapeTexturePatchEncodingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroInEncoding_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ZeroInEncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceEncodingScale_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WorldSpaceEncodingScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//~ A struct in case we find that we need other encoding settings.\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeTexturePatchEncodingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_ZeroInEncoding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The value in the patch data that corresponds to 0 landscape height (which is in line with patch Z when\n\x09 * \"Use Patch Z As Reference\" is true, and at landscape zero/mid value when false).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "The value in the patch data that corresponds to 0 landscape height (which is in line with patch Z when\n\"Use Patch Z As Reference\" is true, and at landscape zero/mid value when false)." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_ZeroInEncoding = { "ZeroInEncoding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeTexturePatchEncodingSettings, ZeroInEncoding), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_ZeroInEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_ZeroInEncoding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_WorldSpaceEncodingScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The scale that should be aplied to the data stored in the patch relative to the zero in the encoding, in world coordinates.\n\x09 * For instance if the encoding is [0,1], and 0.5 correponds to 0, a WorldSpaceEncoding Scale of 100 means that the resulting\n\x09 * values will lie in the range [-50, 50] in world space, which would be [-0.5, 0.5] in the landscape local heights if the Z\n\x09 * scale is 100.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "The scale that should be aplied to the data stored in the patch relative to the zero in the encoding, in world coordinates.\nFor instance if the encoding is [0,1], and 0.5 correponds to 0, a WorldSpaceEncoding Scale of 100 means that the resulting\nvalues will lie in the range [-50, 50] in world space, which would be [-0.5, 0.5] in the landscape local heights if the Z\nscale is 100." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_WorldSpaceEncodingScale = { "WorldSpaceEncodingScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeTexturePatchEncodingSettings, WorldSpaceEncodingScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_WorldSpaceEncodingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_WorldSpaceEncodingScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_ZeroInEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewProp_WorldSpaceEncodingScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
		nullptr,
		&NewStructOps,
		"LandscapeTexturePatchEncodingSettings",
		sizeof(FLandscapeTexturePatchEncodingSettings),
		alignof(FLandscapeTexturePatchEncodingSettings),
		Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings.InnerSingleton;
	}
	void ULandscapeWeightPatchTextureInfo::StaticRegisterNativesULandscapeWeightPatchTextureInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeWeightPatchTextureInfo);
	UClass* Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister()
	{
		return ULandscapeWeightPatchTextureInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeightmapLayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailPanelSourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailPanelSourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetailPanelSourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAlphaChannel_MetaData[];
#endif
		static void NewProp_bUseAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBlendMode_MetaData[];
#endif
		static void NewProp_bOverrideBlendMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBlendMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideBlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningPatch_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningPatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper class for ULandscapeTexturePatch that stores information for a given weight layer.\n * Should not be used outside this class, but does need to be a UObject (so can't be nested).\n */" },
		{ "IncludePath", "LandscapeTexturePatch.h" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Helper class for ULandscapeTexturePatch that stores information for a given weight layer.\nShould not be used outside this class, but does need to be a UObject (so can't be nested)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_WeightmapLayerName_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_WeightmapLayerName = { "WeightmapLayerName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, WeightmapLayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_WeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_WeightmapLayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_TextureAsset_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "Comment", "/** Texture to use when source mode is set to texture asset. */" },
		{ "DisallowedAssetDataTags", "VirtualTextureStreaming=True" },
		{ "EditCondition", "SourceMode == ELandscapeTexturePatchSourceMode::TextureAsset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Texture to use when source mode is set to texture asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_TextureAsset = { "TextureAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, TextureAsset), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_TextureAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_TextureAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_InternalData_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "Comment", "/** Not directly settable via detail panel- for display/debugging purposes only. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Not directly settable via detail panel- for display/debugging purposes only." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_InternalData = { "InternalData", nullptr, (EPropertyFlags)0x00260c00000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, InternalData), Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_InternalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_InternalData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, SourceMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode_MetaData)) }; // 114171930
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "Comment", "//~ This is EditInstanceOnly because we can't create textures in the blueprint editor due to the way\n//~ instanced properties are currently handled there.\n" },
		{ "DisplayName", "Source Mode" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode = { "DetailPanelSourceMode", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, DetailPanelSourceMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode_MetaData)) }; // 114171930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel_MetaData[] = {
		{ "Category", "WeightPatch" },
		{ "Comment", "//~ We could refactor things such that we always have an InternalData pointer, even when we use\n//~ a texture asset, and then we could use the boolean inside that instead (which needs to be there\n//~ so that we know how many channels we need). Not clear whether that will be any cleaner though.\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel_SetBit(void* Obj)
	{
		((ULandscapeWeightPatchTextureInfo*)Obj)->bUseAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel = { "bUseAlphaChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeWeightPatchTextureInfo), &Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode_MetaData[] = {
		{ "Comment", "// Can't make TOptional a UPROPERTY, hence these two.\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Can't make TOptional a UPROPERTY, hence these two." },
	};
#endif
	void Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode_SetBit(void* Obj)
	{
		((ULandscapeWeightPatchTextureInfo*)Obj)->bOverrideBlendMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode = { "bOverrideBlendMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeWeightPatchTextureInfo), &Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode = { "OverrideBlendMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, OverrideBlendMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode_MetaData)) }; // 743042709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OwningPatch_MetaData[] = {
		{ "Comment", "// Needed mainly so that we can get at the resolution...\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Needed mainly so that we can get at the resolution..." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OwningPatch = { "OwningPatch", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeWeightPatchTextureInfo, OwningPatch), Z_Construct_UClass_ULandscapeTexturePatch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OwningPatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OwningPatch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_WeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_TextureAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_InternalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_DetailPanelSourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bUseAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_bOverrideBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OverrideBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::NewProp_OwningPatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightPatchTextureInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::ClassParams = {
		&ULandscapeWeightPatchTextureInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeWeightPatchTextureInfo()
	{
		if (!Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.OuterSingleton, Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeWeightPatchTextureInfo>()
	{
		return ULandscapeWeightPatchTextureInfo::StaticClass();
	}
	ULandscapeWeightPatchTextureInfo::ULandscapeWeightPatchTextureInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightPatchTextureInfo);
	ULandscapeWeightPatchTextureInfo::~ULandscapeWeightPatchTextureInfo() {}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSnapToLandscape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapToLandscape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execReinitializeWeights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeWeights();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execReinitializeHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execClearWeightPatchBlendModeOverride)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWeightPatchBlendModeOverride(Z_Param_Out_InWeightmapLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetWeightPatchBlendModeOverride)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_GET_ENUM(ELandscapeTexturePatchBlendMode,Z_Param_BlendMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightPatchBlendModeOverride(Z_Param_Out_InWeightmapLayerName,ELandscapeTexturePatchBlendMode(Z_Param_BlendMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetUseAlphaChannelForWeightPatch)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_GET_UBOOL(Z_Param_bUseAlphaChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAlphaChannelForWeightPatch(Z_Param_Out_InWeightmapLayerName,Z_Param_bUseAlphaChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetWeightPatchRenderTarget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetWeightPatchRenderTarget(Z_Param_Out_InWeightmapLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetWeightPatchTextureAsset)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_GET_OBJECT(UTexture,Z_Param_TextureIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightPatchTextureAsset(Z_Param_Out_InWeightmapLayerName,Z_Param_TextureIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetWeightPatchSourceMode)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_GET_ENUM(ELandscapeTexturePatchSourceMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightPatchSourceMode(Z_Param_Out_InWeightmapLayerName,ELandscapeTexturePatchSourceMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetWeightPatchSourceMode)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELandscapeTexturePatchSourceMode*)Z_Param__Result=P_THIS->GetWeightPatchSourceMode(Z_Param_Out_InWeightmapLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetAllWeightPatchLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllWeightPatchLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execDisableAllWeightPatches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAllWeightPatches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execRemoveAllWeightPatches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllWeightPatches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execRemoveWeightPatch)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWeightPatch(Z_Param_Out_InWeightmapLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execAddWeightPatch)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_GET_ENUM(ELandscapeTexturePatchSourceMode,Z_Param_SourceMode);
		P_GET_UBOOL(Z_Param_bUseAlphaChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeightPatch(Z_Param_Out_InWeightmapLayerName,ELandscapeTexturePatchSourceMode(Z_Param_SourceMode),Z_Param_bUseAlphaChannel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetZeroHeightMeaning)
	{
		P_GET_ENUM(ELandscapeTextureHeightPatchZeroHeightMeaning,Z_Param_ZeroHeightMeaningIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning(Z_Param_ZeroHeightMeaningIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetHeightEncodingSettings)
	{
		P_GET_STRUCT_REF(FLandscapeTexturePatchEncodingSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightEncodingSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execResetHeightEncodingMode)
	{
		P_GET_ENUM(ELandscapeTextureHeightPatchEncoding,Z_Param_EncodingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding(Z_Param_EncodingMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetHeightEncodingMode)
	{
		P_GET_ENUM(ELandscapeTextureHeightPatchEncoding,Z_Param_EncodingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding(Z_Param_EncodingMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetUseAlphaChannelForHeight)
	{
		P_GET_UBOOL(Z_Param_bUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAlphaChannelForHeight(Z_Param_bUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetHeightRenderTargetFormat)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightRenderTargetFormat(ETextureRenderTargetFormat(Z_Param_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetHeightRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetHeightRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetHeightTextureAsset)
	{
		P_GET_OBJECT(UTexture,Z_Param_TextureIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightTextureAsset(Z_Param_TextureIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetHeightSourceMode)
	{
		P_GET_ENUM(ELandscapeTexturePatchSourceMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightSourceMode(ELandscapeTexturePatchSourceMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetHeightSourceMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELandscapeTexturePatchSourceMode*)Z_Param__Result=P_THIS->GetHeightSourceMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetBlendMode)
	{
		P_GET_ENUM(ELandscapeTexturePatchBlendMode,Z_Param_BlendModeIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendMode(ELandscapeTexturePatchBlendMode(Z_Param_BlendModeIn));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetFalloff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FalloffIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFalloff(Z_Param_FalloffIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetInitResolutionFromLandscape)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ResolutionMultiplier);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ResolutionOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInitResolutionFromLandscape(Z_Param_ResolutionMultiplier,Z_Param_Out_ResolutionOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetResolution)
	{
		P_GET_STRUCT(FVector2D,Z_Param_ResolutionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolution(Z_Param_ResolutionIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetFullUnscaledWorldSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetFullUnscaledWorldSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execSetUnscaledCoverage)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Coverage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnscaledCoverage(Z_Param_Coverage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetUnscaledCoverage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetUnscaledCoverage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeTexturePatch::execGetPatchToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetPatchToWorldTransform();
		P_NATIVE_END;
	}
	void ULandscapeTexturePatch::StaticRegisterNativesULandscapeTexturePatch()
	{
		UClass* Class = ULandscapeTexturePatch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeightPatch", &ULandscapeTexturePatch::execAddWeightPatch },
			{ "ClearWeightPatchBlendModeOverride", &ULandscapeTexturePatch::execClearWeightPatchBlendModeOverride },
			{ "DisableAllWeightPatches", &ULandscapeTexturePatch::execDisableAllWeightPatches },
			{ "GetAllWeightPatchLayerNames", &ULandscapeTexturePatch::execGetAllWeightPatchLayerNames },
			{ "GetFullUnscaledWorldSize", &ULandscapeTexturePatch::execGetFullUnscaledWorldSize },
			{ "GetHeightRenderTarget", &ULandscapeTexturePatch::execGetHeightRenderTarget },
			{ "GetHeightSourceMode", &ULandscapeTexturePatch::execGetHeightSourceMode },
			{ "GetInitResolutionFromLandscape", &ULandscapeTexturePatch::execGetInitResolutionFromLandscape },
			{ "GetPatchToWorldTransform", &ULandscapeTexturePatch::execGetPatchToWorldTransform },
			{ "GetResolution", &ULandscapeTexturePatch::execGetResolution },
			{ "GetUnscaledCoverage", &ULandscapeTexturePatch::execGetUnscaledCoverage },
			{ "GetWeightPatchRenderTarget", &ULandscapeTexturePatch::execGetWeightPatchRenderTarget },
			{ "GetWeightPatchSourceMode", &ULandscapeTexturePatch::execGetWeightPatchSourceMode },
			{ "ReinitializeHeight", &ULandscapeTexturePatch::execReinitializeHeight },
			{ "ReinitializeWeights", &ULandscapeTexturePatch::execReinitializeWeights },
			{ "RemoveAllWeightPatches", &ULandscapeTexturePatch::execRemoveAllWeightPatches },
			{ "RemoveWeightPatch", &ULandscapeTexturePatch::execRemoveWeightPatch },
			{ "ResetHeightEncodingMode", &ULandscapeTexturePatch::execResetHeightEncodingMode },
			{ "SetBlendMode", &ULandscapeTexturePatch::execSetBlendMode },
			{ "SetFalloff", &ULandscapeTexturePatch::execSetFalloff },
			{ "SetHeightEncodingMode", &ULandscapeTexturePatch::execSetHeightEncodingMode },
			{ "SetHeightEncodingSettings", &ULandscapeTexturePatch::execSetHeightEncodingSettings },
			{ "SetHeightRenderTargetFormat", &ULandscapeTexturePatch::execSetHeightRenderTargetFormat },
			{ "SetHeightSourceMode", &ULandscapeTexturePatch::execSetHeightSourceMode },
			{ "SetHeightTextureAsset", &ULandscapeTexturePatch::execSetHeightTextureAsset },
			{ "SetResolution", &ULandscapeTexturePatch::execSetResolution },
			{ "SetUnscaledCoverage", &ULandscapeTexturePatch::execSetUnscaledCoverage },
			{ "SetUseAlphaChannelForHeight", &ULandscapeTexturePatch::execSetUseAlphaChannelForHeight },
			{ "SetUseAlphaChannelForWeightPatch", &ULandscapeTexturePatch::execSetUseAlphaChannelForWeightPatch },
			{ "SetWeightPatchBlendModeOverride", &ULandscapeTexturePatch::execSetWeightPatchBlendModeOverride },
			{ "SetWeightPatchSourceMode", &ULandscapeTexturePatch::execSetWeightPatchSourceMode },
			{ "SetWeightPatchTextureAsset", &ULandscapeTexturePatch::execSetWeightPatchTextureAsset },
			{ "SetZeroHeightMeaning", &ULandscapeTexturePatch::execSetZeroHeightMeaning },
			{ "SnapToLandscape", &ULandscapeTexturePatch::execSnapToLandscape },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics
	{
		struct LandscapeTexturePatch_eventAddWeightPatch_Parms
		{
			FName InWeightmapLayerName;
			ELandscapeTexturePatchSourceMode SourceMode;
			bool bUseAlphaChannel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static void NewProp_bUseAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventAddWeightPatch_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventAddWeightPatch_Parms, SourceMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(nullptr, 0) }; // 114171930
	void Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_bUseAlphaChannel_SetBit(void* Obj)
	{
		((LandscapeTexturePatch_eventAddWeightPatch_Parms*)Obj)->bUseAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_bUseAlphaChannel = { "bUseAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeTexturePatch_eventAddWeightPatch_Parms), &Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_bUseAlphaChannel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::NewProp_bUseAlphaChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * By default, the layer is added with source mode set to be a texture-backed render target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "By default, the layer is added with source mode set to be a texture-backed render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "AddWeightPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::LandscapeTexturePatch_eventAddWeightPatch_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics
	{
		struct LandscapeTexturePatch_eventClearWeightPatchBlendModeOverride_Parms
		{
			FName InWeightmapLayerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventClearWeightPatchBlendModeOverride_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "ClearWeightPatchBlendModeOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::LandscapeTexturePatch_eventClearWeightPatchBlendModeOverride_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/** Sets the soure mode of all weight patches to \"None\". */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Sets the soure mode of all weight patches to \"None\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "DisableAllWeightPatches", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics
	{
		struct LandscapeTexturePatch_eventGetAllWeightPatchLayerNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetAllWeightPatchLayerNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetAllWeightPatchLayerNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::LandscapeTexturePatch_eventGetAllWeightPatchLayerNames_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics
	{
		struct LandscapeTexturePatch_eventGetFullUnscaledWorldSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetFullUnscaledWorldSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Gives size in unscaled world coordinates of the patch in the world, based off of UnscaledCoverage and\n\x09 * texture resolution (i.e., adds a half-pixel around UnscaledCoverage).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Gives size in unscaled world coordinates of the patch in the world, based off of UnscaledCoverage and\ntexture resolution (i.e., adds a half-pixel around UnscaledCoverage)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetFullUnscaledWorldSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::LandscapeTexturePatch_eventGetFullUnscaledWorldSize_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics
	{
		struct LandscapeTexturePatch_eventGetHeightRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetHeightRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetHeightRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::LandscapeTexturePatch_eventGetHeightRenderTarget_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics
	{
		struct LandscapeTexturePatch_eventGetHeightSourceMode_Parms
		{
			ELandscapeTexturePatchSourceMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetHeightSourceMode_Parms, ReturnValue), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(nullptr, 0) }; // 114171930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "// Height related functions:\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Height related functions:" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetHeightSourceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::LandscapeTexturePatch_eventGetHeightSourceMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics
	{
		struct LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms
		{
			float ResolutionMultiplier;
			FVector2D ResolutionOut;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ResolutionMultiplier = { "ResolutionMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms, ResolutionMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ResolutionOut = { "ResolutionOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms, ResolutionOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Success" },
	};
#endif
	void Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms), &Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ResolutionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ResolutionOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Given the landscape resolution, current patch coverage, and a landscape resolution multiplier, gives the\n\x09 * needed resolution of the landscape patch. I.e., figures out the number of pixels in the landcape that\n\x09 * would be in a region of such size, and then uses the resolution multiplier to give a result.\n\x09 *\n\x09 * @return true if successful (may fail if landscape is not set, for instance)\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ResolutionMultiplier", "1.0" },
		{ "ToolTip", "Given the landscape resolution, current patch coverage, and a landscape resolution multiplier, gives the\nneeded resolution of the landscape patch. I.e., figures out the number of pixels in the landcape that\nwould be in a region of such size, and then uses the resolution multiplier to give a result.\n\n@return true if successful (may fail if landscape is not set, for instance)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetInitResolutionFromLandscape", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::LandscapeTexturePatch_eventGetInitResolutionFromLandscape_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics
	{
		struct LandscapeTexturePatch_eventGetPatchToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetPatchToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Gets the transform from patch to world. The transform is based off of the component\n\x09 * transform, but with rotation changed to align to the landscape, only using the yaw\n\x09 * to rotate it relative to the landscape.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Gets the transform from patch to world. The transform is based off of the component\ntransform, but with rotation changed to align to the landscape, only using the yaw\nto rotate it relative to the landscape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetPatchToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::LandscapeTexturePatch_eventGetPatchToWorldTransform_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics
	{
		struct LandscapeTexturePatch_eventGetResolution_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Gets the size (in pixels) of the internal textures used by the patch. Does not reflect the resolution\n\x09 * of any used texture assets (if the source mode is texture asset).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Gets the size (in pixels) of the internal textures used by the patch. Does not reflect the resolution\nof any used texture assets (if the source mode is texture asset)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::LandscapeTexturePatch_eventGetResolution_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics
	{
		struct LandscapeTexturePatch_eventGetUnscaledCoverage_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetUnscaledCoverage_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Gives size in unscaled world coordinates (ie before applying patch transform) of the patch as measured \n\x09 * between the centers of the outermost pixels. Measuring the coverage this way means that a patch can \n\x09 * affect the same region of the landscape regardless of patch resolution.\n\x09 * This is also the range across which bilinear interpolation always has correct values, so the area outside \n\x09 * this center portion is usually set as a \"dead\" border that doesn't affect the landscape.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Gives size in unscaled world coordinates (ie before applying patch transform) of the patch as measured\nbetween the centers of the outermost pixels. Measuring the coverage this way means that a patch can\naffect the same region of the landscape regardless of patch resolution.\nThis is also the range across which bilinear interpolation always has correct values, so the area outside\nthis center portion is usually set as a \"dead\" border that doesn't affect the landscape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetUnscaledCoverage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::LandscapeTexturePatch_eventGetUnscaledCoverage_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics
	{
		struct LandscapeTexturePatch_eventGetWeightPatchRenderTarget_Parms
		{
			FName InWeightmapLayerName;
			UTextureRenderTarget2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetWeightPatchRenderTarget_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetWeightPatchRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetWeightPatchRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::LandscapeTexturePatch_eventGetWeightPatchRenderTarget_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics
	{
		struct LandscapeTexturePatch_eventGetWeightPatchSourceMode_Parms
		{
			FName InWeightmapLayerName;
			ELandscapeTexturePatchSourceMode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetWeightPatchSourceMode_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventGetWeightPatchSourceMode_Parms, ReturnValue), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(nullptr, 0) }; // 114171930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "GetWeightPatchSourceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::LandscapeTexturePatch_eventGetWeightPatchSourceMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "HeightPatch" },
		{ "Comment", "/**\n\x09 * Given the current initialization settings, reinitialize the height patch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Given the current initialization settings, reinitialize the height patch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "ReinitializeHeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WeightPatches" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "ReinitializeWeights", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "RemoveAllWeightPatches", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics
	{
		struct LandscapeTexturePatch_eventRemoveWeightPatch_Parms
		{
			FName InWeightmapLayerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventRemoveWeightPatch_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::NewProp_InWeightmapLayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "RemoveWeightPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::LandscapeTexturePatch_eventRemoveWeightPatch_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics
	{
		struct LandscapeTexturePatch_eventResetHeightEncodingMode_Parms
		{
			ELandscapeTextureHeightPatchEncoding EncodingMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::NewProp_EncodingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::NewProp_EncodingMode = { "EncodingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventResetHeightEncodingMode_Parms, EncodingMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding, METADATA_PARAMS(nullptr, 0) }; // 3085441348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::NewProp_EncodingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::NewProp_EncodingMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Just like SetSourceEncodingMode, but resets ZeroInEncoding and WorldSpaceEncodingScale to mode-specific defaults.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Just like SetSourceEncodingMode, but resets ZeroInEncoding and WorldSpaceEncodingScale to mode-specific defaults." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "ResetHeightEncodingMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::LandscapeTexturePatch_eventResetHeightEncodingMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics
	{
		struct LandscapeTexturePatch_eventSetBlendMode_Parms
		{
			ELandscapeTexturePatchBlendMode BlendModeIn;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendModeIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendModeIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::NewProp_BlendModeIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::NewProp_BlendModeIn = { "BlendModeIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetBlendMode_Parms, BlendModeIn), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode, METADATA_PARAMS(nullptr, 0) }; // 743042709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::NewProp_BlendModeIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::NewProp_BlendModeIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetBlendMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::LandscapeTexturePatch_eventSetBlendMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics
	{
		struct LandscapeTexturePatch_eventSetFalloff_Parms
		{
			float FalloffIn;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::NewProp_FalloffIn = { "FalloffIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetFalloff_Parms, FalloffIn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::NewProp_FalloffIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::LandscapeTexturePatch_eventSetFalloff_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics
	{
		struct LandscapeTexturePatch_eventSetHeightEncodingMode_Parms
		{
			ELandscapeTextureHeightPatchEncoding EncodingMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::NewProp_EncodingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::NewProp_EncodingMode = { "EncodingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetHeightEncodingMode_Parms, EncodingMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding, METADATA_PARAMS(nullptr, 0) }; // 3085441348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::NewProp_EncodingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::NewProp_EncodingMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Set the height encoding mode for the patch, which determines how stored values in the patch\n\x09 * are translated into heights when applying to landscape.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Set the height encoding mode for the patch, which determines how stored values in the patch\nare translated into heights when applying to landscape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetHeightEncodingMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::LandscapeTexturePatch_eventSetHeightEncodingMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics
	{
		struct LandscapeTexturePatch_eventSetHeightEncodingSettings_Parms
		{
			FLandscapeTexturePatchEncodingSettings Settings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetHeightEncodingSettings_Parms, Settings), Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::NewProp_Settings_MetaData)) }; // 1788006563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Set settings that determine how values in the patch are translated into heights. This is only\n\x09 * used if the encoding mode is not NativePackedHeight, where values are expected to be already\n\x09 * in the same space as the landscape heightmap.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Set settings that determine how values in the patch are translated into heights. This is only\nused if the encoding mode is not NativePackedHeight, where values are expected to be already\nin the same space as the landscape heightmap." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetHeightEncodingSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::LandscapeTexturePatch_eventSetHeightEncodingSettings_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics
	{
		struct LandscapeTexturePatch_eventSetHeightRenderTargetFormat_Parms
		{
			TEnumAsByte<ETextureRenderTargetFormat> Format;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetHeightRenderTargetFormat_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::NewProp_Format,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ETextureRenderTargetFormat", "ETextureRenderTargetFormat::RTF_R32f" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetHeightRenderTargetFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::LandscapeTexturePatch_eventSetHeightRenderTargetFormat_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics
	{
		struct LandscapeTexturePatch_eventSetHeightSourceMode_Parms
		{
			ELandscapeTexturePatchSourceMode NewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetHeightSourceMode_Parms, NewMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(nullptr, 0) }; // 114171930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Changes source mode. When changing between sources, existing data is copied from one to the other\n\x09 * when possible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Changes source mode. When changing between sources, existing data is copied from one to the other\nwhen possible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetHeightSourceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::LandscapeTexturePatch_eventSetHeightSourceMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics
	{
		struct LandscapeTexturePatch_eventSetHeightTextureAsset_Parms
		{
			UTexture* TextureIn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::NewProp_TextureIn = { "TextureIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetHeightTextureAsset_Parms, TextureIn), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::NewProp_TextureIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Sets the texture used for height when the height source mode is set to texture asset. Note that\n\x09 * virtual textures are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Sets the texture used for height when the height source mode is set to texture asset. Note that\nvirtual textures are not supported." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetHeightTextureAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::LandscapeTexturePatch_eventSetHeightTextureAsset_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics
	{
		struct LandscapeTexturePatch_eventSetResolution_Parms
		{
			FVector2D ResolutionIn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::NewProp_ResolutionIn = { "ResolutionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetResolution_Parms, ResolutionIn), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::NewProp_ResolutionIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Sets the resolution of the currently used internal texture or render target. Has no effect\n\x09 * if the source mode is set to an external texture asset.\n\x09 *\n\x09 * @return true if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Sets the resolution of the currently used internal texture or render target. Has no effect\nif the source mode is set to an external texture asset.\n\n@return true if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::LandscapeTexturePatch_eventSetResolution_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics
	{
		struct LandscapeTexturePatch_eventSetUnscaledCoverage_Parms
		{
			FVector2D Coverage;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coverage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::NewProp_Coverage = { "Coverage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetUnscaledCoverage_Parms, Coverage), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::NewProp_Coverage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Set the patch coverage (see GetUnscaledCoverage for description).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Set the patch coverage (see GetUnscaledCoverage for description)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetUnscaledCoverage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::LandscapeTexturePatch_eventSetUnscaledCoverage_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics
	{
		struct LandscapeTexturePatch_eventSetUseAlphaChannelForHeight_Parms
		{
			bool bUse;
		};
		static void NewProp_bUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::NewProp_bUse_SetBit(void* Obj)
	{
		((LandscapeTexturePatch_eventSetUseAlphaChannelForHeight_Parms*)Obj)->bUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeTexturePatch_eventSetUseAlphaChannelForHeight_Parms), &Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::NewProp_bUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetUseAlphaChannelForHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::LandscapeTexturePatch_eventSetUseAlphaChannelForHeight_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics
	{
		struct LandscapeTexturePatch_eventSetUseAlphaChannelForWeightPatch_Parms
		{
			FName InWeightmapLayerName;
			bool bUseAlphaChannel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static void NewProp_bUseAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetUseAlphaChannelForWeightPatch_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	void Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_bUseAlphaChannel_SetBit(void* Obj)
	{
		((LandscapeTexturePatch_eventSetUseAlphaChannelForWeightPatch_Parms*)Obj)->bUseAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_bUseAlphaChannel = { "bUseAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeTexturePatch_eventSetUseAlphaChannelForWeightPatch_Parms), &Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_bUseAlphaChannel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::NewProp_bUseAlphaChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetUseAlphaChannelForWeightPatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::LandscapeTexturePatch_eventSetUseAlphaChannelForWeightPatch_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics
	{
		struct LandscapeTexturePatch_eventSetWeightPatchBlendModeOverride_Parms
		{
			FName InWeightmapLayerName;
			ELandscapeTexturePatchBlendMode BlendMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchBlendModeOverride_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchBlendModeOverride_Parms, BlendMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode, METADATA_PARAMS(nullptr, 0) }; // 743042709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::NewProp_BlendMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetWeightPatchBlendModeOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::LandscapeTexturePatch_eventSetWeightPatchBlendModeOverride_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics
	{
		struct LandscapeTexturePatch_eventSetWeightPatchSourceMode_Parms
		{
			FName InWeightmapLayerName;
			ELandscapeTexturePatchSourceMode NewMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchSourceMode_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchSourceMode_Parms, NewMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(nullptr, 0) }; // 114171930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetWeightPatchSourceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::LandscapeTexturePatch_eventSetWeightPatchSourceMode_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics
	{
		struct LandscapeTexturePatch_eventSetWeightPatchTextureAsset_Parms
		{
			FName InWeightmapLayerName;
			UTexture* TextureIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchTextureAsset_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_TextureIn = { "TextureIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetWeightPatchTextureAsset_Parms, TextureIn), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::NewProp_TextureIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetWeightPatchTextureAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::LandscapeTexturePatch_eventSetWeightPatchTextureAsset_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics
	{
		struct LandscapeTexturePatch_eventSetZeroHeightMeaning_Parms
		{
			ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZeroHeightMeaningIn_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZeroHeightMeaningIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::NewProp_ZeroHeightMeaningIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::NewProp_ZeroHeightMeaningIn = { "ZeroHeightMeaningIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeTexturePatch_eventSetZeroHeightMeaning_Parms, ZeroHeightMeaningIn), Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning, METADATA_PARAMS(nullptr, 0) }; // 465601042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::NewProp_ZeroHeightMeaningIn_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::NewProp_ZeroHeightMeaningIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Set how zero height is interpreted, see comments in ELandscapeTextureHeightPatchZeroHeightMeaning.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Set how zero height is interpreted, see comments in ELandscapeTextureHeightPatchZeroHeightMeaning." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SetZeroHeightMeaning", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::LandscapeTexturePatch_eventSetZeroHeightMeaning_Parms), Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Initialization" },
		{ "Comment", "/**\n\x09 * Adjusts patch rotation to be aligned to a 90 degree increment relative to the landscape,\n\x09 * adjusts UnscaledPatchCoverage such that it becomes a multiple of landscape quad size, and\n\x09 * adjusts patch location so that the boundaries of the covered area lie on the nearest\n\x09 * landscape vertices.\n\x09 * Note that this doesn't adjust the resolution of the texture that the patch uses, so landscape\n\x09 * vertices within the inside of the patch may still not always align with texture patch pixel\n\x09 * centers (if the resolutions aren't multiples of each other).\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Adjusts patch rotation to be aligned to a 90 degree increment relative to the landscape,\nadjusts UnscaledPatchCoverage such that it becomes a multiple of landscape quad size, and\nadjusts patch location so that the boundaries of the covered area lie on the nearest\nlandscape vertices.\nNote that this doesn't adjust the resolution of the texture that the patch uses, so landscape\nvertices within the inside of the patch may still not always align with texture patch pixel\ncenters (if the resolutions aren't multiples of each other)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeTexturePatch, nullptr, "SnapToLandscape", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeTexturePatch);
	UClass* Z_Construct_UClass_ULandscapeTexturePatch_NoRegister()
	{
		return ULandscapeTexturePatch::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeTexturePatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnscaledPatchCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnscaledPatchCoverage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightSourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightSourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightSourceMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailPanelHeightSourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailPanelHeightSourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetailPanelHeightSourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightInternalData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightInternalData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightTextureAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightTextureAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextureAlphaForHeight_MetaData[];
#endif
		static void NewProp_bUseTextureAlphaForHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureAlphaForHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightEncoding_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightEncoding_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightEncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightEncodingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightEncodingSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZeroHeightMeaning_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroHeightMeaning_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZeroHeightMeaning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyComponentZScale_MetaData[];
#endif
		static void NewProp_bApplyComponentZScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyComponentZScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightPatches_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightPatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightPatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightPatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWeightPatches_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWeightPatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBaseResolutionOffLandscape_MetaData[];
#endif
		static void NewProp_bBaseResolutionOffLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBaseResolutionOffLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTextureSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitTextureSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTextureSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitTextureSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRenderTargetFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightRenderTargetFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeTexturePatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapePatchComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeTexturePatch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_AddWeightPatch, "AddWeightPatch" }, // 4052453101
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride, "ClearWeightPatchBlendModeOverride" }, // 3162610833
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_DisableAllWeightPatches, "DisableAllWeightPatches" }, // 1761238275
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetAllWeightPatchLayerNames, "GetAllWeightPatchLayerNames" }, // 1387833258
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetFullUnscaledWorldSize, "GetFullUnscaledWorldSize" }, // 4025359416
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightRenderTarget, "GetHeightRenderTarget" }, // 1106276494
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetHeightSourceMode, "GetHeightSourceMode" }, // 3847159257
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetInitResolutionFromLandscape, "GetInitResolutionFromLandscape" }, // 3900479174
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetPatchToWorldTransform, "GetPatchToWorldTransform" }, // 125423719
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetResolution, "GetResolution" }, // 3849054226
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetUnscaledCoverage, "GetUnscaledCoverage" }, // 678692156
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchRenderTarget, "GetWeightPatchRenderTarget" }, // 2403123652
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_GetWeightPatchSourceMode, "GetWeightPatchSourceMode" }, // 4160325964
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeHeight, "ReinitializeHeight" }, // 696005446
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_ReinitializeWeights, "ReinitializeWeights" }, // 1987422087
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_RemoveAllWeightPatches, "RemoveAllWeightPatches" }, // 407132809
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_RemoveWeightPatch, "RemoveWeightPatch" }, // 284900444
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_ResetHeightEncodingMode, "ResetHeightEncodingMode" }, // 3747042282
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetBlendMode, "SetBlendMode" }, // 1290228269
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetFalloff, "SetFalloff" }, // 1758520463
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingMode, "SetHeightEncodingMode" }, // 291795756
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightEncodingSettings, "SetHeightEncodingSettings" }, // 1032255913
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightRenderTargetFormat, "SetHeightRenderTargetFormat" }, // 960792377
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightSourceMode, "SetHeightSourceMode" }, // 3374742694
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetHeightTextureAsset, "SetHeightTextureAsset" }, // 1857462597
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetResolution, "SetResolution" }, // 1378847683
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetUnscaledCoverage, "SetUnscaledCoverage" }, // 3169025754
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForHeight, "SetUseAlphaChannelForHeight" }, // 2822090439
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch, "SetUseAlphaChannelForWeightPatch" }, // 721163626
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchBlendModeOverride, "SetWeightPatchBlendModeOverride" }, // 277949426
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchSourceMode, "SetWeightPatchSourceMode" }, // 3647846274
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetWeightPatchTextureAsset, "SetWeightPatchTextureAsset" }, // 4085327610
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SetZeroHeightMeaning, "SetZeroHeightMeaning" }, // 2246687298
		{ &Z_Construct_UFunction_ULandscapeTexturePatch_SnapToLandscape, "SnapToLandscape" }, // 2718290460
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Landscape" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LandscapeTexturePatch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, ResolutionX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, ResolutionY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_UnscaledPatchCoverage_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** At scale 1.0, the X and Y of the region affected by the height patch. This corresponds to the distance from the center\n\x09 of the first pixel to the center of the last pixel in the patch texture in the X and Y directions. */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "At scale 1.0, the X and Y of the region affected by the height patch. This corresponds to the distance from the center\n       of the first pixel to the center of the last pixel in the patch texture in the X and Y directions." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_UnscaledPatchCoverage = { "UnscaledPatchCoverage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, UnscaledPatchCoverage), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_UnscaledPatchCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_UnscaledPatchCoverage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, BlendMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchBlendMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode_MetaData)) }; // 743042709
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode = { "FalloffMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, FalloffMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchFalloffMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode_MetaData)) }; // 215417567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Distance (in unscaled world coordinates) across which to smoothly fall off the patch effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Distance (in unscaled world coordinates) across which to smoothly fall off the patch effects." },
		{ "UIMax", "2000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, Falloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_Falloff_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "// How the heightmap of the patch is stored. This is the property that is actually used, and it will\n// agree with DetailPanelHeightSourceMode at all times except when user is changing the latter via the\n// detail panel.\n//~ TODO: The property specifiers here are a hack to force this (hidden) property to be preserved across reruns of\n//~ a construction script in a blueprint actor. We should find the proper way that this is supposed to be done.\n" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "How the heightmap of the patch is stored. This is the property that is actually used, and it will\nagree with DetailPanelHeightSourceMode at all times except when user is changing the latter via the\ndetail panel." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode = { "HeightSourceMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightSourceMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode_MetaData)) }; // 114171930
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/**\n\x09 * How the heightmap of the patch is stored. Not settable in the detail panel of the blueprint editor- use SetHeightSourceMode\n\x09 * in blueprint actors instead.\n\x09 *///~ This is EditInstanceOnly because changing it creates/destroys the internal texture, and that cannot currently be\n//~ dealt with properly in the blueprint editor due to the way instanced properties are handled there. Could revisit when\n//~ UE-158706 is resolved.\n" },
		{ "DisplayName", "Source Mode" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "How the heightmap of the patch is stored. Not settable in the detail panel of the blueprint editor- use SetHeightSourceMode\nin blueprint actors instead." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode = { "DetailPanelHeightSourceMode", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, DetailPanelHeightSourceMode), Z_Construct_UEnum_LandscapePatch_ELandscapeTexturePatchSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode_MetaData)) }; // 114171930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightInternalData_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/** Not directly settable via detail panel- for display/debugging purposes only. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Not directly settable via detail panel- for display/debugging purposes only." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightInternalData = { "HeightInternalData", nullptr, (EPropertyFlags)0x00260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightInternalData), Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightInternalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightInternalData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightTextureAsset_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/**\n\x09 * Texture used when source mode is set to a texture asset.\n\x09 */" },
		{ "DisallowedAssetDataTags", "VirtualTextureStreaming=True" },
		{ "EditCondition", "HeightSourceMode == ELandscapeTexturePatchSourceMode::TextureAsset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Texture used when source mode is set to a texture asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightTextureAsset = { "HeightTextureAsset", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightTextureAsset), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightTextureAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightTextureAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/** When true, texture alpha channel will be used when applying the patch. */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "When true, texture alpha channel will be used when applying the patch." },
	};
#endif
	void Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight_SetBit(void* Obj)
	{
		((ULandscapeTexturePatch*)Obj)->bUseTextureAlphaForHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight = { "bUseTextureAlphaForHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeTexturePatch), &Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/** How the values stored in the patch represent the height. Not customizable for Internal Texture source mode, which always uses native packed height. */" },
		{ "EditCondition", "HeightSourceMode != ELandscapeTexturePatchSourceMode::InternalTexture" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "How the values stored in the patch represent the height. Not customizable for Internal Texture source mode, which always uses native packed height." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding = { "HeightEncoding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightEncoding), Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchEncoding, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding_MetaData)) }; // 3085441348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncodingSettings_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/** Encoding settings. Not relevant when using native packed height as the encoding. */" },
		{ "EditCondition", "HeightSourceMode != ELandscapeTexturePatchSourceMode::InternalTexture && HeightEncoding != ELandscapeTextureHeightPatchEncoding::NativePackedHeight" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Encoding settings. Not relevant when using native packed height as the encoding." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncodingSettings = { "HeightEncodingSettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightEncodingSettings), Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncodingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncodingSettings_MetaData)) }; // 1788006563
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/**\n\x09 * How 0 height is interpreted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "How 0 height is interpreted." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning = { "ZeroHeightMeaning", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, ZeroHeightMeaning), Z_Construct_UEnum_LandscapePatch_ELandscapeTextureHeightPatchZeroHeightMeaning, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning_MetaData)) }; // 465601042
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale_MetaData[] = {
		{ "Category", "HeightPatch" },
		{ "Comment", "/**\n\x09 * Whether to apply the patch Z scale to the height stored in the patch.\n\x09 */" },
		{ "DisplayName", "Apply Component Z Scale" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Whether to apply the patch Z scale to the height stored in the patch." },
	};
#endif
	void Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale_SetBit(void* Obj)
	{
		((ULandscapeTexturePatch*)Obj)->bApplyComponentZScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale = { "bApplyComponentZScale", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeTexturePatch), &Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_Inner_MetaData[] = {
		{ "Category", "WeightPatches" },
		{ "Comment", "//~ This is EditInstanceOnly because manipulating them in blueprint editor causes saving issues due to the way that\n//~ instanced properties are currently handled there.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_Inner = { "WeightPatches", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_MetaData[] = {
		{ "Category", "WeightPatches" },
		{ "Comment", "//~ This is EditInstanceOnly because manipulating them in blueprint editor causes saving issues due to the way that\n//~ instanced properties are currently handled there.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches = { "WeightPatches", nullptr, (EPropertyFlags)0x0024088000000809, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, WeightPatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_NumWeightPatches_MetaData[] = {
		{ "Comment", "// Used to detect changes to the number of weight patches via the detail panel, so that we can\n// initialize the \"owner\" pointer when patches are added or trigger update when patches are removed.\n" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Used to detect changes to the number of weight patches via the detail panel, so that we can\ninitialize the \"owner\" pointer when patches are added or trigger update when patches are removed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_NumWeightPatches = { "NumWeightPatches", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, NumWeightPatches), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_NumWeightPatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_NumWeightPatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape_MetaData[] = {
		{ "Category", "Initialization" },
		{ "Comment", "/** When initializing from landscape, set resolution based off of the landscape (and a multiplier). */" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "When initializing from landscape, set resolution based off of the landscape (and a multiplier)." },
	};
#endif
	void Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape_SetBit(void* Obj)
	{
		((ULandscapeTexturePatch*)Obj)->bBaseResolutionOffLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape = { "bBaseResolutionOffLandscape", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeTexturePatch), &Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionMultiplier_MetaData[] = {
		{ "Category", "Initialization" },
		{ "Comment", "/** \n\x09 * Multiplier to apply to landscape resolution when initializing patch resolution. A value greater than 1.0 will use higher\n\x09 * resolution than the landscape (perhaps useful for slightly more accurate results while not aligned to landscape), and\n\x09 * a value less that 1.0 will use lower.\n\x09 */" },
		{ "EditCondition", "bBaseResolutionOffLandscape" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Multiplier to apply to landscape resolution when initializing patch resolution. A value greater than 1.0 will use higher\nresolution than the landscape (perhaps useful for slightly more accurate results while not aligned to landscape), and\na value less that 1.0 will use lower." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionMultiplier = { "ResolutionMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, ResolutionMultiplier), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeX_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Texture width to use when reinitializing, if not basing resolution off landscape. */" },
		{ "EditCondition", "!bBaseResolutionOffLandscape" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Texture width to use when reinitializing, if not basing resolution off landscape." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeX = { "InitTextureSizeX", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, InitTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeY_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Texture height to use when reinitializing */" },
		{ "EditCondition", "!bBaseResolutionOffLandscape" },
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
		{ "ToolTip", "Texture height to use when reinitializing" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeY = { "InitTextureSizeY", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, InitTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightRenderTargetFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTexturePatch.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightRenderTargetFormat = { "HeightRenderTargetFormat", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTexturePatch, HeightRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightRenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightRenderTargetFormat_MetaData)) }; // 1004718673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeTexturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_UnscaledPatchCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_FalloffMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightSourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_DetailPanelHeightSourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightInternalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightTextureAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bUseTextureAlphaForHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightEncodingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ZeroHeightMeaning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bApplyComponentZScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_WeightPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_NumWeightPatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_bBaseResolutionOffLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_ResolutionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_InitTextureSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTexturePatch_Statics::NewProp_HeightRenderTargetFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeTexturePatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeTexturePatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeTexturePatch_Statics::ClassParams = {
		&ULandscapeTexturePatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeTexturePatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeTexturePatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTexturePatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeTexturePatch()
	{
		if (!Z_Registration_Info_UClass_ULandscapeTexturePatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeTexturePatch.OuterSingleton, Z_Construct_UClass_ULandscapeTexturePatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeTexturePatch.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeTexturePatch>()
	{
		return ULandscapeTexturePatch::StaticClass();
	}
	ULandscapeTexturePatch::ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeTexturePatch);
	ULandscapeTexturePatch::~ULandscapeTexturePatch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::EnumInfo[] = {
		{ ELandscapeTexturePatchSourceMode_StaticEnum, TEXT("ELandscapeTexturePatchSourceMode"), &Z_Registration_Info_UEnum_ELandscapeTexturePatchSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 114171930U) },
		{ ELandscapeTexturePatchBlendMode_StaticEnum, TEXT("ELandscapeTexturePatchBlendMode"), &Z_Registration_Info_UEnum_ELandscapeTexturePatchBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 743042709U) },
		{ ELandscapeTexturePatchFalloffMode_StaticEnum, TEXT("ELandscapeTexturePatchFalloffMode"), &Z_Registration_Info_UEnum_ELandscapeTexturePatchFalloffMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 215417567U) },
		{ ELandscapeTextureHeightPatchEncoding_StaticEnum, TEXT("ELandscapeTextureHeightPatchEncoding"), &Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3085441348U) },
		{ ELandscapeTextureHeightPatchZeroHeightMeaning_StaticEnum, TEXT("ELandscapeTextureHeightPatchZeroHeightMeaning"), &Z_Registration_Info_UEnum_ELandscapeTextureHeightPatchZeroHeightMeaning, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 465601042U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeTexturePatchEncodingSettings::StaticStruct, Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics::NewStructOps, TEXT("LandscapeTexturePatchEncodingSettings"), &Z_Registration_Info_UScriptStruct_LandscapeTexturePatchEncodingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeTexturePatchEncodingSettings), 1788006563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeWeightPatchTextureInfo, ULandscapeWeightPatchTextureInfo::StaticClass, TEXT("ULandscapeWeightPatchTextureInfo"), &Z_Registration_Info_UClass_ULandscapeWeightPatchTextureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeWeightPatchTextureInfo), 2170292009U) },
		{ Z_Construct_UClass_ULandscapeTexturePatch, ULandscapeTexturePatch::StaticClass, TEXT("ULandscapeTexturePatch"), &Z_Registration_Info_UClass_ULandscapeTexturePatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeTexturePatch), 3655287263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_3739596531(TEXT("/Script/LandscapePatch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
