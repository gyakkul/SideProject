// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomSettings_generated_h
#error "GroomSettings.generated.h already included, missing '#pragma once' in GroomSettings.h"
#endif
#define HAIRSTRANDSCORE_GroomSettings_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGroomConversionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FGroomConversionSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGroomBuildSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FGroomBuildSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomSettings_h


#define FOREACH_ENUM_EGROOMINTERPOLATIONQUALITY(op) \
	op(EGroomInterpolationQuality::Low) \
	op(EGroomInterpolationQuality::Medium) \
	op(EGroomInterpolationQuality::High) \
	op(EGroomInterpolationQuality::Unknown) 

enum class EGroomInterpolationQuality : uint8;
template<> struct TIsUEnumClass<EGroomInterpolationQuality> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationQuality>();

#define FOREACH_ENUM_EGROOMINTERPOLATIONWEIGHT(op) \
	op(EGroomInterpolationWeight::Parametric) \
	op(EGroomInterpolationWeight::Root) \
	op(EGroomInterpolationWeight::Index) \
	op(EGroomInterpolationWeight::Unknown) 

enum class EGroomInterpolationWeight : uint8;
template<> struct TIsUEnumClass<EGroomInterpolationWeight> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationWeight>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
