// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataAsset_generated_h
#error "DataAsset.generated.h already included, missing '#pragma once' in DataAsset.h"
#endif
#define ENGINE_DataAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDataAsset, ENGINE_API)


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend struct Z_Construct_UClass_UDataAsset_Statics; \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend struct Z_Construct_UClass_UDataAsset_Statics; \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public: \
	ENGINE_API virtual ~UDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	ENGINE_API virtual ~UDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataAsset>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend struct Z_Construct_UClass_UPrimaryDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend struct Z_Construct_UClass_UPrimaryDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public: \
	ENGINE_API virtual ~UPrimaryDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset) \
	ENGINE_API virtual ~UPrimaryDataAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimaryDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
