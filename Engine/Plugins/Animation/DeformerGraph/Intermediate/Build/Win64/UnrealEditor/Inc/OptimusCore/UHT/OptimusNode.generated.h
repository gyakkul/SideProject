// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_OptimusNode_generated_h
#error "OptimusNode.generated.h already included, missing '#pragma once' in OptimusNode.h"
#endif
#define OPTIMUSCORE_OptimusNode_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraphPosition); \
	DECLARE_FUNCTION(execSetGraphPosition); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execGetNodeCategory);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphPosition); \
	DECLARE_FUNCTION(execSetGraphPosition); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetNodeName); \
	DECLARE_FUNCTION(execGetNodeCategory);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ACCESSORS
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode, NO_API)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNode(); \
	friend struct Z_Construct_UClass_UOptimusNode_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUOptimusNode(); \
	friend struct Z_Construct_UClass_UOptimusNode_Statics; \
public: \
	DECLARE_CLASS(UOptimusNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNode) \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusNode(UOptimusNode&&); \
	NO_API UOptimusNode(const UOptimusNode&); \
public:


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusNode(UOptimusNode&&); \
	NO_API UOptimusNode(const UOptimusNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOptimusNode)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_25_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_INCLASS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
