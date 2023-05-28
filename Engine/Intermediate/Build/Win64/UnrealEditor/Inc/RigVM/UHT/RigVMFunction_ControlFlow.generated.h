// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_ControlFlow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_ControlFlow_generated_h
#error "RigVMFunction_ControlFlow.generated.h already included, missing '#pragma once' in RigVMFunction_ControlFlow.h"
#endif
#define RIGVM_RigVMFunction_ControlFlow_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_ControlFlowBase>();


#define FRigVMFunction_ControlFlowBranch_Execute() \
	void FRigVMFunction_ControlFlowBranch::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		FName& BlockToRun \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_ControlFlowBranch_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		FName& BlockToRun \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		FName& BlockToRun = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			BlockToRun \
		); \
	} \
	typedef FRigVMFunction_ControlFlowBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_ControlFlowBranch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_ControlFlow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
