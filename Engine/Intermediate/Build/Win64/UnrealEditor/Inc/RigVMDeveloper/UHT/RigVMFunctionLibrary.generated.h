// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMFunctionReferenceNode;
class URigVMLibraryNode;
class URigVMNode;
#ifdef RIGVMDEVELOPER_RigVMFunctionLibrary_generated_h
#error "RigVMFunctionLibrary.generated.h already included, missing '#pragma once' in RigVMFunctionLibrary.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionLibrary_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReferencePathsForFunction); \
	DECLARE_FUNCTION(execGetReferencesForFunction); \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execFindFunction); \
	DECLARE_FUNCTION(execGetFunctions);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReferencePathsForFunction); \
	DECLARE_FUNCTION(execGetReferencesForFunction); \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execFindFunction); \
	DECLARE_FUNCTION(execGetFunctions);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionLibrary(); \
	friend struct Z_Construct_UClass_URigVMFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URigVMFunctionLibrary, URigVMGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMFunctionLibrary)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURigVMFunctionLibrary(); \
	friend struct Z_Construct_UClass_URigVMFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URigVMFunctionLibrary, URigVMGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMFunctionLibrary)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMFunctionLibrary(URigVMFunctionLibrary&&); \
	NO_API URigVMFunctionLibrary(const URigVMFunctionLibrary&); \
public: \
	NO_API virtual ~URigVMFunctionLibrary();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMFunctionLibrary(URigVMFunctionLibrary&&); \
	NO_API URigVMFunctionLibrary(const URigVMFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionLibrary) \
	NO_API virtual ~URigVMFunctionLibrary();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_18_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
