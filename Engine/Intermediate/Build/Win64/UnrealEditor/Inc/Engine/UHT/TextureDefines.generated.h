// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureDefines.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureDefines_generated_h
#error "TextureDefines.generated.h already included, missing '#pragma once' in TextureDefines.h"
#endif
#define ENGINE_TextureDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h


#define FOREACH_ENUM_TEXTUREGROUP(op) \
	op(TEXTUREGROUP_World) \
	op(TEXTUREGROUP_WorldNormalMap) \
	op(TEXTUREGROUP_WorldSpecular) \
	op(TEXTUREGROUP_Character) \
	op(TEXTUREGROUP_CharacterNormalMap) \
	op(TEXTUREGROUP_CharacterSpecular) \
	op(TEXTUREGROUP_Weapon) \
	op(TEXTUREGROUP_WeaponNormalMap) \
	op(TEXTUREGROUP_WeaponSpecular) \
	op(TEXTUREGROUP_Vehicle) \
	op(TEXTUREGROUP_VehicleNormalMap) \
	op(TEXTUREGROUP_VehicleSpecular) \
	op(TEXTUREGROUP_Cinematic) \
	op(TEXTUREGROUP_Effects) \
	op(TEXTUREGROUP_EffectsNotFiltered) \
	op(TEXTUREGROUP_Skybox) \
	op(TEXTUREGROUP_UI) \
	op(TEXTUREGROUP_Lightmap) \
	op(TEXTUREGROUP_RenderTarget) \
	op(TEXTUREGROUP_MobileFlattened) \
	op(TEXTUREGROUP_ProcBuilding_Face) \
	op(TEXTUREGROUP_ProcBuilding_LightMap) \
	op(TEXTUREGROUP_Shadowmap) \
	op(TEXTUREGROUP_ColorLookupTable) \
	op(TEXTUREGROUP_Terrain_Heightmap) \
	op(TEXTUREGROUP_Terrain_Weightmap) \
	op(TEXTUREGROUP_Bokeh) \
	op(TEXTUREGROUP_IESLightProfile) \
	op(TEXTUREGROUP_Pixels2D) \
	op(TEXTUREGROUP_HierarchicalLOD) \
	op(TEXTUREGROUP_Impostor) \
	op(TEXTUREGROUP_ImpostorNormalDepth) \
	op(TEXTUREGROUP_8BitData) \
	op(TEXTUREGROUP_16BitData) \
	op(TEXTUREGROUP_Project01) \
	op(TEXTUREGROUP_Project02) \
	op(TEXTUREGROUP_Project03) \
	op(TEXTUREGROUP_Project04) \
	op(TEXTUREGROUP_Project05) \
	op(TEXTUREGROUP_Project06) \
	op(TEXTUREGROUP_Project07) \
	op(TEXTUREGROUP_Project08) \
	op(TEXTUREGROUP_Project09) \
	op(TEXTUREGROUP_Project10) \
	op(TEXTUREGROUP_Project11) \
	op(TEXTUREGROUP_Project12) \
	op(TEXTUREGROUP_Project13) \
	op(TEXTUREGROUP_Project14) \
	op(TEXTUREGROUP_Project15) \
	op(TEXTUREGROUP_Project16) \
	op(TEXTUREGROUP_Project17) \
	op(TEXTUREGROUP_Project18) 

enum TextureGroup : int;
template<> ENGINE_API UEnum* StaticEnum<TextureGroup>();

