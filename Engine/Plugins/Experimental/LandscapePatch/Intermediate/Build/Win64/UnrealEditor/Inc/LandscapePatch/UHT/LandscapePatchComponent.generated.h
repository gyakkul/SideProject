// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class ALandscapePatchManager;
#ifdef LANDSCAPEPATCH_LandscapePatchComponent_generated_h
#error "LandscapePatchComponent.generated.h already included, missing '#pragma once' in LandscapePatchComponent.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchComponent_generated_h

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveToTop); \
	DECLARE_FUNCTION(execGetPatchManager); \
	DECLARE_FUNCTION(execSetPatchManager); \
	DECLARE_FUNCTION(execSetLandscape); \
	DECLARE_FUNCTION(execGetLandscapeHeightmapCoordsToWorld); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execRequestLandscapeUpdate);


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveToTop); \
	DECLARE_FUNCTION(execGetPatchManager); \
	DECLARE_FUNCTION(execSetPatchManager); \
	DECLARE_FUNCTION(execSetLandscape); \
	DECLARE_FUNCTION(execGetLandscapeHeightmapCoordsToWorld); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execRequestLandscapeUpdate);


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_ACCESSORS
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapePatchComponent(); \
	friend struct Z_Construct_UClass_ULandscapePatchComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapePatchComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapePatchComponent)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULandscapePatchComponent(); \
	friend struct Z_Construct_UClass_ULandscapePatchComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapePatchComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ULandscapePatchComponent)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapePatchComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapePatchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapePatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapePatchComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapePatchComponent(ULandscapePatchComponent&&); \
	NO_API ULandscapePatchComponent(const ULandscapePatchComponent&); \
public: \
	NO_API virtual ~ULandscapePatchComponent();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapePatchComponent(ULandscapePatchComponent&&); \
	NO_API ULandscapePatchComponent(const ULandscapePatchComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapePatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapePatchComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapePatchComponent) \
	NO_API virtual ~ULandscapePatchComponent();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ULandscapePatchComponent>();

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics; \
	LANDSCAPEPATCH_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> LANDSCAPEPATCH_API UScriptStruct* StaticStruct<struct FLandscapePatchComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
