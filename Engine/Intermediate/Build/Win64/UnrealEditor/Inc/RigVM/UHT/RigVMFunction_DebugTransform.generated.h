// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_DebugTransform_generated_h
#error "RigVMFunction_DebugTransform.generated.h already included, missing '#pragma once' in RigVMFunction_DebugTransform.h"
#endif
#define RIGVM_RigVMFunction_DebugTransform_generated_h


#define FRigVMFunction_DebugTransform_Execute() \
	void FRigVMFunction_DebugTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransform>();


#define FRigVMFunction_DebugTransformMutable_Execute() \
	void FRigVMFunction_DebugTransformMutable::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransformMutable>();


#define FRigVMFunction_DebugTransformMutableNoSpace_Execute() \
	void FRigVMFunction_DebugTransformMutableNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransformMutableNoSpace>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransformArrayMutable_WorkData>();


#define FRigVMFunction_DebugTransformArrayMutable_Execute() \
	void FRigVMFunction_DebugTransformArrayMutable::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigVMFunction_DebugTransformArrayMutable_WorkData& WorkData \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigVMFunction_DebugTransformArrayMutable_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FRigVMFunction_DebugTransformArrayMutable_WorkData& WorkData = *(FRigVMFunction_DebugTransformArrayMutable_WorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			WorkData \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransformArrayMutable>();


#define FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute() \
	void FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			ParentIndices, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			WorldOffset, \
			bEnabled \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_DebugTransformArrayMutableNoSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h


#define FOREACH_ENUM_ERIGUNITDEBUGTRANSFORMMODE(op) \
	op(ERigUnitDebugTransformMode::Point) \
	op(ERigUnitDebugTransformMode::Axes) \
	op(ERigUnitDebugTransformMode::Box) \
	op(ERigUnitDebugTransformMode::Max) 

enum class ERigUnitDebugTransformMode : uint8;
template<> struct TIsUEnumClass<ERigUnitDebugTransformMode> { enum { Value = true }; };
template<> RIGVM_API UEnum* StaticEnum<ERigUnitDebugTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
