// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ModifyTransforms_generated_h
#error "RigUnit_ModifyTransforms.generated.h already included, missing '#pragma once' in RigUnit_ModifyTransforms.h"
#endif
#define CONTROLRIG_RigUnit_ModifyTransforms_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyTransforms_PerItem>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyTransforms_WorkData>();


#define FRigUnit_ModifyTransforms_Execute() \
	void FRigUnit_ModifyTransforms::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyTransforms_PerItem>& ItemToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyTransforms_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyTransforms_PerItem>& ItemToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyTransforms_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FRigUnit_ModifyTransforms_PerItem>& ItemToModify = *(TArray<FRigUnit_ModifyTransforms_PerItem>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float WeightMinimum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float WeightMaximum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const EControlRigModifyBoneMode Mode = *(EControlRigModifyBoneMode*)RigVMMemoryHandles[4].GetData(false); \
		FRigUnit_ModifyTransforms_WorkData& WorkData = *(FRigUnit_ModifyTransforms_WorkData*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ItemToModify, \
			Weight, \
			WeightMinimum, \
			WeightMaximum, \
			Mode, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyTransforms>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h


#define FOREACH_ENUM_ECONTROLRIGMODIFYBONEMODE(op) \
	op(EControlRigModifyBoneMode::OverrideLocal) \
	op(EControlRigModifyBoneMode::OverrideGlobal) \
	op(EControlRigModifyBoneMode::AdditiveLocal) \
	op(EControlRigModifyBoneMode::AdditiveGlobal) \
	op(EControlRigModifyBoneMode::Max) 

enum class EControlRigModifyBoneMode : uint8;
template<> struct TIsUEnumClass<EControlRigModifyBoneMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigModifyBoneMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
