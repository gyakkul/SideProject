// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ChainHarmonics_generated_h
#error "RigUnit_ChainHarmonics.generated.h already included, missing '#pragma once' in RigUnit_ChainHarmonics.h"
#endif
#define CONTROLRIG_RigUnit_ChainHarmonics_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonics_Reach>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonics_Wave>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonics_Pendulum>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonics_WorkData>();


#define FRigUnit_ChainHarmonics_Execute() \
	void FRigUnit_ChainHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& ChainRoot = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_ChainHarmonics_Reach& Reach = *(FRigUnit_ChainHarmonics_Reach*)RigVMMemoryHandles[2].GetData(false); \
		const FRigUnit_ChainHarmonics_Wave& Wave = *(FRigUnit_ChainHarmonics_Wave*)RigVMMemoryHandles[3].GetData(false); \
		const FRuntimeFloatCurve& WaveCurve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum = *(FRigUnit_ChainHarmonics_Pendulum*)RigVMMemoryHandles[5].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& DrawWorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_ChainHarmonics_WorkData& WorkData = *(FRigUnit_ChainHarmonics_WorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ChainRoot, \
			Speed, \
			Reach, \
			Wave, \
			WaveCurve, \
			Pendulum, \
			bDrawDebug, \
			DrawWorldOffset, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonics>();


#define FRigUnit_ChainHarmonicsPerItem_Execute() \
	void FRigUnit_ChainHarmonicsPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigElementKey& ChainRoot = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_ChainHarmonics_Reach& Reach = *(FRigUnit_ChainHarmonics_Reach*)RigVMMemoryHandles[2].GetData(false); \
		const FRigUnit_ChainHarmonics_Wave& Wave = *(FRigUnit_ChainHarmonics_Wave*)RigVMMemoryHandles[3].GetData(false); \
		const FRuntimeFloatCurve& WaveCurve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum = *(FRigUnit_ChainHarmonics_Pendulum*)RigVMMemoryHandles[5].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& DrawWorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_ChainHarmonics_WorkData& WorkData = *(FRigUnit_ChainHarmonics_WorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ChainRoot, \
			Speed, \
			Reach, \
			Wave, \
			WaveCurve, \
			Pendulum, \
			bDrawDebug, \
			DrawWorldOffset, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ChainHarmonicsPerItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
