// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeStaticMeshLodDataNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEFACTORYNODES_InterchangeStaticMeshLodDataNode_generated_h
#error "InterchangeStaticMeshLodDataNode.generated.h already included, missing '#pragma once' in InterchangeStaticMeshLodDataNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeStaticMeshLodDataNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execGetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execRemoveAllConvexCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execAddConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUids); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllSphereCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execAddSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUids); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllCapsuleCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execAddCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUids); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllBoxCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execAddBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUids); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllMeshes); \
	DECLARE_FUNCTION(execRemoveMeshUid); \
	DECLARE_FUNCTION(execAddMeshUid); \
	DECLARE_FUNCTION(execGetMeshUids); \
	DECLARE_FUNCTION(execGetMeshUidsCount);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execGetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execRemoveAllConvexCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execAddConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUids); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllSphereCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execAddSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUids); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllCapsuleCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execAddCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUids); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllBoxCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execAddBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUids); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllMeshes); \
	DECLARE_FUNCTION(execRemoveMeshUid); \
	DECLARE_FUNCTION(execAddMeshUid); \
	DECLARE_FUNCTION(execGetMeshUids); \
	DECLARE_FUNCTION(execGetMeshUidsCount);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshLodDataNode(); \
	friend struct Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeStaticMeshLodDataNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshLodDataNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshLodDataNode(); \
	friend struct Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeStaticMeshLodDataNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshLodDataNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeStaticMeshLodDataNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeStaticMeshLodDataNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeStaticMeshLodDataNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshLodDataNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeStaticMeshLodDataNode(UInterchangeStaticMeshLodDataNode&&); \
	NO_API UInterchangeStaticMeshLodDataNode(const UInterchangeStaticMeshLodDataNode&); \
public: \
	NO_API virtual ~UInterchangeStaticMeshLodDataNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeStaticMeshLodDataNode(UInterchangeStaticMeshLodDataNode&&); \
	NO_API UInterchangeStaticMeshLodDataNode(const UInterchangeStaticMeshLodDataNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeStaticMeshLodDataNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshLodDataNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStaticMeshLodDataNode) \
	NO_API virtual ~UInterchangeStaticMeshLodDataNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_28_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeStaticMeshLodDataNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
