// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_Name.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_Name_generated_h
#error "RigVMFunction_Name.generated.h already included, missing '#pragma once' in RigVMFunction_Name.h"
#endif
#define RIGVM_RigVMFunction_Name_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NameBase>();


#define FRigVMFunction_NameConcat_Execute() \
	void FRigVMFunction_NameConcat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& A = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& B = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		FName& Result = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NameConcat>();


#define FRigVMFunction_NameTruncate_Execute() \
	void FRigVMFunction_NameTruncate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FName& Remainder = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FName& Chopped = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Count, \
			FromEnd, \
			Remainder, \
			Chopped \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NameTruncate>();


#define FRigVMFunction_NameReplace_Execute() \
	void FRigVMFunction_NameReplace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		FName& Result = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_NameReplace>();


#define FRigVMFunction_EndsWith_Execute() \
	void FRigVMFunction_EndsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Ending = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Ending, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_EndsWith>();


#define FRigVMFunction_StartsWith_Execute() \
	void FRigVMFunction_StartsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Start = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Start, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StartsWith>();


#define FRigVMFunction_Contains_Execute() \
	void FRigVMFunction_Contains::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Search = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Search, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_Contains>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
