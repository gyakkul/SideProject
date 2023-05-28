// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_TwoBoneIKFK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TwoBoneIKFK_generated_h
#error "RigUnit_TwoBoneIKFK.generated.h already included, missing '#pragma once' in RigUnit_TwoBoneIKFK.h"
#endif
#define CONTROLRIG_RigUnit_TwoBoneIKFK_generated_h


#define FRigUnit_TwoBoneIKFK_Execute() \
	void FRigUnit_TwoBoneIKFK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartJoint, \
		const FName& EndJoint, \
		const FVector& PoleTarget, \
		const float Spin, \
		const FTransform& EndEffector, \
		const float IKBlend, \
		FTransform& StartJointFKTransform, \
		FTransform& MidJointFKTransform, \
		FTransform& EndJointFKTransform, \
		float& PreviousFKIKBlend, \
		FTransform& StartJointIKTransform, \
		FTransform& MidJointIKTransform, \
		FTransform& EndJointIKTransform, \
		int32& StartJointIndex, \
		int32& MidJointIndex, \
		int32& EndJointIndex, \
		float& UpperLimbLength, \
		float& LowerLimbLength, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKFK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartJoint, \
		const FName& EndJoint, \
		const FVector& PoleTarget, \
		const float Spin, \
		const FTransform& EndEffector, \
		const float IKBlend, \
		FTransform& StartJointFKTransform, \
		FTransform& MidJointFKTransform, \
		FTransform& EndJointFKTransform, \
		float& PreviousFKIKBlend, \
		FTransform& StartJointIKTransform, \
		FTransform& MidJointIKTransform, \
		FTransform& EndJointIKTransform, \
		int32& StartJointIndex, \
		int32& MidJointIndex, \
		int32& EndJointIndex, \
		float& UpperLimbLength, \
		float& LowerLimbLength, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& StartJoint = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndJoint = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& PoleTarget = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const float Spin = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FTransform& EndEffector = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const float IKBlend = *(float*)RigVMMemoryHandles[5].GetData(false); \
		FTransform& StartJointFKTransform = *(FTransform*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& MidJointFKTransform = *(FTransform*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& EndJointFKTransform = *(FTransform*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& PreviousFKIKBlend = *(float*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& StartJointIKTransform = *(FTransform*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& MidJointIKTransform = *(FTransform*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& EndJointIKTransform = *(FTransform*)RigVMMemoryHandles[12].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& StartJointIndex = *(int32*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& MidJointIndex = *(int32*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& EndJointIndex = *(int32*)RigVMMemoryHandles[15].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& UpperLimbLength = *(float*)RigVMMemoryHandles[16].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& LowerLimbLength = *(float*)RigVMMemoryHandles[17].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[18].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartJoint, \
			EndJoint, \
			PoleTarget, \
			Spin, \
			EndEffector, \
			IKBlend, \
			StartJointFKTransform, \
			MidJointFKTransform, \
			EndJointFKTransform, \
			PreviousFKIKBlend, \
			StartJointIKTransform, \
			MidJointIKTransform, \
			EndJointIKTransform, \
			StartJointIndex, \
			MidJointIndex, \
			EndJointIndex, \
			UpperLimbLength, \
			LowerLimbLength, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TwoBoneIKFK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_TwoBoneIKFK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
