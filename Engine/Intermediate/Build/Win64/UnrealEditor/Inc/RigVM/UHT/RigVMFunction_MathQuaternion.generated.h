// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathQuaternion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathQuaternion_generated_h
#error "RigVMFunction_MathQuaternion.generated.h already included, missing '#pragma once' in RigVMFunction_MathQuaternion.h"
#endif
#define RIGVM_RigVMFunction_MathQuaternion_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionBinaryAggregateOp>();


#define FRigVMFunction_MathQuaternionMake_Execute() \
	void FRigVMFunction_MathQuaternionMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		const float W, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float X, \
		const float Y, \
		const float Z, \
		const float W, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float X = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Y = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Z = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float W = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			X, \
			Y, \
			Z, \
			W, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionMake>();


#define FRigVMFunction_MathQuaternionFromAxisAndAngle_Execute() \
	void FRigVMFunction_MathQuaternionFromAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Angle = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Axis, \
			Angle, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionFromAxisAndAngle>();


#define FRigVMFunction_MathQuaternionFromEuler_Execute() \
	void FRigVMFunction_MathQuaternionFromEuler::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Euler = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Euler, \
			RotationOrder, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionFromEuler>();


#define FRigVMFunction_MathQuaternionFromRotator_Execute() \
	void FRigVMFunction_MathQuaternionFromRotator::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Rotator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionFromRotator>();


#define FRigVMFunction_MathQuaternionFromRotatorV2_Execute() \
	void FRigVMFunction_MathQuaternionFromRotatorV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromRotatorV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionFromRotatorV2>();


#define FRigVMFunction_MathQuaternionFromTwoVectors_Execute() \
	void FRigVMFunction_MathQuaternionFromTwoVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionFromTwoVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionFromTwoVectors>();


#define FRigVMFunction_MathQuaternionToAxisAndAngle_Execute() \
	void FRigVMFunction_MathQuaternionToAxisAndAngle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Axis, \
			Angle \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionToAxisAndAngle>();


#define FRigVMFunction_MathQuaternionScale_Execute() \
	void FRigVMFunction_MathQuaternionScale::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const float Scale \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScale_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const float Scale \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Scale \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionScale>();


#define FRigVMFunction_MathQuaternionScaleV2_Execute() \
	void FRigVMFunction_MathQuaternionScaleV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionScaleV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const float Factor, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Factor = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Factor, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionScaleV2>();


#define FRigVMFunction_MathQuaternionToEuler_Execute() \
	void FRigVMFunction_MathQuaternionToEuler::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_326_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			RotationOrder, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionToEuler>();


#define FRigVMFunction_MathQuaternionToRotator_Execute() \
	void FRigVMFunction_MathQuaternionToRotator::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FRotator& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_354_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionToRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FRotator& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionToRotator>();


#define FRigVMFunction_MathQuaternionMul_Execute() \
	void FRigVMFunction_MathQuaternionMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_378_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionMul>();


#define FRigVMFunction_MathQuaternionInverse_Execute() \
	void FRigVMFunction_MathQuaternionInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_389_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionInverse>();


#define FRigVMFunction_MathQuaternionSlerp_Execute() \
	void FRigVMFunction_MathQuaternionSlerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSlerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionSlerp>();


#define FRigVMFunction_MathQuaternionEquals_Execute() \
	void FRigVMFunction_MathQuaternionEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionEquals>();


#define FRigVMFunction_MathQuaternionNotEquals_Execute() \
	void FRigVMFunction_MathQuaternionNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_460_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionNotEquals>();


#define FRigVMFunction_MathQuaternionSelectBool_Execute() \
	void FRigVMFunction_MathQuaternionSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& IfTrue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& IfFalse = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionSelectBool>();


#define FRigVMFunction_MathQuaternionDot_Execute() \
	void FRigVMFunction_MathQuaternionDot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_523_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionDot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionDot>();


#define FRigVMFunction_MathQuaternionUnit_Execute() \
	void FRigVMFunction_MathQuaternionUnit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_550_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionUnit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionUnit>();


#define FRigVMFunction_MathQuaternionRotateVector_Execute() \
	void FRigVMFunction_MathQuaternionRotateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_561_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Transform, \
		const FVector& Vector, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Transform = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Vector, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionRotateVector>();


#define FRigVMFunction_MathQuaternionGetAxis_Execute() \
	void FRigVMFunction_MathQuaternionGetAxis::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Quaternion, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_588_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionGetAxis_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Quaternion, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Quaternion = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Quaternion, \
			Axis, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionGetAxis>();


#define FRigVMFunction_MathQuaternionSwingTwist_Execute() \
	void FRigVMFunction_MathQuaternionSwingTwist::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_617_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionSwingTwist_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Swing = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Twist = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Input, \
			TwistAxis, \
			Swing, \
			Twist \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionSwingTwist>();


#define FRigVMFunction_MathQuaternionRotationOrder_Execute() \
	void FRigVMFunction_MathQuaternionRotationOrder::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		EEulerRotationOrder& RotationOrder \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_647_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionRotationOrder_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		EEulerRotationOrder& RotationOrder \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		EEulerRotationOrder& RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			RotationOrder \
		); \
	} \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionRotationOrder>();


#define FRigVMFunction_MathQuaternionMakeRelative_Execute() \
	void FRigVMFunction_MathQuaternionMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_668_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeRelative_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Global, \
		const FQuat& Parent, \
		FQuat& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Global = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Local = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionMakeRelative>();


#define FRigVMFunction_MathQuaternionMakeAbsolute_Execute() \
	void FRigVMFunction_MathQuaternionMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_694_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMakeAbsolute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Local, \
		const FQuat& Parent, \
		FQuat& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Local = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Parent = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionMakeAbsolute>();


#define FRigVMFunction_MathQuaternionMirrorTransform_Execute() \
	void FRigVMFunction_MathQuaternionMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h_720_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathQuaternionMirrorTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			MirrorAxis, \
			AxisToFlip, \
			CentralTransform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathQuaternionBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathQuaternionMirrorTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathQuaternion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
