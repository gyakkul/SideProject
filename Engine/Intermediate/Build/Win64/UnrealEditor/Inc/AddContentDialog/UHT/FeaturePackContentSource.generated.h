// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FeaturePackContentSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADDCONTENTDIALOG_FeaturePackContentSource_generated_h
#error "FeaturePackContentSource.generated.h already included, missing '#pragma once' in FeaturePackContentSource.h"
#endif
#define ADDCONTENTDIALOG_FeaturePackContentSource_generated_h

#define FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics; \
	ADDCONTENTDIALOG_API static class UScriptStruct* StaticStruct();


template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<struct FFeaturePackLevelSet>();

#define FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics; \
	ADDCONTENTDIALOG_API static class UScriptStruct* StaticStruct();


template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<struct FFeatureAdditionalFiles>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h


#define FOREACH_ENUM_EFEATUREPACKDETAILLEVEL(op) \
	op(EFeaturePackDetailLevel::Standard) \
	op(EFeaturePackDetailLevel::High) 

enum class EFeaturePackDetailLevel : uint8;
template<> struct TIsUEnumClass<EFeaturePackDetailLevel> { enum { Value = true }; };
template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EFeaturePackDetailLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
