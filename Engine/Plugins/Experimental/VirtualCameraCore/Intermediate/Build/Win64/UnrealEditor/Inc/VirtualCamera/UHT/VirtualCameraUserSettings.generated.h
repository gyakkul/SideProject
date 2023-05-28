// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualCameraUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
#ifdef VIRTUALCAMERA_VirtualCameraUserSettings_generated_h
#error "VirtualCameraUserSettings.generated.h already included, missing '#pragma once' in VirtualCameraUserSettings.h"
#endif
#define VIRTUALCAMERA_VirtualCameraUserSettings_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAxisMappingsByName); \
	DECLARE_FUNCTION(execGetActionMappingsByName); \
	DECLARE_FUNCTION(execInjectGamepadKeybinds); \
	DECLARE_FUNCTION(execSetTeleportOnStart); \
	DECLARE_FUNCTION(execGetTeleportOnStart); \
	DECLARE_FUNCTION(execSetShouldDisplayFilmLeader); \
	DECLARE_FUNCTION(execGetShouldDisplayFilmLeader); \
	DECLARE_FUNCTION(execSetSavedVirtualCameraFilmbackPresetName); \
	DECLARE_FUNCTION(execGetSavedVirtualCameraFilmbackPresetName); \
	DECLARE_FUNCTION(execSetShouldOverrideCameraSettingsOnTeleport); \
	DECLARE_FUNCTION(execGetShouldOverrideCameraSettingsOnTeleport); \
	DECLARE_FUNCTION(execSetIsMapGrayscle); \
	DECLARE_FUNCTION(execIsMapGrayscle); \
	DECLARE_FUNCTION(execSetMaxJoysticksSpeed); \
	DECLARE_FUNCTION(execGetMaxJoysticksSpeed); \
	DECLARE_FUNCTION(execSetJoysticksSpeed); \
	DECLARE_FUNCTION(execGetJoysticksSpeed); \
	DECLARE_FUNCTION(execSetFocusInterpSpeed); \
	DECLARE_FUNCTION(execGetFocusInterpSpeed);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAxisMappingsByName); \
	DECLARE_FUNCTION(execGetActionMappingsByName); \
	DECLARE_FUNCTION(execInjectGamepadKeybinds); \
	DECLARE_FUNCTION(execSetTeleportOnStart); \
	DECLARE_FUNCTION(execGetTeleportOnStart); \
	DECLARE_FUNCTION(execSetShouldDisplayFilmLeader); \
	DECLARE_FUNCTION(execGetShouldDisplayFilmLeader); \
	DECLARE_FUNCTION(execSetSavedVirtualCameraFilmbackPresetName); \
	DECLARE_FUNCTION(execGetSavedVirtualCameraFilmbackPresetName); \
	DECLARE_FUNCTION(execSetShouldOverrideCameraSettingsOnTeleport); \
	DECLARE_FUNCTION(execGetShouldOverrideCameraSettingsOnTeleport); \
	DECLARE_FUNCTION(execSetIsMapGrayscle); \
	DECLARE_FUNCTION(execIsMapGrayscle); \
	DECLARE_FUNCTION(execSetMaxJoysticksSpeed); \
	DECLARE_FUNCTION(execGetMaxJoysticksSpeed); \
	DECLARE_FUNCTION(execSetJoysticksSpeed); \
	DECLARE_FUNCTION(execGetJoysticksSpeed); \
	DECLARE_FUNCTION(execSetFocusInterpSpeed); \
	DECLARE_FUNCTION(execGetFocusInterpSpeed);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraUserSettings(); \
	friend struct Z_Construct_UClass_UVirtualCameraUserSettings_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("VirtualCamera");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCameraUserSettings(); \
	friend struct Z_Construct_UClass_UVirtualCameraUserSettings_Statics; \
public: \
	DECLARE_CLASS(UVirtualCameraUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCameraUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("VirtualCamera");} \



#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraUserSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraUserSettings(UVirtualCameraUserSettings&&); \
	NO_API UVirtualCameraUserSettings(const UVirtualCameraUserSettings&); \
public: \
	NO_API virtual ~UVirtualCameraUserSettings();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCameraUserSettings(UVirtualCameraUserSettings&&); \
	NO_API UVirtualCameraUserSettings(const UVirtualCameraUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualCameraUserSettings) \
	NO_API virtual ~UVirtualCameraUserSettings();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class UVirtualCameraUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
