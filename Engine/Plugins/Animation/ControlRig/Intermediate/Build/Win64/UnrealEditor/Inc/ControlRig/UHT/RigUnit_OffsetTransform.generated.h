// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_OffsetTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_OffsetTransform_generated_h
#error "RigUnit_OffsetTransform.generated.h already included, missing '#pragma once' in RigUnit_OffsetTransform.h"
#endif
#define CONTROLRIG_RigUnit_OffsetTransform_generated_h


#define FRigUnit_OffsetTransformForItem_Execute() \
	void FRigUnit_OffsetTransformForItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FTransform& OffsetTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_OffsetTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_OffsetTransformForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FTransform& OffsetTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			OffsetTransform, \
			Weight, \
			bPropagateToChildren, \
			CachedIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_OffsetTransformForItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_OffsetTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
