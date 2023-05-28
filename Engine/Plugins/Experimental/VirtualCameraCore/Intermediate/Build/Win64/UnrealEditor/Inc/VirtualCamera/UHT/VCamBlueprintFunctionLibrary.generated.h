// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class ACineCameraActor;
class UCineCameraComponent;
class ULevelSequence;
class UObject;
class USceneCaptureComponent2D;
class UTexture;
class UVirtualCameraClipsMetaData;
class UVirtualCameraUserSettings;
struct FAssetData;
struct FFrameRate;
struct FMovieSceneObjectBindingID;
struct FTimecode;
#ifdef VIRTUALCAMERA_VCamBlueprintFunctionLibrary_generated_h
#error "VCamBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in VCamBlueprintFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_VCamBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_173_DELEGATE \
static void FOnTakeRecorderSlateChanged_VCam_DelegateWrapper(const FScriptDelegate& OnTakeRecorderSlateChanged_VCam, const FString& Slate);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execTryOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execIsTakeRecorderPanelOpen); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execCopyToCineCameraActor); \
	DECLARE_FUNCTION(execGetNextUndoDescription); \
	DECLARE_FUNCTION(execTimecodeToFrameAmount); \
	DECLARE_FUNCTION(execEnableDebugFocusPlane); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCalculateAutoFocusDistance); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execConvertStringToFrameRate); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execUpdatePostProcessSettingsForCapture); \
	DECLARE_FUNCTION(execPilotActor); \
	DECLARE_FUNCTION(execSortAssetsByTimecodeAssetData); \
	DECLARE_FUNCTION(execGetObjectMetadataTags); \
	DECLARE_FUNCTION(execModifyObjectMetadataTags); \
	DECLARE_FUNCTION(execEditorLoadAsset); \
	DECLARE_FUNCTION(execEditorSaveAsset); \
	DECLARE_FUNCTION(execModifyLevelSequenceMetadata); \
	DECLARE_FUNCTION(execModifyLevelSequenceMetadataForSelects); \
	DECLARE_FUNCTION(execImportSnapshotTexture); \
	DECLARE_FUNCTION(execIsCurrentLevelSequencePlaying); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecodeWithoutObject); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecode); \
	DECLARE_FUNCTION(execGetLevelSequenceLengthInFrames); \
	DECLARE_FUNCTION(execGetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execSetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execPauseCurrentLevelSequence); \
	DECLARE_FUNCTION(execPlayCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetPendingTakeLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetUserSettings); \
	DECLARE_FUNCTION(execIsGameRunning);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOnTakeRecorderSlateChanged); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execTryOpenTakeRecorderPanel); \
	DECLARE_FUNCTION(execIsTakeRecorderPanelOpen); \
	DECLARE_FUNCTION(execSetActorLabel); \
	DECLARE_FUNCTION(execCopyToCineCameraActor); \
	DECLARE_FUNCTION(execGetNextUndoDescription); \
	DECLARE_FUNCTION(execTimecodeToFrameAmount); \
	DECLARE_FUNCTION(execEnableDebugFocusPlane); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCalculateAutoFocusDistance); \
	DECLARE_FUNCTION(execEditorSetGameView); \
	DECLARE_FUNCTION(execCallFunctionByName); \
	DECLARE_FUNCTION(execConvertStringToFrameRate); \
	DECLARE_FUNCTION(execGetDisplayRate); \
	DECLARE_FUNCTION(execUpdatePostProcessSettingsForCapture); \
	DECLARE_FUNCTION(execPilotActor); \
	DECLARE_FUNCTION(execSortAssetsByTimecodeAssetData); \
	DECLARE_FUNCTION(execGetObjectMetadataTags); \
	DECLARE_FUNCTION(execModifyObjectMetadataTags); \
	DECLARE_FUNCTION(execEditorLoadAsset); \
	DECLARE_FUNCTION(execEditorSaveAsset); \
	DECLARE_FUNCTION(execModifyLevelSequenceMetadata); \
	DECLARE_FUNCTION(execModifyLevelSequenceMetadataForSelects); \
	DECLARE_FUNCTION(execImportSnapshotTexture); \
	DECLARE_FUNCTION(execIsCurrentLevelSequencePlaying); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecodeWithoutObject); \
	DECLARE_FUNCTION(execGetLevelSequenceFrameAsTimecode); \
	DECLARE_FUNCTION(execGetLevelSequenceLengthInFrames); \
	DECLARE_FUNCTION(execGetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execSetCurrentLevelSequenceCurrentFrame); \
	DECLARE_FUNCTION(execPauseCurrentLevelSequence); \
	DECLARE_FUNCTION(execPlayCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetPendingTakeLevelSequence); \
	DECLARE_FUNCTION(execGetCurrentLevelSequence); \
	DECLARE_FUNCTION(execGetUserSettings); \
	DECLARE_FUNCTION(execIsGameRunning);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVCamBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVCamBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVCamBlueprintFunctionLibrary) \
	static const TCHAR* StaticConfigName() {return TEXT("VirtualCamera");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVCamBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVCamBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVCamBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVCamBlueprintFunctionLibrary) \
	static const TCHAR* StaticConfigName() {return TEXT("VirtualCamera");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamBlueprintFunctionLibrary(UVCamBlueprintFunctionLibrary&&); \
	NO_API UVCamBlueprintFunctionLibrary(const UVCamBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UVCamBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamBlueprintFunctionLibrary(UVCamBlueprintFunctionLibrary&&); \
	NO_API UVCamBlueprintFunctionLibrary(const UVCamBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamBlueprintFunctionLibrary) \
	NO_API virtual ~UVCamBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVCamBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VCamBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
