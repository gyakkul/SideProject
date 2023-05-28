// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_VisualDebug.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_VisualDebug_generated_h
#error "RigVMFunction_VisualDebug.generated.h already included, missing '#pragma once' in RigVMFunction_VisualDebug.h"
#endif
#define RIGVM_RigVMFunction_VisualDebug_generated_h


#define FRigVMFunction_VisualDebugVector_Execute() \
	void FRigVMFunction_VisualDebugVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugVector>();


#define FRigVMFunction_VisualDebugVectorNoSpace_Execute() \
	void FRigVMFunction_VisualDebugVectorNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugVectorNoSpace>();


#define FRigVMFunction_VisualDebugQuat_Execute() \
	void FRigVMFunction_VisualDebugQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugQuat>();


#define FRigVMFunction_VisualDebugQuatNoSpace_Execute() \
	void FRigVMFunction_VisualDebugQuatNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugQuatNoSpace>();


#define FRigVMFunction_VisualDebugTransform_Execute() \
	void FRigVMFunction_VisualDebugTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugTransform>();


#define FRigVMFunction_VisualDebugTransformNoSpace_Execute() \
	void FRigVMFunction_VisualDebugTransformNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_VisualDebugTransformNoSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h


#define FOREACH_ENUM_ERIGUNITVISUALDEBUGPOINTMODE(op) \
	op(ERigUnitVisualDebugPointMode::Point) \
	op(ERigUnitVisualDebugPointMode::Vector) \
	op(ERigUnitVisualDebugPointMode::Max) 

enum class ERigUnitVisualDebugPointMode : uint8;
template<> struct TIsUEnumClass<ERigUnitVisualDebugPointMode> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigUnitVisualDebugPointMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
