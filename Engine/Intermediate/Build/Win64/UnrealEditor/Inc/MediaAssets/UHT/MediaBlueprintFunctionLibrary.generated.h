// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/MediaBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMediaCaptureDevice;
#ifdef MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h
#error "MediaBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in MediaBlueprintFunctionLibrary.h"
#endif
#define MEDIAASSETS_MediaBlueprintFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAASSETS_API UScriptStruct* StaticStruct<struct FMediaCaptureDevice>();

#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_SPARSE_DATA
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnumerateWebcamCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateVideoCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateAudioCaptureDevices);


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnumerateWebcamCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateVideoCaptureDevices); \
	DECLARE_FUNCTION(execEnumerateAudioCaptureDevices);


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ACCESSORS
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMediaBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUMediaBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMediaBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaBlueprintFunctionLibrary)


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBlueprintFunctionLibrary(UMediaBlueprintFunctionLibrary&&); \
	NO_API UMediaBlueprintFunctionLibrary(const UMediaBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UMediaBlueprintFunctionLibrary();


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBlueprintFunctionLibrary(UMediaBlueprintFunctionLibrary&&); \
	NO_API UMediaBlueprintFunctionLibrary(const UMediaBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBlueprintFunctionLibrary) \
	NO_API virtual ~UMediaBlueprintFunctionLibrary();


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_122_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_Misc_MediaBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EMEDIAAUDIOCAPTUREDEVICEFILTER(op) \
	op(EMediaAudioCaptureDeviceFilter::None) \
	op(EMediaAudioCaptureDeviceFilter::Card) \
	op(EMediaAudioCaptureDeviceFilter::Microphone) \
	op(EMediaAudioCaptureDeviceFilter::Software) \
	op(EMediaAudioCaptureDeviceFilter::Unknown) 

enum class EMediaAudioCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaAudioCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaAudioCaptureDeviceFilter>();

#define FOREACH_ENUM_EMEDIAVIDEOCAPTUREDEVICEFILTER(op) \
	op(EMediaVideoCaptureDeviceFilter::None) \
	op(EMediaVideoCaptureDeviceFilter::Card) \
	op(EMediaVideoCaptureDeviceFilter::Software) \
	op(EMediaVideoCaptureDeviceFilter::Unknown) \
	op(EMediaVideoCaptureDeviceFilter::Webcam) 

enum class EMediaVideoCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaVideoCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaVideoCaptureDeviceFilter>();

#define FOREACH_ENUM_EMEDIAWEBCAMCAPTUREDEVICEFILTER(op) \
	op(EMediaWebcamCaptureDeviceFilter::None) \
	op(EMediaWebcamCaptureDeviceFilter::DepthSensor) \
	op(EMediaWebcamCaptureDeviceFilter::Front) \
	op(EMediaWebcamCaptureDeviceFilter::Rear) \
	op(EMediaWebcamCaptureDeviceFilter::Unknown) 

enum class EMediaWebcamCaptureDeviceFilter : uint8;
template<> struct TIsUEnumClass<EMediaWebcamCaptureDeviceFilter> { enum { Value = true }; };
template<> MEDIAASSETS_API UEnum* StaticEnum<EMediaWebcamCaptureDeviceFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
