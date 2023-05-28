// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CuttingOps/EmbedPolygonsOp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORSEDITORONLY_EmbedPolygonsOp_generated_h
#error "EmbedPolygonsOp.generated.h already included, missing '#pragma once' in EmbedPolygonsOp.h"
#endif
#define MODELINGOPERATORSEDITORONLY_EmbedPolygonsOp_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h


#define FOREACH_ENUM_EEMBEDDEDPOLYGONOPMETHOD(op) \
	op(EEmbeddedPolygonOpMethod::TrimOutside) \
	op(EEmbeddedPolygonOpMethod::TrimInside) \
	op(EEmbeddedPolygonOpMethod::InsertPolygon) \
	op(EEmbeddedPolygonOpMethod::CutThrough) 

enum class EEmbeddedPolygonOpMethod : uint8;
template<> struct TIsUEnumClass<EEmbeddedPolygonOpMethod> { enum { Value = true }; };
template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<EEmbeddedPolygonOpMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
