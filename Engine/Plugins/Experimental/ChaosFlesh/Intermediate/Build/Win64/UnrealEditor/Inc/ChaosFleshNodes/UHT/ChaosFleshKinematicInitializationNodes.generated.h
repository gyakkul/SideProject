// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/ChaosFleshKinematicInitializationNodes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHNODES_ChaosFleshKinematicInitializationNodes_generated_h
#error "ChaosFleshKinematicInitializationNodes.generated.h already included, missing '#pragma once' in ChaosFleshKinematicInitializationNodes.h"
#endif
#define CHAOSFLESHNODES_ChaosFleshKinematicInitializationNodes_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinematicTetrahedralBindingsDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FKinematicTetrahedralBindingsDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinematicInitializationDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FKinematicInitializationDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinematicOriginInsertionInitializationDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FKinematicOriginInsertionInitializationDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSetVerticesKinematicDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FSetVerticesKinematicDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinematicBodySetupInitializationDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FKinematicBodySetupInitializationDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_192_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKinematicSkeletalMeshInitializationDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FKinematicSkeletalMeshInitializationDataflowNode>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBindVerticesToSkeleton_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FBindVerticesToSkeleton>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuthorSceneCollisionCandidates_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FAuthorSceneCollisionCandidates>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h_304_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAppendToCollectionTransformAttributeDataflowNode_Statics; \
	CHAOSFLESHNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<struct FAppendToCollectionTransformAttributeDataflowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshKinematicInitializationNodes_h


#define FOREACH_ENUM_ESKELETALSELETIONMODE(op) \
	op(ESkeletalSeletionMode::Dataflow_SkeletalSelection_Single) \
	op(ESkeletalSeletionMode::Dataflow_SkeletalSelection_Branch) \
	op(ESkeletalSeletionMode::Chaos_Max) 

enum class ESkeletalSeletionMode : uint8;
template<> struct TIsUEnumClass<ESkeletalSeletionMode> { enum { Value = true }; };
template<> CHAOSFLESHNODES_API UEnum* StaticEnum<ESkeletalSeletionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
