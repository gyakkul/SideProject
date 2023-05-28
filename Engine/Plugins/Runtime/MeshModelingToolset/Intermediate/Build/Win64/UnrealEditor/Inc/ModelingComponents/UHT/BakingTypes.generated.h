// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Baking/BakingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_BakingTypes_generated_h
#error "BakingTypes.generated.h already included, missing '#pragma once' in BakingTypes.h"
#endif
#define MODELINGCOMPONENTS_BakingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h


#define FOREACH_ENUM_EBAKETEXTURERESOLUTION(op) \
	op(EBakeTextureResolution::Resolution16) \
	op(EBakeTextureResolution::Resolution32) \
	op(EBakeTextureResolution::Resolution64) \
	op(EBakeTextureResolution::Resolution128) \
	op(EBakeTextureResolution::Resolution256) \
	op(EBakeTextureResolution::Resolution512) \
	op(EBakeTextureResolution::Resolution1024) \
	op(EBakeTextureResolution::Resolution2048) \
	op(EBakeTextureResolution::Resolution4096) \
	op(EBakeTextureResolution::Resolution8192) 

enum class EBakeTextureResolution;
template<> struct TIsUEnumClass<EBakeTextureResolution> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureResolution>();

#define FOREACH_ENUM_EBAKETEXTUREBITDEPTH(op) \
	op(EBakeTextureBitDepth::ChannelBits8) \
	op(EBakeTextureBitDepth::ChannelBits16) 

enum class EBakeTextureBitDepth;
template<> struct TIsUEnumClass<EBakeTextureBitDepth> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureBitDepth>();

#define FOREACH_ENUM_EBAKETEXTURESAMPLESPERPIXEL(op) \
	op(EBakeTextureSamplesPerPixel::Sample1) \
	op(EBakeTextureSamplesPerPixel::Sample4) \
	op(EBakeTextureSamplesPerPixel::Sample16) \
	op(EBakeTextureSamplesPerPixel::Sample64) \
	op(EBakeTextureSamplesPerPixel::Sample256) 

enum class EBakeTextureSamplesPerPixel;
template<> struct TIsUEnumClass<EBakeTextureSamplesPerPixel> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureSamplesPerPixel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
