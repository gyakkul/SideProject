// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CleaningOps/RemeshMeshOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_RemeshMeshOp_generated_h
#error "RemeshMeshOp.generated.h already included, missing '#pragma once' in RemeshMeshOp.h"
#endif
#define MODELINGOPERATORS_RemeshMeshOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h


#define FOREACH_ENUM_EREMESHTYPE(op) \
	op(ERemeshType::Standard) \
	op(ERemeshType::FullPass) \
	op(ERemeshType::NormalFlow) 

enum class ERemeshType : uint8;
template<> struct TIsUEnumClass<ERemeshType> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERemeshType>();

#define FOREACH_ENUM_EREMESHSMOOTHINGTYPE(op) \
	op(ERemeshSmoothingType::Uniform) \
	op(ERemeshSmoothingType::Cotangent) \
	op(ERemeshSmoothingType::MeanValue) 

enum class ERemeshSmoothingType : uint8;
template<> struct TIsUEnumClass<ERemeshSmoothingType> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERemeshSmoothingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
