// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SceneCapture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneCapture2D_generated_h
#error "SceneCapture2D.generated.h already included, missing '#pragma once' in SceneCapture2D.h"
#endif
#define ENGINE_SceneCapture2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInterpToggle);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInterpToggle);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneCapture2D(); \
	friend struct Z_Construct_UClass_ASceneCapture2D_Statics; \
public: \
	DECLARE_CLASS(ASceneCapture2D, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASceneCapture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASceneCapture2D(); \
	friend struct Z_Construct_UClass_ASceneCapture2D_Statics; \
public: \
	DECLARE_CLASS(ASceneCapture2D, ASceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASceneCapture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCapture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCapture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCapture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCapture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASceneCapture2D(ASceneCapture2D&&); \
	ENGINE_API ASceneCapture2D(const ASceneCapture2D&); \
public: \
	ENGINE_API virtual ~ASceneCapture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCapture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASceneCapture2D(ASceneCapture2D&&); \
	ENGINE_API ASceneCapture2D(const ASceneCapture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCapture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCapture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCapture2D) \
	ENGINE_API virtual ~ASceneCapture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCapture2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASceneCapture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
