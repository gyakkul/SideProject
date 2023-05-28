// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCaptureBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioInputDeviceInfo;
#ifdef AUDIOCAPTURE_AudioCaptureBlueprintLibrary_generated_h
#error "AudioCaptureBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioCaptureBlueprintLibrary.h"
#endif
#define AUDIOCAPTURE_AudioCaptureBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioInputDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<struct FAudioInputDeviceInfo>();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_62_DELEGATE \
AUDIOCAPTURE_API void FOnAudioInputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnAudioInputDevicesObtained, TArray<FAudioInputDeviceInfo> const& AvailableDevices);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execConv_AudioInputDeviceInfoToString);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvailableAudioInputDevices); \
	DECLARE_FUNCTION(execConv_AudioInputDeviceInfoToString);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCaptureBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureBlueprintLibrary(UAudioCaptureBlueprintLibrary&&); \
	NO_API UAudioCaptureBlueprintLibrary(const UAudioCaptureBlueprintLibrary&); \
public: \
	NO_API virtual ~UAudioCaptureBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureBlueprintLibrary(UAudioCaptureBlueprintLibrary&&); \
	NO_API UAudioCaptureBlueprintLibrary(const UAudioCaptureBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureBlueprintLibrary) \
	NO_API virtual ~UAudioCaptureBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_64_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_INCLASS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCaptureBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
