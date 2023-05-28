// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathTransform_generated_h
#error "RigVMFunction_MathTransform.generated.h already included, missing '#pragma once' in RigVMFunction_MathTransform.h"
#endif
#define RIGVM_RigVMFunction_MathTransform_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMutableBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathMutableBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMutableBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformBinaryAggregateOp>();


#define FRigVMFunction_MathTransformMake_Execute() \
	void FRigVMFunction_MathTransformMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Translation, \
		const FQuat& Rotation, \
		const FVector& Scale, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Translation, \
		const FQuat& Rotation, \
		const FVector& Scale, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Translation = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Translation, \
			Rotation, \
			Scale, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMake>();


#define FRigVMFunction_MathTransformFromEulerTransform_Execute() \
	void FRigVMFunction_MathTransformFromEulerTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			EulerTransform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformFromEulerTransform>();


#define FRigVMFunction_MathTransformFromEulerTransformV2_Execute() \
	void FRigVMFunction_MathTransformFromEulerTransformV2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& Value, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromEulerTransformV2_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FEulerTransform& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FEulerTransform& Value = *(FEulerTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformFromEulerTransformV2>();


#define FRigVMFunction_MathTransformToEulerTransform_Execute() \
	void FRigVMFunction_MathTransformToEulerTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformToEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FEulerTransform& Result = *(FEulerTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformToEulerTransform>();


#define FRigVMFunction_MathTransformMul_Execute() \
	void FRigVMFunction_MathTransformMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMul>();


#define FRigVMFunction_MathTransformMakeRelative_Execute() \
	void FRigVMFunction_MathTransformMakeRelative::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeRelative_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Global = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Local = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Global, \
			Parent, \
			Local \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMakeRelative>();


#define FRigVMFunction_MathTransformMakeAbsolute_Execute() \
	void FRigVMFunction_MathTransformMakeAbsolute::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
		FTransform& Global \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_227_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMakeAbsolute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
		FTransform& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Local = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Local, \
			Parent, \
			Global \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMakeAbsolute>();


#define FRigVMFunction_MathTransformAccumulateArray_Execute() \
	void FRigVMFunction_MathTransformAccumulateArray::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		TArray<FTransform>& Transforms, \
		const ERigVMTransformSpace TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformAccumulateArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		TArray<FTransform>& Transforms, \
		const ERigVMTransformSpace TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		const ERigVMTransformSpace TargetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& Root = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			TargetSpace, \
			Root, \
			ParentIndices \
		); \
	} \
	typedef FRigVMFunction_MathTransformMutableBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformAccumulateArray>();


#define FRigVMFunction_MathTransformInverse_Execute() \
	void FRigVMFunction_MathTransformInverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformInverse>();


#define FRigVMFunction_MathTransformLerp_Execute() \
	void FRigVMFunction_MathTransformLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformLerp>();


#define FRigVMFunction_MathTransformSelectBool_Execute() \
	void FRigVMFunction_MathTransformSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_338_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& IfTrue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& IfFalse = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformSelectBool>();


#define FRigVMFunction_MathTransformRotateVector_Execute() \
	void FRigVMFunction_MathTransformRotateVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Vector, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_371_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformRotateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Vector, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
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
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformRotateVector>();


#define FRigVMFunction_MathTransformTransformVector_Execute() \
	void FRigVMFunction_MathTransformTransformVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
		FVector& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_398_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformTransformVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Location, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformTransformVector>();


#define FRigVMFunction_MathTransformFromSRT_Execute() \
	void FRigVMFunction_MathTransformFromSRT::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformFromSRT_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Rotation = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Location, \
			Rotation, \
			RotationOrder, \
			Scale, \
			Transform, \
			EulerTransform \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformFromSRT>();


#define FRigVMFunction_MathTransformArrayToSRT_Execute() \
	void FRigVMFunction_MathTransformArrayToSRT::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		TArray<FVector>& Translations, \
		TArray<FQuat>& Rotations, \
		TArray<FVector>& Scales \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_466_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformArrayToSRT_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		TArray<FVector>& Translations, \
		TArray<FQuat>& Rotations, \
		TArray<FVector>& Scales \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FVector>& Translations = *(TArray<FVector>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FQuat>& Rotations = *(TArray<FQuat>*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FVector>& Scales = *(TArray<FVector>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			Translations, \
			Rotations, \
			Scales \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformArrayToSRT>();


#define FRigVMFunction_MathTransformClampSpatially_Execute() \
	void FRigVMFunction_MathTransformClampSpatially::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_494_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformClampSpatially_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& Axis, \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& Axis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		const TEnumAsByte<ERigVMClampSpatialMode::Type>& Type = *(TEnumAsByte<ERigVMClampSpatialMode::Type>*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& Space = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[7].GetData(false); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[8].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Axis, \
			Type, \
			Minimum, \
			Maximum, \
			Space, \
			bDrawDebug, \
			DebugColor, \
			DebugThickness, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformClampSpatially>();


#define FRigVMFunction_MathTransformMirrorTransform_Execute() \
	void FRigVMFunction_MathTransformMirrorTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FTransform& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h_551_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathTransformMirrorTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const TEnumAsByte<EAxis::Type>& MirrorAxis, \
		const TEnumAsByte<EAxis::Type>& AxisToFlip, \
		const FTransform& CentralTransform, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const TEnumAsByte<EAxis::Type>& MirrorAxis = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[1].GetData(false); \
		const TEnumAsByte<EAxis::Type>& AxisToFlip = *(TEnumAsByte<EAxis::Type>*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& CentralTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
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
	typedef FRigVMFunction_MathTransformBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathTransformMirrorTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
