// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/Acceleration/ParticleModuleAccelerationBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAccelerationBase_generated_h
#error "ParticleModuleAccelerationBase.generated.h already included, missing '#pragma once' in ParticleModuleAccelerationBase.h"
#endif
#define ENGINE_ParticleModuleAccelerationBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleAccelerationBase(); \
	friend struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAccelerationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleAccelerationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAccelerationBase(); \
	friend struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAccelerationBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleAccelerationBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleAccelerationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAccelerationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleAccelerationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAccelerationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleAccelerationBase(UParticleModuleAccelerationBase&&); \
	NO_API UParticleModuleAccelerationBase(const UParticleModuleAccelerationBase&); \
public: \
	NO_API virtual ~UParticleModuleAccelerationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleAccelerationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleAccelerationBase(UParticleModuleAccelerationBase&&); \
	NO_API UParticleModuleAccelerationBase(const UParticleModuleAccelerationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleAccelerationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAccelerationBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAccelerationBase) \
	NO_API virtual ~UParticleModuleAccelerationBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleAccelerationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleAccelerationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_Acceleration_ParticleModuleAccelerationBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
