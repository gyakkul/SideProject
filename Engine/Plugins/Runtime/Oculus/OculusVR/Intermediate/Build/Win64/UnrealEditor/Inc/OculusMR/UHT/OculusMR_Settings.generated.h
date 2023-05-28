// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusMR_Settings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusMR_CameraDeviceEnum : uint8;
enum class EOculusMR_CompositionMethod : uint8;
#ifdef OCULUSMR_OculusMR_Settings_generated_h
#error "OculusMR_Settings.generated.h already included, missing '#pragma once' in OculusMR_Settings.h"
#endif
#define OCULUSMR_OculusMR_Settings_generated_h

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveToIni); \
	DECLARE_FUNCTION(execLoadFromIni); \
	DECLARE_FUNCTION(execGetBindToTrackedCameraIndex); \
	DECLARE_FUNCTION(execBindToTrackedCameraIndexIfAvailable); \
	DECLARE_FUNCTION(execSetIsCasting); \
	DECLARE_FUNCTION(execGetIsCasting); \
	DECLARE_FUNCTION(execSetCapturingCamera); \
	DECLARE_FUNCTION(execGetCapturingCamera); \
	DECLARE_FUNCTION(execSetCompositionMethod); \
	DECLARE_FUNCTION(execGetCompositionMethod);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveToIni); \
	DECLARE_FUNCTION(execLoadFromIni); \
	DECLARE_FUNCTION(execGetBindToTrackedCameraIndex); \
	DECLARE_FUNCTION(execBindToTrackedCameraIndexIfAvailable); \
	DECLARE_FUNCTION(execSetIsCasting); \
	DECLARE_FUNCTION(execGetIsCasting); \
	DECLARE_FUNCTION(execSetCapturingCamera); \
	DECLARE_FUNCTION(execGetCapturingCamera); \
	DECLARE_FUNCTION(execSetCompositionMethod); \
	DECLARE_FUNCTION(execGetCompositionMethod);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_ACCESSORS
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UOculusMR_Settings(); \
	friend struct Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_UOculusMR_Settings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_UOculusMR_Settings)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UOculusMR_Settings(); \
	friend struct Z_Construct_UClass_UDEPRECATED_UOculusMR_Settings_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_UOculusMR_Settings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_UOculusMR_Settings)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_UOculusMR_Settings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UOculusMR_Settings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_UOculusMR_Settings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UOculusMR_Settings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_UOculusMR_Settings(UDEPRECATED_UOculusMR_Settings&&); \
	NO_API UDEPRECATED_UOculusMR_Settings(const UDEPRECATED_UOculusMR_Settings&); \
public: \
	NO_API virtual ~UDEPRECATED_UOculusMR_Settings();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_UOculusMR_Settings(UDEPRECATED_UOculusMR_Settings&&); \
	NO_API UDEPRECATED_UOculusMR_Settings(const UDEPRECATED_UOculusMR_Settings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_UOculusMR_Settings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UOculusMR_Settings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UOculusMR_Settings) \
	NO_API virtual ~UDEPRECATED_UOculusMR_Settings();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_INCLASS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UDEPRECATED_UOculusMR_Settings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h


#define FOREACH_ENUM_EOCULUSMR_CAMERADEVICEENUM(op) \
	op(EOculusMR_CameraDeviceEnum::CD_None) \
	op(EOculusMR_CameraDeviceEnum::CD_WebCamera0) \
	op(EOculusMR_CameraDeviceEnum::CD_WebCamera1) 

enum class EOculusMR_CameraDeviceEnum : uint8;
template<> struct TIsUEnumClass<EOculusMR_CameraDeviceEnum> { enum { Value = true }; };
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CameraDeviceEnum>();

#define FOREACH_ENUM_EOCULUSMR_CLIPPINGREFERENCE(op) \
	op(EOculusMR_ClippingReference::CR_TrackingReference) \
	op(EOculusMR_ClippingReference::CR_Head) 

enum class EOculusMR_ClippingReference : uint8;
template<> struct TIsUEnumClass<EOculusMR_ClippingReference> { enum { Value = true }; };
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_ClippingReference>();

#define FOREACH_ENUM_EOCULUSMR_POSTPROCESSEFFECTS(op) \
	op(EOculusMR_PostProcessEffects::PPE_Off) \
	op(EOculusMR_PostProcessEffects::PPE_On) 

enum class EOculusMR_PostProcessEffects : uint8;
template<> struct TIsUEnumClass<EOculusMR_PostProcessEffects> { enum { Value = true }; };
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_PostProcessEffects>();

#define FOREACH_ENUM_EOCULUSMR_COMPOSITIONMETHOD(op) \
	op(EOculusMR_CompositionMethod::ExternalComposition) \
	op(EOculusMR_CompositionMethod::DirectComposition) 

enum class EOculusMR_CompositionMethod : uint8;
template<> struct TIsUEnumClass<EOculusMR_CompositionMethod> { enum { Value = true }; };
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CompositionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
