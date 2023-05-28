// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Drawing/RigUnit_DrawContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DrawContainer_generated_h
#error "RigUnit_DrawContainer.generated.h already included, missing '#pragma once' in RigUnit_DrawContainer.h"
#endif
#define CONTROLRIG_RigUnit_DrawContainer_generated_h


#define FRigUnit_DrawContainerGetInstruction_Execute() \
	void FRigUnit_DrawContainerGetInstruction::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Color, \
			Transform \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerGetInstruction>();


#define FRigUnit_DrawContainerSetColor_Execute() \
	void FRigUnit_DrawContainerSetColor::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Color \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetColor>();


#define FRigUnit_DrawContainerSetThickness_Execute() \
	void FRigUnit_DrawContainerSetThickness::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const float Thickness \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const float Thickness \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Thickness \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetThickness>();


#define FRigUnit_DrawContainerSetTransform_Execute() \
	void FRigUnit_DrawContainerSetTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Transform \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
