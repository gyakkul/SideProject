// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshVertexPainter/MeshVertexPainter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshVertexPainter_generated_h
#error "MeshVertexPainter.generated.h already included, missing '#pragma once' in MeshVertexPainter.h"
#endif
#define ENGINE_MeshVertexPainter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_MeshVertexPainter_MeshVertexPainter_h


#define FOREACH_ENUM_EVERTEXPAINTAXIS(op) \
	op(EVertexPaintAxis::X) \
	op(EVertexPaintAxis::Y) \
	op(EVertexPaintAxis::Z) 

enum class EVertexPaintAxis : uint8;
template<> struct TIsUEnumClass<EVertexPaintAxis> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVertexPaintAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
