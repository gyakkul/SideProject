// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlDrivenList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlDrivenList_generated_h
#error "RigUnit_SetControlDrivenList.generated.h already included, missing '#pragma once' in RigUnit_SetControlDrivenList.h"
#endif
#define CONTROLRIG_RigUnit_SetControlDrivenList_generated_h


#define FRigUnit_GetControlDrivenList_Execute() \
	void FRigUnit_GetControlDrivenList::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		TArray<FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlDrivenList_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlDrivenList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		TArray<FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Driven = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Driven, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlDrivenList>();


#define FRigUnit_SetControlDrivenList_Execute() \
	void FRigUnit_SetControlDrivenList::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const TArrayView<const FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlDrivenList_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Control, \
		const TArrayView<const FRigElementKey>& Driven, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Driven = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Driven, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlDrivenList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlDrivenList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
