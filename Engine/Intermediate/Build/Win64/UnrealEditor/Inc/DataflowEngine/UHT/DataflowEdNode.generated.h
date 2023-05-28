// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEdNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWENGINE_DataflowEdNode_generated_h
#error "DataflowEdNode.generated.h already included, missing '#pragma once' in DataflowEdNode.h"
#endif
#define DATAFLOWENGINE_DataflowEdNode_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowEdNode, NO_API)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowEdNode(); \
	friend struct Z_Construct_UClass_UDataflowEdNode_Statics; \
public: \
	DECLARE_CLASS(UDataflowEdNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowEdNode) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowEdNode(); \
	friend struct Z_Construct_UClass_UDataflowEdNode_Statics; \
public: \
	DECLARE_CLASS(UDataflowEdNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowEdNode) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowEdNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEdNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowEdNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEdNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataflowEdNode(UDataflowEdNode&&); \
	NO_API UDataflowEdNode(const UDataflowEdNode&); \
public: \
	NO_API virtual ~UDataflowEdNode();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowEdNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataflowEdNode(UDataflowEdNode&&); \
	NO_API UDataflowEdNode(const UDataflowEdNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowEdNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEdNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEdNode) \
	NO_API virtual ~UDataflowEdNode();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_26_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataflowEdNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflowEdNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
