// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestUtilityLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UTraceQueryTestResults;
struct FLinearColor;
struct FTraceChannelTestBatchOptions;
#ifdef FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h
#error "FunctionalTestUtilityLibrary.generated.h already included, missing '#pragma once' in FunctionalTestUtilityLibrary.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestUtilityLibrary_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceChannelTestUtil);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceChannelTestUtil);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionalTestUtilityLibrary(); \
	friend struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UFunctionalTestUtilityLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionalTestUtilityLibrary(); \
	friend struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UFunctionalTestUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UFunctionalTestUtilityLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionalTestUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary&&); \
	NO_API UFunctionalTestUtilityLibrary(const UFunctionalTestUtilityLibrary&); \
public: \
	NO_API virtual ~UFunctionalTestUtilityLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionalTestUtilityLibrary(UFunctionalTestUtilityLibrary&&); \
	NO_API UFunctionalTestUtilityLibrary(const UFunctionalTestUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionalTestUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionalTestUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionalTestUtilityLibrary) \
	NO_API virtual ~UFunctionalTestUtilityLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_14_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UFunctionalTestUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
