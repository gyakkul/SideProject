// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
enum class EControllerHand : uint8;
#ifdef HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h
#error "MotionControllerComponent.generated.h already included, missing '#pragma once' in MotionControllerComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_MotionControllerComponent_generated_h

#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandJointPosition); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex); \
	DECLARE_FUNCTION(execSetTrackingMotionSource); \
	DECLARE_FUNCTION(execGetTrackingSource); \
	DECLARE_FUNCTION(execSetTrackingSource); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetShowDeviceModel);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandJointPosition); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execSetAssociatedPlayerIndex); \
	DECLARE_FUNCTION(execSetTrackingMotionSource); \
	DECLARE_FUNCTION(execGetTrackingSource); \
	DECLARE_FUNCTION(execSetTrackingSource); \
	DECLARE_FUNCTION(execIsTracked); \
	DECLARE_FUNCTION(execSetCustomDisplayMesh); \
	DECLARE_FUNCTION(execSetDisplayModelSource); \
	DECLARE_FUNCTION(execSetShowDeviceModel);


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent, NO_API)


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMotionControllerComponent(); \
	friend struct Z_Construct_UClass_UMotionControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UMotionControllerComponent) \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	NO_API virtual ~UMotionControllerComponent();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionControllerComponent(UMotionControllerComponent&&); \
	NO_API UMotionControllerComponent(const UMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionControllerComponent) \
	NO_API virtual ~UMotionControllerComponent();


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UMotionControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
