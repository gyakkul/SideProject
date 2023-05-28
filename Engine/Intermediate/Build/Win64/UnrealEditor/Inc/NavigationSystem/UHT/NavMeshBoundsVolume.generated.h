// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/NavMeshBoundsVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavMeshBoundsVolume_generated_h
#error "NavMeshBoundsVolume.generated.h already included, missing '#pragma once' in NavMeshBoundsVolume.h"
#endif
#define NAVIGATIONSYSTEM_NavMeshBoundsVolume_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavMeshBoundsVolume(); \
	friend struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics; \
public: \
	DECLARE_CLASS(ANavMeshBoundsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshBoundsVolume)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_INCLASS \
private: \
	static void StaticRegisterNativesANavMeshBoundsVolume(); \
	friend struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics; \
public: \
	DECLARE_CLASS(ANavMeshBoundsVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavMeshBoundsVolume)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBoundsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshBoundsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBoundsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshBoundsVolume(ANavMeshBoundsVolume&&); \
	NO_API ANavMeshBoundsVolume(const ANavMeshBoundsVolume&); \
public: \
	NO_API virtual ~ANavMeshBoundsVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavMeshBoundsVolume(ANavMeshBoundsVolume&&); \
	NO_API ANavMeshBoundsVolume(const ANavMeshBoundsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavMeshBoundsVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavMeshBoundsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavMeshBoundsVolume) \
	NO_API virtual ~ANavMeshBoundsVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_18_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavMeshBoundsVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavMeshBoundsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
