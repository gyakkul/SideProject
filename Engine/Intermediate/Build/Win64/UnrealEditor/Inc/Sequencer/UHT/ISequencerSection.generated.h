// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISequencerSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_ISequencerSection_generated_h
#error "ISequencerSection.generated.h already included, missing '#pragma once' in ISequencerSection.h"
#endif
#define SEQUENCER_ISequencerSection_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h


#define FOREACH_ENUM_ESEQUENCERSECTIONRESIZEMODE(op) \
	op(SSRM_LeadingEdge) \
	op(SSRM_TrailingEdge) 

enum ESequencerSectionResizeMode : int;
template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSectionResizeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
