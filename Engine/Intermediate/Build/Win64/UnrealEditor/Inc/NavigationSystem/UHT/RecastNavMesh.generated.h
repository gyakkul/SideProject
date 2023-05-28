// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/RecastNavMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef NAVIGATIONSYSTEM_RecastNavMesh_generated_h
#error "RecastNavMesh.generated.h already included, missing '#pragma once' in RecastNavMesh.h"
#endif
#define NAVIGATIONSYSTEM_RecastNavMesh_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecastNavMeshGenerationProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FRecastNavMeshGenerationProperties>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_442_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecastNavMeshTileGenerationDebug_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FRecastNavMeshTileGenerationDebug>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_606_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavMeshResolutionParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavMeshResolutionParam>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ReplaceAreaInTileBounds);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ReplaceAreaInTileBounds);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh, NO_API)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecastNavMesh(); \
	friend struct Z_Construct_UClass_ARecastNavMesh_Statics; \
public: \
	DECLARE_CLASS(ARecastNavMesh, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ARecastNavMesh) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_INCLASS \
private: \
	static void StaticRegisterNativesARecastNavMesh(); \
	friend struct Z_Construct_UClass_ARecastNavMesh_Statics; \
public: \
	DECLARE_CLASS(ARecastNavMesh, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ARecastNavMesh) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecastNavMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecastNavMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecastNavMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecastNavMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecastNavMesh(ARecastNavMesh&&); \
	NO_API ARecastNavMesh(const ARecastNavMesh&); \
public:


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecastNavMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecastNavMesh(ARecastNavMesh&&); \
	NO_API ARecastNavMesh(const ARecastNavMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecastNavMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecastNavMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecastNavMesh)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_619_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_622_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RecastNavMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ARecastNavMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h


#define FOREACH_ENUM_ERECASTPARTITIONING(op) \
	op(ERecastPartitioning::Monotone) \
	op(ERecastPartitioning::Watershed) \
	op(ERecastPartitioning::ChunkyMonotone) 

namespace ERecastPartitioning { enum Type : int; }
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERecastPartitioning::Type>();

#define FOREACH_ENUM_EHEIGHTFIELDRENDERMODE(op) \
	op(EHeightFieldRenderMode::Solid) \
	op(EHeightFieldRenderMode::Walkable) 

enum class EHeightFieldRenderMode : uint8;
template<> struct TIsUEnumClass<EHeightFieldRenderMode> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<EHeightFieldRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
