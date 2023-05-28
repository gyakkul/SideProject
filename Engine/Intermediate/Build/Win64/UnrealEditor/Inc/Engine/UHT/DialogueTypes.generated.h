// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/DialogueTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DialogueTypes_generated_h
#error "DialogueTypes.generated.h already included, missing '#pragma once' in DialogueTypes.h"
#endif
#define ENGINE_DialogueTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDialogueContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDialogueWaveParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h


#define FOREACH_ENUM_EGRAMMATICALGENDER(op) \
	op(EGrammaticalGender::Neuter) \
	op(EGrammaticalGender::Masculine) \
	op(EGrammaticalGender::Feminine) \
	op(EGrammaticalGender::Mixed) 

namespace EGrammaticalGender { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EGrammaticalGender::Type>();

#define FOREACH_ENUM_EGRAMMATICALNUMBER(op) \
	op(EGrammaticalNumber::Singular) \
	op(EGrammaticalNumber::Plural) 

namespace EGrammaticalNumber { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EGrammaticalNumber::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
