// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_GetWorldTime_generated_h
#error "RigVMFunction_GetWorldTime.generated.h already included, missing '#pragma once' in RigVMFunction_GetWorldTime.h"
#endif
#define RIGVM_RigVMFunction_GetWorldTime_generated_h


#define FRigVMFunction_GetWorldTime_Execute() \
	void FRigVMFunction_GetWorldTime::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Year = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Month = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Day = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& WeekDay = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Hours = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Minutes = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Seconds = *(float*)RigVMMemoryHandles[6].GetData(false); \
		float& OverallSeconds = *(float*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Year, \
			Month, \
			Day, \
			WeekDay, \
			Hours, \
			Minutes, \
			Seconds, \
			OverallSeconds \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_GetWorldTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
