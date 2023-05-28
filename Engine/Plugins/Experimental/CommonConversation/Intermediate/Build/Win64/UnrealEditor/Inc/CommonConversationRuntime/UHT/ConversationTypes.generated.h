// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONCONVERSATIONRUNTIME_ConversationTypes_generated_h
#error "ConversationTypes.generated.h already included, missing '#pragma once' in ConversationTypes.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationTypes_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationChoiceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationChoiceData>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationChoiceDataHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationChoiceDataHandle>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationParticipantEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationParticipantEntry>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationParticipants_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationParticipants>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationNodeParameterPair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationNodeParameterPair>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_226_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationChoiceReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationChoiceReference>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvanceConversationRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FAdvanceConversationRequest>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientConversationOptionEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FClientConversationOptionEntry>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_384_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationBranchPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationBranchPoint>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_421_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientConversationMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FClientConversationMessage>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h_448_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientConversationMessagePayload_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FClientConversationMessagePayload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTypes_h


#define FOREACH_ENUM_ECONVERSATIONCHOICETYPE(op) \
	op(EConversationChoiceType::ServerOnly) \
	op(EConversationChoiceType::UserChoiceAvailable) \
	op(EConversationChoiceType::UserChoiceUnavailable) 

enum class EConversationChoiceType : uint8;
template<> struct TIsUEnumClass<EConversationChoiceType> { enum { Value = true }; };
template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationChoiceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
