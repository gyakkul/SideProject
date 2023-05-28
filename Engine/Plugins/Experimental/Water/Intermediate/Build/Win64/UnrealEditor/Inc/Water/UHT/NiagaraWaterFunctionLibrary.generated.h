// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraWaterFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class UNiagaraComponent;
class UWaterBodyComponent;
#ifdef WATER_NiagaraWaterFunctionLibrary_generated_h
#error "NiagaraWaterFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraWaterFunctionLibrary.h"
#endif
#define WATER_NiagaraWaterFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterBody);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterBody);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraWaterFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraWaterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraWaterFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraWaterFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraWaterFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraWaterFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraWaterFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraWaterFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraWaterFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraWaterFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraWaterFunctionLibrary(UNiagaraWaterFunctionLibrary&&); \
	NO_API UNiagaraWaterFunctionLibrary(const UNiagaraWaterFunctionLibrary&); \
public: \
	NO_API virtual ~UNiagaraWaterFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraWaterFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraWaterFunctionLibrary(UNiagaraWaterFunctionLibrary&&); \
	NO_API UNiagaraWaterFunctionLibrary(const UNiagaraWaterFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraWaterFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraWaterFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraWaterFunctionLibrary) \
	NO_API virtual ~UNiagaraWaterFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UNiagaraWaterFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_NiagaraWaterFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
