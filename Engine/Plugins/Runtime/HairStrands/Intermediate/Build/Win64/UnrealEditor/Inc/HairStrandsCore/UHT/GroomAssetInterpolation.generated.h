// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomAssetInterpolation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAIRSTRANDSCORE_GroomAssetInterpolation_generated_h
#error "GroomAssetInterpolation.generated.h already included, missing '#pragma once' in GroomAssetInterpolation.h"
#endif
#define HAIRSTRANDSCORE_GroomAssetInterpolation_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairLODSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairLODSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairDecimationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairDecimationSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairInterpolationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairInterpolationSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairDeformationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairDeformationSettings>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupsInterpolation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupsInterpolation>();

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHairGroupsLOD_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<struct FHairGroupsLOD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetInterpolation_h


#define FOREACH_ENUM_EHAIRINTERPOLATIONQUALITY(op) \
	op(EHairInterpolationQuality::Low) \
	op(EHairInterpolationQuality::Medium) \
	op(EHairInterpolationQuality::High) \
	op(EHairInterpolationQuality::Unknown) 

enum class EHairInterpolationQuality : uint8;
template<> struct TIsUEnumClass<EHairInterpolationQuality> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationQuality>();

#define FOREACH_ENUM_EHAIRINTERPOLATIONWEIGHT(op) \
	op(EHairInterpolationWeight::Parametric) \
	op(EHairInterpolationWeight::Root) \
	op(EHairInterpolationWeight::Index) \
	op(EHairInterpolationWeight::Distance) \
	op(EHairInterpolationWeight::Unknown) 

enum class EHairInterpolationWeight : uint8;
template<> struct TIsUEnumClass<EHairInterpolationWeight> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EHairInterpolationWeight>();

#define FOREACH_ENUM_EGROOMGEOMETRYTYPE(op) \
	op(EGroomGeometryType::Strands) \
	op(EGroomGeometryType::Cards) \
	op(EGroomGeometryType::Meshes) 

enum class EGroomGeometryType : uint8;
template<> struct TIsUEnumClass<EGroomGeometryType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomGeometryType>();

#define FOREACH_ENUM_EGROOMBINDINGTYPE(op) \
	op(EGroomBindingType::NoneBinding) \
	op(EGroomBindingType::Rigid) \
	op(EGroomBindingType::Skinning) 

enum class EGroomBindingType : uint8;
template<> struct TIsUEnumClass<EGroomBindingType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBindingType>();

#define FOREACH_ENUM_EGROOMOVERRIDETYPE(op) \
	op(EGroomOverrideType::Auto) \
	op(EGroomOverrideType::Enable) \
	op(EGroomOverrideType::Disable) 

enum class EGroomOverrideType : uint8;
template<> struct TIsUEnumClass<EGroomOverrideType> { enum { Value = true }; };
template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomOverrideType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
