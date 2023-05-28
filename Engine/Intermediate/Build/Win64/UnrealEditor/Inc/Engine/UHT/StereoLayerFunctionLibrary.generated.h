// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/StereoLayerFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef ENGINE_StereoLayerFunctionLibrary_generated_h
#error "StereoLayerFunctionLibrary.generated.h already included, missing '#pragma once' in StereoLayerFunctionLibrary.h"
#endif
#define ENGINE_StereoLayerFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen); \
	DECLARE_FUNCTION(execHideSplashScreen); \
	DECLARE_FUNCTION(execShowSplashScreen); \
	DECLARE_FUNCTION(execSetSplashScreen);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen); \
	DECLARE_FUNCTION(execHideSplashScreen); \
	DECLARE_FUNCTION(execShowSplashScreen); \
	DECLARE_FUNCTION(execSetSplashScreen);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStereoLayerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerFunctionLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerFunctionLibrary(UStereoLayerFunctionLibrary&&); \
	NO_API UStereoLayerFunctionLibrary(const UStereoLayerFunctionLibrary&); \
public: \
	NO_API virtual ~UStereoLayerFunctionLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerFunctionLibrary(UStereoLayerFunctionLibrary&&); \
	NO_API UStereoLayerFunctionLibrary(const UStereoLayerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerFunctionLibrary) \
	NO_API virtual ~UStereoLayerFunctionLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StereoLayerFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_StereoLayerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