#define FOREACH_ENUM_TEXTUREMIPGENSETTINGS(op) \
	op(TMGS_FromTextureGroup) \
	op(TMGS_SimpleAverage) \
	op(TMGS_Sharpen0) \
	op(TMGS_Sharpen1) \
	op(TMGS_Sharpen2) \
	op(TMGS_Sharpen3) \
	op(TMGS_Sharpen4) \
	op(TMGS_Sharpen5) \
	op(TMGS_Sharpen6) \
	op(TMGS_Sharpen7) \
	op(TMGS_Sharpen8) \
	op(TMGS_Sharpen9) \
	op(TMGS_Sharpen10) \
	op(TMGS_NoMipmaps) \
	op(TMGS_LeaveExistingMips) \
	op(TMGS_Blur1) \
	op(TMGS_Blur2) \
	op(TMGS_Blur3) \
	op(TMGS_Blur4) \
	op(TMGS_Blur5) \
	op(TMGS_Unfiltered) \
	op(TMGS_Angular) 

enum TextureMipGenSettings : int;
template<> ENGINE_API UEnum* StaticEnum<TextureMipGenSettings>();

#define FOREACH_ENUM_ETEXTUREPOWEROFTWOSETTING(op) \
	op(ETexturePowerOfTwoSetting::None) \
	op(ETexturePowerOfTwoSetting::PadToPowerOfTwo) \
	op(ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo) 

