// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Particles/ParticleEventManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleEventManager_generated_h
#error "ParticleEventManager.generated.h already included, missing '#pragma once' in ParticleEventManager.h"
#endif
#define ENGINE_ParticleEventManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParticleEventManager(); \
	friend struct Z_Construct_UClass_AParticleEventManager_Statics; \
public: \
	DECLARE_CLASS(AParticleEventManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AParticleEventManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAParticleEventManager(); \
	friend struct Z_Construct_UClass_AParticleEventManager_Statics; \
public: \
	DECLARE_CLASS(AParticleEventManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AParticleEventManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticleEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticleEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleEventManager(AParticleEventManager&&); \
	NO_API AParticleEventManager(const AParticleEventManager&); \
public: \
	NO_API virtual ~AParticleEventManager();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticleEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleEventManager(AParticleEventManager&&); \
	NO_API AParticleEventManager(const AParticleEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticleEventManager) \
	NO_API virtual ~AParticleEventManager();


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleEventManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AParticleEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleEventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
