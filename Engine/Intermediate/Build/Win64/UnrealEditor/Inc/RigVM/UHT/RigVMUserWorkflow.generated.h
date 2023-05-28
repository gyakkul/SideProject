// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMUserWorkflow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMUserWorkflowOptions;
#ifdef RIGVM_RigVMUserWorkflow_generated_h
#error "RigVMUserWorkflow.generated.h already included, missing '#pragma once' in RigVMUserWorkflow.h"
#endif
#define RIGVM_RigVMUserWorkflow_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_29_DELEGATE \
RIGVM_API bool FRigVMPeformUserWorkflowDynamicDelegate_DelegateWrapper(const FScriptDelegate& RigVMPeformUserWorkflowDynamicDelegate, const URigVMUserWorkflowOptions* InOptions, UObject* InController);


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMUserWorkflow>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_SPARSE_DATA
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportInfo); \
	DECLARE_FUNCTION(execReportWarning); \
	DECLARE_FUNCTION(execReportError); \
	DECLARE_FUNCTION(execRequiresDialog); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportInfo); \
	DECLARE_FUNCTION(execReportWarning); \
	DECLARE_FUNCTION(execReportError); \
	DECLARE_FUNCTION(execRequiresDialog); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_ACCESSORS
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowOptions(); \
	friend struct Z_Construct_UClass_URigVMUserWorkflowOptions_Statics; \
public: \
	DECLARE_CLASS(URigVMUserWorkflowOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMUserWorkflowOptions)


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_INCLASS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowOptions(); \
	friend struct Z_Construct_UClass_URigVMUserWorkflowOptions_Statics; \
public: \
	DECLARE_CLASS(URigVMUserWorkflowOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMUserWorkflowOptions)


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMUserWorkflowOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMUserWorkflowOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMUserWorkflowOptions(URigVMUserWorkflowOptions&&); \
	NO_API URigVMUserWorkflowOptions(const URigVMUserWorkflowOptions&); \
public: \
	NO_API virtual ~URigVMUserWorkflowOptions();


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMUserWorkflowOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMUserWorkflowOptions(URigVMUserWorkflowOptions&&); \
	NO_API URigVMUserWorkflowOptions(const URigVMUserWorkflowOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMUserWorkflowOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowOptions) \
	NO_API virtual ~URigVMUserWorkflowOptions();


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_105_PROLOG
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_SPARSE_DATA \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_ACCESSORS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_INCLASS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_SPARSE_DATA \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_ACCESSORS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMUserWorkflowOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h


#define FOREACH_ENUM_ERIGVMUSERWORKFLOWTYPE(op) \
	op(ERigVMUserWorkflowType::Invalid) \
	op(ERigVMUserWorkflowType::NodeContext) \
	op(ERigVMUserWorkflowType::PinContext) \
	op(ERigVMUserWorkflowType::OnPinDefaultChanged) \
	op(ERigVMUserWorkflowType::All) 

enum class ERigVMUserWorkflowType : uint8;
template<> struct TIsUEnumClass<ERigVMUserWorkflowType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigVMUserWorkflowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
