// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Quaternion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Quaternion_generated_h
#error "RigUnit_Quaternion.generated.h already included, missing '#pragma once' in RigUnit_Quaternion.h"
#endif
#define CONTROLRIG_RigUnit_Quaternion_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryQuaternionOp>();


#define FRigUnit_MultiplyQuaternion_Execute() \
	void FRigUnit_MultiplyQuaternion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Argument0 = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Argument1 = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryQuaternionOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiplyQuaternion>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_UnaryQuaternionOp>();


#define FRigUnit_InverseQuaterion_Execute() \
	void FRigUnit_InverseQuaterion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument, \
			Result \
		); \
	} \
	typedef FRigUnit_UnaryQuaternionOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_InverseQuaterion>();


#define FRigUnit_QuaternionToAxisAndAngle_Execute() \
	void FRigUnit_QuaternionToAxisAndAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument, \
			Axis, \
			Angle \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionToAxisAndAngle>();


#define FRigUnit_QuaternionFromAxisAndAngle_Execute() \
	void FRigUnit_QuaternionFromAxisAndAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
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
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Axis, \
			Angle, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionFromAxisAndAngle>();


#define FRigUnit_QuaternionToAngle_Execute() \
	void FRigUnit_QuaternionToAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Axis, \
			Argument, \
			Angle \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionToAngle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
