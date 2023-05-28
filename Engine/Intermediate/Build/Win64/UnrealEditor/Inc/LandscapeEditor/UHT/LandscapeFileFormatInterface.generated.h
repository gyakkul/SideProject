// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeFileFormatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_LandscapeFileFormatInterface_generated_h
#error "LandscapeFileFormatInterface.generated.h already included, missing '#pragma once' in LandscapeFileFormatInterface.h"
#endif
#define LANDSCAPEEDITOR_LandscapeFileFormatInterface_generated_h

#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeFileResolution_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<struct FLandscapeFileResolution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTRESULT(op) \
	op(ELandscapeImportResult::Success) \
	op(ELandscapeImportResult::Warning) \
	op(ELandscapeImportResult::Error) 

enum class ELandscapeImportResult : uint8;
template<> struct TIsUEnumClass<ELandscapeImportResult> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
