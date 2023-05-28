// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CleaningOps/SimplifyMeshOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORSEDITORONLY_SimplifyMeshOp_generated_h
#error "SimplifyMeshOp.generated.h already included, missing '#pragma once' in SimplifyMeshOp.h"
#endif
#define MODELINGOPERATORSEDITORONLY_SimplifyMeshOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h


#define FOREACH_ENUM_ESIMPLIFYTARGETTYPE(op) \
	op(ESimplifyTargetType::Percentage) \
	op(ESimplifyTargetType::TriangleCount) \
	op(ESimplifyTargetType::VertexCount) \
	op(ESimplifyTargetType::EdgeLength) \
	op(ESimplifyTargetType::MinimalPlanar) 

enum class ESimplifyTargetType : uint8;
template<> struct TIsUEnumClass<ESimplifyTargetType> { enum { Value = true }; };
template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<ESimplifyTargetType>();

#define FOREACH_ENUM_ESIMPLIFYTYPE(op) \
	op(ESimplifyType::QEM) \
	op(ESimplifyType::Attribute) \
	op(ESimplifyType::UEStandard) \
	op(ESimplifyType::MinimalExistingVertex) \
	op(ESimplifyType::MinimalPlanar) \
	op(ESimplifyType::MinimalPolygroup) 

enum class ESimplifyType : uint8;
template<> struct TIsUEnumClass<ESimplifyType> { enum { Value = true }; };
template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<ESimplifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
