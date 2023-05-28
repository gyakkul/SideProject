// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/MapBuildDataRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MapBuildDataRegistry_generated_h
#error "MapBuildDataRegistry.generated.h already included, missing '#pragma once' in MapBuildDataRegistry.h"
#endif
#define ENGINE_MapBuildDataRegistry_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMapBuildDataRegistry, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapBuildDataRegistry(); \
	friend struct Z_Construct_UClass_UMapBuildDataRegistry_Statics; \
public: \
	DECLARE_CLASS(UMapBuildDataRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMapBuildDataRegistry) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_INCLASS \
private: \
	static void StaticRegisterNativesUMapBuildDataRegistry(); \
	friend struct Z_Construct_UClass_UMapBuildDataRegistry_Statics; \
public: \
	DECLARE_CLASS(UMapBuildDataRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMapBuildDataRegistry) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMapBuildDataRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapBuildDataRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMapBuildDataRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapBuildDataRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMapBuildDataRegistry(UMapBuildDataRegistry&&); \
	ENGINE_API UMapBuildDataRegistry(const UMapBuildDataRegistry&); \
public: \
	ENGINE_API virtual ~UMapBuildDataRegistry();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMapBuildDataRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMapBuildDataRegistry(UMapBuildDataRegistry&&); \
	ENGINE_API UMapBuildDataRegistry(const UMapBuildDataRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMapBuildDataRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapBuildDataRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapBuildDataRegistry) \
	ENGINE_API virtual ~UMapBuildDataRegistry();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_282_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_285_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MapBuildDataRegistry."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMapBuildDataRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
