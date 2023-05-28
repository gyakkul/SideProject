// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugBezier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugBezier_generated_h
#error "RigUnit_DebugBezier.generated.h already included, missing '#pragma once' in RigUnit_DebugBezier.h"
#endif
#define CONTROLRIG_RigUnit_DebugBezier_generated_h


#define FRigUnit_DebugBezier_Execute() \
	void FRigUnit_DebugBezier::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBezier_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetData(false); \
		const float MinimumU = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaximumU = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			MinimumU, \
			MaximumU, \
			Color, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugBezier>();


#define FRigUnit_DebugBezierItemSpace_Execute() \
	void FRigUnit_DebugBezierItemSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBezier_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetData(false); \
		const float MinimumU = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float MaximumU = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			MinimumU, \
			MaximumU, \
			Color, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugBezierItemSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBezier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
