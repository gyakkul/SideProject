// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_ApplyFK.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ApplyFK_generated_h
#error "RigUnit_ApplyFK.generated.h already included, missing '#pragma once' in RigUnit_ApplyFK.h"
#endif
#define CONTROLRIG_RigUnit_ApplyFK_generated_h


#define FRigUnit_ApplyFK_Execute() \
	void FRigUnit_ApplyFK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const FTransform& Transform, \
		const FTransformFilter& Filter, \
		const EApplyTransformMode ApplyTransformMode, \
		const ETransformSpaceMode ApplyTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const FTransform& Transform, \
		const FTransformFilter& Filter, \
		const EApplyTransformMode ApplyTransformMode, \
		const ETransformSpaceMode ApplyTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FTransformFilter& Filter = *(FTransformFilter*)RigVMMemoryHandles[2].GetData(false); \
		const EApplyTransformMode ApplyTransformMode = *(EApplyTransformMode*)RigVMMemoryHandles[3].GetData(false); \
		const ETransformSpaceMode ApplyTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const FName& BaseJoint = *(FName*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Joint, \
			Transform, \
			Filter, \
			ApplyTransformMode, \
			ApplyTransformSpace, \
			BaseTransform, \
			BaseJoint \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ApplyFK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_ApplyFK_h


#define FOREACH_ENUM_EAPPLYTRANSFORMMODE(op) \
	op(EApplyTransformMode::Override) \
	op(EApplyTransformMode::Additive) \
	op(EApplyTransformMode::Max) 

enum class EApplyTransformMode : uint8;
template<> struct TIsUEnumClass<EApplyTransformMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EApplyTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
