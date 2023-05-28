// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MixedRealityCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMrcGarbageMatteActor;
class UMaterialInterface;
class UMrcCalibrationData;
struct FMrcVideoCaptureFeedIndex;
struct FMrcVideoProcessingParams;
struct FOpenCVLensDistortionParameters;
#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureComponent_generated_h
#error "MixedRealityCaptureComponent.generated.h already included, missing '#pragma once' in MixedRealityCaptureComponent.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureComponent_generated_h

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_173_DELEGATE \
static void FMRCaptureFeedOpenedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MRCaptureFeedOpenedDelegate, FMrcVideoCaptureFeedIndex const& FeedRef);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_RPC_WRAPPERS \
	virtual void ApplyCalibrationData_Implementation(UMrcCalibrationData* ConfigData); \
	virtual UMrcCalibrationData* ConstructCalibrationData_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnVideoFeedOpened); \
	DECLARE_FUNCTION(execSetEnableProjectionDepthTracking); \
	DECLARE_FUNCTION(execGetProjectionActor_K2); \
	DECLARE_FUNCTION(execSetProjectionDepthOffset); \
	DECLARE_FUNCTION(execSetTrackingDelay); \
	DECLARE_FUNCTION(execGetTrackingDelay); \
	DECLARE_FUNCTION(execSetLensDistortionParameters); \
	DECLARE_FUNCTION(execSetCaptureDevice); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execDetatchFromDevice); \
	DECLARE_FUNCTION(execSetDeviceAttachment); \
	DECLARE_FUNCTION(execSetVidProcessingParams); \
	DECLARE_FUNCTION(execSetVidProjectionMat); \
	DECLARE_FUNCTION(execSetGarbageMatteActor); \
	DECLARE_FUNCTION(execApplyCalibrationData); \
	DECLARE_FUNCTION(execFillOutCalibrationData); \
	DECLARE_FUNCTION(execConstructCalibrationData); \
	DECLARE_FUNCTION(execLoadConfiguration); \
	DECLARE_FUNCTION(execLoadDefaultConfiguration); \
	DECLARE_FUNCTION(execSaveConfiguration_K2); \
	DECLARE_FUNCTION(execSaveAsDefaultConfiguration_K2);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyCalibrationData_Implementation(UMrcCalibrationData* ConfigData); \
	virtual UMrcCalibrationData* ConstructCalibrationData_Implementation() const; \
 \
	DECLARE_FUNCTION(execOnVideoFeedOpened); \
	DECLARE_FUNCTION(execSetEnableProjectionDepthTracking); \
	DECLARE_FUNCTION(execGetProjectionActor_K2); \
	DECLARE_FUNCTION(execSetProjectionDepthOffset); \
	DECLARE_FUNCTION(execSetTrackingDelay); \
	DECLARE_FUNCTION(execGetTrackingDelay); \
	DECLARE_FUNCTION(execSetLensDistortionParameters); \
	DECLARE_FUNCTION(execSetCaptureDevice); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execDetatchFromDevice); \
	DECLARE_FUNCTION(execSetDeviceAttachment); \
	DECLARE_FUNCTION(execSetVidProcessingParams); \
	DECLARE_FUNCTION(execSetVidProjectionMat); \
	DECLARE_FUNCTION(execSetGarbageMatteActor); \
	DECLARE_FUNCTION(execApplyCalibrationData); \
	DECLARE_FUNCTION(execFillOutCalibrationData); \
	DECLARE_FUNCTION(execConstructCalibrationData); \
	DECLARE_FUNCTION(execLoadConfiguration); \
	DECLARE_FUNCTION(execLoadDefaultConfiguration); \
	DECLARE_FUNCTION(execSaveConfiguration_K2); \
	DECLARE_FUNCTION(execSaveAsDefaultConfiguration_K2);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_ACCESSORS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMixedRealityCaptureComponent(); \
	friend struct Z_Construct_UClass_UMixedRealityCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMixedRealityCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(UMixedRealityCaptureComponent)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUMixedRealityCaptureComponent(); \
	friend struct Z_Construct_UClass_UMixedRealityCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMixedRealityCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(UMixedRealityCaptureComponent)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMixedRealityCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMixedRealityCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMixedRealityCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixedRealityCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMixedRealityCaptureComponent(UMixedRealityCaptureComponent&&); \
	NO_API UMixedRealityCaptureComponent(const UMixedRealityCaptureComponent&); \
public: \
	NO_API virtual ~UMixedRealityCaptureComponent();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMixedRealityCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMixedRealityCaptureComponent(UMixedRealityCaptureComponent&&); \
	NO_API UMixedRealityCaptureComponent(const UMixedRealityCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMixedRealityCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixedRealityCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMixedRealityCaptureComponent) \
	NO_API virtual ~UMixedRealityCaptureComponent();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MixedRealityCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<class UMixedRealityCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
