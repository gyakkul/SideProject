// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCameraNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeCameraNode_generated_h
#error "InterchangeCameraNode.generated.h already included, missing '#pragma once' in InterchangeCameraNode.h"
#endif
#define INTERCHANGENODES_InterchangeCameraNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execGetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execSetCustomSensorHeight); \
	DECLARE_FUNCTION(execGetCustomSensorHeight); \
	DECLARE_FUNCTION(execSetCustomSensorWidth); \
	DECLARE_FUNCTION(execGetCustomSensorWidth); \
	DECLARE_FUNCTION(execSetCustomFocalLength); \
	DECLARE_FUNCTION(execGetCustomFocalLength);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execGetCustomEnableDepthOfField); \
	DECLARE_FUNCTION(execSetCustomSensorHeight); \
	DECLARE_FUNCTION(execGetCustomSensorHeight); \
	DECLARE_FUNCTION(execSetCustomSensorWidth); \
	DECLARE_FUNCTION(execGetCustomSensorWidth); \
	DECLARE_FUNCTION(execSetCustomFocalLength); \
	DECLARE_FUNCTION(execGetCustomFocalLength);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeCameraNode(); \
	friend struct Z_Construct_UClass_UInterchangeCameraNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeCameraNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeCameraNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeCameraNode(); \
	friend struct Z_Construct_UClass_UInterchangeCameraNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeCameraNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeCameraNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeCameraNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeCameraNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeCameraNode(UInterchangeCameraNode&&); \
	NO_API UInterchangeCameraNode(const UInterchangeCameraNode&); \
public: \
	NO_API virtual ~UInterchangeCameraNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeCameraNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeCameraNode(UInterchangeCameraNode&&); \
	NO_API UInterchangeCameraNode(const UInterchangeCameraNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeCameraNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeCameraNode) \
	NO_API virtual ~UInterchangeCameraNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeCameraNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeCameraNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
