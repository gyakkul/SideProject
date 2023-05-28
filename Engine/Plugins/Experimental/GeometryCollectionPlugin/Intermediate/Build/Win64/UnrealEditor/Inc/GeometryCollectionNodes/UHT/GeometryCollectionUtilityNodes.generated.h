// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionUtilityNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionUtilityNodes_generated_h
#error "GeometryCollectionUtilityNodes.generated.h already included, missing '#pragma once' in GeometryCollectionUtilityNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionUtilityNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateNonOverlappingConvexHullsDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FCreateNonOverlappingConvexHullsDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionUtilityNodes_h


#define FOREACH_ENUM_ECONVEXOVERLAPREMOVALMETHODENUM(op) \
	op(EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None) \
	op(EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_All) \
	op(EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClusters) \
	op(EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters) \
	op(EConvexOverlapRemovalMethodEnum::Dataflow_Max) 

enum class EConvexOverlapRemovalMethodEnum : uint8;
template<> struct TIsUEnumClass<EConvexOverlapRemovalMethodEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EConvexOverlapRemovalMethodEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
