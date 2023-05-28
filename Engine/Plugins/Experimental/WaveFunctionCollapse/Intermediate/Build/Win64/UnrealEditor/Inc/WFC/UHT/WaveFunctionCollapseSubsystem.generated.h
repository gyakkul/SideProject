// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveFunctionCollapseSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FWaveFunctionCollapseQueueElement;
class AActor;
struct FWaveFunctionCollapseTile;
#ifdef WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseSubsystem_generated_h
#error "WaveFunctionCollapseSubsystem.generated.h already included, missing '#pragma once' in WaveFunctionCollapseSubsystem.h"
#endif
#define WAVEFUNCTIONCOLLAPSE_WaveFunctionCollapseSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeriveGridFromTransforms); \
	DECLARE_FUNCTION(execDeriveGridFromTransformBounds); \
	DECLARE_FUNCTION(execObservationPropagation); \
	DECLARE_FUNCTION(execPropagate); \
	DECLARE_FUNCTION(execObserve); \
	DECLARE_FUNCTION(execInitializeWFC); \
	DECLARE_FUNCTION(execCollapse);


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeriveGridFromTransforms); \
	DECLARE_FUNCTION(execDeriveGridFromTransformBounds); \
	DECLARE_FUNCTION(execObservationPropagation); \
	DECLARE_FUNCTION(execPropagate); \
	DECLARE_FUNCTION(execObserve); \
	DECLARE_FUNCTION(execInitializeWFC); \
	DECLARE_FUNCTION(execCollapse);


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseSubsystem(); \
	friend struct Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaveFunctionCollapseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), NO_API) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseSubsystem)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWaveFunctionCollapseSubsystem(); \
	friend struct Z_Construct_UClass_UWaveFunctionCollapseSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaveFunctionCollapseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveFunctionCollapse"), NO_API) \
	DECLARE_SERIALIZER(UWaveFunctionCollapseSubsystem)


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveFunctionCollapseSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveFunctionCollapseSubsystem(UWaveFunctionCollapseSubsystem&&); \
	NO_API UWaveFunctionCollapseSubsystem(const UWaveFunctionCollapseSubsystem&); \
public: \
	NO_API virtual ~UWaveFunctionCollapseSubsystem();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveFunctionCollapseSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaveFunctionCollapseSubsystem(UWaveFunctionCollapseSubsystem&&); \
	NO_API UWaveFunctionCollapseSubsystem(const UWaveFunctionCollapseSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveFunctionCollapseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveFunctionCollapseSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaveFunctionCollapseSubsystem) \
	NO_API virtual ~UWaveFunctionCollapseSubsystem();


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVEFUNCTIONCOLLAPSE_API UClass* StaticClass<class UWaveFunctionCollapseSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
