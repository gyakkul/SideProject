// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_GetDeltaTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_GetDeltaTime_generated_h
#error "RigVMFunction_GetDeltaTime.generated.h already included, missing '#pragma once' in RigVMFunction_GetDeltaTime.h"
#endif
#define RIGVM_RigVMFunction_GetDeltaTime_generated_h


#define FRigVMFunction_GetDeltaTime_Execute() \
	void FRigVMFunction_GetDeltaTime::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_GetDeltaTime_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		float& Result = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Result \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_GetDeltaTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetDeltaTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
