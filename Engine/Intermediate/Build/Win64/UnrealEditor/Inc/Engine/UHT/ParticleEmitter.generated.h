// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleEmitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleEmitter_generated_h
#error "ParticleEmitter.generated.h already included, missing '#pragma once' in ParticleEmitter.h"
#endif
#define ENGINE_ParticleEmitter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleBurst_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleBurst>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleEmitter, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleEmitter(); \
	friend struct Z_Construct_UClass_UParticleEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleEmitter) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUParticleEmitter(); \
	friend struct Z_Construct_UClass_UParticleEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleEmitter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleEmitter) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleEmitter(UParticleEmitter&&); \
	ENGINE_API UParticleEmitter(const UParticleEmitter&); \
public: \
	ENGINE_API virtual ~UParticleEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleEmitter(UParticleEmitter&&); \
	ENGINE_API UParticleEmitter(const UParticleEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleEmitter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleEmitter) \
	ENGINE_API virtual ~UParticleEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_100_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h_103_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEmitter_h


#define FOREACH_ENUM_EPARTICLEBURSTMETHOD(op) \
	op(EPBM_Instant) \
	op(EPBM_Interpolated) 

enum EParticleBurstMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleBurstMethod>();

#define FOREACH_ENUM_EPARTICLESUBUVINTERPMETHOD(op) \
	op(PSUVIM_None) \
	op(PSUVIM_Linear) \
	op(PSUVIM_Linear_Blend) \
	op(PSUVIM_Random) \
	op(PSUVIM_Random_Blend) 

enum EParticleSubUVInterpMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSubUVInterpMethod>();

#define FOREACH_ENUM_EEMITTERRENDERMODE(op) \
	op(ERM_Normal) \
	op(ERM_Point) \
	op(ERM_Cross) \
	op(ERM_LightsOnly) \
	op(ERM_None) 

enum EEmitterRenderMode : int;
template<> ENGINE_API UEnum* StaticEnum<EEmitterRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
