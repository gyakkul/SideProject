// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshPositionTargetInitializationNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHNODES_ChaosFleshPositionTargetInitializationNodes_generated_h
#error "ChaosFleshPositionTargetInitializationNodes.generated.h already included, missing '#pragma once' in ChaosFleshPositionTargetInitializationNodes.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshPositionTargetInitializationNodes_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAddKinematicParticlesDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FAddKinematicParticlesDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetVertexVertexPositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetVertexVertexPositionTargetBindingDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetVertexTetrahedraPositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetVertexTetrahedraPositionTargetBindingDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetVertexTrianglePositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetVertexTrianglePositionTargetBindingDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetFleshBonePositionTargetBindingDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetFleshBonePositionTargetBindingDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshPositionTargetInitializationNodes_h


#define FOREACH_ENUM_ESKELETALBINDINGMODE(op) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_Kinematic) \
	op(ESkeletalBindingMode::Dataflow_SkeletalBinding_PositionTarget) \
	op(ESkeletalBindingMode::Chaos_Max) 

enum class ESkeletalBindingMode : uint8;
template<> struct TIsUEnumClass<ESkeletalBindingMode> { enum { Value = true }; };
template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalBindingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
