// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraParameterCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef NIAGARA_NiagaraParameterCollection_generated_h
#error "NiagaraParameterCollection.generated.h already included, missing '#pragma once' in NiagaraParameterCollection.h"
#endif
#define NIAGARA_NiagaraParameterCollection_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetQuatParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execGetColorParameter); \
	DECLARE_FUNCTION(execGetQuatParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetIntParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execGetBoolParameter);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetQuatParameter); \
	DECLARE_FUNCTION(execSetColorParameter); \
	DECLARE_FUNCTION(execSetVector4Parameter); \
	DECLARE_FUNCTION(execSetVectorParameter); \
	DECLARE_FUNCTION(execSetVector2DParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execGetColorParameter); \
	DECLARE_FUNCTION(execGetQuatParameter); \
	DECLARE_FUNCTION(execGetVector4Parameter); \
	DECLARE_FUNCTION(execGetVectorParameter); \
	DECLARE_FUNCTION(execGetVector2DParameter); \
	DECLARE_FUNCTION(execGetIntParameter); \
	DECLARE_FUNCTION(execGetFloatParameter); \
	DECLARE_FUNCTION(execGetBoolParameter);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollectionInstance)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollectionInstance)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollectionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollectionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollectionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollectionInstance(UNiagaraParameterCollectionInstance&&); \
	NO_API UNiagaraParameterCollectionInstance(const UNiagaraParameterCollectionInstance&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollectionInstance(UNiagaraParameterCollectionInstance&&); \
	NO_API UNiagaraParameterCollectionInstance(const UNiagaraParameterCollectionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollectionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollectionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollectionInstance)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraParameterCollectionInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParameterCollectionInstance>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollection(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraParameterCollection(); \
	friend struct Z_Construct_UClass_UNiagaraParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParameterCollection)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollection(UNiagaraParameterCollection&&); \
	NO_API UNiagaraParameterCollection(const UNiagaraParameterCollection&); \
public: \
	NO_API virtual ~UNiagaraParameterCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParameterCollection(UNiagaraParameterCollection&&); \
	NO_API UNiagaraParameterCollection(const UNiagaraParameterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParameterCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParameterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParameterCollection) \
	NO_API virtual ~UNiagaraParameterCollection();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_130_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h_133_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraParameterCollection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParameterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
