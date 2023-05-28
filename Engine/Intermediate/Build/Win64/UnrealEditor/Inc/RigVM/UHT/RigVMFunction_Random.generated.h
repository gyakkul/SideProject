// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_Random.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Random_generated_h
#error "RigVMFunction_Random.generated.h already included, missing '#pragma once' in RigVMFunction_Random.h"
#endif
#define RIGVM_RigVMFunction_Random_generated_h


#define FRigVMFunction_RandomFloat_Execute() \
	void FRigVMFunction_RandomFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_RandomFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& LastResult = *(float*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_RandomFloat>();


#define FRigVMFunction_RandomVector_Execute() \
	void FRigVMFunction_RandomVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_RandomVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& LastResult = *(FVector*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_RandomVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Random_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
