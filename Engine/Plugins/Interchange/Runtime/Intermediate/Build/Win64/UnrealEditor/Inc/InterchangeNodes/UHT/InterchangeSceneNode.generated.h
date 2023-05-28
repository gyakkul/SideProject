// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UInterchangeBaseNodeContainer;
#ifdef INTERCHANGENODES_InterchangeSceneNode_generated_h
#error "InterchangeSceneNode.generated.h already included, missing '#pragma once' in InterchangeSceneNode.h"
#endif
#define INTERCHANGENODES_InterchangeSceneNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execGetCustomTimeZeroGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execSetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execSetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execGetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execRemoveSpecializedType); \
	DECLARE_FUNCTION(execAddSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypes); \
	DECLARE_FUNCTION(execGetSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypeCount); \
	DECLARE_FUNCTION(execIsSpecializedTypeContains);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execGetCustomTimeZeroGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execSetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execSetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execGetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execRemoveSpecializedType); \
	DECLARE_FUNCTION(execAddSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypes); \
	DECLARE_FUNCTION(execGetSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypeCount); \
	DECLARE_FUNCTION(execIsSpecializedTypeContains);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSceneNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneNode(); \
	friend struct Z_Construct_UClass_UInterchangeSceneNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSceneNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSceneNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeSceneNode(); \
	friend struct Z_Construct_UClass_UInterchangeSceneNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSceneNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSceneNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSceneNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSceneNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSceneNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSceneNode(UInterchangeSceneNode&&); \
	NO_API UInterchangeSceneNode(const UInterchangeSceneNode&); \
public: \
	NO_API virtual ~UInterchangeSceneNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSceneNode(UInterchangeSceneNode&&); \
	NO_API UInterchangeSceneNode(const UInterchangeSceneNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSceneNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneNode) \
	NO_API virtual ~UInterchangeSceneNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_36_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeSceneNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
