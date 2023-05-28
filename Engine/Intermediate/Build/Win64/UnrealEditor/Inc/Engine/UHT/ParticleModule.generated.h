// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModule_generated_h
#error "ParticleModule.generated.h already included, missing '#pragma once' in ParticleModule.h"
#endif
#define ENGINE_ParticleModule_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleCurvePair>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleRandomSeedInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModule(); \
	friend struct Z_Construct_UClass_UParticleModule_Statics; \
public: \
	DECLARE_CLASS(UParticleModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModule) \
	DECLARE_WITHIN(UParticleSystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModule(); \
	friend struct Z_Construct_UClass_UParticleModule_Statics; \
public: \
	DECLARE_CLASS(UParticleModule, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModule) \
	DECLARE_WITHIN(UParticleSystem)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModule(UParticleModule&&); \
	NO_API UParticleModule(const UParticleModule&); \
public: \
	NO_API virtual ~UParticleModule();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModule(UParticleModule&&); \
	NO_API UParticleModule(const UParticleModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModule); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModule) \
	NO_API virtual ~UParticleModule();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_147_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_150_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModule."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h


#define FOREACH_ENUM_EMODULETYPE(op) \
	op(EPMT_General) \
	op(EPMT_TypeData) \
	op(EPMT_Beam) \
	op(EPMT_Trail) \
	op(EPMT_Spawn) \
	op(EPMT_Required) \
	op(EPMT_Event) \
	op(EPMT_Light) \
	op(EPMT_SubUV) 

enum EModuleType : int;
template<> ENGINE_API UEnum* StaticEnum<EModuleType>();

#define FOREACH_ENUM_EPARTICLESOURCESELECTIONMETHOD(op) \
	op(EPSSM_Random) \
	op(EPSSM_Sequential) 

enum EParticleSourceSelectionMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSourceSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
