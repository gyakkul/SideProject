// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkRigUnits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKCONTROLRIG_LiveLinkRigUnits_generated_h
#error "LiveLinkRigUnits.generated.h already included, missing '#pragma once' in LiveLinkRigUnits.h"
#endif
#define LIVELINKCONTROLRIG_LiveLinkRigUnits_generated_h

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkBase>();


#define FRigUnit_LiveLinkEvaluteFrameAnimation_Execute() \
	void FRigUnit_LiveLinkEvaluteFrameAnimation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FSubjectFrameHandle& SubjectFrame \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FSubjectFrameHandle& SubjectFrame \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& DebugDrawOffset = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			bDrawDebug, \
			DebugColor, \
			DebugDrawOffset, \
			SubjectFrame \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkEvaluteFrameAnimation>();


#define FRigUnit_LiveLinkGetTransformByName_Execute() \
	void FRigUnit_LiveLinkGetTransformByName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& TransformName, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& TransformName, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[0].GetData(false); \
		const FName& TransformName = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectFrame, \
			TransformName, \
			Space, \
			Transform \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkGetTransformByName>();


#define FRigUnit_LiveLinkGetParameterValueByName_Execute() \
	void FRigUnit_LiveLinkGetParameterValueByName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& ParameterName, \
		float& Value \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& ParameterName, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[0].GetData(false); \
		const FName& ParameterName = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		float& Value = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectFrame, \
			ParameterName, \
			Value \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkGetParameterValueByName>();


#define FRigUnit_LiveLinkEvaluteFrameTransform_Execute() \
	void FRigUnit_LiveLinkEvaluteFrameTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& DebugDrawOffset = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			bDrawDebug, \
			DebugColor, \
			DebugDrawOffset, \
			Transform \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkEvaluteFrameTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
