// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleModuleRequired.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleRequired_generated_h
#error "ParticleModuleRequired.generated.h already included, missing '#pragma once' in ParticleModuleRequired.h"
#endif
#define ENGINE_ParticleModuleRequired_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UParticleModuleRequired, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleRequired(); \
	friend struct Z_Construct_UClass_UParticleModuleRequired_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleRequired, UParticleModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleRequired) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleRequired(); \
	friend struct Z_Construct_UClass_UParticleModuleRequired_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleRequired, UParticleModule, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleRequired) \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleRequired(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRequired) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleRequired); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRequired); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleRequired(UParticleModuleRequired&&); \
	ENGINE_API UParticleModuleRequired(const UParticleModuleRequired&); \
public: \
	ENGINE_API virtual ~UParticleModuleRequired();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleRequired(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleRequired(UParticleModuleRequired&&); \
	ENGINE_API UParticleModuleRequired(const UParticleModuleRequired&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleRequired); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleRequired); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleRequired) \
	ENGINE_API virtual ~UParticleModuleRequired();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_120_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h_123_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleRequired."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleRequired>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModuleRequired_h


#define FOREACH_ENUM_EPARTICLEUVFLIPMODE(op) \
	op(EParticleUVFlipMode::None) \
	op(EParticleUVFlipMode::FlipUV) \
	op(EParticleUVFlipMode::FlipUOnly) \
	op(EParticleUVFlipMode::FlipVOnly) \
	op(EParticleUVFlipMode::RandomFlipUV) \
	op(EParticleUVFlipMode::RandomFlipUOnly) \
	op(EParticleUVFlipMode::RandomFlipVOnly) \
	op(EParticleUVFlipMode::RandomFlipUVIndependent) 

enum class EParticleUVFlipMode : uint8;
template<> struct TIsUEnumClass<EParticleUVFlipMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EParticleUVFlipMode>();

#define FOREACH_ENUM_EPARTICLESORTMODE(op) \
	op(PSORTMODE_None) \
	op(PSORTMODE_ViewProjDepth) \
	op(PSORTMODE_DistanceToView) \
	op(PSORTMODE_Age_OldestFirst) \
	op(PSORTMODE_Age_NewestFirst) 

enum EParticleSortMode : int;
template<> ENGINE_API UEnum* StaticEnum<EParticleSortMode>();

#define FOREACH_ENUM_EEMITTERNORMALSMODE(op) \
	op(ENM_CameraFacing) \
	op(ENM_Spherical) \
	op(ENM_Cylindrical) 

enum EEmitterNormalsMode : int;
template<> ENGINE_API UEnum* StaticEnum<EEmitterNormalsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
