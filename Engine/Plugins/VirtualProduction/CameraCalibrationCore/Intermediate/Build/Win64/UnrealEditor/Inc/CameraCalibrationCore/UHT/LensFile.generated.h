// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULensDistortionModelHandlerBase;
enum class ELensDataCategory : uint8;
struct FDistortionInfo;
struct FDistortionPointInfo;
struct FFocalLengthInfo;
struct FFocalLengthPointInfo;
struct FImageCenterInfo;
struct FImageCenterPointInfo;
struct FNodalOffsetPointInfo;
struct FNodalPointOffset;
struct FSTMapInfo;
struct FSTMapPointInfo;
#ifdef CAMERACALIBRATIONCORE_LensFile_generated_h
#error "LensFile.generated.h already included, missing '#pragma once' in LensFile.h"
#endif
#define CAMERACALIBRATIONCORE_LensFile_generated_h

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTotalPointNum); \
	DECLARE_FUNCTION(execHasSamples); \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execRemoveZoomPoint); \
	DECLARE_FUNCTION(execRemoveFocusPoint); \
	DECLARE_FUNCTION(execAddSTMapPoint); \
	DECLARE_FUNCTION(execAddNodalOffsetPoint); \
	DECLARE_FUNCTION(execAddImageCenterPoint); \
	DECLARE_FUNCTION(execAddFocalLengthPoint); \
	DECLARE_FUNCTION(execAddDistortionPoint); \
	DECLARE_FUNCTION(execGetSTMapPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoint); \
	DECLARE_FUNCTION(execGetImageCenterPoint); \
	DECLARE_FUNCTION(execGetFocalLengthPoint); \
	DECLARE_FUNCTION(execGetDistortionPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoints); \
	DECLARE_FUNCTION(execGetImageCenterPoints); \
	DECLARE_FUNCTION(execGetSTMapPoints); \
	DECLARE_FUNCTION(execGetFocalLengthPoints); \
	DECLARE_FUNCTION(execGetDistortionPoints); \
	DECLARE_FUNCTION(execEvaluateNormalizedIris); \
	DECLARE_FUNCTION(execHasIrisEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNormalizedFocus); \
	DECLARE_FUNCTION(execHasFocusEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNodalPointOffset); \
	DECLARE_FUNCTION(execEvaluateDistortionData); \
	DECLARE_FUNCTION(execEvaluateImageCenterParameters); \
	DECLARE_FUNCTION(execEvaluateFocalLength); \
	DECLARE_FUNCTION(execEvaluateDistortionParameters);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTotalPointNum); \
	DECLARE_FUNCTION(execHasSamples); \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execRemoveZoomPoint); \
	DECLARE_FUNCTION(execRemoveFocusPoint); \
	DECLARE_FUNCTION(execAddSTMapPoint); \
	DECLARE_FUNCTION(execAddNodalOffsetPoint); \
	DECLARE_FUNCTION(execAddImageCenterPoint); \
	DECLARE_FUNCTION(execAddFocalLengthPoint); \
	DECLARE_FUNCTION(execAddDistortionPoint); \
	DECLARE_FUNCTION(execGetSTMapPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoint); \
	DECLARE_FUNCTION(execGetImageCenterPoint); \
	DECLARE_FUNCTION(execGetFocalLengthPoint); \
	DECLARE_FUNCTION(execGetDistortionPoint); \
	DECLARE_FUNCTION(execGetNodalOffsetPoints); \
	DECLARE_FUNCTION(execGetImageCenterPoints); \
	DECLARE_FUNCTION(execGetSTMapPoints); \
	DECLARE_FUNCTION(execGetFocalLengthPoints); \
	DECLARE_FUNCTION(execGetDistortionPoints); \
	DECLARE_FUNCTION(execEvaluateNormalizedIris); \
	DECLARE_FUNCTION(execHasIrisEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNormalizedFocus); \
	DECLARE_FUNCTION(execHasFocusEncoderMapping); \
	DECLARE_FUNCTION(execEvaluateNodalPointOffset); \
	DECLARE_FUNCTION(execEvaluateDistortionData); \
	DECLARE_FUNCTION(execEvaluateImageCenterParameters); \
	DECLARE_FUNCTION(execEvaluateFocalLength); \
	DECLARE_FUNCTION(execEvaluateDistortionParameters);


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensFile(); \
	friend struct Z_Construct_UClass_ULensFile_Statics; \
public: \
	DECLARE_CLASS(ULensFile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensFile)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_INCLASS \
private: \
	static void StaticRegisterNativesULensFile(); \
	friend struct Z_Construct_UClass_ULensFile_Statics; \
public: \
	DECLARE_CLASS(ULensFile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), NO_API) \
	DECLARE_SERIALIZER(ULensFile)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensFile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensFile(ULensFile&&); \
	NO_API ULensFile(const ULensFile&); \
public: \
	NO_API virtual ~ULensFile();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULensFile(ULensFile&&); \
	NO_API ULensFile(const ULensFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULensFile) \
	NO_API virtual ~ULensFile();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_60_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_INCLASS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<class ULensFile>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFilePicker_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<struct FLensFilePicker>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<struct FLensFileEvaluationInputs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h


#define FOREACH_ENUM_ELENSDATAMODE(op) \
	op(ELensDataMode::Parameters) \
	op(ELensDataMode::STMap) 

enum class ELensDataMode : uint8;
template<> struct TIsUEnumClass<ELensDataMode> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ELensDataMode>();

#define FOREACH_ENUM_ELENSDATACATEGORY(op) \
	op(ELensDataCategory::Focus) \
	op(ELensDataCategory::Iris) \
	op(ELensDataCategory::Zoom) \
	op(ELensDataCategory::Distortion) \
	op(ELensDataCategory::ImageCenter) \
	op(ELensDataCategory::STMap) \
	op(ELensDataCategory::NodalOffset) 

enum class ELensDataCategory : uint8;
template<> struct TIsUEnumClass<ELensDataCategory> { enum { Value = true }; };
template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ELensDataCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
