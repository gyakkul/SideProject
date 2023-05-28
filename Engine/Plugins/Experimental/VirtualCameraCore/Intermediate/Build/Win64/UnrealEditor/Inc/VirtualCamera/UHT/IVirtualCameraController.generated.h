// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVirtualCameraController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IBlendableInterface;
class IVirtualCameraOptions;
class IVirtualCameraPresetContainer;
class UCineCameraComponent;
class ULevelSequencePlaybackController;
class USceneCaptureComponent2D;
struct FHitResult;
struct FLiveLinkSubjectRepresentation;
struct FVirtualCameraTransform;
#ifdef VIRTUALCAMERA_IVirtualCameraController_generated_h
#error "IVirtualCameraController.generated.h already included, missing '#pragma once' in IVirtualCameraController.h"
#endif
#define VIRTUALCAMERA_IVirtualCameraController_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackingOffset_Statics; \
	VIRTUALCAMERA_API static class UScriptStruct* StaticStruct();


template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<struct FTrackingOffset>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVirtualCameraTransform_Statics; \
	VIRTUALCAMERA_API static class UScriptStruct* StaticStruct();


template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<struct FVirtualCameraTransform>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_74_DELEGATE \
VIRTUALCAMERA_API FVirtualCameraTransform FPreSetVirtualCameraTransform_DelegateWrapper(const FScriptDelegate& PreSetVirtualCameraTransform, FVirtualCameraTransform CameraTransform);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_75_DELEGATE \
VIRTUALCAMERA_API void FOnActorClickedDelegate_DelegateWrapper(const FScriptDelegate& OnActorClickedDelegate, FHitResult HitResult);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_76_DELEGATE \
VIRTUALCAMERA_API void FVirtualCameraTickDelegateGroup_DelegateWrapper(const FMulticastScriptDelegate& VirtualCameraTickDelegateGroup, float DeltaTime);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_77_DELEGATE \
VIRTUALCAMERA_API void FVirtualCameraTickDelegate_DelegateWrapper(const FScriptDelegate& VirtualCameraTickDelegate, float DeltaTime);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_RPC_WRAPPERS \
	virtual void RemoveOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate const& InDelegate) {}; \
	virtual void AddOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate const& InDelegate) {}; \
	virtual void SetOnActorClickedDelegate_Implementation(FOnActorClickedDelegate const& InDelegate) {}; \
	virtual void SetBeforeSetVirtualCameraTransformDelegate_Implementation(FPreSetVirtualCameraTransform const& InDelegate) {}; \
	virtual void SetFocusVisualization_Implementation(bool bInShowFocusVisualization) {}; \
	virtual void SetTrackedActorForFocus_Implementation(AActor* InActorToTrack, FVector const& TrackingPointOffset) {}; \
	virtual void AddBlendableToCamera_Implementation(TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight) {}; \
	virtual FTransform GetRelativeTransform_Implementation() const { return FTransform(); }; \
	virtual void SetSaveSettingsOnStopStreaming_Implementation(bool bShouldSettingsSave) {}; \
	virtual bool ShouldSaveSettingsOnStopStreaming_Implementation() const { return false; }; \
	virtual bool IsStreaming_Implementation() const { return false; }; \
	virtual void SetLiveLinkRepresentation_Implementation(FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation) {}; \
	virtual FLiveLinkSubjectRepresentation GetLiveLinkRepresentation_Implementation() const { return FLiveLinkSubjectRepresentation(); }; \
	virtual TScriptInterface<IVirtualCameraOptions> GetOptions_Implementation() { return NULL; }; \
	virtual TScriptInterface<IVirtualCameraPresetContainer> GetPresetContainer_Implementation() { return NULL; }; \
	virtual ULevelSequencePlaybackController* GetSequenceController_Implementation() const { return NULL; }; \
	virtual USceneCaptureComponent2D* GetSceneCaptureComponent_Implementation() const { return NULL; }; \
	virtual UCineCameraComponent* GetStreamedCameraComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execRemoveOnVirtualCameraUpdatedDelegate); \
	DECLARE_FUNCTION(execAddOnVirtualCameraUpdatedDelegate); \
	DECLARE_FUNCTION(execSetOnActorClickedDelegate); \
	DECLARE_FUNCTION(execSetBeforeSetVirtualCameraTransformDelegate); \
	DECLARE_FUNCTION(execSetFocusVisualization); \
	DECLARE_FUNCTION(execSetTrackedActorForFocus); \
	DECLARE_FUNCTION(execAddBlendableToCamera); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execSetSaveSettingsOnStopStreaming); \
	DECLARE_FUNCTION(execShouldSaveSettingsOnStopStreaming); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execSetLiveLinkRepresentation); \
	DECLARE_FUNCTION(execGetLiveLinkRepresentation); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execGetPresetContainer); \
	DECLARE_FUNCTION(execGetSequenceController); \
	DECLARE_FUNCTION(execGetSceneCaptureComponent); \
	DECLARE_FUNCTION(execGetStreamedCameraComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate const& InDelegate) {}; \
	virtual void AddOnVirtualCameraUpdatedDelegate_Implementation(FVirtualCameraTickDelegate const& InDelegate) {}; \
	virtual void SetOnActorClickedDelegate_Implementation(FOnActorClickedDelegate const& InDelegate) {}; \
	virtual void SetBeforeSetVirtualCameraTransformDelegate_Implementation(FPreSetVirtualCameraTransform const& InDelegate) {}; \
	virtual void SetFocusVisualization_Implementation(bool bInShowFocusVisualization) {}; \
	virtual void SetTrackedActorForFocus_Implementation(AActor* InActorToTrack, FVector const& TrackingPointOffset) {}; \
	virtual void AddBlendableToCamera_Implementation(TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight) {}; \
	virtual FTransform GetRelativeTransform_Implementation() const { return FTransform(); }; \
	virtual void SetSaveSettingsOnStopStreaming_Implementation(bool bShouldSettingsSave) {}; \
	virtual bool ShouldSaveSettingsOnStopStreaming_Implementation() const { return false; }; \
	virtual bool IsStreaming_Implementation() const { return false; }; \
	virtual void SetLiveLinkRepresentation_Implementation(FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation) {}; \
	virtual FLiveLinkSubjectRepresentation GetLiveLinkRepresentation_Implementation() const { return FLiveLinkSubjectRepresentation(); }; \
	virtual TScriptInterface<IVirtualCameraOptions> GetOptions_Implementation() { return NULL; }; \
	virtual TScriptInterface<IVirtualCameraPresetContainer> GetPresetContainer_Implementation() { return NULL; }; \
	virtual ULevelSequencePlaybackController* GetSequenceController_Implementation() const { return NULL; }; \
	virtual USceneCaptureComponent2D* GetSceneCaptureComponent_Implementation() const { return NULL; }; \
	virtual UCineCameraComponent* GetStreamedCameraComponent_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execRemoveOnVirtualCameraUpdatedDelegate); \
	DECLARE_FUNCTION(execAddOnVirtualCameraUpdatedDelegate); \
	DECLARE_FUNCTION(execSetOnActorClickedDelegate); \
	DECLARE_FUNCTION(execSetBeforeSetVirtualCameraTransformDelegate); \
	DECLARE_FUNCTION(execSetFocusVisualization); \
	DECLARE_FUNCTION(execSetTrackedActorForFocus); \
	DECLARE_FUNCTION(execAddBlendableToCamera); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execSetSaveSettingsOnStopStreaming); \
	DECLARE_FUNCTION(execShouldSaveSettingsOnStopStreaming); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execSetLiveLinkRepresentation); \
	DECLARE_FUNCTION(execGetLiveLinkRepresentation); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execGetPresetContainer); \
	DECLARE_FUNCTION(execGetSequenceController); \
	DECLARE_FUNCTION(execGetSceneCaptureComponent); \
	DECLARE_FUNCTION(execGetStreamedCameraComponent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraController(UVirtualCameraController&&); \
	NO_API UVirtualCameraController(const UVirtualCameraController&); \
public: \
	NO_API virtual ~UVirtualCameraController();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraController(UVirtualCameraController&&); \
	NO_API UVirtualCameraController(const UVirtualCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraController) \
	NO_API virtual ~UVirtualCameraController();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVirtualCameraController(); \
	friend struct Z_Construct_UClass_UVirtualCameraController_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraController)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVirtualCameraController() {} \
