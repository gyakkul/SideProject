// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_TimeConversion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_TimeConversion_generated_h
#error "RigVMFunction_TimeConversion.generated.h already included, missing '#pragma once' in RigVMFunction_TimeConversion.h"
#endif
#define RIGVM_RigVMFunction_TimeConversion_generated_h


#define FRigVMFunction_FramesToSeconds_Execute() \
	void FRigVMFunction_FramesToSeconds::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Frames, \
		float& Seconds \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Frames, \
		float& Seconds \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Frames = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Seconds = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Frames, \
			Seconds \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_FramesToSeconds>();


#define FRigVMFunction_SecondsToFrames_Execute() \
	void FRigVMFunction_SecondsToFrames::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Seconds, \
		float& Frames \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Seconds, \
		float& Frames \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Seconds = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Frames = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seconds, \
			Frames \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_SecondsToFrames>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
