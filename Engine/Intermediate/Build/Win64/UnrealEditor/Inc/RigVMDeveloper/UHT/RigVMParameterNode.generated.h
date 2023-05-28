// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMParameterNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRigVMGraphParameterDescription;
#ifdef RIGVMDEVELOPER_RigVMParameterNode_generated_h
#error "RigVMParameterNode.generated.h already included, missing '#pragma once' in RigVMParameterNode.h"
#endif
#define RIGVMDEVELOPER_RigVMParameterNode_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMGraphParameterDescription>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameterDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInput); \
	DECLARE_FUNCTION(execGetParameterName);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameterDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInput); \
	DECLARE_FUNCTION(execGetParameterName);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMParameterNode(); \
	friend struct Z_Construct_UClass_URigVMParameterNode_Statics; \
public: \
	DECLARE_CLASS(URigVMParameterNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMParameterNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_INCLASS \
private: \
	static void StaticRegisterNativesURigVMParameterNode(); \
	friend struct Z_Construct_UClass_URigVMParameterNode_Statics; \
public: \
	DECLARE_CLASS(URigVMParameterNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMParameterNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMParameterNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMParameterNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMParameterNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMParameterNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMParameterNode(URigVMParameterNode&&); \
	NO_API URigVMParameterNode(const URigVMParameterNode&); \
public: \
	NO_API virtual ~URigVMParameterNode();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMParameterNode(URigVMParameterNode&&); \
	NO_API URigVMParameterNode(const URigVMParameterNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMParameterNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMParameterNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMParameterNode) \
	NO_API virtual ~URigVMParameterNode();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_89_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMParameterNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
