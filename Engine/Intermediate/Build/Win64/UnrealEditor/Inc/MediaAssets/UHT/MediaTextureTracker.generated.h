// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaTextureTracker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaTextureTracker_generated_h
#error "MediaTextureTracker.generated.h already included, missing '#pragma once' in MediaTextureTracker.h"
#endif
#define MEDIAASSETS_MediaTextureTracker_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaTextureTracker_h


#define FOREACH_ENUM_EMEDIATEXTUREVISIBLEMIPSTILES(op) \
	op(EMediaTextureVisibleMipsTiles::None) \
	op(EMediaTextureVisibleMipsTiles::Plane) \
	op(EMediaTextureVisibleMipsTiles::Sphere) 

enum class EMediaTextureVisibleMipsTiles : uint8;
template<> struct TIsUEnumClass<EMediaTextureVisibleMipsTiles> { enum { Value = true }; };
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaTextureVisibleMipsTiles>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
