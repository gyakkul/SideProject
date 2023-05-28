// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMVariableNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRigVMGraphVariableDescription;
#ifdef RIGVMDEVELOPER_RigVMVariableNode_generated_h
#error "RigVMVariableNode.generated.h already included, missing '#pragma once' in RigVMVariableNode.h"
#endif
#define RIGVMDEVELOPER_RigVMVariableNode_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVariableDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInputArgument); \
	DECLARE_FUNCTION(execIsLocalVariable); \
	DECLARE_FUNCTION(execIsExternalVariable); \
	DECLARE_FUNCTION(execIsGetter); \
	DECLARE_FUNCTION(execGetVariableName);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVariableDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInputArgument); \
	DECLARE_FUNCTION(execIsLocalVariable); \
	DECLARE_FUNCTION(execIsExternalVariable); \
	DECLARE_FUNCTION(execIsGetter); \
	DECLARE_FUNCTION(execGetVariableName);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMVariableNode(); \
	friend struct Z_Construct_UClass_URigVMVariableNode_Statics; \
public: \
	DECLARE_CLASS(URigVMVariableNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMVariableNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURigVMVariableNode(); \
	friend struct Z_Construct_UClass_URigVMVariableNode_Statics; \
public: \
	DECLARE_CLASS(URigVMVariableNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMVariableNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMVariableNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMVariableNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMVariableNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMVariableNode(URigVMVariableNode&&); \
	NO_API URigVMVariableNode(const URigVMVariableNode&); \
public: \
	NO_API virtual ~URigVMVariableNode();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMVariableNode(URigVMVariableNode&&); \
	NO_API URigVMVariableNode(const URigVMVariableNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMVariableNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMVariableNode) \
	NO_API virtual ~URigVMVariableNode();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_16_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMVariableNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