public: \
	typedef UVirtualCameraController UClassType; \
	typedef IVirtualCameraController ThisClass; \
	static void Execute_AddBlendableToCamera(UObject* O, TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight); \
	static void Execute_AddOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate); \
	static FLiveLinkSubjectRepresentation Execute_GetLiveLinkRepresentation(const UObject* O); \
	static TScriptInterface<IVirtualCameraOptions> Execute_GetOptions(UObject* O); \
	static TScriptInterface<IVirtualCameraPresetContainer> Execute_GetPresetContainer(UObject* O); \
	static FTransform Execute_GetRelativeTransform(const UObject* O); \
	static USceneCaptureComponent2D* Execute_GetSceneCaptureComponent(const UObject* O); \
	static ULevelSequencePlaybackController* Execute_GetSequenceController(const UObject* O); \
	static UCineCameraComponent* Execute_GetStreamedCameraComponent(const UObject* O); \
	static bool Execute_IsStreaming(const UObject* O); \
	static void Execute_RemoveOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate); \
	static void Execute_SetBeforeSetVirtualCameraTransformDelegate(UObject* O, FPreSetVirtualCameraTransform const& InDelegate); \
	static void Execute_SetFocusVisualization(UObject* O, bool bInShowFocusVisualization); \
	static void Execute_SetLiveLinkRepresentation(UObject* O, FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation); \
	static void Execute_SetOnActorClickedDelegate(UObject* O, FOnActorClickedDelegate const& InDelegate); \
	static void Execute_SetSaveSettingsOnStopStreaming(UObject* O, bool bShouldSettingsSave); \
	static void Execute_SetTrackedActorForFocus(UObject* O, AActor* InActorToTrack, FVector const& TrackingPointOffset); \
	static bool Execute_ShouldSaveSettingsOnStopStreaming(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_INCLASS_IINTERFACE \
protected: \
	virtual ~IVirtualCameraController() {} \
public: \
	typedef UVirtualCameraController UClassType; \
	typedef IVirtualCameraController ThisClass; \
	static void Execute_AddBlendableToCamera(UObject* O, TScriptInterface<IBlendableInterface> const& InBlendableToAdd, float InWeight); \
	static void Execute_AddOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate); \
	static FLiveLinkSubjectRepresentation Execute_GetLiveLinkRepresentation(const UObject* O); \
	static TScriptInterface<IVirtualCameraOptions> Execute_GetOptions(UObject* O); \
	static TScriptInterface<IVirtualCameraPresetContainer> Execute_GetPresetContainer(UObject* O); \
	static FTransform Execute_GetRelativeTransform(const UObject* O); \
	static USceneCaptureComponent2D* Execute_GetSceneCaptureComponent(const UObject* O); \
	static ULevelSequencePlaybackController* Execute_GetSequenceController(const UObject* O); \
	static UCineCameraComponent* Execute_GetStreamedCameraComponent(const UObject* O); \
	static bool Execute_IsStreaming(const UObject* O); \
	static void Execute_RemoveOnVirtualCameraUpdatedDelegate(UObject* O, FVirtualCameraTickDelegate const& InDelegate); \
	static void Execute_SetBeforeSetVirtualCameraTransformDelegate(UObject* O, FPreSetVirtualCameraTransform const& InDelegate); \
	static void Execute_SetFocusVisualization(UObject* O, bool bInShowFocusVisualization); \
	static void Execute_SetLiveLinkRepresentation(UObject* O, FLiveLinkSubjectRepresentation const& InLiveLinkRepresenation); \
	static void Execute_SetOnActorClickedDelegate(UObject* O, FOnActorClickedDelegate const& InDelegate); \
	static void Execute_SetSaveSettingsOnStopStreaming(UObject* O, bool bShouldSettingsSave); \
	static void Execute_SetTrackedActorForFocus(UObject* O, AActor* InActorToTrack, FVector const& TrackingPointOffset); \
	static bool Execute_ShouldSaveSettingsOnStopStreaming(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_79_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h_82_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraController_h


#define FOREACH_ENUM_EVIRTUALCAMERAFOCUSMETHOD(op) \
	op(EVirtualCameraFocusMethod::None) \
	op(EVirtualCameraFocusMethod::Manual) \
	op(EVirtualCameraFocusMethod::Tracking) \
	op(EVirtualCameraFocusMethod::Auto) 

enum class EVirtualCameraFocusMethod : uint8;
template<> struct TIsUEnumClass<EVirtualCameraFocusMethod> { enum { Value = true }; };
template<> VIRTUALCAMERA_API UEnum* StaticEnum<EVirtualCameraFocusMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
