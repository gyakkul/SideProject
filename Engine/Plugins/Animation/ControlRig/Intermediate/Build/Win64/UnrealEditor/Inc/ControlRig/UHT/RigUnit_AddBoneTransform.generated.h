// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_AddBoneTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AddBoneTransform_generated_h
#error "RigUnit_AddBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_AddBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_AddBoneTransform_generated_h


#define FRigUnit_AddBoneTransform_Execute() \
	void FRigUnit_AddBoneTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPostMultiply, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPostMultiply, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bPostMultiply = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Transform, \
			Weight, \
			bPostMultiply, \
			bPropagateToChildren, \
			CachedBone \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AddBoneTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
