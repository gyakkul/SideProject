// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertFrontendUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSHAREDSLATE_ConcertFrontendUtils_generated_h
#error "ConcertFrontendUtils.generated.h already included, missing '#pragma once' in ConcertFrontendUtils.h"
#endif
#define CONCERTSHAREDSLATE_ConcertFrontendUtils_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h


#define FOREACH_ENUM_ETIMEFORMAT(op) \
	op(ETimeFormat::Relative) \
	op(ETimeFormat::Absolute) 

enum class ETimeFormat;
template<> struct TIsUEnumClass<ETimeFormat> { enum { Value = true }; };
template<> CONCERTSHAREDSLATE_API UEnum* StaticEnum<ETimeFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
