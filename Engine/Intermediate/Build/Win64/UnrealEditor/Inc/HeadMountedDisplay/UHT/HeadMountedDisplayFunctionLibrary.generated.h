// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeadMountedDisplayFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
enum class EControllerHand : uint8;
enum class ESpectatorScreenMode : uint8;
enum class EXRTrackedDeviceType : uint8;
struct FKey;
struct FTimespan;
struct FXRDeviceId;
struct FXRGestureConfig;
struct FXRHMDData;
struct FXRMotionControllerData;
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h
#error "HeadMountedDisplayFunctionLibrary.generated.h already included, missing '#pragma once' in HeadMountedDisplayFunctionLibrary.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_13_DELEGATE \
HEADMOUNTEDDISPLAY_API void FXRDeviceOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& XRDeviceOnDisconnectDelegate, const FString& OutReason);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_14_DELEGATE \
HEADMOUNTEDDISPLAY_API void FXRTimedInputActionDelegate_DelegateWrapper(const FScriptDelegate& XRTimedInputActionDelegate, const float Value, const FTimespan Time);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreakKey); \
	DECLARE_FUNCTION(execGetPlayAreaRect); \
	DECLARE_FUNCTION(execGetTrackingOriginTransform); \
	DECLARE_FUNCTION(execGetPlayAreaBounds); \
	DECLARE_FUNCTION(execGetControllerTransformForTime); \
	DECLARE_FUNCTION(execClearXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRDisconnectDelegate); \
	DECLARE_FUNCTION(execDisconnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConnectRemoteXRDevice); \
	DECLARE_FUNCTION(execGetCurrentInteractionProfile); \
	DECLARE_FUNCTION(execConfigureGestures); \
	DECLARE_FUNCTION(execGetMotionControllerData); \
	DECLARE_FUNCTION(execGetHMDData); \
	DECLARE_FUNCTION(execIsDeviceTracking); \
	DECLARE_FUNCTION(execGetDeviceWorldPose); \
	DECLARE_FUNCTION(execGetDevicePose); \
	DECLARE_FUNCTION(execEnumerateTrackedDevices); \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout); \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture); \
	DECLARE_FUNCTION(execSetSpectatorScreenMode); \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable); \
	DECLARE_FUNCTION(execGetVRFocusState); \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition); \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD); \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform); \
	DECLARE_FUNCTION(execGetTrackingOrigin); \
	DECLARE_FUNCTION(execSetTrackingOrigin); \
	DECLARE_FUNCTION(execGetWorldToMetersScale); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetPixelDensity); \
	DECLARE_FUNCTION(execSetClippingPlanes); \
	DECLARE_FUNCTION(execResetOrientationAndPosition); \
	DECLARE_FUNCTION(execEnableLowPersistenceMode); \
	DECLARE_FUNCTION(execIsInLowPersistenceMode); \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters); \
	DECLARE_FUNCTION(execGetTrackingSensorParameters); \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors); \
	DECLARE_FUNCTION(execHasValidTrackingPosition); \
	DECLARE_FUNCTION(execGetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetHMDWornState); \
	DECLARE_FUNCTION(execGetVersionString); \
	DECLARE_FUNCTION(execGetXRSystemFlags); \
	DECLARE_FUNCTION(execGetHMDDeviceName); \
	DECLARE_FUNCTION(execEnableHMD); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreakKey); \
	DECLARE_FUNCTION(execGetPlayAreaRect); \
	DECLARE_FUNCTION(execGetTrackingOriginTransform); \
	DECLARE_FUNCTION(execGetPlayAreaBounds); \
	DECLARE_FUNCTION(execGetControllerTransformForTime); \
	DECLARE_FUNCTION(execClearXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRDisconnectDelegate); \
	DECLARE_FUNCTION(execDisconnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConnectRemoteXRDevice); \
	DECLARE_FUNCTION(execGetCurrentInteractionProfile); \
	DECLARE_FUNCTION(execConfigureGestures); \
	DECLARE_FUNCTION(execGetMotionControllerData); \
	DECLARE_FUNCTION(execGetHMDData); \
	DECLARE_FUNCTION(execIsDeviceTracking); \
	DECLARE_FUNCTION(execGetDeviceWorldPose); \
	DECLARE_FUNCTION(execGetDevicePose); \
	DECLARE_FUNCTION(execEnumerateTrackedDevices); \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout); \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture); \
	DECLARE_FUNCTION(execSetSpectatorScreenMode); \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable); \
	DECLARE_FUNCTION(execGetVRFocusState); \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition); \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD); \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform); \
	DECLARE_FUNCTION(execGetTrackingOrigin); \
	DECLARE_FUNCTION(execSetTrackingOrigin); \
	DECLARE_FUNCTION(execGetWorldToMetersScale); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetPixelDensity); \
	DECLARE_FUNCTION(execSetClippingPlanes); \
	DECLARE_FUNCTION(execResetOrientationAndPosition); \
	DECLARE_FUNCTION(execEnableLowPersistenceMode); \
	DECLARE_FUNCTION(execIsInLowPersistenceMode); \
	DECLARE_FUNCTION(execGetPositionalTrackingCameraParameters); \
	DECLARE_FUNCTION(execGetTrackingSensorParameters); \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors); \
	DECLARE_FUNCTION(execHasValidTrackingPosition); \
	DECLARE_FUNCTION(execGetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetHMDWornState); \
	DECLARE_FUNCTION(execGetVersionString); \
	DECLARE_FUNCTION(execGetXRSystemFlags); \
	DECLARE_FUNCTION(execGetHMDDeviceName); \
	DECLARE_FUNCTION(execEnableHMD); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public: \
	NO_API virtual ~UHeadMountedDisplayFunctionLibrary();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&); \
	NO_API UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeadMountedDisplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary) \
	NO_API virtual ~UHeadMountedDisplayFunctionLibrary();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_16_PROLOG
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HeadMountedDisplayFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UHeadMountedDisplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
