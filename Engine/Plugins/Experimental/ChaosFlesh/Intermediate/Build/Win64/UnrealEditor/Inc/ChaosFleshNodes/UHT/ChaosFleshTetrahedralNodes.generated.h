// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshTetrahedralNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHNODES_ChaosFleshTetrahedralNodes_generated_h
#error "ChaosFleshTetrahedralNodes.generated.h already included, missing '#pragma once' in ChaosFleshTetrahedralNodes.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshTetrahedralNodes_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstructTetGridNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FConstructTetGridNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGenerateTetrahedralCollectionDataflowNodes_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FGenerateTetrahedralCollectionDataflowNodes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshTetrahedralNodes_h


#define FOREACH_ENUM_TETMESHINGMETHOD(op) \
	op(IsoStuffing) \
	op(TetWild) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
