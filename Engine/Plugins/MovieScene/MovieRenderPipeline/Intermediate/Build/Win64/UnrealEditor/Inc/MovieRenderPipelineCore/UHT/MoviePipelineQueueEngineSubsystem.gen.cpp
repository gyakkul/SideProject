// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineQueueEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineQueueEngineSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	MOVIERENDERPIPELINECORE_API UFunction* Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execRenderJob)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderJob(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execAllocateJob)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorJob**)Z_Param__Result=P_THIS->AllocateJob(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execSetConfiguration)
	{
		P_GET_OBJECT(UClass,Z_Param_InProgressWidgetClass);
		P_GET_UBOOL(Z_Param_bRenderPlayerViewport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfiguration(Z_Param_InProgressWidgetClass,Z_Param_bRenderPlayerViewport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execIsRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutorInstance)
	{
		P_GET_OBJECT(UMoviePipelineExecutorBase,Z_Param_InExecutor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderQueueWithExecutorInstance(Z_Param_InExecutor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutor)
	{
		P_GET_OBJECT(UClass,Z_Param_InExecutorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorBase**)Z_Param__Result=P_THIS->RenderQueueWithExecutor(Z_Param_InExecutorType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execGetActiveExecutor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorBase**)Z_Param__Result=P_THIS->GetActiveExecutor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineQueueEngineSubsystem::execGetQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineQueue**)Z_Param__Result=P_THIS->GetQueue();
		P_NATIVE_END;
	}
	void UMoviePipelineQueueEngineSubsystem::StaticRegisterNativesUMoviePipelineQueueEngineSubsystem()
	{
		UClass* Class = UMoviePipelineQueueEngineSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateJob", &UMoviePipelineQueueEngineSubsystem::execAllocateJob },
			{ "GetActiveExecutor", &UMoviePipelineQueueEngineSubsystem::execGetActiveExecutor },
			{ "GetQueue", &UMoviePipelineQueueEngineSubsystem::execGetQueue },
			{ "IsRendering", &UMoviePipelineQueueEngineSubsystem::execIsRendering },
			{ "RenderJob", &UMoviePipelineQueueEngineSubsystem::execRenderJob },
			{ "RenderQueueWithExecutor", &UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutor },
			{ "RenderQueueWithExecutorInstance", &UMoviePipelineQueueEngineSubsystem::execRenderQueueWithExecutorInstance },
			{ "SetConfiguration", &UMoviePipelineQueueEngineSubsystem::execSetConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventAllocateJob_Parms
		{
			ULevelSequence* InSequence;
			UMoviePipelineExecutorJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventAllocateJob_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventAllocateJob_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/**\n\x09* Convenience function for creating a UMoviePipelineExecutorJob out of the given Level Sequence asset. The \n\x09* newly created job will be initialized to render on the current level, and will not have any default settings\n\x09* added to it - instead you will need to call FindOrAddSettingByClass on the job's configuration to add\n\x09* settings such as render passes (UMoviePipelineDeferredPassBase), output types (UMoviePipelineImageSequenceOutput_PNG),\n\x09* and configure the output directory (UMoviePipelineOutputSetting). Once configuration is complete, register\n\x09* a delegate to OnRenderFinished and then call RenderJob.\n\x09*\n\x09* Calling this function will clear the internal queue, see RenderJob for more details.\n\x09* \n\x09* Using this function while IsRendering() returns true will result in an exception being thrown and no attempt\n\x09* being made to create the job.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Convenience function for creating a UMoviePipelineExecutorJob out of the given Level Sequence asset. The\nnewly created job will be initialized to render on the current level, and will not have any default settings\nadded to it - instead you will need to call FindOrAddSettingByClass on the job's configuration to add\nsettings such as render passes (UMoviePipelineDeferredPassBase), output types (UMoviePipelineImageSequenceOutput_PNG),\nand configure the output directory (UMoviePipelineOutputSetting). Once configuration is complete, register\na delegate to OnRenderFinished and then call RenderJob.\n\nCalling this function will clear the internal queue, see RenderJob for more details.\n\nUsing this function while IsRendering() returns true will result in an exception being thrown and no attempt\nbeing made to create the job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "AllocateJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::MoviePipelineQueueEngineSubsystem_eventAllocateJob_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventGetActiveExecutor_Parms
		{
			UMoviePipelineExecutorBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventGetActiveExecutor_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns the active executor (if there is one). This can be used to subscribe to events on an already in-progress render. May be null. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Returns the active executor (if there is one). This can be used to subscribe to events on an already in-progress render. May be null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "GetActiveExecutor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::MoviePipelineQueueEngineSubsystem_eventGetActiveExecutor_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventGetQueue_Parms
		{
			UMoviePipelineQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventGetQueue_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns the queue of Movie Pipelines that need to be rendered. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Returns the queue of Movie Pipelines that need to be rendered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "GetQueue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::MoviePipelineQueueEngineSubsystem_eventGetQueue_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventIsRendering_Parms
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
	void Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineQueueEngineSubsystem_eventIsRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineQueueEngineSubsystem_eventIsRendering_Parms), &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/**\n\x09* Returns true if there is an active executor working on producing a movie. This could be actively rendering frames,\n\x09* or working on post processing (finalizing file writes, etc.). Use GetActiveExecutor() and query it directly for\n\x09* more information, progress updates, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Returns true if there is an active executor working on producing a movie. This could be actively rendering frames,\nor working on post processing (finalizing file writes, etc.). Use GetActiveExecutor() and query it directly for\nmore information, progress updates, etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "IsRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::MoviePipelineQueueEngineSubsystem_eventIsRendering_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventRenderJob_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventRenderJob_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::NewProp_InJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/**\n\x09* Convenience function for rendering the specified job. Calling this will render the specified job (if it was\n\x09* allocated using AllocateJob) and then it will reset the queue once finished. If you need to render multiple \n\x09* jobs (in a queue) then you need to either implement the queue behavior yourself, or use \n\x09* GetQueue()->AllocateJob(...) instead and use the non-convenience functions.\n\x09*\n\x09* Calling this function will clear the queue (after completion).\n\x09*\n\x09* Using this function while IsRendering() returns true will result in an exception being thrown and no attempt\n\x09* being made to render the job.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Convenience function for rendering the specified job. Calling this will render the specified job (if it was\nallocated using AllocateJob) and then it will reset the queue once finished. If you need to render multiple\njobs (in a queue) then you need to either implement the queue behavior yourself, or use\nGetQueue()->AllocateJob(...) instead and use the non-convenience functions.\n\nCalling this function will clear the queue (after completion).\n\nUsing this function while IsRendering() returns true will result in an exception being thrown and no attempt\nbeing made to render the job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "RenderJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::MoviePipelineQueueEngineSubsystem_eventRenderJob_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutor_Parms
		{
			TSubclassOf<UMoviePipelineExecutorBase>  InExecutorType;
			UMoviePipelineExecutorBase* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InExecutorType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::NewProp_InExecutorType = { "InExecutorType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutor_Parms, InExecutorType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutor_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::NewProp_InExecutorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/** \n\x09* Starts processing the current queue with the supplied executor class. This starts an async process which\n\x09* may or may not run in a separate process (or on separate machines), determined by the executor implementation.\n\x09* The executor should report progress for jobs depending on the implementation.\n\x09*\n\x09* @param InExecutorType\x09""A subclass of UMoviePipelineExecutorBase. An instance of this class is created and started.\n\x09* @return A pointer to the instance of the class created. This instance will be kept alive by the Queue Subsystem\n\x09\x09\x09  until it has finished (or been canceled). Register for progress reports and various callbacks on this instance.\n\x09*/" },
		{ "DeterminesOutputType", "InExecutorType" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Starts processing the current queue with the supplied executor class. This starts an async process which\nmay or may not run in a separate process (or on separate machines), determined by the executor implementation.\nThe executor should report progress for jobs depending on the implementation.\n\n@param InExecutorType A subclass of UMoviePipelineExecutorBase. An instance of this class is created and started.\n@return A pointer to the instance of the class created. This instance will be kept alive by the Queue Subsystem\n                         until it has finished (or been canceled). Register for progress reports and various callbacks on this instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "RenderQueueWithExecutor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutor_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutorInstance_Parms
		{
			UMoviePipelineExecutorBase* InExecutor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InExecutor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::NewProp_InExecutor = { "InExecutor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutorInstance_Parms, InExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::NewProp_InExecutor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/** \n\x09* Starts processing the current queue with the supplied executor. This starts an async process which\n\x09* may or may not run in a separate process (or on separate machines), determined by the executor implementation.\n\x09* The executor should report progress for jobs depending on the implementation.\n\x09*\n\x09* @param InExecutor\x09Instance of a subclass of UMoviePipelineExecutorBase.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Starts processing the current queue with the supplied executor. This starts an async process which\nmay or may not run in a separate process (or on separate machines), determined by the executor implementation.\nThe executor should report progress for jobs depending on the implementation.\n\n@param InExecutor     Instance of a subclass of UMoviePipelineExecutorBase." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "RenderQueueWithExecutorInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::MoviePipelineQueueEngineSubsystem_eventRenderQueueWithExecutorInstance_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics
	{
		struct MoviePipelineQueueEngineSubsystem_eventSetConfiguration_Parms
		{
			TSubclassOf<UMovieRenderDebugWidget>  InProgressWidgetClass;
			bool bRenderPlayerViewport;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InProgressWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderPlayerViewport_MetaData[];
#endif
		static void NewProp_bRenderPlayerViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderPlayerViewport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_InProgressWidgetClass = { "InProgressWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineQueueEngineSubsystem_eventSetConfiguration_Parms, InProgressWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport_SetBit(void* Obj)
	{
		((MoviePipelineQueueEngineSubsystem_eventSetConfiguration_Parms*)Obj)->bRenderPlayerViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport = { "bRenderPlayerViewport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineQueueEngineSubsystem_eventSetConfiguration_Parms), &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_InProgressWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::NewProp_bRenderPlayerViewport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline|Rendering" },
		{ "Comment", "/**\n\x09* Sets some advanced configuration options that are used only occasionally to have better control over integrating it into\n\x09* your game/application. This applies to both RenderQueueWithExecutor(Instance) and the simplified RenderJob API. This persists\n\x09* until you call it again with different settings, and needs to be called before the Render* functions.\n\x09*\n\x09* @param ProgressWidget \x09\x09- Create a User Widget that inherits from UMovieRenderDebugWidget and it will be created. \n\x09*\x09\x09\x09\x09\x09\x09  \x09\x09  Passing nullptr will use the default widget, if you wish to hide the widget then create a\n\x09*\x09\x09\x09\x09\x09\x09  \x09\x09  new widget which inherits from UMovieRenderDebugWidget and put nothing in it.\n\x09* @param bRenderPlayerViewport  - If true, we will render the regular player viewport in addition to the off-screen MRQ render.\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09  This is significantly performance heavy (doubles render times) but can be useful in the event\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09  that you want to keep rendering the player viewport to better integrate the render into your\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09  own application.\n\x09*\n\x09*/" },
		{ "CPP_Default_bRenderPlayerViewport", "false" },
		{ "CPP_Default_InProgressWidgetClass", "None" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Sets some advanced configuration options that are used only occasionally to have better control over integrating it into\nyour game/application. This applies to both RenderQueueWithExecutor(Instance) and the simplified RenderJob API. This persists\nuntil you call it again with different settings, and needs to be called before the Render* functions.\n\n@param ProgressWidget                 - Create a User Widget that inherits from UMovieRenderDebugWidget and it will be created.\n                                                                Passing nullptr will use the default widget, if you wish to hide the widget then create a\n                                                                new widget which inherits from UMovieRenderDebugWidget and put nothing in it.\n@param bRenderPlayerViewport  - If true, we will render the regular player viewport in addition to the off-screen MRQ render.\n                                                                This is significantly performance heavy (doubles render times) but can be useful in the event\n                                                                that you want to keep rendering the player viewport to better integrate the render into your\n                                                                own application." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, nullptr, "SetConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::MoviePipelineQueueEngineSubsystem_eventSetConfiguration_Parms), Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineQueueEngineSubsystem);
	UClass* Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_NoRegister()
	{
		return UMoviePipelineQueueEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRenderFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRenderFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_AllocateJob, "AllocateJob" }, // 4083769645
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetActiveExecutor, "GetActiveExecutor" }, // 555959045
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_GetQueue, "GetQueue" }, // 2556184240
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_IsRendering, "IsRendering" }, // 2118180306
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderJob, "RenderJob" }, // 1178805101
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor, "RenderQueueWithExecutor" }, // 1562093797
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance, "RenderQueueWithExecutorInstance" }, // 2711199900
		{ &Z_Construct_UFunction_UMoviePipelineQueueEngineSubsystem_SetConfiguration, "SetConfiguration" }, // 4114992801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This subsystem is intended for use when rendering in a shipping game (but can also be used in PIE\n* during development/testing). See UMoviePipelineQueueSubsystem for the Editor-only queue which is\n* bound to the Movie Render Queue UI. To do simple renders at runtime, call AllocateJob(...)\n* with the Level Sequence you want to render, then call FindOrAddSettingByClass on the job to add\n* the settings (such as render pass, output type, and output directory) that you want for the job.\n* Finally, call RenderJob with the job you just configured. Register a delegate to OnRenderFinished \n* to be notified when the render finished. You can optionally call SetConfiguration(...) before\n* RenderJob to configure some advanced options.\n*/" },
		{ "DisplayName", "MoviePipeline Runtime Subsystem" },
		{ "IncludePath", "MoviePipelineQueueEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "This subsystem is intended for use when rendering in a shipping game (but can also be used in PIE\nduring development/testing). See UMoviePipelineQueueSubsystem for the Editor-only queue which is\nbound to the Movie Render Queue UI. To do simple renders at runtime, call AllocateJob(...)\nwith the Level Sequence you want to render, then call FindOrAddSettingByClass on the job to add\nthe settings (such as render pass, output type, and output directory) that you want for the job.\nFinally, call RenderJob with the job you just configured. Register a delegate to OnRenderFinished\nto be notified when the render finished. You can optionally call SetConfiguration(...) before\nRenderJob to configure some advanced options." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_OnRenderFinished_MetaData[] = {
		{ "Comment", "/**\n\x09* Assign a function to this delegate to get notified when each individual job is finished.\n\x09*\n\x09* THIS WILL ONLY BE CALLED IF USING THE RENDERJOB CONVENIENCE FUNCTION.\n\x09*\n\x09* Because there can only be one job in the queue when using RenderJob, this will be called when\n\x09* the render is complete, and the executor has been released. This allows you to queue up another\n\x09* job immediately as a result of the OnRenderFinished callback.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
		{ "ToolTip", "Assign a function to this delegate to get notified when each individual job is finished.\n\nTHIS WILL ONLY BE CALLED IF USING THE RENDERJOB CONVENIENCE FUNCTION.\n\nBecause there can only be one job in the queue when using RenderJob, this will be called when\nthe render is complete, and the executor has been released. This allows you to queue up another\njob immediately as a result of the OnRenderFinished callback." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_OnRenderFinished = { "OnRenderFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineQueueEngineSubsystem, OnRenderFinished), Z_Construct_UDelegateFunction_MovieRenderPipelineCore_MoviePipelineWorkFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_OnRenderFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_OnRenderFinished_MetaData)) }; // 1488406204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_ActiveExecutor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_ActiveExecutor = { "ActiveExecutor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineQueueEngineSubsystem, ActiveExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_ActiveExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_ActiveExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_CurrentQueue_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineQueueEngineSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_CurrentQueue = { "CurrentQueue", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineQueueEngineSubsystem, CurrentQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_CurrentQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_CurrentQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_OnRenderFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_ActiveExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::NewProp_CurrentQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineQueueEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::ClassParams = {
		&UMoviePipelineQueueEngineSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton, Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineQueueEngineSubsystem>()
	{
		return UMoviePipelineQueueEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineQueueEngineSubsystem);
	UMoviePipelineQueueEngineSubsystem::~UMoviePipelineQueueEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem, UMoviePipelineQueueEngineSubsystem::StaticClass, TEXT("UMoviePipelineQueueEngineSubsystem"), &Z_Registration_Info_UClass_UMoviePipelineQueueEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineQueueEngineSubsystem), 2199996879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_3437522813(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
