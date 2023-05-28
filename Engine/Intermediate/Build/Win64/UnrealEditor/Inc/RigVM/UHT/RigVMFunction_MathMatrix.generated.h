// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathMatrix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathMatrix_generated_h
#error "RigVMFunction_MathMatrix.generated.h already included, missing '#pragma once' in RigVMFunction_MathMatrix.h"
#endif
#define RIGVM_RigVMFunction_MathMatrix_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixBinaryAggregateOp>();


#define FRigVMFunction_MathMatrixToTransform_Execute() \
	void FRigVMFunction_MathMatrixToTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixToTransform>();


#define FRigVMFunction_MathMatrixFromTransform_Execute() \
	void FRigVMFunction_MathMatrixFromTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixFromTransform>();


#define FRigVMFunction_MathMatrixFromTransformV2_Execute() \
	void FRigVMFunction_MathMatrixFromTransformV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FMatrix& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromTransformV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixFromTransformV2>();


#define FRigVMFunction_MathMatrixToVectors_Execute() \
	void FRigVMFunction_MathMatrixToVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixToVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Origin = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& X = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Y = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Z = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Origin, \
			X, \
			Y, \
			Z \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixToVectors>();


#define FRigVMFunction_MathMatrixFromVectors_Execute() \
	void FRigVMFunction_MathMatrixFromVectors::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixFromVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Origin = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& X = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Y = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Z = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Origin, \
			X, \
			Y, \
			Z, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixFromVectors>();


#define FRigVMFunction_MathMatrixMul_Execute() \
	void FRigVMFunction_MathMatrixMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FMatrix& A = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		const FMatrix& B = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixMul>();


#define FRigVMFunction_MathMatrixInverse_Execute() \
	void FRigVMFunction_MathMatrixInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathMatrixInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathMatrixUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathMatrixInverse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathMatrix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
