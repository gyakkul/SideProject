// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShotgridEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UShotgridEngine;
struct FShotgridMenuItem;
#ifdef SHOTGRID_ShotgridEngine_generated_h
#error "ShotgridEngine.generated.h already included, missing '#pragma once' in ShotgridEngine.h"
#endif
#define SHOTGRID_ShotgridEngine_generated_h

#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotgridMenuItem_Statics; \
	SHOTGRID_API static class UScriptStruct* StaticStruct();


template<> SHOTGRID_API UScriptStruct* StaticStruct<struct FShotgridMenuItem>();

#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execGetShotgridWorkDir); \
	DECLARE_FUNCTION(execGetReferencedAssets); \
	DECLARE_FUNCTION(execOnEngineInitialized); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execGetShotgridWorkDir); \
	DECLARE_FUNCTION(execGetReferencedAssets); \
	DECLARE_FUNCTION(execOnEngineInitialized); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_ACCESSORS
#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShotgridEngine(); \
	friend struct Z_Construct_UClass_UShotgridEngine_Statics; \
public: \
	DECLARE_CLASS(UShotgridEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shotgrid"), NO_API) \
	DECLARE_SERIALIZER(UShotgridEngine)


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUShotgridEngine(); \
	friend struct Z_Construct_UClass_UShotgridEngine_Statics; \
public: \
	DECLARE_CLASS(UShotgridEngine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shotgrid"), NO_API) \
	DECLARE_SERIALIZER(UShotgridEngine)


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShotgridEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShotgridEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShotgridEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShotgridEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShotgridEngine(UShotgridEngine&&); \
	NO_API UShotgridEngine(const UShotgridEngine&); \
public: \
	NO_API virtual ~UShotgridEngine();


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShotgridEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShotgridEngine(UShotgridEngine&&); \
	NO_API UShotgridEngine(const UShotgridEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShotgridEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShotgridEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShotgridEngine) \
	NO_API virtual ~UShotgridEngine();


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_INCLASS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOTGRID_API UClass* StaticClass<class UShotgridEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
