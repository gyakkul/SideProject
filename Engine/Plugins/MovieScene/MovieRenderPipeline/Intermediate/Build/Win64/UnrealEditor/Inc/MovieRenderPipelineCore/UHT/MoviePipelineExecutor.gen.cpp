// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineExecutor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms
		{
			UMoviePipelineExecutorBase* PipelineExecutor;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineExecutor;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_PipelineExecutor = { "PipelineExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms, PipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_PipelineExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "OnMoviePipelineExecutorFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoviePipelineExecutorFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorFinished, UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess)
{
	struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms
	{
		UMoviePipelineExecutorBase* PipelineExecutor;
		bool bSuccess;
	};
	_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorFinished_Parms Parms;
	Parms.PipelineExecutor=PipelineExecutor;
	Parms.bSuccess=bSuccess ? true : false;
	OnMoviePipelineExecutorFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms
		{
			UMoviePipelineExecutorBase* PipelineExecutor;
			UMoviePipeline* PipelineWithError;
			bool bIsFatal;
			FText ErrorText;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineExecutor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PipelineWithError;
		static void NewProp_bIsFatal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFatal;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineExecutor = { "PipelineExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, PipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineWithError = { "PipelineWithError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, PipelineWithError), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms*)Obj)->bIsFatal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal = { "bIsFatal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms, ErrorText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_PipelineWithError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_bIsFatal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::NewProp_ErrorText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "OnMoviePipelineExecutorErrored__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoviePipelineExecutorErrored_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase* PipelineExecutor, UMoviePipeline* PipelineWithError, bool bIsFatal, const FText& ErrorText)
{
	struct _Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms
	{
		UMoviePipelineExecutorBase* PipelineExecutor;
		UMoviePipeline* PipelineWithError;
		bool bIsFatal;
		FText ErrorText;
	};
	_Script_MovieRenderPipelineCore_eventOnMoviePipelineExecutorErrored_Parms Parms;
	Parms.PipelineExecutor=PipelineExecutor;
	Parms.PipelineWithError=PipelineWithError;
	Parms.bIsFatal=bIsFatal ? true : false;
	Parms.ErrorText=ErrorText;
	OnMoviePipelineExecutorErrored.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventMoviePipelineSocketMessageRecieved_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineSocketMessageRecieved_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when a socket message is recieved. String is UTF8 encoded and has had the length byte stripped from it. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when a socket message is recieved. String is UTF8 encoded and has had the length byte stripped from it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "MoviePipelineSocketMessageRecieved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineSocketMessageRecieved_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoviePipelineSocketMessageRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineSocketMessageRecieved, const FString& Message)
{
	struct _Script_MovieRenderPipelineCore_eventMoviePipelineSocketMessageRecieved_Parms
	{
		FString Message;
	};
	_Script_MovieRenderPipelineCore_eventMoviePipelineSocketMessageRecieved_Parms Parms;
	Parms.Message=Message;
	MoviePipelineSocketMessageRecieved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms
		{
			int32 RequestIndex;
			int32 ResponseCode;
			FString Message;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_RequestIndex = { "RequestIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms, RequestIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_RequestIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the response for an HTTP request comes in. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when the response for an HTTP request comes in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "MoviePipelineHttpResponseRecieved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoviePipelineHttpResponseRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineHttpResponseRecieved, int32 RequestIndex, int32 ResponseCode, const FString& Message)
{
	struct _Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms
	{
		int32 RequestIndex;
		int32 ResponseCode;
		FString Message;
	};
	_Script_MovieRenderPipelineCore_eventMoviePipelineHttpResponseRecieved_Parms Parms;
	Parms.RequestIndex=RequestIndex;
	Parms.ResponseCode=ResponseCode;
	Parms.Message=Message;
	MoviePipelineHttpResponseRecieved.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execSendHTTPRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InURL);
		P_GET_PROPERTY(FStrProperty,Z_Param_InVerb);
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InHeaders);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SendHTTPRequest(Z_Param_InURL,Z_Param_InVerb,Z_Param_InMessage,Z_Param_Out_InHeaders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execIsSocketConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSocketConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execSendSocketMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendSocketMessage(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execDisconnectSocket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectSocket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execConnectSocket)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InHostName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectSocket(Z_Param_InHostName,Z_Param_InPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execOnExecutorErroredImpl)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_ErroredPipeline);
		P_GET_UBOOL(Z_Param_bFatal);
		P_GET_PROPERTY(FTextProperty,Z_Param_ErrorReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExecutorErroredImpl(Z_Param_ErroredPipeline,Z_Param_bFatal,Z_Param_ErrorReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execOnExecutorFinishedImpl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExecutorFinishedImpl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execSetMoviePipelineClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InPipelineClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoviePipelineClass(Z_Param_InPipelineClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execCancelAllJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAllJobs_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execCancelCurrentJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelCurrentJob_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execGetStatusProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStatusProgress_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execSetStatusProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusProgress_Implementation(Z_Param_InProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execGetStatusMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStatusMessage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execSetStatusMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusMessage_Implementation(Z_Param_InStatus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execOnBeginFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginFrame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execIsRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRendering_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineExecutorBase::execExecute)
	{
		P_GET_OBJECT(UMoviePipelineQueue,Z_Param_InPipelineQueue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute_Implementation(Z_Param_InPipelineQueue);
		P_NATIVE_END;
	}
	struct MoviePipelineExecutorBase_eventExecute_Parms
	{
		UMoviePipelineQueue* InPipelineQueue;
	};
	struct MoviePipelineExecutorBase_eventGetStatusMessage_Parms
	{
		FString ReturnValue;
	};
	struct MoviePipelineExecutorBase_eventGetStatusProgress_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorBase_eventGetStatusProgress_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct MoviePipelineExecutorBase_eventIsRendering_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MoviePipelineExecutorBase_eventIsRendering_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct MoviePipelineExecutorBase_eventSetStatusMessage_Parms
	{
		FString InStatus;
	};
	struct MoviePipelineExecutorBase_eventSetStatusProgress_Parms
	{
		float InProgress;
	};
	static FName NAME_UMoviePipelineExecutorBase_CancelAllJobs = FName(TEXT("CancelAllJobs"));
	void UMoviePipelineExecutorBase::CancelAllJobs()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_CancelAllJobs),NULL);
	}
	static FName NAME_UMoviePipelineExecutorBase_CancelCurrentJob = FName(TEXT("CancelCurrentJob"));
	void UMoviePipelineExecutorBase::CancelCurrentJob()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_CancelCurrentJob),NULL);
	}
	static FName NAME_UMoviePipelineExecutorBase_Execute = FName(TEXT("Execute"));
	void UMoviePipelineExecutorBase::Execute(UMoviePipelineQueue* InPipelineQueue)
	{
		MoviePipelineExecutorBase_eventExecute_Parms Parms;
		Parms.InPipelineQueue=InPipelineQueue;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_Execute),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorBase_GetStatusMessage = FName(TEXT("GetStatusMessage"));
	FString UMoviePipelineExecutorBase::GetStatusMessage() const
	{
		MoviePipelineExecutorBase_eventGetStatusMessage_Parms Parms;
		const_cast<UMoviePipelineExecutorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_GetStatusMessage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorBase_GetStatusProgress = FName(TEXT("GetStatusProgress"));
	float UMoviePipelineExecutorBase::GetStatusProgress() const
	{
		MoviePipelineExecutorBase_eventGetStatusProgress_Parms Parms;
		const_cast<UMoviePipelineExecutorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_GetStatusProgress),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorBase_IsRendering = FName(TEXT("IsRendering"));
	bool UMoviePipelineExecutorBase::IsRendering() const
	{
		MoviePipelineExecutorBase_eventIsRendering_Parms Parms;
		const_cast<UMoviePipelineExecutorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_IsRendering),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMoviePipelineExecutorBase_OnBeginFrame = FName(TEXT("OnBeginFrame"));
	void UMoviePipelineExecutorBase::OnBeginFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_OnBeginFrame),NULL);
	}
	static FName NAME_UMoviePipelineExecutorBase_SetStatusMessage = FName(TEXT("SetStatusMessage"));
	void UMoviePipelineExecutorBase::SetStatusMessage(const FString& InStatus)
	{
		MoviePipelineExecutorBase_eventSetStatusMessage_Parms Parms;
		Parms.InStatus=InStatus;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_SetStatusMessage),&Parms);
	}
	static FName NAME_UMoviePipelineExecutorBase_SetStatusProgress = FName(TEXT("SetStatusProgress"));
	void UMoviePipelineExecutorBase::SetStatusProgress(const float InProgress)
	{
		MoviePipelineExecutorBase_eventSetStatusProgress_Parms Parms;
		Parms.InProgress=InProgress;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineExecutorBase_SetStatusProgress),&Parms);
	}
	void UMoviePipelineExecutorBase::StaticRegisterNativesUMoviePipelineExecutorBase()
	{
		UClass* Class = UMoviePipelineExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAllJobs", &UMoviePipelineExecutorBase::execCancelAllJobs },
			{ "CancelCurrentJob", &UMoviePipelineExecutorBase::execCancelCurrentJob },
			{ "ConnectSocket", &UMoviePipelineExecutorBase::execConnectSocket },
			{ "DisconnectSocket", &UMoviePipelineExecutorBase::execDisconnectSocket },
			{ "Execute", &UMoviePipelineExecutorBase::execExecute },
			{ "GetStatusMessage", &UMoviePipelineExecutorBase::execGetStatusMessage },
			{ "GetStatusProgress", &UMoviePipelineExecutorBase::execGetStatusProgress },
			{ "IsRendering", &UMoviePipelineExecutorBase::execIsRendering },
			{ "IsSocketConnected", &UMoviePipelineExecutorBase::execIsSocketConnected },
			{ "OnBeginFrame", &UMoviePipelineExecutorBase::execOnBeginFrame },
			{ "OnExecutorErroredImpl", &UMoviePipelineExecutorBase::execOnExecutorErroredImpl },
			{ "OnExecutorFinishedImpl", &UMoviePipelineExecutorBase::execOnExecutorFinishedImpl },
			{ "SendHTTPRequest", &UMoviePipelineExecutorBase::execSendHTTPRequest },
			{ "SendSocketMessage", &UMoviePipelineExecutorBase::execSendSocketMessage },
			{ "SetMoviePipelineClass", &UMoviePipelineExecutorBase::execSetMoviePipelineClass },
			{ "SetStatusMessage", &UMoviePipelineExecutorBase::execSetStatusMessage },
			{ "SetStatusProgress", &UMoviePipelineExecutorBase::execSetStatusProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Abort the currently executing job and skip all other jobs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Abort the currently executing job and skip all other jobs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "CancelAllJobs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Abort the currently executing job.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Abort the currently executing job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "CancelCurrentJob", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics
	{
		struct MoviePipelineExecutorBase_eventConnectSocket_Parms
		{
			FString InHostName;
			int32 InPort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHostName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InHostName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InHostName = { "InHostName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventConnectSocket_Parms, InHostName), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InHostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InHostName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InPort = { "InPort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventConnectSocket_Parms, InPort), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InPort_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorBase_eventConnectSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorBase_eventConnectSocket_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InHostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_InPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Attempts to connect a socket to the specified host and port. This is a blocking call.\n\x09* @param InHostName\x09The host name as to connect to such as \"127.0.0.1\"\n\x09* @param InPort\x09\x09The port to attempt to connect to the host on.\n\x09* @return True if the socket was succesfully connected to the given host and port.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Attempts to connect a socket to the specified host and port. This is a blocking call.\n@param InHostName     The host name as to connect to such as \"127.0.0.1\"\n@param InPort         The port to attempt to connect to the host on.\n@return True if the socket was succesfully connected to the given host and port." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "ConnectSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::MoviePipelineExecutorBase_eventConnectSocket_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/*\n\x09* Disconnects the socket (if currently connected.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "* Disconnects the socket (if currently connected.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "DisconnectSocket", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::NewProp_InPipelineQueue = { "InPipelineQueue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventExecute_Parms, InPipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::NewProp_InPipelineQueue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Execute the provided Queue. You are responsible for deciding how to handle each job\n\x09* in the queue and processing them. OnExecutorFinished should be called when all jobs\n\x09* are completed, which can report both success, warning, cancel, or error. \n\x09*\n\x09* For C++ implementations override `virtual void Execute_Implementation() const override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def execute(self):\n\x09*\n\x09* @param InPipelineQueue The queue that this should process all jobs for. This can be null\n\x09\x09\x09\x09\x09\x09\x09 when using certain combination of command line render flags/scripting.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Execute the provided Queue. You are responsible for deciding how to handle each job\nin the queue and processing them. OnExecutorFinished should be called when all jobs\nare completed, which can report both success, warning, cancel, or error.\n\nFor C++ implementations override `virtual void Execute_Implementation() const override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def execute(self):\n\n@param InPipelineQueue The queue that this should process all jobs for. This can be null\n                                                        when using certain combination of command line render flags/scripting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "Execute", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventExecute_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventGetStatusMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current status message for this job. May be an empty string.\n\x09*\n\x09* For C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_message(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Get the current status message for this job. May be an empty string.\n\nFor C++ implementations override `virtual FString GetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_message(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "GetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventGetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventGetStatusProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current progress as last set by SetStatusProgress. 0 by default.\n\x09*\n\x09* For C++ implementations override `virtual float GetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def get_status_progress(self):\n\x09*\x09\x09return ?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Get the current progress as last set by SetStatusProgress. 0 by default.\n\nFor C++ implementations override `virtual float GetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def get_status_progress(self):\n              return ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "GetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventGetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorBase_eventIsRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorBase_eventIsRendering_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Report the current state of the executor. This is used to know if we can call Execute again.\n\x09*\n\x09* For C++ implementations override `virtual bool IsRendering_Implementation() const override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def is_rendering(self):\n\x09*\x09\x09return ?\n\x09* \n\x09* @return True if the executor is currently working on a queue to produce a render.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Report the current state of the executor. This is used to know if we can call Execute again.\n\nFor C++ implementations override `virtual bool IsRendering_Implementation() const override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def is_rendering(self):\n              return ?\n\n@return True if the executor is currently working on a queue to produce a render." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "IsRendering", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventIsRendering_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics
	{
		struct MoviePipelineExecutorBase_eventIsSocketConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorBase_eventIsSocketConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorBase_eventIsSocketConnected_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns true if the socket is currently connected, false otherwise. Call ConnectSocket to attempt a connection. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Returns true if the socket is currently connected, false otherwise. Call ConnectSocket to attempt a connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "IsSocketConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::MoviePipelineExecutorBase_eventIsSocketConnected_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Called once at the beginning of each engine frame. \n\x09*\n\x09* For C++ implementations override `virtual bool OnBeginFrame_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def on_begin_frame(self):\n\x09*\x09\x09super().on_begin_frame()\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called once at the beginning of each engine frame.\n\nFor C++ implementations override `virtual bool OnBeginFrame_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def on_begin_frame(self):\n              super().on_begin_frame()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "OnBeginFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics
	{
		struct MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms
		{
			UMoviePipeline* ErroredPipeline;
			bool bFatal;
			FText ErrorReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ErroredPipeline;
		static void NewProp_bFatal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFatal;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_ErroredPipeline = { "ErroredPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms, ErroredPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_bFatal_SetBit(void* Obj)
	{
		((MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms*)Obj)->bFatal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_bFatal = { "bFatal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_bFatal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_ErrorReason = { "ErrorReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms, ErrorReason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_ErroredPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_bFatal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::NewProp_ErrorReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "OnExecutorErroredImpl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::MoviePipelineExecutorBase_eventOnExecutorErroredImpl_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* This should be called when the Executor has finished executing all of the things\n\x09* it has been asked to execute. This should be called in the event of a failure as \n\x09* well, and passing in false for success to allow the caller to know failure. Errors\n\x09* should be broadcast on the error delegate, so this is just a handy way to know at\n\x09* the end without having to track it yourself.\n\x09*\n\x09* @param bInSuccess\x09True if the pipeline successfully executed all jobs. False if there was an error. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "This should be called when the Executor has finished executing all of the things\nit has been asked to execute. This should be called in the event of a failure as\nwell, and passing in false for success to allow the caller to know failure. Errors\nshould be broadcast on the error delegate, so this is just a handy way to know at\nthe end without having to track it yourself.\n\n@param bInSuccess     True if the pipeline successfully executed all jobs. False if there was an error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "OnExecutorFinishedImpl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics
	{
		struct MoviePipelineExecutorBase_eventSendHTTPRequest_Parms
		{
			FString InURL;
			FString InVerb;
			FString InMessage;
			TMap<FString,FString> InHeaders;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVerb_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVerb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeaders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InHeaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHeaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InHeaders;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendHTTPRequest_Parms, InURL), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InVerb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InVerb = { "InVerb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendHTTPRequest_Parms, InVerb), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InVerb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InVerb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendHTTPRequest_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_ValueProp = { "InHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_Key_KeyProp = { "InHeaders_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders = { "InHeaders", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendHTTPRequest_Parms, InHeaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendHTTPRequest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InVerb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_InHeaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Sends a asynchronous HTTP request. Responses will be returned in the the OnHTTPResponseRecieved event.\n\x09* \n\x09* @param InURL\x09\x09The URL to send the request to.\n\x09* @param InVerb\x09\x09The HTTP verb for the request. GET, PUT, POST, etc.\n\x09* @param InMessage\x09The content of the request.\n\x09* @param InHeaders\x09Headers that should be set on the request.\n\x09*\n\x09* @return Returns an index for the request. This index will be provided in the OnHTTPResponseRecieved event so you can\n\x09*\x09\x09  make multiple HTTP requests at once and tell them apart when you recieve them, even if they come out of order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Sends a asynchronous HTTP request. Responses will be returned in the the OnHTTPResponseRecieved event.\n\n@param InURL          The URL to send the request to.\n@param InVerb         The HTTP verb for the request. GET, PUT, POST, etc.\n@param InMessage      The content of the request.\n@param InHeaders      Headers that should be set on the request.\n\n@return Returns an index for the request. This index will be provided in the OnHTTPResponseRecieved event so you can\n                make multiple HTTP requests at once and tell them apart when you recieve them, even if they come out of order." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "SendHTTPRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::MoviePipelineExecutorBase_eventSendHTTPRequest_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics
	{
		struct MoviePipelineExecutorBase_eventSendSocketMessage_Parms
		{
			FString InMessage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSendSocketMessage_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_InMessage_MetaData)) };
	void Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineExecutorBase_eventSendSocketMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineExecutorBase_eventSendSocketMessage_Parms), &Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_InMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09Sends a socket message if the socket is currently connected. Messages back will happen in the OnSocketMessageRecieved event.\n\x09@param InMessage\x09The message to send. This will be sent over the socket (if connected) with a 4 byte (int32) size prefix on the\n\x09\x09\x09\x09\x09\x09message so the recieving end knows how much data to recieve before considering it done. This prevents accidentally\n\x09\x09\x09\x09\x09\x09""chopping json strings in half.\n\x09@return True if the message was sent succesfully. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Sends a socket message if the socket is currently connected. Messages back will happen in the OnSocketMessageRecieved event.\n@param InMessage        The message to send. This will be sent over the socket (if connected) with a 4 byte (int32) size prefix on the\n                                        message so the recieving end knows how much data to recieve before considering it done. This prevents accidentally\n                                        chopping json strings in half.\n@return True if the message was sent succesfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "SendSocketMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::MoviePipelineExecutorBase_eventSendSocketMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics
	{
		struct MoviePipelineExecutorBase_eventSetMoviePipelineClass_Parms
		{
			UClass* InPipelineClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InPipelineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::NewProp_InPipelineClass = { "InPipelineClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSetMoviePipelineClass_Parms, InPipelineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::NewProp_InPipelineClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Specify which MoviePipeline class type should be created by this executor when processing jobs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Specify which MoviePipeline class type should be created by this executor when processing jobs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "SetMoviePipelineClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::MoviePipelineExecutorBase_eventSetMoviePipelineClass_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::NewProp_InStatus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::NewProp_InStatus = { "InStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSetStatusMessage_Parms, InStatus), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::NewProp_InStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::NewProp_InStatus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::NewProp_InStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the status of this Executor. Does nothing in default implementations, but a useful shorthand\n\x09* for implementations to broadcast status updates, ie: You can call SetStatusMessage as your executor\n\x09* changes state, and override the SetStatusMessage function to make it actually do something (such as\n\x09* printing to a log or updating a third party API).\n\x09*\n\x09* For C++ implementations override `virtual bool SetStatusMessage_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_message(self, inStatus):\n\x09*\n\x09* @param InStatus\x09The status message you wish the executor to have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Set the status of this Executor. Does nothing in default implementations, but a useful shorthand\nfor implementations to broadcast status updates, ie: You can call SetStatusMessage as your executor\nchanges state, and override the SetStatusMessage function to make it actually do something (such as\nprinting to a log or updating a third party API).\n\nFor C++ implementations override `virtual bool SetStatusMessage_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_message(self, inStatus):\n\n@param InStatus       The status message you wish the executor to have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "SetStatusMessage", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventSetStatusMessage_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InProgress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::NewProp_InProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineExecutorBase_eventSetStatusProgress_Parms, InProgress), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::NewProp_InProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::NewProp_InProgress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::NewProp_InProgress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Set the progress of this Executor. Does nothing in default implementations, but a useful shorthand\n\x09* for implementations to broadcast progress updates, ie: You can call SetStatusProgress as your executor\n\x09* changes progress, and override the SetStatusProgress function to make it actually do something (such as\n\x09* printing to a log or updating a third party API).\n\x09*\n\x09* Does not necessairly reflect the overall progress of the work, it is an arbitrary 0-1 value that\n\x09* can be used to indicate different things (depending on implementation).\n\x09*\n\x09* For C++ implementations override `virtual bool SetStatusProgress_Implementation() override`\n\x09* For Python/BP implementations override\n\x09*\x09@unreal.ufunction(override=True)\n\x09*\x09""def set_status_progress(self, inStatus):\n\x09*\n\x09* @param InProgress\x09The progress (0-1 range) the executor should have.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Set the progress of this Executor. Does nothing in default implementations, but a useful shorthand\nfor implementations to broadcast progress updates, ie: You can call SetStatusProgress as your executor\nchanges progress, and override the SetStatusProgress function to make it actually do something (such as\nprinting to a log or updating a third party API).\n\nDoes not necessairly reflect the overall progress of the work, it is an arbitrary 0-1 value that\ncan be used to indicate different things (depending on implementation).\n\nFor C++ implementations override `virtual bool SetStatusProgress_Implementation() override`\nFor Python/BP implementations override\n      @unreal.ufunction(override=True)\n      def set_status_progress(self, inStatus):\n\n@param InProgress     The progress (0-1 range) the executor should have." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineExecutorBase, nullptr, "SetStatusProgress", nullptr, nullptr, sizeof(MoviePipelineExecutorBase_eventSetStatusProgress_Parms), Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineExecutorBase);
	UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister()
	{
		return UMoviePipelineExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExecutorFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecutorFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExecutorErroredDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExecutorErroredDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketMessageRecievedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SocketMessageRecievedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HTTPResponseRecievedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HTTPResponseRecievedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DebugWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPipelineClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetPipelineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelAllJobs, "CancelAllJobs" }, // 3719703275
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_CancelCurrentJob, "CancelCurrentJob" }, // 1018787993
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_ConnectSocket, "ConnectSocket" }, // 1119665532
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_DisconnectSocket, "DisconnectSocket" }, // 4184693997
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_Execute, "Execute" }, // 2320519145
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusMessage, "GetStatusMessage" }, // 2288874656
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_GetStatusProgress, "GetStatusProgress" }, // 3881687825
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_IsRendering, "IsRendering" }, // 1503706294
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_IsSocketConnected, "IsSocketConnected" }, // 1496915504
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_OnBeginFrame, "OnBeginFrame" }, // 2783357114
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorErroredImpl, "OnExecutorErroredImpl" }, // 823709411
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_OnExecutorFinishedImpl, "OnExecutorFinishedImpl" }, // 3411225347
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_SendHTTPRequest, "SendHTTPRequest" }, // 2061446468
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_SendSocketMessage, "SendSocketMessage" }, // 3352416569
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_SetMoviePipelineClass, "SetMoviePipelineClass" }, // 3285778183
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusMessage, "SetStatusMessage" }, // 206534099
		{ &Z_Construct_UFunction_UMoviePipelineExecutorBase_SetStatusProgress, "SetStatusProgress" }, // 2069697929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Movie Pipeline Executor is responsible for executing an array of Movie Pipelines,\n* and (optionally) reporting progress back for the movie pipelines. The entire array\n* is passed at once to allow the implementations to choose how to split up the work.\n* By default we provide a local execution (UMoviePipelineLocalExecutor) which works\n* on them serially, but you can create an implementation of this class, change the \n* default in the Project Settings and use your own distribution logic. For example,\n* you may want to distribute the work to multiple computers over a network, which\n* may involve running command line options on each machine to sync the latest content\n* from the project before the execution starts.\n*/" },
		{ "IncludePath", "MoviePipelineExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "A Movie Pipeline Executor is responsible for executing an array of Movie Pipelines,\nand (optionally) reporting progress back for the movie pipelines. The entire array\nis passed at once to allow the implementations to choose how to split up the work.\nBy default we provide a local execution (UMoviePipelineLocalExecutor) which works\non them serially, but you can create an implementation of this class, change the\ndefault in the Project Settings and use your own distribution logic. For example,\nyou may want to distribute the work to multiple computers over a network, which\nmay involve running command line options on each machine to sync the latest content\nfrom the project before the execution starts." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Called when the Executor has finished all jobs. Reports success if no jobs\n\x09* had fatal errors. Subscribe to the error delegate for more information about\n\x09* any errors.\n\x09*\n\x09* Exposed for Blueprints/Python. Called at the same time as the native one.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when the Executor has finished all jobs. Reports success if no jobs\nhad fatal errors. Subscribe to the error delegate for more information about\nany errors.\n\nExposed for Blueprints/Python. Called at the same time as the native one." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate = { "OnExecutorFinishedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate_MetaData)) }; // 3997976572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Called when an individual job reports a warning/error. Jobs are considered fatal\n\x09* if the severity was bad enough to abort the job (missing sequence, write failure, etc.)\n\x09*\n\x09* Exposed for Blueprints/Python. Called at the same time as the native one.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Called when an individual job reports a warning/error. Jobs are considered fatal\nif the severity was bad enough to abort the job (missing sequence, write failure, etc.)\n\nExposed for Blueprints/Python. Called at the same time as the native one." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate = { "OnExecutorErroredDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, OnExecutorErroredDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_OnMoviePipelineExecutorErrored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate_MetaData)) }; // 2301871300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_SocketMessageRecievedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* If this executor has been configured to connect to a socket, this event will be called each time the socket recieves something. \n\x09* The message response expected from the server should have a 4 byte (int32) size prefix for the string to specify how much data\n\x09* we should expect. This delegate will not get invoked until we recieve that many bytes from the socket connection to avoid broadcasting\n\x09* partial messages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "If this executor has been configured to connect to a socket, this event will be called each time the socket recieves something.\nThe message response expected from the server should have a 4 byte (int32) size prefix for the string to specify how much data\nwe should expect. This delegate will not get invoked until we recieve that many bytes from the socket connection to avoid broadcasting\npartial messages." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_SocketMessageRecievedDelegate = { "SocketMessageRecievedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, SocketMessageRecievedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineSocketMessageRecieved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_SocketMessageRecievedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_SocketMessageRecievedDelegate_MetaData)) }; // 482237022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_HTTPResponseRecievedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** If an HTTP Request has been made and a response returned, the returned response will be broadcast on this event. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "If an HTTP Request has been made and a response returned, the returned response will be broadcast on this event." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_HTTPResponseRecievedDelegate = { "HTTPResponseRecievedDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, HTTPResponseRecievedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineHttpResponseRecieved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_HTTPResponseRecievedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_HTTPResponseRecievedDelegate_MetaData)) }; // 2985786004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_DebugWidgetClass_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_DebugWidgetClass = { "DebugWidgetClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, DebugWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_DebugWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_DebugWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Arbitrary data that can be associated with the executor. Not used by default implementations, nor read.\n\x09* This can be used to attach third party metadata such as job ids from remote farms.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Arbitrary data that can be associated with the executor. Not used by default implementations, nor read.\nThis can be used to attach third party metadata such as job ids from remote farms." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, UserData), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which Pipeline Class should be created by this Executor. May be null. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineExecutor.h" },
		{ "ToolTip", "Which Pipeline Class should be created by this Executor. May be null." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass = { "TargetPipelineClass", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineExecutorBase, TargetPipelineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_OnExecutorErroredDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_SocketMessageRecievedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_HTTPResponseRecievedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_DebugWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_UserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::NewProp_TargetPipelineClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineExecutorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::ClassParams = {
		&UMoviePipelineExecutorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineExecutorBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineExecutorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineExecutorBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineExecutorBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineExecutorBase>()
	{
		return UMoviePipelineExecutorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineExecutorBase);
	UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineExecutorBase, UMoviePipelineExecutorBase::StaticClass, TEXT("UMoviePipelineExecutorBase"), &Z_Registration_Info_UClass_UMoviePipelineExecutorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineExecutorBase), 4271093030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_4033272709(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
