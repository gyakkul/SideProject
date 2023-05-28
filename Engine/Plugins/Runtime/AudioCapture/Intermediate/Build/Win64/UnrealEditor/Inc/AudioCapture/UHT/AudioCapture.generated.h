// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioCapture;
struct FAudioCaptureDeviceInfo;
#ifdef AUDIOCAPTURE_AudioCapture_generated_h
#error "AudioCapture.generated.h already included, missing '#pragma once' in AudioCapture.h"
#endif
#define AUDIOCAPTURE_AudioCapture_generated_h

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioCaptureDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOCAPTURE_API UScriptStruct* StaticStruct<struct FAudioCaptureDeviceInfo>();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCapturingAudio); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio); \
	DECLARE_FUNCTION(execGetAudioCaptureDeviceInfo);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCapturingAudio); \
	DECLARE_FUNCTION(execStopCapturingAudio); \
	DECLARE_FUNCTION(execStartCapturingAudio); \
	DECLARE_FUNCTION(execGetAudioCaptureDeviceInfo);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCapture(); \
	friend struct Z_Construct_UClass_UAudioCapture_Statics; \
public: \
	DECLARE_CLASS(UAudioCapture, UAudioGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCapture)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCapture(); \
	friend struct Z_Construct_UClass_UAudioCapture_Statics; \
public: \
	DECLARE_CLASS(UAudioCapture, UAudioGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCapture)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCapture(UAudioCapture&&); \
	NO_API UAudioCapture(const UAudioCapture&); \
public:


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCapture(UAudioCapture&&); \
	NO_API UAudioCapture(const UAudioCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioCapture)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_48_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCapture>();

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAudioCapture);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAudioCapture);


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCaptureFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAudioCaptureFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureFunctionLibrary)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary&&); \
	NO_API UAudioCaptureFunctionLibrary(const UAudioCaptureFunctionLibrary&); \
public: \
	NO_API virtual ~UAudioCaptureFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCaptureFunctionLibrary(UAudioCaptureFunctionLibrary&&); \
	NO_API UAudioCaptureFunctionLibrary(const UAudioCaptureFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureFunctionLibrary) \
	NO_API virtual ~UAudioCaptureFunctionLibrary();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_80_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCaptureFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
