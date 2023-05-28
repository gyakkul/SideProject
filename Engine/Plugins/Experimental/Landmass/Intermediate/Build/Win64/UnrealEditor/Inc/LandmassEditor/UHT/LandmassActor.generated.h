// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDMASSEDITOR_LandmassActor_generated_h
#error "LandmassActor.generated.h already included, missing '#pragma once' in LandmassActor.h"
#endif
#define LANDMASSEDITOR_LandmassActor_generated_h

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_RPC_WRAPPERS \
	virtual void ActorSelectionChanged_Implementation(bool bSelected); \
	virtual void CustomTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execActorSelectionChanged); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execCustomTick);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ActorSelectionChanged_Implementation(bool bSelected); \
	virtual void CustomTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execActorSelectionChanged); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execCustomTick);


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_ACCESSORS
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandmassActor(); \
	friend struct Z_Construct_UClass_ALandmassActor_Statics; \
public: \
	DECLARE_CLASS(ALandmassActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), NO_API) \
	DECLARE_SERIALIZER(ALandmassActor)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALandmassActor(); \
	friend struct Z_Construct_UClass_ALandmassActor_Statics; \
public: \
	DECLARE_CLASS(ALandmassActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandmassEditor"), NO_API) \
	DECLARE_SERIALIZER(ALandmassActor)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandmassActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandmassActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandmassActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandmassActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandmassActor(ALandmassActor&&); \
	NO_API ALandmassActor(const ALandmassActor&); \
public: \
	NO_API virtual ~ALandmassActor();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandmassActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandmassActor(ALandmassActor&&); \
	NO_API ALandmassActor(const ALandmassActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandmassActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandmassActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandmassActor) \
	NO_API virtual ~ALandmassActor();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_INCLASS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_ACCESSORS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandmassActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDMASSEDITOR_API UClass* StaticClass<class ALandmassActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
