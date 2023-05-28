// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSkeletonFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeSkeletonFactoryNode_generated_h
#error "InterchangeSkeletonFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSkeletonFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSkeletonFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execSetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execGetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execSetCustomRootJointUid); \
	DECLARE_FUNCTION(execGetCustomRootJointUid); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeSkeletonNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execSetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execGetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execSetCustomRootJointUid); \
	DECLARE_FUNCTION(execGetCustomRootJointUid); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeSkeletonNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletonFactoryNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletonFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSkeletonFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSkeletonFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletonFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSkeletonFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSkeletonFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSkeletonFactoryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSkeletonFactoryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSkeletonFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletonFactoryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSkeletonFactoryNode(UInterchangeSkeletonFactoryNode&&); \
	NO_API UInterchangeSkeletonFactoryNode(const UInterchangeSkeletonFactoryNode&); \
public: \
	NO_API virtual ~UInterchangeSkeletonFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSkeletonFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSkeletonFactoryNode(UInterchangeSkeletonFactoryNode&&); \
	NO_API UInterchangeSkeletonFactoryNode(const UInterchangeSkeletonFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSkeletonFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletonFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletonFactoryNode) \
	NO_API virtual ~UInterchangeSkeletonFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeSkeletonFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
