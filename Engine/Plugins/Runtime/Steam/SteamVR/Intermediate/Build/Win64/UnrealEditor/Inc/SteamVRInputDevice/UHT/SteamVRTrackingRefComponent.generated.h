// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVRTrackingRefComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef STEAMVRINPUTDEVICE_SteamVRTrackingRefComponent_generated_h
#error "SteamVRTrackingRefComponent.generated.h already included, missing '#pragma once' in SteamVRTrackingRefComponent.h"
#endif
#define STEAMVRINPUTDEVICE_SteamVRTrackingRefComponent_generated_h

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_39_DELEGATE \
STEAMVRINPUTDEVICE_API void FComponentTrackingActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingActivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_40_DELEGATE \
STEAMVRINPUTDEVICE_API void FComponentTrackingDeactivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentTrackingDeactivatedSignature, int32 DeviceID, FName DeviceClass, const FString& DeviceModel);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideTrackingReferences); \
	DECLARE_FUNCTION(execShowTrackingReferences);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideTrackingReferences); \
	DECLARE_FUNCTION(execShowTrackingReferences);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ACCESSORS
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_USteamVRTrackingReferences(); \
	friend struct Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_USteamVRTrackingReferences, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_USteamVRTrackingReferences)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_USteamVRTrackingReferences(); \
	friend struct Z_Construct_UClass_UDEPRECATED_USteamVRTrackingReferences_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_USteamVRTrackingReferences, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_USteamVRTrackingReferences)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_USteamVRTrackingReferences(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_USteamVRTrackingReferences) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_USteamVRTrackingReferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_USteamVRTrackingReferences); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_USteamVRTrackingReferences(UDEPRECATED_USteamVRTrackingReferences&&); \
	NO_API UDEPRECATED_USteamVRTrackingReferences(const UDEPRECATED_USteamVRTrackingReferences&); \
public: \
	NO_API virtual ~UDEPRECATED_USteamVRTrackingReferences();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_USteamVRTrackingReferences(UDEPRECATED_USteamVRTrackingReferences&&); \
	NO_API UDEPRECATED_USteamVRTrackingReferences(const UDEPRECATED_USteamVRTrackingReferences&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_USteamVRTrackingReferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_USteamVRTrackingReferences); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_USteamVRTrackingReferences) \
	NO_API virtual ~UDEPRECATED_USteamVRTrackingReferences();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<class UDEPRECATED_USteamVRTrackingReferences>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRTrackingRefComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
