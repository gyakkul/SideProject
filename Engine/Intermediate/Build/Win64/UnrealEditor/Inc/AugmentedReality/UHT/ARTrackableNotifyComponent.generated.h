// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTrackableNotifyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAREnvironmentCaptureProbe;
class UARFaceGeometry;
class UARPlaneGeometry;
class UARTrackedGeometry;
class UARTrackedImage;
class UARTrackedObject;
class UARTrackedPoint;
#ifdef AUGMENTEDREALITY_ARTrackableNotifyComponent_generated_h
#error "ARTrackableNotifyComponent.generated.h already included, missing '#pragma once' in ARTrackableNotifyComponent.h"
#endif
#define AUGMENTEDREALITY_ARTrackableNotifyComponent_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_10_DELEGATE \
AUGMENTEDREALITY_API void FTrackableDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableDelegate, UARTrackedGeometry* TrackedGeometry);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_11_DELEGATE \
AUGMENTEDREALITY_API void FTrackablePlaneDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePlaneDelegate, UARPlaneGeometry* TrackedPlane);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_12_DELEGATE \
AUGMENTEDREALITY_API void FTrackablePointDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePointDelegate, UARTrackedPoint* TrackedPoint);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_13_DELEGATE \
AUGMENTEDREALITY_API void FTrackableImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableImageDelegate, UARTrackedImage* TrackedImage);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_14_DELEGATE \
AUGMENTEDREALITY_API void FTrackableFaceDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableFaceDelegate, UARFaceGeometry* TrackedFace);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_15_DELEGATE \
AUGMENTEDREALITY_API void FTrackableEnvProbeDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableEnvProbeDelegate, UAREnvironmentCaptureProbe* TrackedEnvProbe);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_16_DELEGATE \
AUGMENTEDREALITY_API void FTrackableObjectDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableObjectDelegate, UARTrackedObject* TrackedObject);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackableNotifyComponent(); \
	friend struct Z_Construct_UClass_UARTrackableNotifyComponent_Statics; \
public: \
	DECLARE_CLASS(UARTrackableNotifyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackableNotifyComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackableNotifyComponent(); \
	friend struct Z_Construct_UClass_UARTrackableNotifyComponent_Statics; \
public: \
	DECLARE_CLASS(UARTrackableNotifyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackableNotifyComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackableNotifyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackableNotifyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackableNotifyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackableNotifyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackableNotifyComponent(UARTrackableNotifyComponent&&); \
	NO_API UARTrackableNotifyComponent(const UARTrackableNotifyComponent&); \
public: \
	NO_API virtual ~UARTrackableNotifyComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackableNotifyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackableNotifyComponent(UARTrackableNotifyComponent&&); \
	NO_API UARTrackableNotifyComponent(const UARTrackableNotifyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackableNotifyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackableNotifyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackableNotifyComponent) \
	NO_API virtual ~UARTrackableNotifyComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackableNotifyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
