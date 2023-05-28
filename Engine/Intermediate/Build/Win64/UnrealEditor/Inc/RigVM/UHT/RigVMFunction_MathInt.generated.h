// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathInt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_MathInt_generated_h
#error "RigVMFunction_MathInt.generated.h already included, missing '#pragma once' in RigVMFunction_MathInt.h"
#endif
#define RIGVM_RigVMFunction_MathInt_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntBase>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntUnaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntBinaryOp>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntBinaryAggregateOp>();


#define FRigVMFunction_MathIntMake_Execute() \
	void FRigVMFunction_MathIntMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		int32& Value \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		int32& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntMake>();


#define FRigVMFunction_MathIntAdd_Execute() \
	void FRigVMFunction_MathIntAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntAdd>();


#define FRigVMFunction_MathIntSub_Execute() \
	void FRigVMFunction_MathIntSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntSub>();


#define FRigVMFunction_MathIntMul_Execute() \
	void FRigVMFunction_MathIntMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntMul>();


#define FRigVMFunction_MathIntDiv_Execute() \
	void FRigVMFunction_MathIntDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntDiv>();


#define FRigVMFunction_MathIntMod_Execute() \
	void FRigVMFunction_MathIntMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntMod>();


#define FRigVMFunction_MathIntMin_Execute() \
	void FRigVMFunction_MathIntMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntMin>();


#define FRigVMFunction_MathIntMax_Execute() \
	void FRigVMFunction_MathIntMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntMax>();


#define FRigVMFunction_MathIntPow_Execute() \
	void FRigVMFunction_MathIntPow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntPow>();


#define FRigVMFunction_MathIntNegate_Execute() \
	void FRigVMFunction_MathIntNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntNegate>();


#define FRigVMFunction_MathIntAbs_Execute() \
	void FRigVMFunction_MathIntAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntAbs>();


#define FRigVMFunction_MathIntToFloat_Execute() \
	void FRigVMFunction_MathIntToFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		float& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntToFloat>();


#define FRigVMFunction_MathIntToDouble_Execute() \
	void FRigVMFunction_MathIntToDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		double& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntToDouble>();


#define FRigVMFunction_MathIntSign_Execute() \
	void FRigVMFunction_MathIntSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntSign>();


#define FRigVMFunction_MathIntClamp_Execute() \
	void FRigVMFunction_MathIntClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Minimum = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 Maximum = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntClamp>();


#define FRigVMFunction_MathIntEquals_Execute() \
	void FRigVMFunction_MathIntEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_329_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntEquals>();


#define FRigVMFunction_MathIntNotEquals_Execute() \
	void FRigVMFunction_MathIntNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntNotEquals>();


#define FRigVMFunction_MathIntGreater_Execute() \
	void FRigVMFunction_MathIntGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntGreater>();


#define FRigVMFunction_MathIntLess_Execute() \
	void FRigVMFunction_MathIntLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_414_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntLess>();


#define FRigVMFunction_MathIntGreaterEqual_Execute() \
	void FRigVMFunction_MathIntGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_441_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntGreaterEqual>();


#define FRigVMFunction_MathIntLessEqual_Execute() \
	void FRigVMFunction_MathIntLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_468_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntLessEqual>();


#define FRigVMFunction_MathIntArraySum_Execute() \
	void FRigVMFunction_MathIntArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Sum \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_495_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<int32>& Array = *(TArray<int32>*)RigVMMemoryHandles[0].GetData(false); \
		int32& Sum = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntArraySum>();


#define FRigVMFunction_MathIntArrayAverage_Execute() \
	void FRigVMFunction_MathIntArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Average \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_520_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<int32>& Array = *(TArray<int32>*)RigVMMemoryHandles[0].GetData(false); \
		int32& Average = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_MathIntArrayAverage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
