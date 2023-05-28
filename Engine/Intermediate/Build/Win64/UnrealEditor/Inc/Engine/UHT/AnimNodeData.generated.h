// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNodeData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeData_generated_h
#error "AnimNodeData.generated.h already included, missing '#pragma once' in AnimNodeData.h"
#endif
#define ENGINE_AnimNodeData_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeData>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNodeStructData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNodeStructData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNodeData_h


#define FOREACH_ENUM_EANIMNODEDATAFLAGS(op) \
	op(EAnimNodeDataFlags::None) \
	op(EAnimNodeDataFlags::HasInitialUpdateFunction) \
	op(EAnimNodeDataFlags::HasBecomeRelevantFunction) \
	op(EAnimNodeDataFlags::HasUpdateFunction) 

enum class EAnimNodeDataFlags : uint32;
template<> struct TIsUEnumClass<EAnimNodeDataFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimNodeDataFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
