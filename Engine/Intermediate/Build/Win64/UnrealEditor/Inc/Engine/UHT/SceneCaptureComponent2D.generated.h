// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponent2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
#ifdef ENGINE_SceneCaptureComponent2D_generated_h
#error "SceneCaptureComponent2D.generated.h already included, missing '#pragma once' in SceneCaptureComponent2D.h"
#endif
#define ENGINE_SceneCaptureComponent2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCaptureScene); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddOrUpdateBlendable);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCaptureScene); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddOrUpdateBlendable);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent2D(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent2D_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent2D, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent2D(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent2D_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent2D, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent2D(USceneCaptureComponent2D&&); \
	NO_API USceneCaptureComponent2D(const USceneCaptureComponent2D&); \
public: \
	NO_API virtual ~USceneCaptureComponent2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent2D(USceneCaptureComponent2D&&); \
	NO_API USceneCaptureComponent2D(const USceneCaptureComponent2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent2D) \
	NO_API virtual ~USceneCaptureComponent2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponent2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponent2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
