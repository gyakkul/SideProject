// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MLDeformerEditorModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLDEFORMERFRAMEWORKEDITOR_MLDeformerEditorModel_generated_h
#error "MLDeformerEditorModel.generated.h already included, missing '#pragma once' in MLDeformerEditorModel.h"
#endif
#define MLDEFORMERFRAMEWORKEDITOR_MLDeformerEditorModel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h


#define FOREACH_ENUM_ETRAININGRESULT(op) \
	op(ETrainingResult::Success) \
	op(ETrainingResult::Aborted) \
	op(ETrainingResult::AbortedCantUse) \
	op(ETrainingResult::FailOnData) \
	op(ETrainingResult::FailPythonError) 

enum class ETrainingResult : uint8;
template<> struct TIsUEnumClass<ETrainingResult> { enum { Value = true }; };
template<> MLDEFORMERFRAMEWORKEDITOR_API UEnum* StaticEnum<ETrainingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
