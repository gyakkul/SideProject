// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraRig_Rail.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef CINEMATICCAMERA_CameraRig_Rail_generated_h
#error "CameraRig_Rail.generated.h already included, missing '#pragma once' in CameraRig_Rail.h"
#endif
#define CINEMATICCAMERA_CameraRig_Rail_generated_h

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRailSplineComponent);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRailSplineComponent);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraRig_Rail(); \
	friend struct Z_Construct_UClass_ACameraRig_Rail_Statics; \
public: \
	DECLARE_CLASS(ACameraRig_Rail, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACameraRig_Rail)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACameraRig_Rail(); \
	friend struct Z_Construct_UClass_ACameraRig_Rail_Statics; \
public: \
	DECLARE_CLASS(ACameraRig_Rail, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(ACameraRig_Rail)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraRig_Rail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Rail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraRig_Rail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Rail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraRig_Rail(ACameraRig_Rail&&); \
	NO_API ACameraRig_Rail(const ACameraRig_Rail&); \
public: \
	NO_API virtual ~ACameraRig_Rail();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraRig_Rail(ACameraRig_Rail&&); \
	NO_API ACameraRig_Rail(const ACameraRig_Rail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraRig_Rail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraRig_Rail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraRig_Rail) \
	NO_API virtual ~ACameraRig_Rail();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_18_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class ACameraRig_Rail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
