// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Execution/RigVMFunction_ForLoop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_ForLoop_generated_h
#error "RigVMFunction_ForLoop.generated.h already included, missing '#pragma once' in RigVMFunction_ForLoop.h"
#endif
#define RIGVM_RigVMFunction_ForLoop_generated_h


#define FRigVMFunction_ForLoopCount_Execute() \
	void FRigVMFunction_ForLoopCount::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const int32 Count, \
		int32& Index, \
		float& Ratio \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_ForLoopCount_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const int32 Count, \
		int32& Index, \
		float& Ratio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FName& BlockToRun = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			BlockToRun, \
			Count, \
			Index, \
			Ratio \
		); \
	} \
	typedef FRigVMStructMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_ForLoopCount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_ForLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
