// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParameterizationOps/UVProjectionOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_UVProjectionOp_generated_h
#error "UVProjectionOp.generated.h already included, missing '#pragma once' in UVProjectionOp.h"
#endif
#define MODELINGOPERATORS_UVProjectionOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVProjectionOp_h


#define FOREACH_ENUM_EUVPROJECTIONMETHOD(op) \
	op(EUVProjectionMethod::Box) \
	op(EUVProjectionMethod::Cylinder) \
	op(EUVProjectionMethod::Plane) \
	op(EUVProjectionMethod::ExpMap) 

enum class EUVProjectionMethod : uint8;
template<> struct TIsUEnumClass<EUVProjectionMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EUVProjectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
