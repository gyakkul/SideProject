// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Transform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Transform_generated_h
#error "RigUnit_Transform.generated.h already included, missing '#pragma once' in RigUnit_Transform.h"
#endif
#define CONTROLRIG_RigUnit_Transform_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryTransformOp>();


#define FRigUnit_MultiplyTransform_Execute() \
	void FRigUnit_MultiplyTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Argument0 = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Argument1 = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryTransformOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiplyTransform>();


#define FRigUnit_GetRelativeTransform_Execute() \
	void FRigUnit_GetRelativeTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Argument0 = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Argument1 = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryTransformOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetRelativeTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Transform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
