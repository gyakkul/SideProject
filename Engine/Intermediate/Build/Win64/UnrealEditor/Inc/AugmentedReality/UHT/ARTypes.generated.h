// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EARCandidateImageOrientation : uint8;
enum class EARTrackingState : uint8;
#ifdef AUGMENTEDREALITY_ARTypes_generated_h
#error "ARTypes.generated.h already included, missing '#pragma once' in ARTypes.h"
#endif
#define AUGMENTEDREALITY_ARTypes_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSessionStatus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSessionStatus>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_280_DELEGATE \
AUGMENTEDREALITY_API void FOnARTrackingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnARTrackingStateChanged, EARTrackingState NewTrackingState);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_281_DELEGATE \
AUGMENTEDREALITY_API void FOnARTransformUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnARTransformUpdated, FTransform const& OldToNewTransform);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_INCLASS \
private: \
	static void StaticRegisterNativesUARTypesDummyClass(); \
	friend struct Z_Construct_UClass_UARTypesDummyClass_Statics; \
public: \
	DECLARE_CLASS(UARTypesDummyClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTypesDummyClass)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public: \
	NO_API virtual ~UARTypesDummyClass();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTypesDummyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTypesDummyClass(UARTypesDummyClass&&); \
	NO_API UARTypesDummyClass(const UARTypesDummyClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTypesDummyClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTypesDummyClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTypesDummyClass) \
	NO_API virtual ~UARTypesDummyClass();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_283_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTypesDummyClass>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPhysicalHeight); \
	DECLARE_FUNCTION(execGetPhysicalWidth); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execGetCandidateTexture);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientation); \
	DECLARE_FUNCTION(execGetPhysicalHeight); \
	DECLARE_FUNCTION(execGetPhysicalWidth); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execGetCandidateTexture);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateImage(); \
	friend struct Z_Construct_UClass_UARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(UARCandidateImage, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateImage)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public: \
	NO_API virtual ~UARCandidateImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateImage(UARCandidateImage&&); \
	NO_API UARCandidateImage(const UARCandidateImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateImage) \
	NO_API virtual ~UARCandidateImage();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_309_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_313_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateImage>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundingBox); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execSetFriendlyName); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execSetCandidateObjectData); \
	DECLARE_FUNCTION(execGetCandidateObjectData);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundingBox); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execSetFriendlyName); \
	DECLARE_FUNCTION(execGetFriendlyName); \
	DECLARE_FUNCTION(execSetCandidateObjectData); \
	DECLARE_FUNCTION(execGetCandidateObjectData);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_INCLASS \
private: \
	static void StaticRegisterNativesUARCandidateObject(); \
	friend struct Z_Construct_UClass_UARCandidateObject_Statics; \
public: \
	DECLARE_CLASS(UARCandidateObject, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARCandidateObject)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public: \
	NO_API virtual ~UARCandidateObject();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARCandidateObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARCandidateObject(UARCandidateObject&&); \
	NO_API UARCandidateObject(const UARCandidateObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARCandidateObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARCandidateObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARCandidateObject) \
	NO_API virtual ~UARCandidateObject();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_377_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_381_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARCandidateObject>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_489_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARVideoFormat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARVideoFormat>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_537_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARSkeletonDefinition>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_557_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPose2D_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPose2D>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_577_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPose3D_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARPose3D>();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h_601_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<struct FARCameraIntrinsics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h


#define FOREACH_ENUM_EARTRACKINGSTATE(op) \
	op(EARTrackingState::Unknown) \
	op(EARTrackingState::Tracking) \
	op(EARTrackingState::NotTracking) \
	op(EARTrackingState::StoppedTracking) 

enum class EARTrackingState : uint8;
template<> struct TIsUEnumClass<EARTrackingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingState>();

#define FOREACH_ENUM_EARCAPTURETYPE(op) \
	op(EARCaptureType::Camera) \
	op(EARCaptureType::QRCode) \
	op(EARCaptureType::SpatialMapping) \
	op(EARCaptureType::SceneUnderstanding) \
	op(EARCaptureType::HandMesh) 

enum class EARCaptureType : uint8;
template<> struct TIsUEnumClass<EARCaptureType> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCaptureType>();

#define FOREACH_ENUM_EARLINETRACECHANNELS(op) \
	op(EARLineTraceChannels::None) \
	op(EARLineTraceChannels::FeaturePoint) \
	op(EARLineTraceChannels::GroundPlane) \
	op(EARLineTraceChannels::PlaneUsingExtent) \
	op(EARLineTraceChannels::PlaneUsingBoundaryPolygon) 

enum class EARLineTraceChannels : uint8;
template<> struct TIsUEnumClass<EARLineTraceChannels> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLineTraceChannels>();

