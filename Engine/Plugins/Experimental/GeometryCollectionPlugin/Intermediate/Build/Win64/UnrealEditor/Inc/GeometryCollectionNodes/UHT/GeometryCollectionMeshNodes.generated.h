// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionMeshNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionMeshNodes_generated_h
#error "GeometryCollectionMeshNodes.generated.h already included, missing '#pragma once' in GeometryCollectionMeshNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionMeshNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointsToMeshDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FPointsToMeshDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoxToMeshDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FBoxToMeshDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshInfoDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMeshInfoDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshToCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMeshToCollectionDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionToMeshDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FCollectionToMeshDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshToMeshDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FStaticMeshToMeshDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_241_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshAppendDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMeshAppendDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshBooleanDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMeshBooleanDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_332_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshCopyToPointsDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMeshCopyToPointsDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h_374_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGetMeshDataDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FGetMeshDataDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMeshNodes_h


#define FOREACH_ENUM_EMESHBOOLEANOPERATIONENUM(op) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Intersect) \
	op(EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Difference) \
	op(EMeshBooleanOperationEnum::Dataflow_Max) 

enum class EMeshBooleanOperationEnum : uint8;
template<> struct TIsUEnumClass<EMeshBooleanOperationEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<EMeshBooleanOperationEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
