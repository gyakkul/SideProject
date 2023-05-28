// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_SpringIK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SpringIK_generated_h
#error "RigUnit_SpringIK.generated.h already included, missing '#pragma once' in RigUnit_SpringIK.h"
#endif
#define CONTROLRIG_RigUnit_SpringIK_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringIK_DebugSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringIK_WorkData>();


#define FRigUnit_SpringIK_Execute() \
	void FRigUnit_SpringIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float HierarchyStrength, \
		const float EffectorStrength, \
		const float EffectorRatio, \
		const float RootStrength, \
		const float RootRatio, \
		const float Damping, \
		const FVector& PoleVector, \
		const bool bFlipPolePlane, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bLiveSimulation, \
		const int32 Iterations, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings, \
		FRigUnit_SpringIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float HierarchyStrength, \
		const float EffectorStrength, \
		const float EffectorRatio, \
		const float RootStrength, \
		const float RootRatio, \
		const float Damping, \
		const FVector& PoleVector, \
		const bool bFlipPolePlane, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bLiveSimulation, \
		const int32 Iterations, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings, \
		FRigUnit_SpringIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const float HierarchyStrength = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float EffectorStrength = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float EffectorRatio = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float RootStrength = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const float RootRatio = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const float Damping = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		const bool bFlipPolePlane = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[10].GetData(false); \
		const FName& PoleVectorSpace = *(FName*)RigVMMemoryHandles[11].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[12].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[13].GetData(false); \
		const bool bLiveSimulation = *(bool*)RigVMMemoryHandles[14].GetData(false); \
		const int32 Iterations = *(int32*)RigVMMemoryHandles[15].GetData(false); \
		const bool bLimitLocalPosition = *(bool*)RigVMMemoryHandles[16].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[17].GetData(false); \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings = *(FRigUnit_SpringIK_DebugSettings*)RigVMMemoryHandles[18].GetData(false); \
		FRigUnit_SpringIK_WorkData& WorkData = *(FRigUnit_SpringIK_WorkData*)RigVMMemoryHandles[19].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			HierarchyStrength, \
			EffectorStrength, \
			EffectorRatio, \
			RootStrength, \
			RootRatio, \
			Damping, \
			PoleVector, \
			bFlipPolePlane, \
			PoleVectorKind, \
			PoleVectorSpace, \
			PrimaryAxis, \
			SecondaryAxis, \
			bLiveSimulation, \
			Iterations, \
			bLimitLocalPosition, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SpringIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
