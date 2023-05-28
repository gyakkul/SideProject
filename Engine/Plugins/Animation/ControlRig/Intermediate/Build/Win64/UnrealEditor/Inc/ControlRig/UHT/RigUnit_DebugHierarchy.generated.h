// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugHierarchy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugHierarchy_generated_h
#error "RigUnit_DebugHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DebugHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DebugHierarchy_generated_h


#define FRigUnit_DebugHierarchy_Execute() \
	void FRigUnit_DebugHierarchy::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const float Scale = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Scale, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugHierarchy>();


#define FRigUnit_DebugPose_Execute() \
	void FRigUnit_DebugPose::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			Scale, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h


#define FOREACH_ENUM_ECONTROLRIGDRAWHIERARCHYMODE(op) \
	op(EControlRigDrawHierarchyMode::Axes) \
	op(EControlRigDrawHierarchyMode::Max) 

namespace EControlRigDrawHierarchyMode { enum Type : int; }
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigDrawHierarchyMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
