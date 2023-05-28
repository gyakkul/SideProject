// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposurePipelineBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPOSURE_ComposurePipelineBaseActor_generated_h
#error "ComposurePipelineBaseActor.generated.h already included, missing '#pragma once' in ComposurePipelineBaseActor.h"
#endif
#define COMPOSURE_ComposurePipelineBaseActor_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	virtual void EnqueueRendering_Implementation(bool bCameraCutThisFrame); \
	virtual bool IsActivelyRunning_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetAutoRunChildrenAndSelf); \
	DECLARE_FUNCTION(execEnqueueRendering); \
	DECLARE_FUNCTION(execIsActivelyRunning); \
	DECLARE_FUNCTION(execAreChildrenAndSelfAutoRun); \
	DECLARE_FUNCTION(execSetAutoRun);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EnqueueRendering_Implementation(bool bCameraCutThisFrame); \
	virtual bool IsActivelyRunning_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetAutoRunChildrenAndSelf); \
	DECLARE_FUNCTION(execEnqueueRendering); \
	DECLARE_FUNCTION(execIsActivelyRunning); \
	DECLARE_FUNCTION(execAreChildrenAndSelfAutoRun); \
	DECLARE_FUNCTION(execSetAutoRun);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ACCESSORS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAComposurePipelineBaseActor(); \
	friend struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics; \
public: \
	DECLARE_CLASS(AComposurePipelineBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(AComposurePipelineBaseActor)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAComposurePipelineBaseActor(); \
	friend struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics; \
public: \
	DECLARE_CLASS(AComposurePipelineBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(AComposurePipelineBaseActor)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComposurePipelineBaseActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposurePipelineBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposurePipelineBaseActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComposurePipelineBaseActor(AComposurePipelineBaseActor&&); \
	NO_API AComposurePipelineBaseActor(const AComposurePipelineBaseActor&); \
public: \
	NO_API virtual ~AComposurePipelineBaseActor();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AComposurePipelineBaseActor(AComposurePipelineBaseActor&&); \
	NO_API AComposurePipelineBaseActor(const AComposurePipelineBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AComposurePipelineBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AComposurePipelineBaseActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AComposurePipelineBaseActor) \
	NO_API virtual ~AComposurePipelineBaseActor();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposurePipelineBaseActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class AComposurePipelineBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
