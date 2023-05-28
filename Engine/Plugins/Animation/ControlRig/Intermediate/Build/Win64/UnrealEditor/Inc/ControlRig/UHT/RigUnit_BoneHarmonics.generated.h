// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_BoneHarmonics_generated_h
#error "RigUnit_BoneHarmonics.generated.h already included, missing '#pragma once' in RigUnit_BoneHarmonics.h"
#endif
#define CONTROLRIG_RigUnit_BoneHarmonics_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BoneHarmonics_BoneTarget>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Harmonics_TargetItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BoneHarmonics_WorkData>();


#define FRigUnit_BoneHarmonics_Execute() \
	void FRigUnit_BoneHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_BoneHarmonics_BoneTarget>& Bones, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		const bool bPropagateToChildren, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_BoneHarmonics_BoneTarget>& Bones, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		const bool bPropagateToChildren, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_BoneHarmonics_BoneTarget>& Bones = *(TArray<FRigUnit_BoneHarmonics_BoneTarget>*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& WaveSpeed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& WaveFrequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& WaveAmplitude = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& WaveOffset = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& WaveNoise = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const ERigVMAnimEasingType WaveEase = *(ERigVMAnimEasingType*)RigVMMemoryHandles[6].GetData(false); \
		const float WaveMinimum = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float WaveMaximum = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[9].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[10].GetData(false); \
		FRigUnit_BoneHarmonics_WorkData& WorkData = *(FRigUnit_BoneHarmonics_WorkData*)RigVMMemoryHandles[11].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bones, \
			WaveSpeed, \
			WaveFrequency, \
			WaveAmplitude, \
			WaveOffset, \
			WaveNoise, \
			WaveEase, \
			WaveMinimum, \
			WaveMaximum, \
			RotationOrder, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BoneHarmonics>();


#define FRigUnit_ItemHarmonics_Execute() \
	void FRigUnit_ItemHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_Harmonics_TargetItem>& Targets, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_Harmonics_TargetItem>& Targets, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_Harmonics_TargetItem>& Targets = *(TArray<FRigUnit_Harmonics_TargetItem>*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& WaveSpeed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& WaveFrequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& WaveAmplitude = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& WaveOffset = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		const FVector& WaveNoise = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		const ERigVMAnimEasingType WaveEase = *(ERigVMAnimEasingType*)RigVMMemoryHandles[6].GetData(false); \
		const float WaveMinimum = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float WaveMaximum = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[9].GetData(false); \
		FRigUnit_BoneHarmonics_WorkData& WorkData = *(FRigUnit_BoneHarmonics_WorkData*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Targets, \
			WaveSpeed, \
			WaveFrequency, \
			WaveAmplitude, \
			WaveOffset, \
			WaveNoise, \
			WaveEase, \
			WaveMinimum, \
			WaveMaximum, \
			RotationOrder, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ItemHarmonics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
