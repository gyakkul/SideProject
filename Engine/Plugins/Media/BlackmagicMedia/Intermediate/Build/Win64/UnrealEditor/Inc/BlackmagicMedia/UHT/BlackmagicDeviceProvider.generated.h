// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackmagicDeviceProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLACKMAGICMEDIA_BlackmagicDeviceProvider_generated_h
#error "BlackmagicDeviceProvider.generated.h already included, missing '#pragma once' in BlackmagicDeviceProvider.h"
#endif
#define BLACKMAGICMEDIA_BlackmagicDeviceProvider_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h


#define FOREACH_ENUM_EBLACKMAGICMEDIATIMECODEFORMAT(op) \
	op(EBlackmagicMediaTimecodeFormat::None) \
	op(EBlackmagicMediaTimecodeFormat::LTC) \
	op(EBlackmagicMediaTimecodeFormat::VITC) 

enum class EBlackmagicMediaTimecodeFormat : uint8;
template<> struct TIsUEnumClass<EBlackmagicMediaTimecodeFormat> { enum { Value = true }; };
template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaTimecodeFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
