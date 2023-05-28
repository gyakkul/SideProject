// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualGraphElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VISUALGRAPHUTILS_VisualGraphElement_generated_h
#error "VisualGraphElement.generated.h already included, missing '#pragma once' in VisualGraphElement.h"
#endif
#define VISUALGRAPHUTILS_VisualGraphElement_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h


#define FOREACH_ENUM_EVISUALGRAPHSHAPE(op) \
	op(EVisualGraphShape::Box) \
	op(EVisualGraphShape::Polygon) \
	op(EVisualGraphShape::Ellipse) \
	op(EVisualGraphShape::Circle) \
	op(EVisualGraphShape::Triangle) \
	op(EVisualGraphShape::PlainText) \
	op(EVisualGraphShape::Diamond) \
	op(EVisualGraphShape::Parallelogram) \
	op(EVisualGraphShape::House) 

enum class EVisualGraphShape : uint8;
template<> struct TIsUEnumClass<EVisualGraphShape> { enum { Value = true }; };
template<> VISUALGRAPHUTILS_API UEnum* StaticEnum<EVisualGraphShape>();

#define FOREACH_ENUM_EVISUALGRAPHSTYLE(op) \
	op(EVisualGraphStyle::Filled) \
	op(EVisualGraphStyle::Diagonals) \
	op(EVisualGraphStyle::Rounded) \
	op(EVisualGraphStyle::Dashed) \
	op(EVisualGraphStyle::Dotted) \
	op(EVisualGraphStyle::Solid) \
	op(EVisualGraphStyle::Bold) 

enum class EVisualGraphStyle : uint8;
template<> struct TIsUEnumClass<EVisualGraphStyle> { enum { Value = true }; };
template<> VISUALGRAPHUTILS_API UEnum* StaticEnum<EVisualGraphStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
