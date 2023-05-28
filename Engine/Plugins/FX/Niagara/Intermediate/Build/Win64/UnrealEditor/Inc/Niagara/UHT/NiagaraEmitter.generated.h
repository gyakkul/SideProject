// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraEmitter_generated_h
#error "NiagaraEmitter.generated.h already included, missing '#pragma once' in NiagaraEmitter.h"
#endif
#define NIAGARA_NiagaraEmitter_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventReceiverProperties>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventGeneratorProperties>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScriptProperties>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraEmitterScriptProperties Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEventScriptProperties>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDetailsLevelScaleOverrides>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FVersionedNiagaraEmitterData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEmitter(); \
	friend struct Z_Construct_UClass_UNiagaraEmitter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitter) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEmitter(); \
	friend struct Z_Construct_UClass_UNiagaraEmitter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEmitter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEmitter) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraEmitter(UNiagaraEmitter&&); \
	NIAGARA_API UNiagaraEmitter(const UNiagaraEmitter&); \
public: \
	NIAGARA_API virtual ~UNiagaraEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraEmitter(UNiagaraEmitter&&); \
	NIAGARA_API UNiagaraEmitter(const UNiagaraEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEmitter) \
	NIAGARA_API virtual ~UNiagaraEmitter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_542_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_545_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h


#define FOREACH_ENUM_ESCRIPTEXECUTIONMODE(op) \
	op(EScriptExecutionMode::EveryParticle) \
	op(EScriptExecutionMode::SpawnedParticles) \
	op(EScriptExecutionMode::SingleParticle) 

enum class EScriptExecutionMode : uint8;
template<> struct TIsUEnumClass<EScriptExecutionMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<EScriptExecutionMode>();

#define FOREACH_ENUM_EPARTICLEALLOCATIONMODE(op) \
	op(EParticleAllocationMode::AutomaticEstimate) \
	op(EParticleAllocationMode::ManualEstimate) \
	op(EParticleAllocationMode::FixedCount) 

enum class EParticleAllocationMode : uint8;
template<> struct TIsUEnumClass<EParticleAllocationMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<EParticleAllocationMode>();

#define FOREACH_ENUM_ENIAGARAEMITTERCALCULATEBOUNDMODE(op) \
	op(ENiagaraEmitterCalculateBoundMode::Dynamic) \
	op(ENiagaraEmitterCalculateBoundMode::Fixed) \
	op(ENiagaraEmitterCalculateBoundMode::Programmable) 

enum class ENiagaraEmitterCalculateBoundMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterCalculateBoundMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterCalculateBoundMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
