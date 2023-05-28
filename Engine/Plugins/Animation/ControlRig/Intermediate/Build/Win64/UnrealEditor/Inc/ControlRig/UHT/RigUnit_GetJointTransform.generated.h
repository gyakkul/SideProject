// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_GetJointTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetJointTransform_generated_h
#error "RigUnit_GetJointTransform.generated.h already included, missing '#pragma once' in RigUnit_GetJointTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetJointTransform_generated_h


#define FRigUnit_GetJointTransform_Execute() \
	void FRigUnit_GetJointTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const ETransformGetterType Type, \
		const ETransformSpaceMode TransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint, \
		FTransform& Output \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const ETransformGetterType Type, \
		const ETransformSpaceMode TransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint, \
		FTransform& Output \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ETransformGetterType Type = *(ETransformGetterType*)RigVMMemoryHandles[1].GetData(false); \
		const ETransformSpaceMode TransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const FName& BaseJoint = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Joint, \
			Type, \
			TransformSpace, \
			BaseTransform, \
			BaseJoint, \
			Output \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetJointTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_GetJointTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
