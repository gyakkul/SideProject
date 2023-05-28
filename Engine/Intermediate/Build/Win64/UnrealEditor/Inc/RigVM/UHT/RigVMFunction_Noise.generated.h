// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_Noise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Noise_generated_h
#error "RigVMFunction_Noise.generated.h already included, missing '#pragma once' in RigVMFunction_Noise.h"
#endif
#define RIGVM_RigVMFunction_Noise_generated_h


#define FRigVMFunction_NoiseFloat_Execute() \
	void FRigVMFunction_NoiseFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Speed = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Frequency = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Time = *(float*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NoiseFloat>();


#define FRigVMFunction_NoiseDouble_Execute() \
	void FRigVMFunction_NoiseDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseDouble_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Speed, \
		const double Frequency, \
		const double Minimum, \
		const double Maximum, \
		double& Result, \
		double& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		const double Speed = *(double*)RigVMMemoryHandles[1].GetData(false); \
		const double Frequency = *(double*)RigVMMemoryHandles[2].GetData(false); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[5].GetData(false); \
		double& Time = *(double*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NoiseDouble>();


#define FRigVMFunction_NoiseVector_Execute() \
	void FRigVMFunction_NoiseVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Position, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NoiseVector>();


#define FRigVMFunction_NoiseVector2_Execute() \
	void FRigVMFunction_NoiseVector2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NoiseVector2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const double Minimum, \
		const double Maximum, \
		FVector& Result, \
		FVector& Time \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const double Minimum = *(double*)RigVMMemoryHandles[3].GetData(false); \
		const double Maximum = *(double*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NoiseVector2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_Noise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
