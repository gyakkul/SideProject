// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Location/ParticleModuleLocationEmitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationEmitter_generated_h
#error "ParticleModuleLocationEmitter.generated.h already included, missing '#pragma once' in ParticleModuleLocationEmitter.h"
#endif
#define ENGINE_ParticleModuleLocationEmitter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationEmitter(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationEmitter, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationEmitter)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationEmitter(UParticleModuleLocationEmitter&&); \
	NO_API UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter&); \
public: \
	NO_API virtual ~UParticleModuleLocationEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationEmitter(UParticleModuleLocationEmitter&&); \
	NO_API UParticleModuleLocationEmitter(const UParticleModuleLocationEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationEmitter) \
	NO_API virtual ~UParticleModuleLocationEmitter();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationEmitter_h


#define FOREACH_ENUM_ELOCATIONEMITTERSELECTIONMETHOD(op) \
	op(ELESM_Random) \
	op(ELESM_Sequential) 

enum ELocationEmitterSelectionMethod : int;
template<> ENGINE_API UEnum* StaticEnum<ELocationEmitterSelectionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
