// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibrationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraCalibrationStep;
class UCameraImageCenterAlgo;
class UCameraNodalOffsetAlgo;
class UCineCameraComponent;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInterface;
struct FDistortionHandlerPicker;
struct FLensFilePicker;
#ifdef CAMERACALIBRATIONCORE_CameraCalibrationSubsystem_generated_h
#error "CameraCalibrationSubsystem.generated.h already included, missing '#pragma once' in CameraCalibrationSubsystem.h"
#endif
#define CAMERACALIBRATIONCORE_CameraCalibrationSubsystem_generated_h

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraCalibrationStep); \
	DECLARE_FUNCTION(execGetCameraCalibrationSteps); \
	DECLARE_FUNCTION(execGetOverlayMaterialNames); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgos); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgo); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgos); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgo); \
	DECLARE_FUNCTION(execGetRegisteredLensModel); \
	DECLARE_FUNCTION(execUnregisterDistortionModelHandler); \
	DECLARE_FUNCTION(execFindOrCreateDistortionModelHandler); \
	DECLARE_FUNCTION(execFindDistortionModelHandler); \
	DECLARE_FUNCTION(execGetDistortionModelHandlers); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execSetDefaultLensFile); \
	DECLARE_FUNCTION(execGetDefaultLensFile);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraCalibrationStep); \
	DECLARE_FUNCTION(execGetCameraCalibrationSteps); \
	DECLARE_FUNCTION(execGetOverlayMaterialNames); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgos); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgo); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgos); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgo); \
	DECLARE_FUNCTION(execGetRegisteredLensModel); \
	DECLARE_FUNCTION(execUnregisterDistortionModelHandler); \
	DECLARE_FUNCTION(execFindOrCreateDistortionModelHandler); \
	DECLARE_FUNCTION(execFindDistortionModelHandler); \
	DECLARE_FUNCTION(execGetDistortionModelHandlers); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execSetDefaultLensFile); \
	DECLARE_FUNCTION(execGetDefaultLensFile);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraCalibrationSubsystem(); \
	friend struct Z_Construct_UClass_UCameraCalibrationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCameraCalibrationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(UCameraCalibrationSubsystem)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUCameraCalibrationSubsystem(); \
	friend struct Z_Construct_UClass_UCameraCalibrationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCameraCalibrationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(UCameraCalibrationSubsystem)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraCalibrationSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraCalibrationSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraCalibrationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibrationSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraCalibrationSubsystem(UCameraCalibrationSubsystem&&); \
	NO_API UCameraCalibrationSubsystem(const UCameraCalibrationSubsystem&); \
public: \
	NO_API virtual ~UCameraCalibrationSubsystem();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraCalibrationSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraCalibrationSubsystem(UCameraCalibrationSubsystem&&); \
	NO_API UCameraCalibrationSubsystem(const UCameraCalibrationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraCalibrationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibrationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraCalibrationSubsystem) \
	NO_API virtual ~UCameraCalibrationSubsystem();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_32_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_INCLASS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<class UCameraCalibrationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
