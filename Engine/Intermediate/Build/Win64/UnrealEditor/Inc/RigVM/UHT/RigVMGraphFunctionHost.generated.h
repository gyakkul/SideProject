// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMGraphFunctionHost.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMGraphFunctionHost_generated_h
#error "RigVMGraphFunctionHost.generated.h already included, missing '#pragma once' in RigVMGraphFunctionHost.h"
#endif
#define RIGVM_RigVMGraphFunctionHost_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMGraphFunctionHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMGraphFunctionHost) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMGraphFunctionHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMGraphFunctionHost); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMGraphFunctionHost(URigVMGraphFunctionHost&&); \
	NO_API URigVMGraphFunctionHost(const URigVMGraphFunctionHost&); \
public: \
	NO_API virtual ~URigVMGraphFunctionHost();


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMGraphFunctionHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMGraphFunctionHost(URigVMGraphFunctionHost&&); \
	NO_API URigVMGraphFunctionHost(const URigVMGraphFunctionHost&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMGraphFunctionHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMGraphFunctionHost); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMGraphFunctionHost) \
	NO_API virtual ~URigVMGraphFunctionHost();


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURigVMGraphFunctionHost(); \
	friend struct Z_Construct_UClass_URigVMGraphFunctionHost_Statics; \
public: \
	DECLARE_CLASS(URigVMGraphFunctionHost, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RigVM"), NO_API) \
	DECLARE_SERIALIZER(URigVMGraphFunctionHost)


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRigVMGraphFunctionHost() {} \
public: \
	typedef URigVMGraphFunctionHost UClassType; \
	typedef IRigVMGraphFunctionHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IRigVMGraphFunctionHost() {} \
public: \
	typedef URigVMGraphFunctionHost UClassType; \
	typedef IRigVMGraphFunctionHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_10_PROLOG
#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVM_API UClass* StaticClass<class URigVMGraphFunctionHost>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMGraphFunctionStore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
