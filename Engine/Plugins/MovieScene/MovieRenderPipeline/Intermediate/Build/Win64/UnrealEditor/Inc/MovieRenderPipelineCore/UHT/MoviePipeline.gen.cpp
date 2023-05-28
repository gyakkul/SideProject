// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipeline.h"
#include "MovieRenderPipelineDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipeline() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineOutputData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms
		{
			UMoviePipeline* MoviePipeline;
			bool bFatalError;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoviePipeline;
		static void NewProp_bFatalError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFatalError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_MoviePipeline = { "MoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms, MoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_bFatalError_SetBit(void* Obj)
	{
		((_Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms*)Obj)->bFatalError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_bFatalError = { "bFatalError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms), &Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_bFatalError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_MoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::NewProp_bFatalError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "MoviePipelineFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoviePipelineFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineFinished, UMoviePipeline* MoviePipeline, bool bFatalError)
{
	struct _Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms
	{
		UMoviePipeline* MoviePipeline;
		bool bFatalError;
	};
	_Script_MovieRenderPipelineCore_eventMoviePipelineFinished_Parms Parms;
	Parms.MoviePipeline=MoviePipeline;
	Parms.bFatalError=bFatalError ? true : false;
	MoviePipelineFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics
	{
		struct _Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms
		{
			FMoviePipelineOutputData Results;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms, Results), Z_Construct_UScriptStruct_FMoviePipelineOutputData, METADATA_PARAMS(nullptr, 0) }; // 3434139545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore, nullptr, "MoviePipelineWorkFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoviePipelineWorkFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineWorkFinished, FMoviePipelineOutputData Results)
{
	struct _Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms
	{
		FMoviePipelineOutputData Results;
	};
	_Script_MovieRenderPipelineCore_eventMoviePipelineWorkFinished_Parms Parms;
	Parms.Results=Results;
	MoviePipelineWorkFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMoviePipeline::execOnMoviePipelineFinishedImpl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoviePipelineFinishedImpl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetCurrentJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->GetCurrentJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetPreviewTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetPreviewTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetPipelineMasterConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetPipelineMasterConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetPipelinePrimaryConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetPipelinePrimaryConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execSetInitializationTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitializationTime(Z_Param_Out_InDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execGetInitializationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetInitializationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execIsShutdownRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShutdownRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execShutdown)
	{
		P_GET_UBOOL(Z_Param_bError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown(Z_Param_bError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execRequestShutdown)
	{
		P_GET_UBOOL(Z_Param_bIsError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestShutdown(Z_Param_bIsError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipeline::execInitialize)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InJob);
		P_NATIVE_END;
	}
	void UMoviePipeline::StaticRegisterNativesUMoviePipeline()
	{
		UClass* Class = UMoviePipeline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentJob", &UMoviePipeline::execGetCurrentJob },
			{ "GetInitializationTime", &UMoviePipeline::execGetInitializationTime },
			{ "GetPipelineMasterConfig", &UMoviePipeline::execGetPipelineMasterConfig },
			{ "GetPipelinePrimaryConfig", &UMoviePipeline::execGetPipelinePrimaryConfig },
			{ "GetPreviewTexture", &UMoviePipeline::execGetPreviewTexture },
			{ "Initialize", &UMoviePipeline::execInitialize },
			{ "IsShutdownRequested", &UMoviePipeline::execIsShutdownRequested },
			{ "OnMoviePipelineFinishedImpl", &UMoviePipeline::execOnMoviePipelineFinishedImpl },
			{ "RequestShutdown", &UMoviePipeline::execRequestShutdown },
			{ "SetInitializationTime", &UMoviePipeline::execSetInitializationTime },
			{ "Shutdown", &UMoviePipeline::execShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics
	{
		struct MoviePipeline_eventGetCurrentJob_Parms
		{
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventGetCurrentJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetCurrentJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::MoviePipeline_eventGetCurrentJob_Parms), Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetCurrentJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetCurrentJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics
	{
		struct MoviePipeline_eventGetInitializationTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventGetInitializationTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Returns the time this movie pipeline was initialized at.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Returns the time this movie pipeline was initialized at." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetInitializationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::MoviePipeline_eventGetInitializationTime_Parms), Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics
	{
		struct MoviePipeline_eventGetPipelineMasterConfig_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventGetPipelineMasterConfig_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetPipelinePrimaryConfig" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetPipelineMasterConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::MoviePipeline_eventGetPipelineMasterConfig_Parms), Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics
	{
		struct MoviePipeline_eventGetPipelinePrimaryConfig_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventGetPipelinePrimaryConfig_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the Primary Configuration used to render this shot. This contains the global settings for the shot, as well as per-shot\n\x09* configurations which can contain their own settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Get the Primary Configuration used to render this shot. This contains the global settings for the shot, as well as per-shot\nconfigurations which can contain their own settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetPipelinePrimaryConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::MoviePipeline_eventGetPipelinePrimaryConfig_Parms), Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics
	{
		struct MoviePipeline_eventGetPreviewTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventGetPreviewTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "GetPreviewTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::MoviePipeline_eventGetPreviewTexture_Parms), Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_Initialize_Statics
	{
		struct MoviePipeline_eventInitialize_Parms
		{
			UMoviePipelineExecutorJob* InJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventInitialize_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Initialize the movie pipeline with the specified settings. This kicks off the rendering process. \n\x09* @param InJob\x09- This contains settings and sequence to render this Movie Pipeline with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Initialize the movie pipeline with the specified settings. This kicks off the rendering process.\n@param InJob  - This contains settings and sequence to render this Movie Pipeline with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::MoviePipeline_eventInitialize_Parms), Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics
	{
		struct MoviePipeline_eventIsShutdownRequested_Parms
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
	void Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipeline_eventIsShutdownRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipeline_eventIsShutdownRequested_Parms), &Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Has RequestShutdown() been called?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Has RequestShutdown() been called?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "IsShutdownRequested", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::MoviePipeline_eventIsShutdownRequested_Parms), Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* This function should be called by the Executor when execution has finished (this should still be called in the event of an error)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "This function should be called by the Executor when execution has finished (this should still be called in the event of an error)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "OnMoviePipelineFinishedImpl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics
	{
		struct MoviePipeline_eventRequestShutdown_Parms
		{
			bool bIsError;
		};
		static void NewProp_bIsError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::NewProp_bIsError_SetBit(void* Obj)
	{
		((MoviePipeline_eventRequestShutdown_Parms*)Obj)->bIsError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::NewProp_bIsError = { "bIsError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipeline_eventRequestShutdown_Parms), &Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::NewProp_bIsError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::NewProp_bIsError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Request the movie pipeline to shut down at the next available time. The pipeline will attempt to abandon\n\x09* the current frame (such as if there are more temporal samples pending) but may be forced into finishing if\n\x09* there are spatial samples already submitted to the GPU. The shutdown flow will be run to ensure already\n\x09* completed work is written to disk. This is a non-blocking operation, use Shutdown() instead if you need to\n\x09* block until it is fully shut down.\n\x09*\n\x09* @param bError - Whether this is a request for early shut down due to an error\n\x09* \n\x09* This function is thread safe.\n\x09*/" },
		{ "CPP_Default_bIsError", "false" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Request the movie pipeline to shut down at the next available time. The pipeline will attempt to abandon\nthe current frame (such as if there are more temporal samples pending) but may be forced into finishing if\nthere are spatial samples already submitted to the GPU. The shutdown flow will be run to ensure already\ncompleted work is written to disk. This is a non-blocking operation, use Shutdown() instead if you need to\nblock until it is fully shut down.\n\n@param bError - Whether this is a request for early shut down due to an error\n\nThis function is thread safe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "RequestShutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::MoviePipeline_eventRequestShutdown_Parms), Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_RequestShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_RequestShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics
	{
		struct MoviePipeline_eventSetInitializationTime_Parms
		{
			FDateTime InDateTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipeline_eventSetInitializationTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::NewProp_InDateTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Override the time this movie pipeline was initialized at. This can be used for render farms\n\x09* to ensure that jobs on all machines use the same date/time instead of each calculating it locally.\n\x09*\n\x09* Needs to be called after ::Initialize(...)\n\x09*\n\x09* @param InDateTime - The DateTime object to return for GetInitializationTime.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Override the time this movie pipeline was initialized at. This can be used for render farms\nto ensure that jobs on all machines use the same date/time instead of each calculating it locally.\n\nNeeds to be called after ::Initialize(...)\n\n@param InDateTime - The DateTime object to return for GetInitializationTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "SetInitializationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::MoviePipeline_eventSetInitializationTime_Parms), Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_SetInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_SetInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics
	{
		struct MoviePipeline_eventShutdown_Parms
		{
			bool bError;
		};
		static void NewProp_bError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::NewProp_bError_SetBit(void* Obj)
	{
		((MoviePipeline_eventShutdown_Parms*)Obj)->bError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::NewProp_bError = { "bError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipeline_eventShutdown_Parms), &Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::NewProp_bError_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::NewProp_bError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* Abandons any future work on this Movie Pipeline and runs through the shutdown flow to ensure already\n\x09* completed work is written to disk. This is a blocking-operation and will not return until all outstanding\n\x09* work has been completed.\n\x09*\n\x09* @param bError - Whether this is an early shut down due to an error\n\x09*\n\x09* This function should only be called from the game thread.\n\x09*/" },
		{ "CPP_Default_bError", "false" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Abandons any future work on this Movie Pipeline and runs through the shutdown flow to ensure already\ncompleted work is written to disk. This is a blocking-operation and will not return until all outstanding\nwork has been completed.\n\n@param bError - Whether this is an early shut down due to an error\n\nThis function should only be called from the game thread." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipeline, nullptr, "Shutdown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::MoviePipeline_eventShutdown_Parms), Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipeline_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipeline_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipeline);
	UClass* Z_Construct_UClass_UMoviePipeline_NoRegister()
	{
		return UMoviePipeline::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoviePipelineFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoviePipelineFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoviePipelineWorkFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoviePipelineWorkFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoviePipelineShotWorkFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoviePipelineShotWorkFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPrevCustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPrevCustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequenceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DebugWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJob_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipeline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipeline_GetCurrentJob, "GetCurrentJob" }, // 1601161918
		{ &Z_Construct_UFunction_UMoviePipeline_GetInitializationTime, "GetInitializationTime" }, // 133708205
		{ &Z_Construct_UFunction_UMoviePipeline_GetPipelineMasterConfig, "GetPipelineMasterConfig" }, // 483000888
		{ &Z_Construct_UFunction_UMoviePipeline_GetPipelinePrimaryConfig, "GetPipelinePrimaryConfig" }, // 244023629
		{ &Z_Construct_UFunction_UMoviePipeline_GetPreviewTexture, "GetPreviewTexture" }, // 531163954
		{ &Z_Construct_UFunction_UMoviePipeline_Initialize, "Initialize" }, // 977479120
		{ &Z_Construct_UFunction_UMoviePipeline_IsShutdownRequested, "IsShutdownRequested" }, // 5460344
		{ &Z_Construct_UFunction_UMoviePipeline_OnMoviePipelineFinishedImpl, "OnMoviePipelineFinishedImpl" }, // 4242049212
		{ &Z_Construct_UFunction_UMoviePipeline_RequestShutdown, "RequestShutdown" }, // 3363371944
		{ &Z_Construct_UFunction_UMoviePipeline_SetInitializationTime, "SetInitializationTime" }, // 1925499734
		{ &Z_Construct_UFunction_UMoviePipeline_Shutdown, "Shutdown" }, // 495986949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineFinishedDelegate = { "OnMoviePipelineFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, OnMoviePipelineFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineFinishedDelegate_MetaData)) }; // 729693232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineWorkFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Called when we have completely finished this pipeline. This means that all frames have been rendered,\n\x09* all files written to disk, and any post-finalize exports have finished. This Pipeline will call\n\x09* Shutdown() on itself before calling this delegate to ensure we've unregistered from all delegates\n\x09* and are no longer trying to do anything (even if we still exist).\n\x09*\n\x09* The params struct in the return will have metadata about files written to disk for each shot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Called when we have completely finished this pipeline. This means that all frames have been rendered,\nall files written to disk, and any post-finalize exports have finished. This Pipeline will call\nShutdown() on itself before calling this delegate to ensure we've unregistered from all delegates\nand are no longer trying to do anything (even if we still exist).\n\nThe params struct in the return will have metadata about files written to disk for each shot." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineWorkFinishedDelegate = { "OnMoviePipelineWorkFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, OnMoviePipelineWorkFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineWorkFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineWorkFinishedDelegate_MetaData)) }; // 1488406204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineShotWorkFinishedDelegate_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Only called if `IsFlushDiskWritesPerShot()` is set!\n\x09* Called after each shot is finished and files have been flushed to disk. The returned data in\n\x09* the params struct will have only the per-shot metadata for the just finished shot. Use\n\x09* OnMoviePipelineFinished() if you need all ot the metadata.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Only called if `IsFlushDiskWritesPerShot()` is set!\nCalled after each shot is finished and files have been flushed to disk. The returned data in\nthe params struct will have only the per-shot metadata for the just finished shot. Use\nOnMoviePipelineFinished() if you need all ot the metadata." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineShotWorkFinishedDelegate = { "OnMoviePipelineShotWorkFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, OnMoviePipelineShotWorkFinishedDelegate), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineShotWorkFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineShotWorkFinishedDelegate_MetaData)) }; // 1488406204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData[] = {
		{ "Comment", "/** Custom TimeStep used to drive the engine while rendering. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Custom TimeStep used to drive the engine while rendering." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep = { "CustomTimeStep", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, CustomTimeStep), Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData[] = {
		{ "Comment", "/** Hold a reference to the existing custom time step (if any) so we can restore it after we're done using our custom one. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Hold a reference to the existing custom time step (if any) so we can restore it after we're done using our custom one." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep = { "CachedPrevCustomTimeStep", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, CachedPrevCustomTimeStep), Z_Construct_UClass_UEngineCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData[] = {
		{ "Comment", "/** This is our duplicated sequence that we're rendering. This will get modified throughout the rendering process. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "This is our duplicated sequence that we're rendering. This will get modified throughout the rendering process." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence = { "TargetSequence", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, TargetSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Comment", "/** The Level Sequence Actor we spawned to play our TargetSequence. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "The Level Sequence Actor we spawned to play our TargetSequence." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData[] = {
		{ "Comment", "/** The Debug UI Widget that is spawned and placed on the player UI */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "The Debug UI Widget that is spawned and placed on the player UI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, DebugWidget), Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, PreviewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidgetClass = { "DebugWidgetClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, DebugWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData[] = {
		{ "Comment", "/** Keep track of which job we're working on. This holds our Configuration + which shots we're supposed to render from it. */" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
		{ "ToolTip", "Keep track of which job we're working on. This holds our Configuration + which shots we're supposed to render from it." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob = { "CurrentJob", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipeline, CurrentJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineWorkFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_OnMoviePipelineShotWorkFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CachedPrevCustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_TargetSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_LevelSequenceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_PreviewTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_DebugWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipeline_Statics::NewProp_CurrentJob,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipeline_Statics::ClassParams = {
		&UMoviePipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipeline()
	{
		if (!Z_Registration_Info_UClass_UMoviePipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipeline.OuterSingleton, Z_Construct_UClass_UMoviePipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipeline.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipeline>()
	{
		return UMoviePipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipeline);
	UMoviePipeline::~UMoviePipeline() {}
	void UMoviePipelineCustomTimeStep::StaticRegisterNativesUMoviePipelineCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCustomTimeStep);
	UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep_NoRegister()
	{
		return UMoviePipelineCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipeline.h" },
		{ "ModuleRelativePath", "Public/MoviePipeline.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::ClassParams = {
		&UMoviePipelineCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.OuterSingleton, Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCustomTimeStep>()
	{
		return UMoviePipelineCustomTimeStep::StaticClass();
	}
	UMoviePipelineCustomTimeStep::UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCustomTimeStep);
	UMoviePipelineCustomTimeStep::~UMoviePipelineCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipeline, UMoviePipeline::StaticClass, TEXT("UMoviePipeline"), &Z_Registration_Info_UClass_UMoviePipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipeline), 3876705080U) },
		{ Z_Construct_UClass_UMoviePipelineCustomTimeStep, UMoviePipelineCustomTimeStep::StaticClass, TEXT("UMoviePipelineCustomTimeStep"), &Z_Registration_Info_UClass_UMoviePipelineCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCustomTimeStep), 2369244745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_4247227083(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
