// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelinePIEExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePIEExecutor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature();
	MOVIERENDERPIPELINEEDITOR_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms
		{
			UMoviePipelineExecutorJob* FinishedJob;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishedJob;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_FinishedJob = { "FinishedJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms, FinishedJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_FinishedJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor, nullptr, "OnMoviePipelineIndividualJobFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoviePipelineIndividualJobFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobFinished, UMoviePipelineExecutorJob* FinishedJob, bool bSuccess)
{
	struct _Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms
	{
		UMoviePipelineExecutorJob* FinishedJob;
		bool bSuccess;
	};
	_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobFinished_Parms Parms;
	Parms.FinishedJob=FinishedJob;
	Parms.bSuccess=bSuccess ? true : false;
	OnMoviePipelineIndividualJobFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobStarted_Parms
		{
			UMoviePipelineExecutorJob* StartedJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartedJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::NewProp_StartedJob = { "StartedJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobStarted_Parms, StartedJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::NewProp_StartedJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor, nullptr, "OnMoviePipelineIndividualJobStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobStarted_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoviePipelineIndividualJobStarted_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobStarted, UMoviePipelineExecutorJob* StartedJob)
{
	struct _Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobStarted_Parms
	{
		UMoviePipelineExecutorJob* StartedJob;
	};
	_Script_MovieRenderPipelineEditor_eventOnMoviePipelineIndividualJobStarted_Parms Parms;
	Parms.StartedJob=StartedJob;
	OnMoviePipelineIndividualJobStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMoviePipelinePIEExecutor::execIsRenderingOffscreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRenderingOffscreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePIEExecutor::execSetIsRenderingOffscreen)
	{
		P_GET_UBOOL(Z_Param_bInRenderOffscreen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsRenderingOffscreen(Z_Param_bInRenderOffscreen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelinePIEExecutor::execSetInitializationTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InInitializationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitializationTime(Z_Param_Out_InInitializationTime);
		P_NATIVE_END;
	}
	void UMoviePipelinePIEExecutor::StaticRegisterNativesUMoviePipelinePIEExecutor()
	{
		UClass* Class = UMoviePipelinePIEExecutor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRenderingOffscreen", &UMoviePipelinePIEExecutor::execIsRenderingOffscreen },
			{ "SetInitializationTime", &UMoviePipelinePIEExecutor::execSetInitializationTime },
			{ "SetIsRenderingOffscreen", &UMoviePipelinePIEExecutor::execSetIsRenderingOffscreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics
	{
		struct MoviePipelinePIEExecutor_eventIsRenderingOffscreen_Parms
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
	void Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelinePIEExecutor_eventIsRenderingOffscreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelinePIEExecutor_eventIsRenderingOffscreen_Parms), &Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Will it render without any UI elements showing up (such as the rendering progress window)? */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "Will it render without any UI elements showing up (such as the rendering progress window)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePIEExecutor, nullptr, "IsRenderingOffscreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::MoviePipelinePIEExecutor_eventIsRenderingOffscreen_Parms), Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics
	{
		struct MoviePipelinePIEExecutor_eventSetInitializationTime_Parms
		{
			FDateTime InInitializationTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInitializationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InInitializationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::NewProp_InInitializationTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::NewProp_InInitializationTime = { "InInitializationTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelinePIEExecutor_eventSetInitializationTime_Parms, InInitializationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::NewProp_InInitializationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::NewProp_InInitializationTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::NewProp_InInitializationTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePIEExecutor, nullptr, "SetInitializationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::MoviePipelinePIEExecutor_eventSetInitializationTime_Parms), Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics
	{
		struct MoviePipelinePIEExecutor_eventSetIsRenderingOffscreen_Parms
		{
			bool bInRenderOffscreen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRenderOffscreen_MetaData[];
#endif
		static void NewProp_bInRenderOffscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRenderOffscreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen_SetBit(void* Obj)
	{
		((MoviePipelinePIEExecutor_eventSetIsRenderingOffscreen_Parms*)Obj)->bInRenderOffscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen = { "bInRenderOffscreen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelinePIEExecutor_eventSetIsRenderingOffscreen_Parms), &Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::NewProp_bInRenderOffscreen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Should it render without any UI elements showing up (such as the rendering progress window)? */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "Should it render without any UI elements showing up (such as the rendering progress window)?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelinePIEExecutor, nullptr, "SetIsRenderingOffscreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::MoviePipelinePIEExecutor_eventSetIsRenderingOffscreen_Parms), Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelinePIEExecutor);
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor_NoRegister()
	{
		return UMoviePipelinePIEExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIndividualJobFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIndividualJobFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIndividualJobWorkFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIndividualJobWorkFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIndividualShotWorkFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIndividualShotWorkFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIndividualJobStartedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIndividualJobStartedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineLinearExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelinePIEExecutor_IsRenderingOffscreen, "IsRenderingOffscreen" }, // 70629402
		{ &Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetInitializationTime, "SetInitializationTime" }, // 1667206410
		{ &Z_Construct_UFunction_UMoviePipelinePIEExecutor_SetIsRenderingOffscreen, "SetIsRenderingOffscreen" }, // 2295925778
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines in the currently running Editor process. This\n* involves launching a Play in Editor session for each Movie Pipeline to\n* process.\n*/" },
		{ "IncludePath", "MoviePipelinePIEExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines in the currently running Editor process. This\ninvolves launching a Play in Editor session for each Movie Pipeline to\nprocess." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobFinishedDelegate = { "OnIndividualJobFinishedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePIEExecutor, OnIndividualJobFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobFinishedDelegate_MetaData)) }; // 3670848920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobWorkFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Called after each job is finished in the queue. Params struct contains an output of all files written. */" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "Called after each job is finished in the queue. Params struct contains an output of all files written." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobWorkFinishedDelegate = { "OnIndividualJobWorkFinishedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePIEExecutor, OnIndividualJobWorkFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobWorkFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobWorkFinishedDelegate_MetaData)) }; // 1488406204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualShotWorkFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Called after each shot is finished for a particular render. Params struct contains an output of files written for this shot. \n\x09* Only called if the UMoviePipeline is set up correctly, requires a flag in the output setting to be set. \n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "Called after each shot is finished for a particular render. Params struct contains an output of files written for this shot.\nOnly called if the UMoviePipeline is set up correctly, requires a flag in the output setting to be set." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualShotWorkFinishedDelegate = { "OnIndividualShotWorkFinishedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePIEExecutor, OnIndividualShotWorkFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualShotWorkFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualShotWorkFinishedDelegate_MetaData)) }; // 1488406204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobStartedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Called right before this job is used to initialize a UMoviePipeline.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelinePIEExecutor.h" },
		{ "ToolTip", "Called right before this job is used to initialize a UMoviePipeline." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobStartedDelegate = { "OnIndividualJobStartedDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePIEExecutor, OnIndividualJobStartedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineEditor_OnMoviePipelineIndividualJobStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobStartedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobStartedDelegate_MetaData)) }; // 841210275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobWorkFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualShotWorkFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::NewProp_OnIndividualJobStartedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePIEExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::ClassParams = {
		&UMoviePipelinePIEExecutor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutor()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelinePIEExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelinePIEExecutor.OuterSingleton, Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelinePIEExecutor.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelinePIEExecutor>()
	{
		return UMoviePipelinePIEExecutor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePIEExecutor);
	UMoviePipelinePIEExecutor::~UMoviePipelinePIEExecutor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelinePIEExecutor, UMoviePipelinePIEExecutor::StaticClass, TEXT("UMoviePipelinePIEExecutor"), &Z_Registration_Info_UClass_UMoviePipelinePIEExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelinePIEExecutor), 829329342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_1132049588(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