namespace ETexturePowerOfTwoSetting { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ETexturePowerOfTwoSetting::Type>();

#define FOREACH_ENUM_ETEXTURESAMPLERFILTER(op) \
	op(ETextureSamplerFilter::Point) \
	op(ETextureSamplerFilter::Bilinear) \
	op(ETextureSamplerFilter::Trilinear) \
	op(ETextureSamplerFilter::AnisotropicPoint) \
	op(ETextureSamplerFilter::AnisotropicLinear) 

enum class ETextureSamplerFilter : uint8;
template<> struct TIsUEnumClass<ETextureSamplerFilter> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureSamplerFilter>();

#define FOREACH_ENUM_ETEXTUREMIPLOADOPTIONS(op) \
	op(ETextureMipLoadOptions::Default) \
	op(ETextureMipLoadOptions::AllMips) \
	op(ETextureMipLoadOptions::OnlyFirstMip) 

enum class ETextureMipLoadOptions : uint8;
template<> struct TIsUEnumClass<ETextureMipLoadOptions> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureMipLoadOptions>();

#define FOREACH_ENUM_ETEXTUREDOWNSCALEOPTIONS(op) \
	op(ETextureDownscaleOptions::Default) \
	op(ETextureDownscaleOptions::Unfiltered) \
	op(ETextureDownscaleOptions::SimpleAverage) \
	op(ETextureDownscaleOptions::Sharpen0) \
	op(ETextureDownscaleOptions::Sharpen1) \
	op(ETextureDownscaleOptions::Sharpen2) \
	op(ETextureDownscaleOptions::Sharpen3) \
	op(ETextureDownscaleOptions::Sharpen4) \
	op(ETextureDownscaleOptions::Sharpen5) \
	op(ETextureDownscaleOptions::Sharpen6) \
	op(ETextureDownscaleOptions::Sharpen7) \
	op(ETextureDownscaleOptions::Sharpen8) \
	op(ETextureDownscaleOptions::Sharpen9) \
	op(ETextureDownscaleOptions::Sharpen10) 

enum class ETextureDownscaleOptions : uint8;
template<> struct TIsUEnumClass<ETextureDownscaleOptions> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureDownscaleOptions>();

#define FOREACH_ENUM_ETEXTURELOSSYCOMPRESSIONAMOUNT(op) \
	op(TLCA_Default) \
	op(TLCA_None) \
	op(TLCA_Lowest) \
	op(TLCA_Low) \
	op(TLCA_Medium) \
	op(TLCA_High) \
	op(TLCA_Highest) 

enum ETextureLossyCompressionAmount : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureLossyCompressionAmount>();

#define FOREACH_ENUM_ETEXTUREENCODESPEED(op) \
	op(ETextureEncodeSpeed::Final) \
	op(ETextureEncodeSpeed::FinalIfAvailable) \
	op(ETextureEncodeSpeed::Fast) 

enum class ETextureEncodeSpeed : uint8;
template<> struct TIsUEnumClass<ETextureEncodeSpeed> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeSpeed>();

#define FOREACH_ENUM_ETEXTURECLASS(op) \
	op(ETextureClass::Invalid) \
	op(ETextureClass::TwoD) \
	op(ETextureClass::Cube) \
	op(ETextureClass::Array) \
	op(ETextureClass::CubeArray) \
	op(ETextureClass::Volume) \
	op(ETextureClass::TwoDDynamic) \
	op(ETextureClass::RenderTarget) \
	op(ETextureClass::Other2DNoSource) \
	op(ETextureClass::OtherUnknown) 

enum class ETextureClass : uint8;
template<> struct TIsUEnumClass<ETextureClass> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureClass>();

#define FOREACH_ENUM_ECOMPOSITETEXTUREMODE(op) \
	op(CTM_Disabled) \
	op(CTM_NormalRoughnessToRed) \
	op(CTM_NormalRoughnessToGreen) \
	op(CTM_NormalRoughnessToBlue) \
	op(CTM_NormalRoughnessToAlpha) 

enum ECompositeTextureMode : int;
template<> ENGINE_API UEnum* StaticEnum<ECompositeTextureMode>();

#define FOREACH_ENUM_ETEXTURESOURCECOMPRESSIONFORMAT(op) \
	op(TSCF_None) \
	op(TSCF_PNG) \
	op(TSCF_JPEG) 

enum ETextureSourceCompressionFormat : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureSourceCompressionFormat>();

#define FOREACH_ENUM_ETEXTURESOURCEFORMAT(op) \
	op(TSF_Invalid) \
	op(TSF_G8) \
	op(TSF_BGRA8) \
	op(TSF_BGRE8) \
	op(TSF_RGBA16) \
	op(TSF_RGBA16F) \
	op(TSF_RGBA8_DEPRECATED) \
	op(TSF_RGBE8_DEPRECATED) \
	op(TSF_G16) \
	op(TSF_RGBA32F) \
	op(TSF_R16F) \
	op(TSF_R32F) \
	op(TSF_RGBA8) \
	op(TSF_RGBE8) 

enum ETextureSourceFormat : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureSourceFormat>();

#define FOREACH_ENUM_TEXTURECOMPRESSIONSETTINGS(op) \
	op(TC_Default) \
	op(TC_Normalmap) \
	op(TC_Masks) \
	op(TC_Grayscale) \
	op(TC_Displacementmap) \
	op(TC_VectorDisplacementmap) \
	op(TC_HDR) \
	op(TC_EditorIcon) \
	op(TC_Alpha) \
	op(TC_DistanceFieldFont) \
	op(TC_HDR_Compressed) \
	op(TC_BC7) \
	op(TC_HalfFloat) \
	op(TC_LQ) \
	op(TC_EncodedReflectionCapture) \
	op(TC_SingleFloat) \
	op(TC_HDR_F32) 

enum TextureCompressionSettings : int;
template<> ENGINE_API UEnum* StaticEnum<TextureCompressionSettings>();

#define FOREACH_ENUM_ETEXTURESOURCEENCODING(op) \
	op(ETextureSourceEncoding::TSE_None) \
	op(ETextureSourceEncoding::TSE_Linear) \
	op(ETextureSourceEncoding::TSE_sRGB) \
	op(ETextureSourceEncoding::TSE_ST2084) \
	op(ETextureSourceEncoding::TSE_Gamma22) \
	op(ETextureSourceEncoding::TSE_BT1886) \
	op(ETextureSourceEncoding::TSE_Gamma26) \
	op(ETextureSourceEncoding::TSE_Cineon) \
	op(ETextureSourceEncoding::TSE_REDLog) \
	op(ETextureSourceEncoding::TSE_REDLog3G10) \
	op(ETextureSourceEncoding::TSE_SLog1) \
	op(ETextureSourceEncoding::TSE_SLog2) \
	op(ETextureSourceEncoding::TSE_SLog3) \
	op(ETextureSourceEncoding::TSE_AlexaV3LogC) \
	op(ETextureSourceEncoding::TSE_CanonLog) \
	op(ETextureSourceEncoding::TSE_ProTune) \
	op(ETextureSourceEncoding::TSE_VLog) 

enum class ETextureSourceEncoding : uint8;
template<> struct TIsUEnumClass<ETextureSourceEncoding> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureSourceEncoding>();

#define FOREACH_ENUM_ETEXTURECOLORSPACE(op) \
	op(ETextureColorSpace::TCS_None) \
	op(ETextureColorSpace::TCS_sRGB) \
	op(ETextureColorSpace::TCS_Rec2020) \
	op(ETextureColorSpace::TCS_ACESAP0) \
	op(ETextureColorSpace::TCS_ACESAP1) \
	op(ETextureColorSpace::TCS_P3DCI) \
	op(ETextureColorSpace::TCS_P3D65) \
	op(ETextureColorSpace::TCS_REDWideGamut) \
	op(ETextureColorSpace::TCS_SonySGamut3) \
	op(ETextureColorSpace::TCS_SonySGamut3Cine) \
	op(ETextureColorSpace::TCS_AlexaWideGamut) \
	op(ETextureColorSpace::TCS_CanonCinemaGamut) \
	op(ETextureColorSpace::TCS_GoProProtuneNative) \
	op(ETextureColorSpace::TCS_PanasonicVGamut) \
	op(ETextureColorSpace::TCS_Custom) 

enum class ETextureColorSpace : uint8;
template<> struct TIsUEnumClass<ETextureColorSpace> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureColorSpace>();

#define FOREACH_ENUM_TEXTURECOOKPLATFORMTILINGSETTINGS(op) \
	op(TCPTS_FromTextureGroup) \
	op(TCPTS_Tile) \
	op(TCPTS_DoNotTile) 

enum TextureCookPlatformTilingSettings : uint8;
template<> ENGINE_API UEnum* StaticEnum<TextureCookPlatformTilingSettings>();

#define FOREACH_ENUM_ETEXTURECHROMATICADAPTATIONMETHOD(op) \
	op(ETextureChromaticAdaptationMethod::TCAM_None) \
	op(ETextureChromaticAdaptationMethod::TCAM_Bradford) \
	op(ETextureChromaticAdaptationMethod::TCAM_CAT02) 

enum class ETextureChromaticAdaptationMethod : uint8;
template<> struct TIsUEnumClass<ETextureChromaticAdaptationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureChromaticAdaptationMethod>();

#define FOREACH_ENUM_TEXTUREFILTER(op) \
	op(TF_Nearest) \
	op(TF_Bilinear) \
	op(TF_Trilinear) \
	op(TF_Default) 

enum TextureFilter : int;
template<> ENGINE_API UEnum* StaticEnum<TextureFilter>();

#define FOREACH_ENUM_TEXTUREADDRESS(op) \
	op(TA_Wrap) \
	op(TA_Clamp) \
	op(TA_Mirror) 

enum TextureAddress : int;
template<> ENGINE_API UEnum* StaticEnum<TextureAddress>();

#define FOREACH_ENUM_ETEXTUREMIPCOUNT(op) \
	op(TMC_ResidentMips) \
	op(TMC_AllMips) \
	op(TMC_AllMipsBiased) 

enum ETextureMipCount : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureMipCount>();

#define FOREACH_ENUM_ETEXTURECOMPRESSIONQUALITY(op) \
	op(TCQ_Default) \
	op(TCQ_Lowest) \
	op(TCQ_Low) \
	op(TCQ_Medium) \
	op(TCQ_High) \
	op(TCQ_Highest) 

enum ETextureCompressionQuality : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureCompressionQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
