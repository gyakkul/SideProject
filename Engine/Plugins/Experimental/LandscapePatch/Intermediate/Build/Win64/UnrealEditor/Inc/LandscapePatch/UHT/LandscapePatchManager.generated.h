// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEPATCH_LandscapePatchManager_generated_h
#error "LandscapePatchManager.generated.h already included, missing '#pragma once' in LandscapePatchManager.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchManager_generated_h

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_ACCESSORS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapePatchManager(); \
	friend struct Z_Construct_UClass_ALandscapePatchManager_Statics; \
public: \
	DECLARE_CLASS(ALandscapePatchManager, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ALandscapePatchManager)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesALandscapePatchManager(); \
	friend struct Z_Construct_UClass_ALandscapePatchManager_Statics; \
public: \
	DECLARE_CLASS(ALandscapePatchManager, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ALandscapePatchManager)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapePatchManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapePatchManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapePatchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapePatchManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapePatchManager(ALandscapePatchManager&&); \
	NO_API ALandscapePatchManager(const ALandscapePatchManager&); \
public: \
	NO_API virtual ~ALandscapePatchManager();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALandscapePatchManager(ALandscapePatchManager&&); \
	NO_API ALandscapePatchManager(const ALandscapePatchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapePatchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapePatchManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapePatchManager) \
	NO_API virtual ~ALandscapePatchManager();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ALandscapePatchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
