// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISequencer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_ISequencer_generated_h
#error "ISequencer.generated.h already included, missing '#pragma once' in ISequencer.h"
#endif
#define SEQUENCER_ISequencer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h


#define FOREACH_ENUM_EAUTOCHANGEMODE(op) \
	op(EAutoChangeMode::AutoKey) \
	op(EAutoChangeMode::AutoTrack) \
	op(EAutoChangeMode::All) \
	op(EAutoChangeMode::None) 

enum class EAutoChangeMode : uint8;
template<> struct TIsUEnumClass<EAutoChangeMode> { enum { Value = true }; };
template<> SEQUENCER_API UEnum* StaticEnum<EAutoChangeMode>();

#define FOREACH_ENUM_EALLOWEDITSMODE(op) \
	op(EAllowEditsMode::AllEdits) \
	op(EAllowEditsMode::AllowSequencerEditsOnly) \
	op(EAllowEditsMode::AllowLevelEditsOnly) 

enum class EAllowEditsMode : uint8;
template<> struct TIsUEnumClass<EAllowEditsMode> { enum { Value = true }; };
template<> SEQUENCER_API UEnum* StaticEnum<EAllowEditsMode>();

#define FOREACH_ENUM_EKEYGROUPMODE(op) \
	op(EKeyGroupMode::KeyChanged) \
	op(EKeyGroupMode::KeyGroup) \
	op(EKeyGroupMode::KeyAll) 

enum class EKeyGroupMode : uint8;
template<> struct TIsUEnumClass<EKeyGroupMode> { enum { Value = true }; };
template<> SEQUENCER_API UEnum* StaticEnum<EKeyGroupMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
