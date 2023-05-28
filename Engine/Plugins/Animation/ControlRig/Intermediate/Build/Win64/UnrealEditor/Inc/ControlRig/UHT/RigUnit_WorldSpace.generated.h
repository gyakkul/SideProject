// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_WorldSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_WorldSpace_generated_h
#error "RigUnit_WorldSpace.generated.h already included, missing '#pragma once' in RigUnit_WorldSpace.h"
#endif
#define CONTROLRIG_RigUnit_WorldSpace_generated_h


#define FRigUnit_ToWorldSpace_Transform_Execute() \
	void FRigUnit_ToWorldSpace_Transform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& World = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Transform>();


#define FRigUnit_ToRigSpace_Transform_Execute() \
	void FRigUnit_ToRigSpace_Transform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Transform>();


#define FRigUnit_ToWorldSpace_Location_Execute() \
	void FRigUnit_ToWorldSpace_Location::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& World = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Location>();


#define FRigUnit_ToRigSpace_Location_Execute() \
	void FRigUnit_ToRigSpace_Location::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Global = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Location>();


#define FRigUnit_ToWorldSpace_Rotation_Execute() \
	void FRigUnit_ToWorldSpace_Rotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& World = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Rotation>();


#define FRigUnit_ToRigSpace_Rotation_Execute() \
	void FRigUnit_ToRigSpace_Rotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Rotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
