// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CleaningOps/EditNormalsOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_EditNormalsOp_generated_h
#error "EditNormalsOp.generated.h already included, missing '#pragma once' in EditNormalsOp.h"
#endif
#define MODELINGOPERATORS_EditNormalsOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h


#define FOREACH_ENUM_ENORMALCALCULATIONMETHOD(op) \
	op(ENormalCalculationMethod::AreaWeighted) \
	op(ENormalCalculationMethod::AngleWeighted) \
	op(ENormalCalculationMethod::AreaAngleWeighting) 

enum class ENormalCalculationMethod : uint8;
template<> struct TIsUEnumClass<ENormalCalculationMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ENormalCalculationMethod>();

#define FOREACH_ENUM_ESPLITNORMALMETHOD(op) \
	op(ESplitNormalMethod::UseExistingTopology) \
	op(ESplitNormalMethod::FaceNormalThreshold) \
	op(ESplitNormalMethod::FaceGroupID) \
	op(ESplitNormalMethod::PerTriangle) \
	op(ESplitNormalMethod::PerVertex) 

enum class ESplitNormalMethod : uint8;
template<> struct TIsUEnumClass<ESplitNormalMethod> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ESplitNormalMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
