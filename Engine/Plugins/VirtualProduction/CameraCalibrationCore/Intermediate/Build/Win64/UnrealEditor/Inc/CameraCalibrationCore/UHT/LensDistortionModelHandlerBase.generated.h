// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensDistortionModelHandlerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULensModel;
class UTextureRenderTarget2D;
struct FLensDistortionState;
#ifdef CAMERACALIBRATIONCORE_LensDistortionModelHandlerBase_generated_h
#error "LensDistortionModelHandlerBase.generated.h already included, missing '#pragma once' in LensDistortionModelHandlerBase.h"
#endif
#define CAMERACALIBRATIONCORE_LensDistortionModelHandlerBase_generated_h

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensDistortionState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<struct FLensDistortionState>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDistortionDisplacementMap); \
	DECLARE_FUNCTION(execGetUndistortionDisplacementMap); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execIsModelSupported);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDistortionDisplacementMap); \
	DECLARE_FUNCTION(execGetUndistortionDisplacementMap); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execIsModelSupported);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionModelHandlerBase(); \
	friend struct Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionModelHandlerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensDistortionModelHandlerBase)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionModelHandlerBase(); \
	friend struct Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionModelHandlerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensDistortionModelHandlerBase)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensDistortionModelHandlerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionModelHandlerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensDistortionModelHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionModelHandlerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensDistortionModelHandlerBase(ULensDistortionModelHandlerBase&&); \
	NO_API ULensDistortionModelHandlerBase(const ULensDistortionModelHandlerBase&); \
public: \
	NO_API virtual ~ULensDistortionModelHandlerBase();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensDistortionModelHandlerBase(ULensDistortionModelHandlerBase&&); \
	NO_API ULensDistortionModelHandlerBase(const ULensDistortionModelHandlerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensDistortionModelHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionModelHandlerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULensDistortionModelHandlerBase) \
	NO_API virtual ~ULensDistortionModelHandlerBase();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_38_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_INCLASS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<class ULensDistortionModelHandlerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
