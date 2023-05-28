// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PhysicsVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsVolume_generated_h
#error "PhysicsVolume.generated.h already included, missing '#pragma once' in PhysicsVolume.h"
#endif
#define ENGINE_PhysicsVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsVolume(); \
	friend struct Z_Construct_UClass_APhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(APhysicsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APhysicsVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsVolume(); \
	friend struct Z_Construct_UClass_APhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(APhysicsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APhysicsVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsVolume(APhysicsVolume&&); \
	NO_API APhysicsVolume(const APhysicsVolume&); \
public: \
	NO_API virtual ~APhysicsVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsVolume(APhysicsVolume&&); \
	NO_API APhysicsVolume(const APhysicsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsVolume) \
	NO_API virtual ~APhysicsVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APhysicsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
