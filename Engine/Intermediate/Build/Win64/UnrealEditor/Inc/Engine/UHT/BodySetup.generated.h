// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/BodySetup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodySetup_generated_h
#error "BodySetup.generated.h already included, missing '#pragma once' in BodySetup.h"
#endif
#define ENGINE_BodySetup_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend struct Z_Construct_UClass_UBodySetup_Statics; \
public: \
	DECLARE_CLASS(UBodySetup, UBodySetupCore, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend struct Z_Construct_UClass_UBodySetup_Statics; \
public: \
	DECLARE_CLASS(UBodySetup, UBodySetupCore, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_126_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodySetup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBodySetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
