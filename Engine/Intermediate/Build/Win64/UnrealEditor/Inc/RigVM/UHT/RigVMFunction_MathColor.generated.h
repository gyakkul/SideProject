// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathColor_generated_h
#error "RigVMFunction_MathColor.generated.h already included, missing '#pragma once' in RigVMFunction_MathColor.h"
#endif
#define RIGVM_RigVMFunction_MathColor_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorBinaryAggregateOp>();


#define FRigVMFunction_MathColorMake_Execute() \
	void FRigVMFunction_MathColorMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float R, \
		const float G, \
		const float B, \
		const float A, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float R, \
		const float G, \
		const float B, \
		const float A, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float R = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float G = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float B = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float A = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			R, \
			G, \
			B, \
			A, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorMake>();


#define FRigVMFunction_MathColorFromFloat_Execute() \
	void FRigVMFunction_MathColorFromFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorFromFloat>();


#define FRigVMFunction_MathColorFromDouble_Execute() \
	void FRigVMFunction_MathColorFromDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorFromDouble>();


#define FRigVMFunction_MathColorAdd_Execute() \
	void FRigVMFunction_MathColorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorAdd>();


#define FRigVMFunction_MathColorSub_Execute() \
	void FRigVMFunction_MathColorSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorSub>();


#define FRigVMFunction_MathColorMul_Execute() \
	void FRigVMFunction_MathColorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorMul>();


#define FRigVMFunction_MathColorLerp_Execute() \
	void FRigVMFunction_MathColorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathColorLerp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
