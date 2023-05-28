// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SetControlVisibility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlVisibility_generated_h
#error "RigUnit_SetControlVisibility.generated.h already included, missing '#pragma once' in RigUnit_SetControlVisibility.h"
#endif
#define CONTROLRIG_RigUnit_SetControlVisibility_generated_h


#define FRigUnit_GetControlVisibility_Execute() \
	void FRigUnit_GetControlVisibility::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bVisible, \
		FCachedRigElement& CachedControlIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlVisibility_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetControlVisibility_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bVisible, \
		FCachedRigElement& CachedControlIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		bool& bVisible = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bVisible, \
			CachedControlIndex \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetControlVisibility>();


#define FRigUnit_SetControlVisibility_Execute() \
	void FRigUnit_SetControlVisibility::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FString& Pattern, \
		const bool bVisible, \
		TArray<FCachedRigElement>& CachedControlIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlVisibility_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlVisibility_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FString& Pattern, \
		const bool bVisible, \
		TArray<FCachedRigElement>& CachedControlIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Pattern = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		const bool bVisible = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Pattern, \
			bVisible, \
			CachedControlIndices \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlVisibility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlVisibility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
