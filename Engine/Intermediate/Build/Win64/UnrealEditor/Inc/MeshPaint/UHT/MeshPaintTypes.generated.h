// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINT_MeshPaintTypes_generated_h
#error "MeshPaintTypes.generated.h already included, missing '#pragma once' in MeshPaintTypes.h"
#endif
#define MESHPAINT_MeshPaintTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MeshPaint_Public_MeshPaintTypes_h


#define FOREACH_ENUM_EMESHPAINTMODE(op) \
	op(EMeshPaintMode::PaintColors) \
	op(EMeshPaintMode::PaintWeights) 

enum class EMeshPaintMode : uint8;
template<> struct TIsUEnumClass<EMeshPaintMode> { enum { Value = true }; };
template<> MESHPAINT_API UEnum* StaticEnum<EMeshPaintMode>();

#define FOREACH_ENUM_EMESHVERTEXPAINTTARGET(op) \
	op(EMeshVertexPaintTarget::ComponentInstance) \
	op(EMeshVertexPaintTarget::Mesh) 

enum class EMeshVertexPaintTarget : uint8;
template<> struct TIsUEnumClass<EMeshVertexPaintTarget> { enum { Value = true }; };
template<> MESHPAINT_API UEnum* StaticEnum<EMeshVertexPaintTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
