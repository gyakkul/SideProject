// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCompiler/RigVMCompiler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVM;
class URigVMController;
class URigVMGraph;
#ifdef RIGVMDEVELOPER_RigVMCompiler_generated_h
#error "RigVMCompiler.generated.h already included, missing '#pragma once' in RigVMCompiler.h"
#endif
#define RIGVMDEVELOPER_RigVMCompiler_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMCompileSettings>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompile);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompile);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMCompiler(); \
	friend struct Z_Construct_UClass_URigVMCompiler_Statics; \
public: \
	DECLARE_CLASS(URigVMCompiler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMCompiler)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_INCLASS \
private: \
	static void StaticRegisterNativesURigVMCompiler(); \
	friend struct Z_Construct_UClass_URigVMCompiler_Statics; \
public: \
	DECLARE_CLASS(URigVMCompiler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMCompiler)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMCompiler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMCompiler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMCompiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMCompiler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMCompiler(URigVMCompiler&&); \
	NO_API URigVMCompiler(const URigVMCompiler&); \
public: \
	NO_API virtual ~URigVMCompiler();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMCompiler(URigVMCompiler&&); \
	NO_API URigVMCompiler(const URigVMCompiler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMCompiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMCompiler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMCompiler) \
	NO_API virtual ~URigVMCompiler();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_160_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMCompiler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
