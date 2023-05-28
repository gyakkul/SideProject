// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeImportHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_LandscapeImportHelper_generated_h
#error "LandscapeImportHelper.generated.h already included, missing '#pragma once' in LandscapeImportHelper.h"
#endif
#define LANDSCAPEEDITOR_LandscapeImportHelper_generated_h

#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapeImportFileDescriptor>();

#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapeImportResolution>();

#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapeImportDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTTRANSFORMTYPE(op) \
	op(ELandscapeImportTransformType::None) \
	op(ELandscapeImportTransformType::ExpandOffset) \
	op(ELandscapeImportTransformType::ExpandCentered) \
	op(ELandscapeImportTransformType::Resample) 

enum class ELandscapeImportTransformType : int8;
template<> struct TIsUEnumClass<ELandscapeImportTransformType> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportTransformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
