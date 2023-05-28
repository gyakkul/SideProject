// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensFileExchangeFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMERACALIBRATIONEDITOR_LensFileExchangeFormat_generated_h
#error "LensFileExchangeFormat.generated.h already included, missing '#pragma once' in LensFileExchangeFormat.h"
#endif
#define CAMERACALIBRATIONEDITOR_LensFileExchangeFormat_generated_h

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensInfoExchange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensInfoExchange>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileUserMetadataEntry>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileMetadata>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileSensorDimensions>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileImageDimensions>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileParameterTableRow>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileParameterTable_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileParameterTable>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileParameterTableImporter>();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensFileExchange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<struct FLensFileExchange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h


#define FOREACH_ENUM_ELENSFILEUNIT(op) \
	op(ELensFileUnit::Millimeters) \
	op(ELensFileUnit::Normalized) 

enum class ELensFileUnit;
template<> struct TIsUEnumClass<ELensFileUnit> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_API UEnum* StaticEnum<ELensFileUnit>();

#define FOREACH_ENUM_ENODALOFFSETCOORDINATESYSTEM(op) \
	op(ENodalOffsetCoordinateSystem::OpenCV) 

enum class ENodalOffsetCoordinateSystem;
template<> struct TIsUEnumClass<ENodalOffsetCoordinateSystem> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_API UEnum* StaticEnum<ENodalOffsetCoordinateSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
