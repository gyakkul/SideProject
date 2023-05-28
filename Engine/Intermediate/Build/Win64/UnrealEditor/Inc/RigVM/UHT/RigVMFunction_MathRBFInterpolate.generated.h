// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathRBFInterpolate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathRBFInterpolate_generated_h
#error "RigVMFunction_MathRBFInterpolate.generated.h already included, missing '#pragma once' in RigVMFunction_MathRBFInterpolate.h"
#endif
#define RIGVM_RigVMFunction_MathRBFInterpolate_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatWorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatWorkData>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorWorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorWorkData>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathRBFInterpolateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathRBFInterpolateBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatFloat_Target>();


#define FRigVMFunction_MathRBFInterpolateQuatFloat_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatFloat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatFloat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatFloat>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatVector_Target>();


#define FRigVMFunction_MathRBFInterpolateQuatVector_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatVector_Target>& Targets = *(TArray<FMathRBFInterpolateQuatVector_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatVector>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatColor_Target>();


#define FRigVMFunction_MathRBFInterpolateQuatColor_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatColor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatColor_Target>& Targets = *(TArray<FMathRBFInterpolateQuatColor_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatColor>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatQuat_Target>();


#define FRigVMFunction_MathRBFInterpolateQuatQuat_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatQuat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatQuat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatQuat>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatXform_Target>();


#define FRigVMFunction_MathRBFInterpolateQuatXform_Execute() \
	void FRigVMFunction_MathRBFInterpolateQuatXform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatXform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateQuatXform_Target>& Targets = *(TArray<FMathRBFInterpolateQuatXform_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_MathRBFInterpolateQuatWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateQuatBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateQuatXform>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorFloat_Target>();


#define FRigVMFunction_MathRBFInterpolateVectorFloat_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_333_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorFloat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorFloat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorFloat>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_349_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorVector_Target>();


#define FRigVMFunction_MathRBFInterpolateVectorVector_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorVector_Target>& Targets = *(TArray<FMathRBFInterpolateVectorVector_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorVector>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_378_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorColor_Target>();


#define FRigVMFunction_MathRBFInterpolateVectorColor_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorColor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_391_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorColor_Target>& Targets = *(TArray<FMathRBFInterpolateVectorColor_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorColor>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorQuat_Target>();


#define FRigVMFunction_MathRBFInterpolateVectorQuat_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_421_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorQuat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorQuat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorQuat>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_436_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorXform_Target>();


#define FRigVMFunction_MathRBFInterpolateVectorXform_Execute() \
	void FRigVMFunction_MathRBFInterpolateVectorXform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h_449_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorXform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FMathRBFInterpolateVectorXform_Target>& Targets = *(TArray<FMathRBFInterpolateVectorXform_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigVMFunction_MathRBFInterpolateVectorWorkData& WorkData = *(FRigVMFunction_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_MathRBFInterpolateVectorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathRBFInterpolateVectorXform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRBFInterpolate_h


#define FOREACH_ENUM_ERBFKERNELTYPE(op) \
	op(ERBFKernelType::Gaussian) \
	op(ERBFKernelType::Exponential) \
	op(ERBFKernelType::Linear) \
	op(ERBFKernelType::Cubic) \
	op(ERBFKernelType::Quintic) 

enum class ERBFKernelType : uint8;
template<> struct TIsUEnumClass<ERBFKernelType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERBFKernelType>();

#define FOREACH_ENUM_ERBFQUATDISTANCETYPE(op) \
	op(ERBFQuatDistanceType::Euclidean) \
	op(ERBFQuatDistanceType::ArcLength) \
	op(ERBFQuatDistanceType::SwingAngle) \
	op(ERBFQuatDistanceType::TwistAngle) 

enum class ERBFQuatDistanceType : uint8;
template<> struct TIsUEnumClass<ERBFQuatDistanceType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERBFQuatDistanceType>();

#define FOREACH_ENUM_ERBFVECTORDISTANCETYPE(op) \
	op(ERBFVectorDistanceType::Euclidean) \
	op(ERBFVectorDistanceType::Manhattan) \
	op(ERBFVectorDistanceType::ArcLength) 

enum class ERBFVectorDistanceType : uint8;
template<> struct TIsUEnumClass<ERBFVectorDistanceType> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERBFVectorDistanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
