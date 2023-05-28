// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSimCacheFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncNiagaraCaptureSimCache;
class UNiagaraComponent;
class UNiagaraSimCache;
class UObject;
struct FNiagaraSimCacheCreateParameters;
#ifdef NIAGARA_NiagaraSimCacheFunctionLibrary_generated_h
#error "NiagaraSimCacheFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraSimCacheFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraSimCacheFunctionLibrary_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_19_DELEGATE \
static NIAGARA_API void FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool bSuccess);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheUntilComplete); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheMultiFrame);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheUntilComplete); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheMultiFrame);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncNiagaraCaptureSimCache(); \
	friend struct Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics; \
public: \
	DECLARE_CLASS(UAsyncNiagaraCaptureSimCache, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UAsyncNiagaraCaptureSimCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncNiagaraCaptureSimCache(); \
	friend struct Z_Construct_UClass_UAsyncNiagaraCaptureSimCache_Statics; \
public: \
	DECLARE_CLASS(UAsyncNiagaraCaptureSimCache, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UAsyncNiagaraCaptureSimCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncNiagaraCaptureSimCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncNiagaraCaptureSimCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncNiagaraCaptureSimCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNiagaraCaptureSimCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncNiagaraCaptureSimCache(UAsyncNiagaraCaptureSimCache&&); \
	NO_API UAsyncNiagaraCaptureSimCache(const UAsyncNiagaraCaptureSimCache&); \
public: \
	NO_API virtual ~UAsyncNiagaraCaptureSimCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncNiagaraCaptureSimCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncNiagaraCaptureSimCache(UAsyncNiagaraCaptureSimCache&&); \
	NO_API UAsyncNiagaraCaptureSimCache(const UAsyncNiagaraCaptureSimCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncNiagaraCaptureSimCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNiagaraCaptureSimCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncNiagaraCaptureSimCache) \
	NO_API virtual ~UAsyncNiagaraCaptureSimCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UAsyncNiagaraCaptureSimCache>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateNiagaraSimCache); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheImmediate);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateNiagaraSimCache); \
	DECLARE_FUNCTION(execCaptureNiagaraSimCacheImmediate);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimCacheFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSimCacheFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSimCacheFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraSimCacheFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSimCacheFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSimCacheFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSimCacheFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSimCacheFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSimCacheFunctionLibrary(UNiagaraSimCacheFunctionLibrary&&); \
	NO_API UNiagaraSimCacheFunctionLibrary(const UNiagaraSimCacheFunctionLibrary&); \
public: \
	NO_API virtual ~UNiagaraSimCacheFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSimCacheFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSimCacheFunctionLibrary(UNiagaraSimCacheFunctionLibrary&&); \
	NO_API UNiagaraSimCacheFunctionLibrary(const UNiagaraSimCacheFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSimCacheFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSimCacheFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSimCacheFunctionLibrary) \
	NO_API virtual ~UNiagaraSimCacheFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_63_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraSimCacheFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSimCacheFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
