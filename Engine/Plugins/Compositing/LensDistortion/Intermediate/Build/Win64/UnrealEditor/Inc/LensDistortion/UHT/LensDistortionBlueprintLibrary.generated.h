// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensDistortionBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
struct FLensDistortionCameraModel;
#ifdef LENSDISTORTION_LensDistortionBlueprintLibrary_generated_h
#error "LensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in LensDistortionBlueprintLibrary.h"
#endif
#define LENSDISTORTION_LensDistortionBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_ACCESSORS
#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensDistortion"), LENSDISTORTION_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LensDistortion"), LENSDISTORTION_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSDISTORTION_API, ULensDistortionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	LENSDISTORTION_API virtual ~ULensDistortionBlueprintLibrary();


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	LENSDISTORTION_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LENSDISTORTION_API, ULensDistortionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	LENSDISTORTION_API virtual ~ULensDistortionBlueprintLibrary();


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_ACCESSORS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LensDistortionBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LENSDISTORTION_API UClass* StaticClass<class ULensDistortionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
