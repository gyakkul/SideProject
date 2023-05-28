// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionClusteringNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionClusteringNodes_generated_h
#error "GeometryCollectionClusteringNodes.generated.h already included, missing '#pragma once' in GeometryCollectionClusteringNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionClusteringNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FAutoClusterDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FClusterFlattenDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h


#define FOREACH_ENUM_ECLUSTERSIZEMETHODENUM(op) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize) \
	op(EClusterSizeMethodEnum::Dataflow_Max) 

enum class EClusterSizeMethodEnum : uint8;
template<> struct TIsUEnumClass<EClusterSizeMethodEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EClusterSizeMethodEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
