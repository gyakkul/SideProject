// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateImage;
class UARPin;
class UARPlaneGeometry;
class UARSessionConfig;
class UARTrackedPoint;
class UGoogleARCoreAugmentedFace;
class UGoogleARCoreAugmentedImage;
class UGoogleARCoreCameraImage;
class UGoogleARCoreCameraIntrinsics;
class UGoogleARCoreEventManager;
class UGoogleARCorePointCloud;
class UGoogleARCoreSessionConfig;
class UObject;
class UTexture2D;
class UTexture;
enum class EGoogleARCoreAvailability : uint8;
enum class EGoogleARCoreCoordinates2DType : uint8;
enum class EGoogleARCoreFunctionStatus : uint8;
enum class EGoogleARCoreInstallRequestResult : uint8;
enum class EGoogleARCoreLineTraceChannel : uint8;
enum class EGoogleARCoreTrackingFailureReason : uint8;
enum class EGoogleARCoreTrackingState : uint8;
struct FARTraceResult;
struct FGoogleARCoreCameraConfig;
struct FGoogleARCoreLightEstimate;
struct FLatentActionInfo;
#ifdef GOOGLEARCOREBASE_GoogleARCoreFunctionLibrary_generated_h
#error "GoogleARCoreFunctionLibrary.generated.h already included, missing '#pragma once' in GoogleARCoreFunctionLibrary.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRuntimeCandidateImageFromRawbytes); \
	DECLARE_FUNCTION(execGetAllAugmentedFaces); \
	DECLARE_FUNCTION(execGetAllAugmentedImages); \
	DECLARE_FUNCTION(execGetAllTrackablePoints); \
	DECLARE_FUNCTION(execGetAllPlanes); \
	DECLARE_FUNCTION(execGetPassthroughCameraImageUV); \
	DECLARE_FUNCTION(execSetPassthroughCameraRenderingEnabled); \
	DECLARE_FUNCTION(execIsPassthroughCameraRenderingEnabled); \
	DECLARE_FUNCTION(execGetARCoreCameraConfig); \
	DECLARE_FUNCTION(execSetARCoreCameraConfig); \
	DECLARE_FUNCTION(execStartARCoreSession); \
	DECLARE_FUNCTION(execGetARCoreEventManager); \
	DECLARE_FUNCTION(execInstallARCoreService); \
	DECLARE_FUNCTION(execCheckARCoreAvailability);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRuntimeCandidateImageFromRawbytes); \
	DECLARE_FUNCTION(execGetAllAugmentedFaces); \
	DECLARE_FUNCTION(execGetAllAugmentedImages); \
	DECLARE_FUNCTION(execGetAllTrackablePoints); \
	DECLARE_FUNCTION(execGetAllPlanes); \
	DECLARE_FUNCTION(execGetPassthroughCameraImageUV); \
	DECLARE_FUNCTION(execSetPassthroughCameraRenderingEnabled); \
	DECLARE_FUNCTION(execIsPassthroughCameraRenderingEnabled); \
	DECLARE_FUNCTION(execGetARCoreCameraConfig); \
	DECLARE_FUNCTION(execSetARCoreCameraConfig); \
	DECLARE_FUNCTION(execStartARCoreSession); \
	DECLARE_FUNCTION(execGetARCoreEventManager); \
	DECLARE_FUNCTION(execInstallARCoreService); \
	DECLARE_FUNCTION(execCheckARCoreAvailability);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreSessionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreSessionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreSessionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGoogleARCoreSessionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreSessionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreSessionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreSessionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreSessionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreSessionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreSessionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreSessionFunctionLibrary(UGoogleARCoreSessionFunctionLibrary&&); \
	NO_API UGoogleARCoreSessionFunctionLibrary(const UGoogleARCoreSessionFunctionLibrary&); \
public: \
	NO_API virtual ~UGoogleARCoreSessionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreSessionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreSessionFunctionLibrary(UGoogleARCoreSessionFunctionLibrary&&); \
	NO_API UGoogleARCoreSessionFunctionLibrary(const UGoogleARCoreSessionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreSessionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreSessionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreSessionFunctionLibrary) \
	NO_API virtual ~UGoogleARCoreSessionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCOREBASE_API UClass* StaticClass<class UGoogleARCoreSessionFunctionLibrary>();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraTextureIntrinsics); \
	DECLARE_FUNCTION(execGetCameraImageIntrinsics); \
	DECLARE_FUNCTION(execTransformARCoordinates2D); \
	DECLARE_FUNCTION(execAcquireCameraImage); \
	DECLARE_FUNCTION(execGetCameraTexture); \
	DECLARE_FUNCTION(execAcquirePointCloud); \
	DECLARE_FUNCTION(execGetPointCloud); \
	DECLARE_FUNCTION(execGetLightEstimation); \
	DECLARE_FUNCTION(execGetUpdatedAugmentedFaces); \
	DECLARE_FUNCTION(execGetUpdatedAugmentedImages); \
	DECLARE_FUNCTION(execGetUpdatedTrackablePoints); \
	DECLARE_FUNCTION(execGetUpdatedPlanes); \
	DECLARE_FUNCTION(execGetUpdatedARPins); \
	DECLARE_FUNCTION(execARCoreLineTraceRay); \
	DECLARE_FUNCTION(execARCoreLineTrace); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetTrackingFailureReason); \
	DECLARE_FUNCTION(execGetTrackingState);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraTextureIntrinsics); \
	DECLARE_FUNCTION(execGetCameraImageIntrinsics); \
	DECLARE_FUNCTION(execTransformARCoordinates2D); \
	DECLARE_FUNCTION(execAcquireCameraImage); \
	DECLARE_FUNCTION(execGetCameraTexture); \
	DECLARE_FUNCTION(execAcquirePointCloud); \
	DECLARE_FUNCTION(execGetPointCloud); \
	DECLARE_FUNCTION(execGetLightEstimation); \
	DECLARE_FUNCTION(execGetUpdatedAugmentedFaces); \
	DECLARE_FUNCTION(execGetUpdatedAugmentedImages); \
	DECLARE_FUNCTION(execGetUpdatedTrackablePoints); \
	DECLARE_FUNCTION(execGetUpdatedPlanes); \
	DECLARE_FUNCTION(execGetUpdatedARPins); \
	DECLARE_FUNCTION(execARCoreLineTraceRay); \
	DECLARE_FUNCTION(execARCoreLineTrace); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetTrackingFailureReason); \
	DECLARE_FUNCTION(execGetTrackingState);


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreFrameFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreFrameFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreFrameFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_INCLASS \
private: \
	static void StaticRegisterNativesUGoogleARCoreFrameFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGoogleARCoreFrameFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGoogleARCoreFrameFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), NO_API) \
	DECLARE_SERIALIZER(UGoogleARCoreFrameFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreFrameFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreFrameFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreFrameFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreFrameFunctionLibrary(UGoogleARCoreFrameFunctionLibrary&&); \
	NO_API UGoogleARCoreFrameFunctionLibrary(const UGoogleARCoreFrameFunctionLibrary&); \
public: \
	NO_API virtual ~UGoogleARCoreFrameFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreFrameFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleARCoreFrameFunctionLibrary(UGoogleARCoreFrameFunctionLibrary&&); \
	NO_API UGoogleARCoreFrameFunctionLibrary(const UGoogleARCoreFrameFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreFrameFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreFrameFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreFrameFunctionLibrary) \
	NO_API virtual ~UGoogleARCoreFrameFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_208_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_INCLASS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEARCOREBASE_API UClass* StaticClass<class UGoogleARCoreFrameFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