#define FOREACH_ENUM_EARTRACKINGQUALITY(op) \
	op(EARTrackingQuality::NotTracking) \
	op(EARTrackingQuality::OrientationOnly) \
	op(EARTrackingQuality::OrientationAndPosition) 

enum class EARTrackingQuality : uint8;
template<> struct TIsUEnumClass<EARTrackingQuality> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQuality>();

#define FOREACH_ENUM_EARTRACKINGQUALITYREASON(op) \
	op(EARTrackingQualityReason::None) \
	op(EARTrackingQualityReason::Initializing) \
	op(EARTrackingQualityReason::Relocalizing) \
	op(EARTrackingQualityReason::ExcessiveMotion) \
	op(EARTrackingQualityReason::InsufficientFeatures) \
	op(EARTrackingQualityReason::InsufficientLight) \
	op(EARTrackingQualityReason::BadState) 

enum class EARTrackingQualityReason : uint8;
template<> struct TIsUEnumClass<EARTrackingQualityReason> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTrackingQualityReason>();

#define FOREACH_ENUM_EARSESSIONSTATUS(op) \
	op(EARSessionStatus::NotStarted) \
	op(EARSessionStatus::Running) \
	op(EARSessionStatus::NotSupported) \
	op(EARSessionStatus::FatalError) \
	op(EARSessionStatus::PermissionNotGranted) \
	op(EARSessionStatus::UnsupportedConfiguration) \
	op(EARSessionStatus::Other) 

enum class EARSessionStatus : uint8;
template<> struct TIsUEnumClass<EARSessionStatus> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionStatus>();

#define FOREACH_ENUM_EARWORLDMAPPINGSTATE(op) \
	op(EARWorldMappingState::NotAvailable) \
	op(EARWorldMappingState::StillMappingNotRelocalizable) \
	op(EARWorldMappingState::StillMappingRelocalizable) \
	op(EARWorldMappingState::Mapped) 

enum class EARWorldMappingState : uint8;
template<> struct TIsUEnumClass<EARWorldMappingState> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldMappingState>();

#define FOREACH_ENUM_EARPLANEORIENTATION(op) \
	op(EARPlaneOrientation::Horizontal) \
	op(EARPlaneOrientation::Vertical) \
	op(EARPlaneOrientation::Diagonal) 

enum class EARPlaneOrientation : uint8;
template<> struct TIsUEnumClass<EARPlaneOrientation> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneOrientation>();

#define FOREACH_ENUM_EAROBJECTCLASSIFICATION(op) \
	op(EARObjectClassification::NotApplicable) \
	op(EARObjectClassification::Unknown) \
	op(EARObjectClassification::Wall) \
	op(EARObjectClassification::Ceiling) \
	op(EARObjectClassification::Floor) \
	op(EARObjectClassification::Table) \
	op(EARObjectClassification::Seat) \
	op(EARObjectClassification::Face) \
	op(EARObjectClassification::Image) \
	op(EARObjectClassification::World) \
	op(EARObjectClassification::SceneObject) \
	op(EARObjectClassification::HandMesh) \
	op(EARObjectClassification::Door) \
	op(EARObjectClassification::Window) 

enum class EARObjectClassification : uint8;
template<> struct TIsUEnumClass<EARObjectClassification> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARObjectClassification>();

#define FOREACH_ENUM_EARSPATIALMESHUSAGEFLAGS(op) \
	op(EARSpatialMeshUsageFlags::NotApplicable) \
	op(EARSpatialMeshUsageFlags::Visible) \
	op(EARSpatialMeshUsageFlags::Collision) 

enum class EARSpatialMeshUsageFlags : uint8;
template<> struct TIsUEnumClass<EARSpatialMeshUsageFlags> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSpatialMeshUsageFlags>();

#define FOREACH_ENUM_EARJOINTTRANSFORMSPACE(op) \
	op(EARJointTransformSpace::Model) \
	op(EARJointTransformSpace::ParentJoint) 

enum class EARJointTransformSpace : uint8;
template<> struct TIsUEnumClass<EARJointTransformSpace> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARJointTransformSpace>();

#define FOREACH_ENUM_EARALTITUDESOURCE(op) \
	op(EARAltitudeSource::Precise) \
	op(EARAltitudeSource::Coarse) \
	op(EARAltitudeSource::UserDefined) \
	op(EARAltitudeSource::Unknown) 

enum class EARAltitudeSource : uint8;
template<> struct TIsUEnumClass<EARAltitudeSource> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARAltitudeSource>();

#define FOREACH_ENUM_EARCANDIDATEIMAGEORIENTATION(op) \
	op(EARCandidateImageOrientation::Landscape) \
	op(EARCandidateImageOrientation::Portrait) 

enum class EARCandidateImageOrientation : uint8;
template<> struct TIsUEnumClass<EARCandidateImageOrientation> { enum { Value = true }; };
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARCandidateImageOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
