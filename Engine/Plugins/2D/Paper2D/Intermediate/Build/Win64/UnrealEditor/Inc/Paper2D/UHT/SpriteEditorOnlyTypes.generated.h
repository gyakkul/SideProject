// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpriteEditorOnlyTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_SpriteEditorOnlyTypes_generated_h
#error "SpriteEditorOnlyTypes.generated.h already included, missing '#pragma once' in SpriteEditorOnlyTypes.h"
#endif
#define PAPER2D_SpriteEditorOnlyTypes_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FSpriteGeometryShape>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FSpriteGeometryCollection>();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FSpriteAssetInitParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h


#define FOREACH_ENUM_ESPRITECOLLISIONMODE(op) \
	op(ESpriteCollisionMode::None) \
	op(ESpriteCollisionMode::Use2DPhysics) \
	op(ESpriteCollisionMode::Use3DPhysics) 

namespace ESpriteCollisionMode { enum Type : int; }
template<> PAPER2D_API UEnum* StaticEnum<ESpriteCollisionMode::Type>();

#define FOREACH_ENUM_ESPRITESHAPETYPE(op) \
	op(ESpriteShapeType::Box) \
	op(ESpriteShapeType::Circle) \
	op(ESpriteShapeType::Polygon) 

enum class ESpriteShapeType : uint8;
template<> struct TIsUEnumClass<ESpriteShapeType> { enum { Value = true }; };
template<> PAPER2D_API UEnum* StaticEnum<ESpriteShapeType>();

#define FOREACH_ENUM_ESPRITEPOLYGONMODE(op) \
	op(ESpritePolygonMode::SourceBoundingBox) \
	op(ESpritePolygonMode::TightBoundingBox) \
	op(ESpritePolygonMode::ShrinkWrapped) \
	op(ESpritePolygonMode::FullyCustom) \
	op(ESpritePolygonMode::Diced) 

namespace ESpritePolygonMode { enum Type : int; }
template<> PAPER2D_API UEnum* StaticEnum<ESpritePolygonMode::Type>();

#define FOREACH_ENUM_ESPRITEPIVOTMODE(op) \
	op(ESpritePivotMode::Top_Left) \
	op(ESpritePivotMode::Top_Center) \
	op(ESpritePivotMode::Top_Right) \
	op(ESpritePivotMode::Center_Left) \
	op(ESpritePivotMode::Center_Center) \
	op(ESpritePivotMode::Center_Right) \
	op(ESpritePivotMode::Bottom_Left) \
	op(ESpritePivotMode::Bottom_Center) \
	op(ESpritePivotMode::Bottom_Right) \
	op(ESpritePivotMode::Custom) 

namespace ESpritePivotMode { enum Type : int; }
template<> PAPER2D_API UEnum* StaticEnum<ESpritePivotMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
