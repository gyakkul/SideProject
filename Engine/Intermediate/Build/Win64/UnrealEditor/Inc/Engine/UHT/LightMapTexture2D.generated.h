// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LightMapTexture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightMapTexture2D_generated_h
#error "LightMapTexture2D.generated.h already included, missing '#pragma once' in LightMapTexture2D.h"
#endif
#define ENGINE_LightMapTexture2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightMapTexture2D, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightMapTexture2D(); \
	friend struct Z_Construct_UClass_ULightMapTexture2D_Statics; \
public: \
	DECLARE_CLASS(ULightMapTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightMapTexture2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULightMapTexture2D(); \
	friend struct Z_Construct_UClass_ULightMapTexture2D_Statics; \
public: \
	DECLARE_CLASS(ULightMapTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightMapTexture2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULightMapTexture2D(ULightMapTexture2D&&); \
	ENGINE_API ULightMapTexture2D(const ULightMapTexture2D&); \
public: \
	ENGINE_API virtual ~ULightMapTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULightMapTexture2D(ULightMapTexture2D&&); \
	ENGINE_API ULightMapTexture2D(const ULightMapTexture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapTexture2D) \
	ENGINE_API virtual ~ULightMapTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightMapTexture2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightMapTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
