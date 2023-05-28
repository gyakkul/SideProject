// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULensFile;
class ULensModel;
class USceneComponent;
enum class EDistortionSource : uint8;
enum class EFilmbackOverrideSource : uint8;
enum class EFIZEvaluationMode : uint8;
struct FCameraFilmbackSettings;
struct FLensDistortionState;
struct FLensFileEvaluationInputs;
struct FLensFilePicker;
#ifdef CAMERACALIBRATIONCORE_LensComponent_generated_h
#error "LensComponent.generated.h already included, missing '#pragma once' in LensComponent.h"
#endif
#define CAMERACALIBRATIONCORE_LensComponent_generated_h

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyNodalOffset); \
	DECLARE_FUNCTION(execWasDistortionEvaluated); \
	DECLARE_FUNCTION(execWasNodalOffsetAppliedThisTick); \
	DECLARE_FUNCTION(execGetLensFileEvaluationInputs); \
	DECLARE_FUNCTION(execGetOriginalFocalLength); \
	DECLARE_FUNCTION(execClearDistortionState); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execGetDistortionState); \
	DECLARE_FUNCTION(execSetLensModel); \
	DECLARE_FUNCTION(execGetLensModel); \
	DECLARE_FUNCTION(execSetApplyDistortion); \
	DECLARE_FUNCTION(execShouldApplyDistortion); \
	DECLARE_FUNCTION(execSetDistortionSource); \
	DECLARE_FUNCTION(execGetDistortionSource); \
	DECLARE_FUNCTION(execSetApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execShouldApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execSetCroppedFilmback); \
	DECLARE_FUNCTION(execGetCroppedFilmback); \
	DECLARE_FUNCTION(execSetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execGetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execSetOverscanMultiplier); \
	DECLARE_FUNCTION(execGetOverscanMultiplier); \
	DECLARE_FUNCTION(execSetFIZEvaluationMode); \
	DECLARE_FUNCTION(execGetFIZEvaluationMode); \
	DECLARE_FUNCTION(execSetLensFile); \
	DECLARE_FUNCTION(execSetLensFilePicker); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execGetLensFilePicker);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyNodalOffset); \
	DECLARE_FUNCTION(execWasDistortionEvaluated); \
	DECLARE_FUNCTION(execWasNodalOffsetAppliedThisTick); \
	DECLARE_FUNCTION(execGetLensFileEvaluationInputs); \
	DECLARE_FUNCTION(execGetOriginalFocalLength); \
	DECLARE_FUNCTION(execClearDistortionState); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execGetDistortionState); \
	DECLARE_FUNCTION(execSetLensModel); \
	DECLARE_FUNCTION(execGetLensModel); \
	DECLARE_FUNCTION(execSetApplyDistortion); \
	DECLARE_FUNCTION(execShouldApplyDistortion); \
	DECLARE_FUNCTION(execSetDistortionSource); \
	DECLARE_FUNCTION(execGetDistortionSource); \
	DECLARE_FUNCTION(execSetApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execShouldApplyNodalOffsetOnTick); \
	DECLARE_FUNCTION(execSetCroppedFilmback); \
	DECLARE_FUNCTION(execGetCroppedFilmback); \
	DECLARE_FUNCTION(execSetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execGetFilmbackOverrideSetting); \
	DECLARE_FUNCTION(execSetOverscanMultiplier); \
	DECLARE_FUNCTION(execGetOverscanMultiplier); \
	DECLARE_FUNCTION(execSetFIZEvaluationMode); \
	DECLARE_FUNCTION(execGetFIZEvaluationMode); \
	DECLARE_FUNCTION(execSetLensFile); \
	DECLARE_FUNCTION(execSetLensFilePicker); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execGetLensFilePicker);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_ACCESSORS \
static void GetbApplyDistortion_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyDistortion_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensComponent(); \
	friend struct Z_Construct_UClass_ULensComponent_Statics; \
public: \
	DECLARE_CLASS(ULensComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensComponent)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesULensComponent(); \
	friend struct Z_Construct_UClass_ULensComponent_Statics; \
public: \
	DECLARE_CLASS(ULensComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensComponent)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensComponent(ULensComponent&&); \
	NO_API ULensComponent(const ULensComponent&); \
public: \
	NO_API virtual ~ULensComponent();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensComponent(ULensComponent&&); \
	NO_API ULensComponent(const ULensComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULensComponent) \
	NO_API virtual ~ULensComponent();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_59_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_INCLASS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<class ULensComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensComponent_h


#define FOREACH_ENUM_EFIZEVALUATIONMODE(op) \
	op(EFIZEvaluationMode::UseLiveLink) \
	op(EFIZEvaluationMode::UseCameraSettings) \
	op(EFIZEvaluationMode::UseRecordedValues) \
	op(EFIZEvaluationMode::DoNotEvaluate) 

enum class EFIZEvaluationMode : uint8;
template<> struct TIsUEnumClass<EFIZEvaluationMode> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EFIZEvaluationMode>();

#define FOREACH_ENUM_EFILMBACKOVERRIDESOURCE(op) \
	op(EFilmbackOverrideSource::LensFile) \
	op(EFilmbackOverrideSource::CroppedFilmbackSetting) \
	op(EFilmbackOverrideSource::DoNotOverride) 

enum class EFilmbackOverrideSource : uint8;
template<> struct TIsUEnumClass<EFilmbackOverrideSource> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EFilmbackOverrideSource>();

#define FOREACH_ENUM_EDISTORTIONSOURCE(op) \
	op(EDistortionSource::LensFile) \
	op(EDistortionSource::LiveLinkLensSubject) \
	op(EDistortionSource::Manual) 

enum class EDistortionSource : uint8;
template<> struct TIsUEnumClass<EDistortionSource> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<EDistortionSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
