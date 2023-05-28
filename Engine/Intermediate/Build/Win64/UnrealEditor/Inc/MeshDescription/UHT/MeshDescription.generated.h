// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshDescription.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHDESCRIPTION_MeshDescription_generated_h
#error "MeshDescription.generated.h already included, missing '#pragma once' in MeshDescription.h"
#endif
#define MESHDESCRIPTION_MeshDescription_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h


#define FOREACH_ENUM_ECOMPUTENTBSOPTIONS(op) \
	op(EComputeNTBsOptions::None) \
	op(EComputeNTBsOptions::Normals) \
	op(EComputeNTBsOptions::Tangents) \
	op(EComputeNTBsOptions::WeightedNTBs) 

enum class EComputeNTBsOptions : uint32;
template<> struct TIsUEnumClass<EComputeNTBsOptions> { enum { Value = true }; };
template<> MESHDESCRIPTION_API UEnum* StaticEnum<EComputeNTBsOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
