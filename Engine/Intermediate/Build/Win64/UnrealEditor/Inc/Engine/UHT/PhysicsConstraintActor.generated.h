// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsConstraintActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsConstraintActor_generated_h
#error "PhysicsConstraintActor.generated.h already included, missing '#pragma once' in PhysicsConstraintActor.h"
#endif
#define ENGINE_PhysicsConstraintActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsConstraintActor(); \
	friend struct Z_Construct_UClass_APhysicsConstraintActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsConstraintActor, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APhysicsConstraintActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsConstraintActor(); \
	friend struct Z_Construct_UClass_APhysicsConstraintActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsConstraintActor, ARigidBodyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APhysicsConstraintActor)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsConstraintActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APhysicsConstraintActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsConstraintActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APhysicsConstraintActor(APhysicsConstraintActor&&); \
	ENGINE_API APhysicsConstraintActor(const APhysicsConstraintActor&); \
public: \
	ENGINE_API virtual ~APhysicsConstraintActor();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APhysicsConstraintActor(APhysicsConstraintActor&&); \
	ENGINE_API APhysicsConstraintActor(const APhysicsConstraintActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APhysicsConstraintActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsConstraintActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsConstraintActor) \
	ENGINE_API virtual ~APhysicsConstraintActor();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsConstraintActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APhysicsConstraintActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
