// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleProResEncoder/AppleProResEncoder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APPLEPRORESMEDIA_AppleProResEncoder_generated_h
#error "AppleProResEncoder.generated.h already included, missing '#pragma once' in AppleProResEncoder.h"
#endif
#define APPLEPRORESMEDIA_AppleProResEncoder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Public_AppleProResEncoder_AppleProResEncoder_h


#define FOREACH_ENUM_EAPPLEPRORESENCODERCODEC(op) \
	op(EAppleProResEncoderCodec::ProRes_422Proxy) \
	op(EAppleProResEncoderCodec::ProRes_422LT) \
	op(EAppleProResEncoderCodec::ProRes_422) \
	op(EAppleProResEncoderCodec::ProRes_422HQ) \
	op(EAppleProResEncoderCodec::ProRes_4444) \
	op(EAppleProResEncoderCodec::ProRes_4444XQ) 

enum class EAppleProResEncoderCodec : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderCodec> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderCodec>();

#define FOREACH_ENUM_EAPPLEPRORESENCODERCOLORPRIMARIES(op) \
	op(EAppleProResEncoderColorPrimaries::CD_SDREC601_525_60HZ) \
	op(EAppleProResEncoderColorPrimaries::CD_SDREC601_625_50HZ) \
	op(EAppleProResEncoderColorPrimaries::CD_HDREC709) 

enum class EAppleProResEncoderColorPrimaries : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderColorPrimaries> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderColorPrimaries>();

#define FOREACH_ENUM_EAPPLEPRORESENCODERSCANMODE(op) \
	op(EAppleProResEncoderScanMode::IM_PROGRESSIVE_SCAN) \
	op(EAppleProResEncoderScanMode::IM_INTERLACED_TOP_FIELD_FIRST) \
	op(EAppleProResEncoderScanMode::IM_INTERLATED_BOTTOM_FIRST_FIRST) 

enum class EAppleProResEncoderScanMode : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderScanMode> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_API UEnum* StaticEnum<EAppleProResEncoderScanMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
