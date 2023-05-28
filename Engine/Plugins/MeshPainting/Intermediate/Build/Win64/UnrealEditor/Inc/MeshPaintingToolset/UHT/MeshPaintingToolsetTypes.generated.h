// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshPaintingToolsetTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHPAINTINGTOOLSET_MeshPaintingToolsetTypes_generated_h
#error "MeshPaintingToolsetTypes.generated.h already included, missing '#pragma once' in MeshPaintingToolsetTypes.h"
#endif
#define MESHPAINTINGTOOLSET_MeshPaintingToolsetTypes_generated_h

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintTexture2DData_Statics; \
	MESHPAINTINGTOOLSET_API static class UScriptStruct* StaticStruct();


template<> MESHPAINTINGTOOLSET_API UScriptStruct* StaticStruct<struct FPaintTexture2DData>();

#define FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintComponentOverride_Statics; \
	MESHPAINTINGTOOLSET_API static class UScriptStruct* StaticStruct();


template<> MESHPAINTINGTOOLSET_API UScriptStruct* StaticStruct<struct FPaintComponentOverride>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_MeshPaintingToolsetTypes_h


#define FOREACH_ENUM_EMESHPAINTDATACOLORVIEWMODE(op) \
	op(EMeshPaintDataColorViewMode::Normal) \
	op(EMeshPaintDataColorViewMode::RGB) \
	op(EMeshPaintDataColorViewMode::Alpha) \
	op(EMeshPaintDataColorViewMode::Red) \
	op(EMeshPaintDataColorViewMode::Green) \
	op(EMeshPaintDataColorViewMode::Blue) 

enum class EMeshPaintDataColorViewMode : uint8;
template<> struct TIsUEnumClass<EMeshPaintDataColorViewMode> { enum { Value = true }; };
template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshPaintDataColorViewMode>();

#define FOREACH_ENUM_EMESHVERTEXPAINTMODETARGET(op) \
	op(EMeshVertexPaintModeTarget::ComponentInstance) \
	op(EMeshVertexPaintModeTarget::Mesh) 

enum class EMeshVertexPaintModeTarget : uint8;
template<> struct TIsUEnumClass<EMeshVertexPaintModeTarget> { enum { Value = true }; };
template<> MESHPAINTINGTOOLSET_API UEnum* StaticEnum<EMeshVertexPaintModeTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
