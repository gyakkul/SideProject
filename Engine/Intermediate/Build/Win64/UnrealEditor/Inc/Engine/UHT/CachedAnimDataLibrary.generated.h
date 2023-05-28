// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/CachedAnimDataLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FCachedAnimStateData;
#ifdef ENGINE_CachedAnimDataLibrary_generated_h
#error "CachedAnimDataLibrary.generated.h already included, missing '#pragma once' in CachedAnimDataLibrary.h"
#endif
#define ENGINE_CachedAnimDataLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStateMachine_GetGlobalWeight); \
	DECLARE_FUNCTION(execStateMachine_GetLocalWeight); \
	DECLARE_FUNCTION(execStateMachine_IsStateRelevant);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStateMachine_GetGlobalWeight); \
	DECLARE_FUNCTION(execStateMachine_GetLocalWeight); \
	DECLARE_FUNCTION(execStateMachine_IsStateRelevant);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCachedAnimDataLibrary(); \
	friend struct Z_Construct_UClass_UCachedAnimDataLibrary_Statics; \
public: \
	DECLARE_CLASS(UCachedAnimDataLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCachedAnimDataLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCachedAnimDataLibrary(); \
	friend struct Z_Construct_UClass_UCachedAnimDataLibrary_Statics; \
public: \
	DECLARE_CLASS(UCachedAnimDataLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCachedAnimDataLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCachedAnimDataLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCachedAnimDataLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCachedAnimDataLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCachedAnimDataLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCachedAnimDataLibrary(UCachedAnimDataLibrary&&); \
	NO_API UCachedAnimDataLibrary(const UCachedAnimDataLibrary&); \
public: \
	NO_API virtual ~UCachedAnimDataLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCachedAnimDataLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCachedAnimDataLibrary(UCachedAnimDataLibrary&&); \
	NO_API UCachedAnimDataLibrary(const UCachedAnimDataLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCachedAnimDataLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCachedAnimDataLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCachedAnimDataLibrary) \
	NO_API virtual ~UCachedAnimDataLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CachedAnimDataLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCachedAnimDataLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_CachedAnimDataLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
