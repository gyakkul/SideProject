// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_AlphaInterp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_AlphaInterp_generated_h
#error "RigVMFunction_AlphaInterp.generated.h already included, missing '#pragma once' in RigVMFunction_AlphaInterp.h"
#endif
#define RIGVM_RigVMFunction_AlphaInterp_generated_h


#define FRigVMFunction_AlphaInterp_Execute() \
	void FRigVMFunction_AlphaInterp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetData(false); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetData(false); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetData(false); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[12].GetData(false); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AlphaInterp>();


#define FRigVMFunction_AlphaInterpVector_Execute() \
	void FRigVMFunction_AlphaInterpVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetData(false); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetData(false); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetData(false); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[12].GetData(false); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AlphaInterpVector>();


#define FRigVMFunction_AlphaInterpQuat_Execute() \
	void FRigVMFunction_AlphaInterpQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FQuat& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_AlphaInterpQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FQuat& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetData(false); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetData(false); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetData(false); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[12].GetData(false); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_AlphaInterpQuat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_AlphaInterp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
