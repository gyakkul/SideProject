// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposureBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACompositingElement;
class APlayerCameraManager;
class UCameraComponent;
class UComposurePlayerCompositingTarget;
class UMaterialInstanceDynamic;
class UObject;
class USceneCaptureComponent2D;
struct FComposurePostMoveSettings;
struct FComposureUVMapSettings;
#ifdef COMPOSURE_ComposureBlueprintLibrary_generated_h
#error "ComposureBlueprintLibrary.generated.h already included, missing '#pragma once' in ComposureBlueprintLibrary.h"
#endif
#define COMPOSURE_ComposureBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshComposureElementList); \
	DECLARE_FUNCTION(execRequestRedrawComposureViewport); \
	DECLARE_FUNCTION(execIsComposureElementDrawing); \
	DECLARE_FUNCTION(execAttachComposureElement); \
	DECLARE_FUNCTION(execRenameComposureElement); \
	DECLARE_FUNCTION(execDeleteComposureElementAndChildren); \
	DECLARE_FUNCTION(execGetComposureElement); \
	DECLARE_FUNCTION(execCreateComposureElement); \
	DECLARE_FUNCTION(execCopyCameraSettingsToSceneCapture); \
	DECLARE_FUNCTION(execGetPlayerDisplayGamma); \
	DECLARE_FUNCTION(execGetRedGreenUVFactorsFromChromaticAberration); \
	DECLARE_FUNCTION(execInvertUVDisplacementMapEncodingParameters); \
	DECLARE_FUNCTION(execSetUVMapSettingsToMaterialParameters); \
	DECLARE_FUNCTION(execGetCroppingUVTransformationMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execGetProjectionMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execCreatePlayerCompositingTarget);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshComposureElementList); \
	DECLARE_FUNCTION(execRequestRedrawComposureViewport); \
	DECLARE_FUNCTION(execIsComposureElementDrawing); \
	DECLARE_FUNCTION(execAttachComposureElement); \
	DECLARE_FUNCTION(execRenameComposureElement); \
	DECLARE_FUNCTION(execDeleteComposureElementAndChildren); \
	DECLARE_FUNCTION(execGetComposureElement); \
	DECLARE_FUNCTION(execCreateComposureElement); \
	DECLARE_FUNCTION(execCopyCameraSettingsToSceneCapture); \
	DECLARE_FUNCTION(execGetPlayerDisplayGamma); \
	DECLARE_FUNCTION(execGetRedGreenUVFactorsFromChromaticAberration); \
	DECLARE_FUNCTION(execInvertUVDisplacementMapEncodingParameters); \
	DECLARE_FUNCTION(execSetUVMapSettingsToMaterialParameters); \
	DECLARE_FUNCTION(execGetCroppingUVTransformationMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execGetProjectionMatrixFromPostMoveSettings); \
	DECLARE_FUNCTION(execCreatePlayerCompositingTarget);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_ACCESSORS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UComposureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UComposureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureBlueprintLibrary)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUComposureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UComposureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UComposureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UComposureBlueprintLibrary)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureBlueprintLibrary(UComposureBlueprintLibrary&&); \
	NO_API UComposureBlueprintLibrary(const UComposureBlueprintLibrary&); \
public: \
	NO_API virtual ~UComposureBlueprintLibrary();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComposureBlueprintLibrary(UComposureBlueprintLibrary&&); \
	NO_API UComposureBlueprintLibrary(const UComposureBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureBlueprintLibrary) \
	NO_API virtual ~UComposureBlueprintLibrary();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComposureBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UComposureBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
