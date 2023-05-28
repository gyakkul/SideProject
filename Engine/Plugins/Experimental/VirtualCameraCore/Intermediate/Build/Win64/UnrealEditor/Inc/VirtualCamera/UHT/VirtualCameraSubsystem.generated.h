// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualCameraSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IVirtualCameraController;
class UObject;
#ifdef VIRTUALCAMERA_VirtualCameraSubsystem_generated_h
#error "VirtualCameraSubsystem.generated.h already included, missing '#pragma once' in VirtualCameraSubsystem.h"
#endif
#define VIRTUALCAMERA_VirtualCameraSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_10_DELEGATE \
VIRTUALCAMERA_API void FOnStreamStarted_DelegateWrapper(const FMulticastScriptDelegate& OnStreamStarted);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_11_DELEGATE \
VIRTUALCAMERA_API void FOnStreamStopped_DelegateWrapper(const FMulticastScriptDelegate& OnStreamStopped);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_12_DELEGATE \
VIRTUALCAMERA_API void FOnSelectedAnyActor_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedAnyActor, AActor* SelectedActor);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_13_DELEGATE \
VIRTUALCAMERA_API void FOnSelectedViewportActor_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedViewportActor, AActor* SelectedActor);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVirtualCameraController); \
	DECLARE_FUNCTION(execGetVirtualCameraController); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execStopStreaming); \
	DECLARE_FUNCTION(execStartStreaming);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVirtualCameraController); \
	DECLARE_FUNCTION(execGetVirtualCameraController); \
	DECLARE_FUNCTION(execIsStreaming); \
	DECLARE_FUNCTION(execStopStreaming); \
	DECLARE_FUNCTION(execStartStreaming);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleSelectObjectEvent); \
	DECLARE_FUNCTION(execHandleSelectionChangedEvent);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleSelectObjectEvent); \
	DECLARE_FUNCTION(execHandleSelectionChangedEvent);


#else
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraSubsystem(); \
	friend struct Z_Construct_UClass_UVirtualCameraSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCameraSubsystem(); \
	friend struct Z_Construct_UClass_UVirtualCameraSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraSubsystem(UVirtualCameraSubsystem&&); \
	NO_API UVirtualCameraSubsystem(const UVirtualCameraSubsystem&); \
public: \
	NO_API virtual ~UVirtualCameraSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraSubsystem(UVirtualCameraSubsystem&&); \
	NO_API UVirtualCameraSubsystem(const UVirtualCameraSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualCameraSubsystem) \
	NO_API virtual ~UVirtualCameraSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
