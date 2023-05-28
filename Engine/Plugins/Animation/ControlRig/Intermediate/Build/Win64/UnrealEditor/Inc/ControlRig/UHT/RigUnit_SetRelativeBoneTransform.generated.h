// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetRelativeBoneTransform_generated_h
#error "RigUnit_SetRelativeBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_SetRelativeBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetRelativeBoneTransform_generated_h


#define FRigUnit_SetRelativeBoneTransform_Execute() \
	void FRigUnit_SetRelativeBoneTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		const FTransform& Transform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bone, \
			Space, \
			Transform, \
			Weight, \
			bPropagateToChildren, \
			CachedBone, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRelativeBoneTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
