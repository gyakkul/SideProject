// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionMaterialNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionMaterialNodes_generated_h
#error "GeometryCollectionMaterialNodes.generated.h already included, missing '#pragma once' in GeometryCollectionMaterialNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionMaterialNodes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FAddMaterialToCollectionDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FReAssignMaterialInCollectionDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMaterialsInfoDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FGetMaterialFromMaterialsArrayDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FSetMaterialInMaterialsArrayDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMakeMaterialDataflowNode>();

#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<struct FMakeMaterialsArrayDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h


#define FOREACH_ENUM_ESETMATERIALOPERATIONTYPEENUM(op) \
	op(ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add) \
	op(ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert) \
	op(ESetMaterialOperationTypeEnum::Dataflow_Max) 

enum class ESetMaterialOperationTypeEnum : uint8;
template<> struct TIsUEnumClass<ESetMaterialOperationTypeEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ESetMaterialOperationTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
