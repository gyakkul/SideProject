// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSystem_generated_h
#error "NiagaraSystem.generated.h already included, missing '#pragma once' in NiagaraSystem.h"
#endif
#define NIAGARA_NiagaraSystem_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterCompiledData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBinding>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraParameterDataSetBindingCollection>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemCompiledData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemCompileRequest_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemCompileRequest>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemScalabilityOverrides>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraSystem, NO_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct Z_Construct_UClass_UNiagaraSystem_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystem(); \
	friend struct Z_Construct_UClass_UNiagaraSystem_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystem, UFXSystemAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystem) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystem) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystem(UNiagaraSystem&&); \
	NO_API UNiagaraSystem(const UNiagaraSystem&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystem(UNiagaraSystem&&); \
	NO_API UNiagaraSystem(const UNiagaraSystem&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSystem)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_245_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h_248_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraSystem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
