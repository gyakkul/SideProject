// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Kalman.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Kalman_generated_h
#error "RigVMFunction_Kalman.generated.h already included, missing '#pragma once' in RigVMFunction_Kalman.h"
#endif
#define RIGVM_RigVMFunction_Kalman_generated_h


#define FRigVMFunction_KalmanFloat_Execute() \
	void FRigVMFunction_KalmanFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		TArray<float>& Buffer = *(TArray<float>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_KalmanFloat>();


#define FRigVMFunction_KalmanVector_Execute() \
	void FRigVMFunction_KalmanVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FVector>& Buffer = *(TArray<FVector>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_KalmanVector>();


#define FRigVMFunction_KalmanTransform_Execute() \
	void FRigVMFunction_KalmanTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_KalmanTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Buffer = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_KalmanTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Kalman_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
