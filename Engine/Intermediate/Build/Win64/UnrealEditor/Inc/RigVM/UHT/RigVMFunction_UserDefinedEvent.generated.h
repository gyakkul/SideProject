// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Execution/RigVMFunction_UserDefinedEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_UserDefinedEvent_generated_h
#error "RigVMFunction_UserDefinedEvent.generated.h already included, missing '#pragma once' in RigVMFunction_UserDefinedEvent.h"
#endif
#define RIGVM_RigVMFunction_UserDefinedEvent_generated_h


#define FRigVMFunction_UserDefinedEvent_Execute() \
	void FRigVMFunction_UserDefinedEvent::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FName& EventName \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_UserDefinedEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FName& EventName \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& EventName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			EventName \
		); \
	} \
	typedef FRigVMStruct Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_UserDefinedEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Execution_RigVMFunction_UserDefinedEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
