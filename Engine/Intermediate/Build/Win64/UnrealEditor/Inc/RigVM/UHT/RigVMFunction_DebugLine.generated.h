// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugLine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DebugLine_generated_h
#error "RigVMFunction_DebugLine.generated.h already included, missing '#pragma once' in RigVMFunction_DebugLine.h"
#endif
#define RIGVM_RigVMFunction_DebugLine_generated_h


#define FRigVMFunction_DebugLine_Execute() \
	void FRigVMFunction_DebugLine::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLine_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugLine>();


#define FRigVMFunction_DebugLineNoSpace_Execute() \
	void FRigVMFunction_DebugLineNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugLineNoSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
