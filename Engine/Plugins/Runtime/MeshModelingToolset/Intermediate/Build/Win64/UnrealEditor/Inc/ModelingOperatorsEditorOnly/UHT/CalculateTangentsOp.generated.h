// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParameterizationOps/CalculateTangentsOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORSEDITORONLY_CalculateTangentsOp_generated_h
#error "CalculateTangentsOp.generated.h already included, missing '#pragma once' in CalculateTangentsOp.h"
#endif
#define MODELINGOPERATORSEDITORONLY_CalculateTangentsOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h


#define FOREACH_ENUM_EMESHTANGENTSTYPE(op) \
	op(EMeshTangentsType::MikkTSpace) \
	op(EMeshTangentsType::FastMikkTSpace) \
	op(EMeshTangentsType::PerTriangle) \
	op(EMeshTangentsType::CopyExisting) 

enum class EMeshTangentsType : uint8;
template<> struct TIsUEnumClass<EMeshTangentsType> { enum { Value = true }; };
template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<EMeshTangentsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
