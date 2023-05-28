// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALUTILITIES_MaterialUtilities_generated_h
#error "MaterialUtilities.generated.h already included, missing '#pragma once' in MaterialUtilities.h"
#endif
#define MATERIALUTILITIES_MaterialUtilities_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h


#define FOREACH_ENUM_EFLATTENMATERIALPROPERTIES(op) \
	op(EFlattenMaterialProperties::Diffuse) \
	op(EFlattenMaterialProperties::Metallic) \
	op(EFlattenMaterialProperties::Specular) \
	op(EFlattenMaterialProperties::Roughness) \
	op(EFlattenMaterialProperties::Anisotropy) \
	op(EFlattenMaterialProperties::Normal) \
	op(EFlattenMaterialProperties::Tangent) \
	op(EFlattenMaterialProperties::Opacity) \
	op(EFlattenMaterialProperties::Emissive) \
	op(EFlattenMaterialProperties::SubSurface) \
	op(EFlattenMaterialProperties::OpacityMask) \
	op(EFlattenMaterialProperties::AmbientOcclusion) \
	op(EFlattenMaterialProperties::NumFlattenMaterialProperties) 

enum class EFlattenMaterialProperties : uint8;
template<> struct TIsUEnumClass<EFlattenMaterialProperties> { enum { Value = true }; };
template<> MATERIALUTILITIES_API UEnum* StaticEnum<EFlattenMaterialProperties>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
