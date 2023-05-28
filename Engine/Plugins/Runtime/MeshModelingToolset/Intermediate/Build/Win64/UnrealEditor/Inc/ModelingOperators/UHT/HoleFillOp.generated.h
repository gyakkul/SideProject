// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CleaningOps/HoleFillOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_HoleFillOp_generated_h
#error "HoleFillOp.generated.h already included, missing '#pragma once' in HoleFillOp.h"
#endif
#define MODELINGOPERATORS_HoleFillOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_HoleFillOp_h


#define FOREACH_ENUM_EHOLEFILLOPFILLTYPE(op) \
	op(EHoleFillOpFillType::TriangleFan) \
	op(EHoleFillOpFillType::PolygonEarClipping) \
	op(EHoleFillOpFillType::Planar) \
	op(EHoleFillOpFillType::Minimal) \
	op(EHoleFillOpFillType::Smooth) 

enum class EHoleFillOpFillType : uint8;
template<> struct TIsUEnumClass<EHoleFillOpFillType> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EHoleFillOpFillType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
