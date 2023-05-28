// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ObjectReferencer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ObjectReferencer_generated_h
#error "ObjectReferencer.generated.h already included, missing '#pragma once' in ObjectReferencer.h"
#endif
#define ENGINE_ObjectReferencer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectReferencer(); \
	friend struct Z_Construct_UClass_UObjectReferencer_Statics; \
public: \
	DECLARE_CLASS(UObjectReferencer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UObjectReferencer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUObjectReferencer(); \
	friend struct Z_Construct_UClass_UObjectReferencer_Statics; \
public: \
	DECLARE_CLASS(UObjectReferencer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UObjectReferencer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectReferencer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectReferencer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectReferencer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectReferencer(UObjectReferencer&&); \
	NO_API UObjectReferencer(const UObjectReferencer&); \
public: \
	NO_API virtual ~UObjectReferencer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectReferencer(UObjectReferencer&&); \
	NO_API UObjectReferencer(const UObjectReferencer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectReferencer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectReferencer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectReferencer) \
	NO_API virtual ~UObjectReferencer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ObjectReferencer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UObjectReferencer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
