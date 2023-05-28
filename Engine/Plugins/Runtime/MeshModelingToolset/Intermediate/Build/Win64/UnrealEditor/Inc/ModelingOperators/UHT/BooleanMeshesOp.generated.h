// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositionOps/BooleanMeshesOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_BooleanMeshesOp_generated_h
#error "BooleanMeshesOp.generated.h already included, missing '#pragma once' in BooleanMeshesOp.h"
#endif
#define MODELINGOPERATORS_BooleanMeshesOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_BooleanMeshesOp_h


#define FOREACH_ENUM_ECSGOPERATION(op) \
	op(ECSGOperation::DifferenceAB) \
	op(ECSGOperation::DifferenceBA) \
	op(ECSGOperation::Intersect) \
	op(ECSGOperation::Union) 

enum class ECSGOperation : uint8;
template<> struct TIsUEnumClass<ECSGOperation> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ECSGOperation>();

#define FOREACH_ENUM_ETRIMOPERATION(op) \
	op(ETrimOperation::TrimA) \
	op(ETrimOperation::TrimB) 

enum class ETrimOperation : uint8;
template<> struct TIsUEnumClass<ETrimOperation> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ETrimOperation>();

#define FOREACH_ENUM_ETRIMSIDE(op) \
	op(ETrimSide::RemoveInside) \
	op(ETrimSide::RemoveOutside) 

enum class ETrimSide : uint8;
template<> struct TIsUEnumClass<ETrimSide> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ETrimSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
