// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_TimeOffset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_TimeOffset_generated_h
#error "RigVMFunction_TimeOffset.generated.h already included, missing '#pragma once' in RigVMFunction_TimeOffset.h"
#endif
#define RIGVM_RigVMFunction_TimeOffset_generated_h


#define FRigVMFunction_TimeOffsetFloat_Execute() \
	void FRigVMFunction_TimeOffsetFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		float& Result, \
		TArray<float>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		float& Result, \
		TArray<float>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		TArray<float>& Buffer = *(TArray<float>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_TimeOffsetFloat>();


#define FRigVMFunction_TimeOffsetVector_Execute() \
	void FRigVMFunction_TimeOffsetVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FVector>& Buffer = *(TArray<FVector>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_TimeOffsetVector>();


#define FRigVMFunction_TimeOffsetTransform_Execute() \
	void FRigVMFunction_TimeOffsetTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_TimeOffsetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FTransform>& Buffer = *(TArray<FTransform>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_TimeOffsetTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_TimeOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
