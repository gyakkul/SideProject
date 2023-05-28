// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionTypes_generated_h
#error "AIPerceptionTypes.generated.h already included, missing '#pragma once' in AIPerceptionTypes.h"
#endif
#define AIMODULE_AIPerceptionTypes_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIStimulus_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIStimulus>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAISenseAffiliationFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h


#define FOREACH_ENUM_EAISENSENOTIFYTYPE(op) \
	op(EAISenseNotifyType::OnEveryPerception) \
	op(EAISenseNotifyType::OnPerceptionChange) 

enum class EAISenseNotifyType : uint8;
template<> struct TIsUEnumClass<EAISenseNotifyType> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EAISenseNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
