// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARSessionConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateImage;
class UARCandidateObject;
enum class EAREnvironmentCaptureProbeType : uint8;
enum class EARFaceTrackingDirection : uint8;
enum class EARFaceTrackingUpdate : uint8;
enum class EARFrameSyncMode : uint8;
enum class EARLightEstimationMode : uint8;
enum class EARPlaneDetectionMode : uint8;
enum class EARSceneReconstruction : uint8;
enum class EARSessionTrackingFeature : uint8;
enum class EARSessionType : uint8;
enum class EARWorldAlignment : uint8;
struct FARVideoFormat;
#ifdef AUGMENTEDREALITY_ARSessionConfig_generated_h
#error "ARSessionConfig.generated.h already included, missing '#pragma once' in ARSessionConfig.h"
#endif
#define AUGMENTEDREALITY_ARSessionConfig_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execSetSessionTrackingFeatureToEnable); \
	DECLARE_FUNCTION(execGetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execGetEnabledSessionTrackingFeature); \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execSetFaceTrackingDirection); \
	DECLARE_FUNCTION(execGetFaceTrackingDirection); \
	DECLARE_FUNCTION(execSetDesiredVideoFormat); \
	DECLARE_FUNCTION(execGetDesiredVideoFormat); \
	DECLARE_FUNCTION(execAddCandidateObject); \
	DECLARE_FUNCTION(execSetCandidateObjectList); \
	DECLARE_FUNCTION(execGetCandidateObjectList); \
	DECLARE_FUNCTION(execSetWorldMapData); \
	DECLARE_FUNCTION(execGetWorldMapData); \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType); \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked); \
	DECLARE_FUNCTION(execAddCandidateImage); \
	DECLARE_FUNCTION(execGetCandidateImageList); \
	DECLARE_FUNCTION(execSetResetTrackedObjects); \
	DECLARE_FUNCTION(execShouldResetTrackedObjects); \
	DECLARE_FUNCTION(execSetResetCameraTracking); \
	DECLARE_FUNCTION(execShouldResetCameraTracking); \
	DECLARE_FUNCTION(execSetEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableCameraTracking); \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay); \
	DECLARE_FUNCTION(execGetFrameSyncMode); \
	DECLARE_FUNCTION(execGetLightEstimationMode); \
	DECLARE_FUNCTION(execGetPlaneDetectionMode); \
	DECLARE_FUNCTION(execGetSessionType); \
	DECLARE_FUNCTION(execGetWorldAlignment);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execSetSessionTrackingFeatureToEnable); \
	DECLARE_FUNCTION(execGetSceneReconstructionMethod); \
	DECLARE_FUNCTION(execGetEnabledSessionTrackingFeature); \
	DECLARE_FUNCTION(execSetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execGetFaceTrackingUpdate); \
	DECLARE_FUNCTION(execSetFaceTrackingDirection); \
	DECLARE_FUNCTION(execGetFaceTrackingDirection); \
	DECLARE_FUNCTION(execSetDesiredVideoFormat); \
	DECLARE_FUNCTION(execGetDesiredVideoFormat); \
	DECLARE_FUNCTION(execAddCandidateObject); \
	DECLARE_FUNCTION(execSetCandidateObjectList); \
	DECLARE_FUNCTION(execGetCandidateObjectList); \
	DECLARE_FUNCTION(execSetWorldMapData); \
	DECLARE_FUNCTION(execGetWorldMapData); \
	DECLARE_FUNCTION(execGetEnvironmentCaptureProbeType); \
	DECLARE_FUNCTION(execGetMaxNumSimultaneousImagesTracked); \
	DECLARE_FUNCTION(execAddCandidateImage); \
	DECLARE_FUNCTION(execGetCandidateImageList); \
	DECLARE_FUNCTION(execSetResetTrackedObjects); \
	DECLARE_FUNCTION(execShouldResetTrackedObjects); \
	DECLARE_FUNCTION(execSetResetCameraTracking); \
	DECLARE_FUNCTION(execShouldResetCameraTracking); \
	DECLARE_FUNCTION(execSetEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableAutoFocus); \
	DECLARE_FUNCTION(execShouldEnableCameraTracking); \
	DECLARE_FUNCTION(execShouldRenderCameraOverlay); \
	DECLARE_FUNCTION(execGetFrameSyncMode); \
	DECLARE_FUNCTION(execGetLightEstimationMode); \
	DECLARE_FUNCTION(execGetPlaneDetectionMode); \
	DECLARE_FUNCTION(execGetSessionType); \
	DECLARE_FUNCTION(execGetWorldAlignment);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig, NO_API)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUARSessionConfig(); \
	friend struct Z_Construct_UClass_UARSessionConfig_Statics; \
