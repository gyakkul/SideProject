// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetSpaceTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetSpaceTransform_generated_h
#error "RigUnit_SetSpaceTransform.generated.h already included, missing '#pragma once' in RigUnit_SetSpaceTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetSpaceTransform_generated_h


#define FRigUnit_SetSpaceTransform_Execute() \
	void FRigUnit_SetSpaceTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const float Weight, \
		FTransform& Transform, \
		const ERigVMTransformSpace SpaceType, \
		FCachedRigElement& CachedSpaceIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Space, \
		const float Weight, \
		FTransform& Transform, \
		const ERigVMTransformSpace SpaceType, \
		FCachedRigElement& CachedSpaceIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Space = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const ERigVMTransformSpace SpaceType = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Space, \
			Weight, \
			Transform, \
			SpaceType, \
			CachedSpaceIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetSpaceTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
