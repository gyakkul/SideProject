// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionEditNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionEditNodes_generated_h
#error "GeometryCollectionEditNodes.generated.h already included, missing '#pragma once' in GeometryCollectionEditNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionEditNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FPruneInCollectionDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FSetVisibilityInCollectionDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMergeInCollectionDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h


#define FOREACH_ENUM_EVISIBILTYOPTIONSENUM(op) \
	op(EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Visible) \
	op(EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Invisible) \
	op(EVisibiltyOptionsEnum::Dataflow_Max) 

enum class EVisibiltyOptionsEnum : uint8;
template<> struct TIsUEnumClass<EVisibiltyOptionsEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EVisibiltyOptionsEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
