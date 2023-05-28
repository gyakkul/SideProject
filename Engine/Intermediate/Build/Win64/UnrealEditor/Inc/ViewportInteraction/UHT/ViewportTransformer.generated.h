// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportTransformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UViewportWorldInteraction;
#ifdef VIEWPORTINTERACTION_ViewportTransformer_generated_h
#error "ViewportTransformer.generated.h already included, missing '#pragma once' in ViewportTransformer.h"
#endif
#define VIEWPORTINTERACTION_ViewportTransformer_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_SPARSE_DATA
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStopDragging); \
	DECLARE_FUNCTION(execOnStartDragging); \
	DECLARE_FUNCTION(execShouldCenterTransformGizmoPivot); \
	DECLARE_FUNCTION(execCanAlignToActors); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStopDragging); \
	DECLARE_FUNCTION(execOnStartDragging); \
	DECLARE_FUNCTION(execShouldCenterTransformGizmoPivot); \
	DECLARE_FUNCTION(execCanAlignToActors); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ACCESSORS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportTransformer(); \
	friend struct Z_Construct_UClass_UViewportTransformer_Statics; \
public: \
	DECLARE_CLASS(UViewportTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportTransformer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUViewportTransformer(); \
	friend struct Z_Construct_UClass_UViewportTransformer_Statics; \
public: \
	DECLARE_CLASS(UViewportTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportTransformer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportTransformer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportTransformer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportTransformer(UViewportTransformer&&); \
	NO_API UViewportTransformer(const UViewportTransformer&); \
public: \
	NO_API virtual ~UViewportTransformer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportTransformer(UViewportTransformer&&); \
	NO_API UViewportTransformer(const UViewportTransformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportTransformer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportTransformer) \
	NO_API virtual ~UViewportTransformer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_12_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportTransformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
