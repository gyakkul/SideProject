// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/RuntimeVirtualTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeVirtualTexture_generated_h
#error "RuntimeVirtualTexture.generated.h already included, missing '#pragma once' in RuntimeVirtualTexture.h"
#endif
#define ENGINE_RuntimeVirtualTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPageTableSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTileBorderSize); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execGetTileCount);


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPageTableSize); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetTileBorderSize); \
	DECLARE_FUNCTION(execGetTileSize); \
	DECLARE_FUNCTION(execGetTileCount);


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTexture(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTexture(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTexture_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTexture(URuntimeVirtualTexture&&); \
	NO_API URuntimeVirtualTexture(const URuntimeVirtualTexture&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTexture(URuntimeVirtualTexture&&); \
	NO_API URuntimeVirtualTexture(const URuntimeVirtualTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeVirtualTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeVirtualTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
