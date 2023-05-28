// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Float.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Float_generated_h
#error "RigUnit_Float.generated.h already included, missing '#pragma once' in RigUnit_Float.h"
#endif
#define CONTROLRIG_RigUnit_Float_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryFloatOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryFloatOp>();


#define FRigUnit_Multiply_FloatFloat_Execute() \
	void FRigUnit_Multiply_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Multiply_FloatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Multiply_FloatFloat>();


#define FRigUnit_Add_FloatFloat_Execute() \
	void FRigUnit_Add_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Add_FloatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Add_FloatFloat>();


#define FRigUnit_Subtract_FloatFloat_Execute() \
	void FRigUnit_Subtract_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Subtract_FloatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Subtract_FloatFloat>();


#define FRigUnit_Divide_FloatFloat_Execute() \
	void FRigUnit_Divide_FloatFloat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Divide_FloatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Argument0, \
		const float Argument1, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Argument0 = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Argument1 = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryFloatOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Divide_FloatFloat>();


#define FRigUnit_Clamp_Float_Execute() \
	void FRigUnit_Clamp_Float::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float Min, \
		const float Max, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Clamp_Float_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float Min, \
		const float Max, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float Min = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Max = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Min, \
			Max, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Clamp_Float>();


#define FRigUnit_MapRange_Float_Execute() \
	void FRigUnit_MapRange_Float::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float MinIn, \
		const float MaxIn, \
		const float MinOut, \
		const float MaxOut, \
		float& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const float MinIn, \
		const float MaxIn, \
		const float MinOut, \
		const float MaxOut, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float MinIn = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaxIn = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float MinOut = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float MaxOut = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			MinIn, \
			MaxIn, \
			MinOut, \
			MaxOut, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MapRange_Float>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Float_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
