// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SendEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SendEvent_generated_h
#error "RigUnit_SendEvent.generated.h already included, missing '#pragma once' in RigUnit_SendEvent.h"
#endif
#define CONTROLRIG_RigUnit_SendEvent_generated_h


#define FRigUnit_SendEvent_Execute() \
	void FRigUnit_SendEvent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const ERigEvent Event = *(ERigEvent*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const float OffsetInSeconds = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bEnable = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bOnlyDuringInteraction = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Event, \
			Item, \
			OffsetInSeconds, \
			bEnable, \
			bOnlyDuringInteraction \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SendEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
