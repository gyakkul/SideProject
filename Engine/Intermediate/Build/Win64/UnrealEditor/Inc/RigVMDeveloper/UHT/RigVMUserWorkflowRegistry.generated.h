// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMUserWorkflowRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMUserWorkflowRegistry;
class UScriptStruct;
enum class ERigVMUserWorkflowType : uint8;
struct FRigVMUserWorkflow;
#ifdef RIGVMDEVELOPER_RigVMUserWorkflowRegistry_generated_h
#error "RigVMUserWorkflowRegistry.generated.h already included, missing '#pragma once' in RigVMUserWorkflowRegistry.h"
#endif
#define RIGVMDEVELOPER_RigVMUserWorkflowRegistry_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_22_DELEGATE \
RIGVMDEVELOPER_API TArray<FRigVMUserWorkflow> FRigVMUserWorkflowProvider_DelegateWrapper(const FScriptDelegate& RigVMUserWorkflowProvider, const UObject* InSubject);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorkflows); \
	DECLARE_FUNCTION(execUnregisterProvider); \
	DECLARE_FUNCTION(execRegisterProvider); \
	DECLARE_FUNCTION(execGet);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorkflows); \
	DECLARE_FUNCTION(execUnregisterProvider); \
	DECLARE_FUNCTION(execRegisterProvider); \
	DECLARE_FUNCTION(execGet);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowRegistry(); \
	friend struct Z_Construct_UClass_URigVMUserWorkflowRegistry_Statics; \
public: \
	DECLARE_CLASS(URigVMUserWorkflowRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMUserWorkflowRegistry)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_INCLASS \
private: \
	static void StaticRegisterNativesURigVMUserWorkflowRegistry(); \
	friend struct Z_Construct_UClass_URigVMUserWorkflowRegistry_Statics; \
public: \
	DECLARE_CLASS(URigVMUserWorkflowRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMUserWorkflowRegistry)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMUserWorkflowRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMUserWorkflowRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMUserWorkflowRegistry(URigVMUserWorkflowRegistry&&); \
	NO_API URigVMUserWorkflowRegistry(const URigVMUserWorkflowRegistry&); \
public: \
	NO_API virtual ~URigVMUserWorkflowRegistry();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMUserWorkflowRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMUserWorkflowRegistry(URigVMUserWorkflowRegistry&&); \
	NO_API URigVMUserWorkflowRegistry(const URigVMUserWorkflowRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMUserWorkflowRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUserWorkflowRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMUserWorkflowRegistry) \
	NO_API virtual ~URigVMUserWorkflowRegistry();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_24_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMUserWorkflowRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMUserWorkflowRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