public: \
	DECLARE_CLASS(UARSessionConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSessionConfig) \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSessionConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSessionConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public: \
	NO_API virtual ~UARSessionConfig();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSessionConfig(UARSessionConfig&&); \
	NO_API UARSessionConfig(const UARSessionConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSessionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSessionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARSessionConfig) \
	NO_API virtual ~UARSessionConfig();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_179_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARSessionConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h


#define FOREACH_ENUM_EARWORLDALIGNMENT(op) \
	op(EARWorldAlignment::Gravity) \
	op(EARWorldAlignment::GravityAndHeading) \
	op(EARWorldAlignment::Camera) 

enum class EARWorldAlignment : uint8;
template<> struct TIsUEnumClass<EARWorldAlignment> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>();

#define FOREACH_ENUM_EARSESSIONTYPE(op) \
	op(EARSessionType::None) \
	op(EARSessionType::Orientation) \
	op(EARSessionType::World) \
	op(EARSessionType::Face) \
	op(EARSessionType::Image) \
	op(EARSessionType::ObjectScanning) \
	op(EARSessionType::PoseTracking) \
	op(EARSessionType::GeoTracking) 

enum class EARSessionType : uint8;
template<> struct TIsUEnumClass<EARSessionType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>();

#define FOREACH_ENUM_EARPLANEDETECTIONMODE(op) \
	op(EARPlaneDetectionMode::None) \
	op(EARPlaneDetectionMode::HorizontalPlaneDetection) \
	op(EARPlaneDetectionMode::VerticalPlaneDetection) 

enum class EARPlaneDetectionMode : uint8;
template<> struct TIsUEnumClass<EARPlaneDetectionMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>();

#define FOREACH_ENUM_EARLIGHTESTIMATIONMODE(op) \
	op(EARLightEstimationMode::None) \
	op(EARLightEstimationMode::AmbientLightEstimate) \
	op(EARLightEstimationMode::DirectionalLightEstimate) 

enum class EARLightEstimationMode : uint8;
template<> struct TIsUEnumClass<EARLightEstimationMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>();

#define FOREACH_ENUM_EARFRAMESYNCMODE(op) \
	op(EARFrameSyncMode::SyncTickWithCameraImage) \
	op(EARFrameSyncMode::SyncTickWithoutCameraImage) 

enum class EARFrameSyncMode : uint8;
template<> struct TIsUEnumClass<EARFrameSyncMode> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>();

#define FOREACH_ENUM_EARENVIRONMENTCAPTUREPROBETYPE(op) \
	op(EAREnvironmentCaptureProbeType::None) \
	op(EAREnvironmentCaptureProbeType::Manual) \
	op(EAREnvironmentCaptureProbeType::Automatic) 

enum class EAREnvironmentCaptureProbeType : uint8;
template<> struct TIsUEnumClass<EAREnvironmentCaptureProbeType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>();

#define FOREACH_ENUM_EARFACETRACKINGUPDATE(op) \
	op(EARFaceTrackingUpdate::CurvesAndGeo) \
	op(EARFaceTrackingUpdate::CurvesOnly) 

enum class EARFaceTrackingUpdate : uint8;
template<> struct TIsUEnumClass<EARFaceTrackingUpdate> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>();

#define FOREACH_ENUM_EARSESSIONTRACKINGFEATURE(op) \
	op(EARSessionTrackingFeature::None) \
	op(EARSessionTrackingFeature::PoseDetection2D) \
	op(EARSessionTrackingFeature::PersonSegmentation) \
	op(EARSessionTrackingFeature::PersonSegmentationWithDepth) \
	op(EARSessionTrackingFeature::SceneDepth) \
	op(EARSessionTrackingFeature::SmoothedSceneDepth) 

enum class EARSessionTrackingFeature : uint8;
template<> struct TIsUEnumClass<EARSessionTrackingFeature> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionTrackingFeature>();

#define FOREACH_ENUM_EARSCENERECONSTRUCTION(op) \
	op(EARSceneReconstruction::None) \
	op(EARSceneReconstruction::MeshOnly) \
	op(EARSceneReconstruction::MeshWithClassification) 

enum class EARSceneReconstruction : uint8;
template<> struct TIsUEnumClass<EARSceneReconstruction> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSceneReconstruction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
