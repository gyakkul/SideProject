// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_String.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGVM_RigVMFunction_String_generated_h
#error "RigVMFunction_String.generated.h already included, missing '#pragma once' in RigVMFunction_String.h"
#endif
#define RIGVM_RigVMFunction_String_generated_h

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringBase>();


#define FRigVMFunction_StringConcat_Execute() \
	void FRigVMFunction_StringConcat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& A = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& B = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringConcat>();


#define FRigVMFunction_StringTruncate_Execute() \
	void FRigVMFunction_StringTruncate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FString& Remainder = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		FString& Chopped = *(FString*)RigVMMemoryHandles[4].GetData(false); \
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
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringTruncate>();


#define FRigVMFunction_StringReplace_Execute() \
	void FRigVMFunction_StringReplace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Old = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		const FString& New = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringReplace>();


#define FRigVMFunction_StringEndsWith_Execute() \
	void FRigVMFunction_StringEndsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Ending = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Ending, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringEndsWith>();


#define FRigVMFunction_StringStartsWith_Execute() \
	void FRigVMFunction_StringStartsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Start, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Start, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Start = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Start, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringStartsWith>();


#define FRigVMFunction_StringContains_Execute() \
	void FRigVMFunction_StringContains::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Search, \
		bool& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Search, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Search, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringContains>();


#define FRigVMFunction_StringLength_Execute() \
	void FRigVMFunction_StringLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		int32& Length \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_195_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		int32& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		int32& Length = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Length \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringLength>();


#define FRigVMFunction_StringTrimWhitespace_Execute() \
	void FRigVMFunction_StringTrimWhitespace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringTrimWhitespace>();


#define FRigVMFunction_StringToUppercase_Execute() \
	void FRigVMFunction_StringToUppercase::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringToUppercase>();


#define FRigVMFunction_StringToLowercase_Execute() \
	void FRigVMFunction_StringToLowercase::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringToLowercase>();


#define FRigVMFunction_StringReverse_Execute() \
	void FRigVMFunction_StringReverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Reverse \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Reverse \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		FString& Reverse = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Reverse \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringReverse>();


#define FRigVMFunction_StringLeft_Execute() \
	void FRigVMFunction_StringLeft::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringLeft>();


#define FRigVMFunction_StringRight_Execute() \
	void FRigVMFunction_StringRight::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_338_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringRight>();


#define FRigVMFunction_StringMiddle_Execute() \
	void FRigVMFunction_StringMiddle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_365_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Start = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Start, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringMiddle>();


#define FRigVMFunction_StringFind_Execute() \
	void FRigVMFunction_StringFind::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_398_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Search, \
			Found, \
			Index \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringFind>();


#define FRigVMFunction_StringSplit_Execute() \
	void FRigVMFunction_StringSplit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_429_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FString>& Result = *(TArray<FString>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Separator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringSplit>();


#define FRigVMFunction_StringJoin_Execute() \
	void FRigVMFunction_StringJoin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_455_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		TArray<FString>& Values = *(TArray<FString>*)RigVMMemoryHandles[0].GetData(false); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Values, \
			Separator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringJoin>();


#define FRigVMFunction_StringPadInteger_Execute() \
	void FRigVMFunction_StringPadInteger::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result \
	)

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_481_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Digits = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Digits, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigVMFunction_StringPadInteger>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMDispatchFactory Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigDispatch_ToString>();

#define FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_528_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMDispatchFactory Super;


template<> RIGVM_API UScriptStruct* StaticStruct<struct FRigDispatch_FromString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunction_String_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
