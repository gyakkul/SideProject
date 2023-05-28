// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGrid/RenderGridQueue.h"
#include "RenderGrid/RenderGridManager.h"
#include "RenderGridUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridQueue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridJob_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridMoviePipelineRenderJob();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridQueue();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridQueue_NoRegister();
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues();
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	void URenderGridMoviePipelineRenderJob::StaticRegisterNativesURenderGridMoviePipelineRenderJob()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridMoviePipelineRenderJob);
	UClass* Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister()
	{
		return URenderGridMoviePipelineRenderJob::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGridJob_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGridJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineExecutorJob_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PipelineExecutorJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanExecute_MetaData[];
#endif
		static void NewProp_bCanExecute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanExecute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanceled_MetaData[];
#endif
		static void NewProp_bCanceled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanceled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is responsible for the movie pipeline part of the rendering of the given render grid job.\n */" },
		{ "IncludePath", "RenderGrid/RenderGridQueue.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "This class is responsible for the movie pipeline part of the rendering of the given render grid job." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGridJob_MetaData[] = {
		{ "Comment", "/** The render grid job that will be rendered. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The render grid job that will be rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGridJob = { "RenderGridJob", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, RenderGridJob), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGridJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGridJob_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGrid_MetaData[] = {
		{ "Comment", "/** The render grid that the render grid job (that will be rendered) belongs to. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The render grid that the render grid job (that will be rendered) belongs to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGrid = { "RenderGrid", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, RenderGrid), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineQueue_MetaData[] = {
		{ "Comment", "/** The movie pipeline queue. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The movie pipeline queue." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineQueue = { "PipelineQueue", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, PipelineQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineQueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutor_MetaData[] = {
		{ "Comment", "/** The movie pipeline executor. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The movie pipeline executor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutor = { "PipelineExecutor", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, PipelineExecutor), Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutorJob_MetaData[] = {
		{ "Comment", "/** The movie pipeline executor job of the given render grid job. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The movie pipeline executor job of the given render grid job." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutorJob = { "PipelineExecutorJob", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, PipelineExecutorJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutorJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutorJob_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_Status_MetaData[] = {
		{ "Comment", "/** The rendering status of the given render grid job. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The rendering status of the given render grid job." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridMoviePipelineRenderJob, Status), METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute_MetaData[] = {
		{ "Comment", "/** Whether the entry can execute, or whether it should just skip execution. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the entry can execute, or whether it should just skip execution." },
	};
#endif
	void Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute_SetBit(void* Obj)
	{
		((URenderGridMoviePipelineRenderJob*)Obj)->bCanExecute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute = { "bCanExecute", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridMoviePipelineRenderJob), &Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled_MetaData[] = {
		{ "Comment", "/** Whether the entry was canceled (like by calling Cancel(), or by closing the render popup). */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the entry was canceled (like by calling Cancel(), or by closing the render popup)." },
	};
#endif
	void Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled_SetBit(void* Obj)
	{
		((URenderGridMoviePipelineRenderJob*)Obj)->bCanceled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled = { "bCanceled", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridMoviePipelineRenderJob), &Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGridJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_RenderGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_PipelineExecutorJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::NewProp_bCanceled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridMoviePipelineRenderJob>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::ClassParams = {
		&URenderGridMoviePipelineRenderJob::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridMoviePipelineRenderJob()
	{
		if (!Z_Registration_Info_UClass_URenderGridMoviePipelineRenderJob.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridMoviePipelineRenderJob.OuterSingleton, Z_Construct_UClass_URenderGridMoviePipelineRenderJob_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridMoviePipelineRenderJob.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridMoviePipelineRenderJob>()
	{
		return URenderGridMoviePipelineRenderJob::StaticClass();
	}
	URenderGridMoviePipelineRenderJob::URenderGridMoviePipelineRenderJob(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridMoviePipelineRenderJob);
	URenderGridMoviePipelineRenderJob::~URenderGridMoviePipelineRenderJob() {}
	DEFINE_FUNCTION(URenderGridQueue::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetJobsRemainingCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJobsRemainingCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetStatusPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStatusPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetJobsCompletedCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJobsCompletedCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetJobsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJobsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URenderGridJob*>*)Z_Param__Result=P_THIS->GetJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetJobStatus)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJobStatus(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execGetRenderGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGrid**)Z_Param__Result=P_THIS->GetRenderGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execIsCurrentlyRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentlyRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execIsFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execIsCanceled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanceled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execIsStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execAddJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridQueue::execCloseEditorOnCompletion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		URenderGridQueue::CloseEditorOnCompletion();
		P_NATIVE_END;
	}
	void URenderGridQueue::StaticRegisterNativesURenderGridQueue()
	{
		UClass* Class = URenderGridQueue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddJob", &URenderGridQueue::execAddJob },
			{ "Cancel", &URenderGridQueue::execCancel },
			{ "CloseEditorOnCompletion", &URenderGridQueue::execCloseEditorOnCompletion },
			{ "GetJobs", &URenderGridQueue::execGetJobs },
			{ "GetJobsCompletedCount", &URenderGridQueue::execGetJobsCompletedCount },
			{ "GetJobsCount", &URenderGridQueue::execGetJobsCount },
			{ "GetJobsRemainingCount", &URenderGridQueue::execGetJobsRemainingCount },
			{ "GetJobStatus", &URenderGridQueue::execGetJobStatus },
			{ "GetRenderGrid", &URenderGridQueue::execGetRenderGrid },
			{ "GetStatus", &URenderGridQueue::execGetStatus },
			{ "GetStatusPercentage", &URenderGridQueue::execGetStatusPercentage },
			{ "IsCanceled", &URenderGridQueue::execIsCanceled },
			{ "IsCurrentlyRendering", &URenderGridQueue::execIsCurrentlyRendering },
			{ "IsFinished", &URenderGridQueue::execIsFinished },
			{ "IsPaused", &URenderGridQueue::execIsPaused },
			{ "IsStarted", &URenderGridQueue::execIsStarted },
			{ "Pause", &URenderGridQueue::execPause },
			{ "Resume", &URenderGridQueue::execResume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGridQueue_AddJob_Statics
	{
		struct RenderGridQueue_eventAddJob_Parms
		{
			URenderGridJob* Job;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventAddJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Queues the given job. */" },
		{ "Keywords", "render append" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Queues the given job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "AddJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::RenderGridQueue_eventAddJob_Parms), Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_AddJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_AddJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Cancels the current and the remaining queued jobs. Relies on the internal movie pipeline implementation of job canceling on whether this will stop the current render grid job from rendering or not. Will always prevent new render grid jobs from rendering. */" },
		{ "Keywords", "stop quit exit kill terminate end" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Cancels the current and the remaining queued jobs. Relies on the internal movie pipeline implementation of job canceling on whether this will stop the current render grid job from rendering or not. Will always prevent new render grid jobs from rendering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Call this function to make it so that the editor will be closed when all rendering queues finish execution. This function has to be only called once. */" },
		{ "Keywords", "execution execute finish close stop end done quit" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Call this function to make it so that the editor will be closed when all rendering queues finish execution. This function has to be only called once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "CloseEditorOnCompletion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics
	{
		struct RenderGridQueue_eventGetJobs_Parms
		{
			TArray<URenderGridJob*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns all the jobs that have been and will be rendered. */" },
		{ "Keywords", "rendering progression obtain" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns all the jobs that have been and will be rendered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::RenderGridQueue_eventGetJobs_Parms), Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics
	{
		struct RenderGridQueue_eventGetJobsCompletedCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobsCompletedCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns the number of jobs that have finished rendering. Basically just returns [Get Jobs Count] minus [Get Jobs Remaining Count]. */" },
		{ "Keywords", "rendering progression obtain number amount finished" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns the number of jobs that have finished rendering. Basically just returns [Get Jobs Count] minus [Get Jobs Remaining Count]." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetJobsCompletedCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::RenderGridQueue_eventGetJobsCompletedCount_Parms), Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics
	{
		struct RenderGridQueue_eventGetJobsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns the number of jobs that have been and will be rendered. */" },
		{ "Keywords", "rendering progression obtain number amount" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns the number of jobs that have been and will be rendered." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetJobsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::RenderGridQueue_eventGetJobsCount_Parms), Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetJobsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics
	{
		struct RenderGridQueue_eventGetJobsRemainingCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobsRemainingCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns the number of jobs that are still left to render, includes the job that is currently rendering. */" },
		{ "Keywords", "rendering progression obtain number amount finished" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns the number of jobs that are still left to render, includes the job that is currently rendering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetJobsRemainingCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::RenderGridQueue_eventGetJobsRemainingCount_Parms), Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics
	{
		struct RenderGridQueue_eventGetJobStatus_Parms
		{
			URenderGridJob* Job;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobStatus_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetJobStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Retrieves the rendering status of the given render grid job. */" },
		{ "Keywords", "rendering progression obtain text" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Retrieves the rendering status of the given render grid job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetJobStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::RenderGridQueue_eventGetJobStatus_Parms), Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetJobStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetJobStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics
	{
		struct RenderGridQueue_eventGetRenderGrid_Parms
		{
			URenderGrid* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetRenderGrid_Parms, ReturnValue), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Retrieves the rendering status of the given render grid job. */" },
		{ "Keywords", "rendering obtain text" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Retrieves the rendering status of the given render grid job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetRenderGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::RenderGridQueue_eventGetRenderGrid_Parms), Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetRenderGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetRenderGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics
	{
		struct RenderGridQueue_eventGetStatus_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns the status of the rendering process. */" },
		{ "Keywords", "rendering progression obtain text" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns the status of the rendering process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::RenderGridQueue_eventGetStatus_Parms), Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics
	{
		struct RenderGridQueue_eventGetStatusPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridQueue_eventGetStatusPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns the percentage of jobs finished, this includes the progression of the job that is currently rendering. */" },
		{ "Keywords", "rendering progression obtain number amount finished" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns the percentage of jobs finished, this includes the progression of the job that is currently rendering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "GetStatusPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::RenderGridQueue_eventGetStatusPercentage_Parms), Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics
	{
		struct RenderGridQueue_eventIsCanceled_Parms
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
	void Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridQueue_eventIsCanceled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridQueue_eventIsCanceled_Parms), &Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns true if this queue has been canceled. */" },
		{ "Keywords", "stopped quited exited killed terminated ended succeeded completed finished canceled cancelled" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns true if this queue has been canceled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "IsCanceled", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::RenderGridQueue_eventIsCanceled_Parms), Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_IsCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_IsCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics
	{
		struct RenderGridQueue_eventIsCurrentlyRendering_Parms
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
	void Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridQueue_eventIsCurrentlyRendering_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridQueue_eventIsCurrentlyRendering_Parms), &Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns true if this queue is the one that's currently rendering, returns false if it hasn't started yet, or if it's waiting in the queue, or if it has finished. */" },
		{ "Keywords", "stopped quited exited killed terminated ended succeeded completed finished canceled cancelled" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns true if this queue is the one that's currently rendering, returns false if it hasn't started yet, or if it's waiting in the queue, or if it has finished." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "IsCurrentlyRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::RenderGridQueue_eventIsCurrentlyRendering_Parms), Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics
	{
		struct RenderGridQueue_eventIsFinished_Parms
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
	void Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridQueue_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridQueue_eventIsFinished_Parms), &Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns true if this queue has been canceled. */" },
		{ "Keywords", "stopped quited exited killed terminated ended succeeded completed finished canceled cancelled" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns true if this queue has been canceled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "IsFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::RenderGridQueue_eventIsFinished_Parms), Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_IsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_IsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics
	{
		struct RenderGridQueue_eventIsPaused_Parms
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
	void Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridQueue_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridQueue_eventIsPaused_Parms), &Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns true if this queue is currently paused. */" },
		{ "Keywords", "stopped quited exited killed terminated ended succeeded completed finished canceled cancelled" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns true if this queue is currently paused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::RenderGridQueue_eventIsPaused_Parms), Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics
	{
		struct RenderGridQueue_eventIsStarted_Parms
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
	void Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridQueue_eventIsStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridQueue_eventIsStarted_Parms), &Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Returns true if this queue has been started. */" },
		{ "Keywords", "stopped quited exited killed terminated ended succeeded completed finished canceled cancelled" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Returns true if this queue has been started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "IsStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::RenderGridQueue_eventIsStarted_Parms), Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_IsStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_IsStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Pauses the queue. */" },
		{ "Keywords", "wait" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Pauses the queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridQueue_Resume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridQueue_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Queue" },
		{ "Comment", "/** Resumes the queue. */" },
		{ "Keywords", "unwait unpause" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Resumes the queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridQueue_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridQueue, nullptr, "Resume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridQueue_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridQueue_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridQueue_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridQueue_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridQueue);
	UClass* Z_Construct_UClass_URenderGridQueue_NoRegister()
	{
		return URenderGridQueue::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemainingJobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingJobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingJobs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Entries_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Entries_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStarted_MetaData[];
#endif
		static void NewProp_bStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPaused_MetaData[];
#endif
		static void NewProp_bPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanceled_MetaData[];
#endif
		static void NewProp_bCanceled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanceled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinished_MetaData[];
#endif
		static void NewProp_bFinished_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFrameLimitSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFrameLimitSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGridQueue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGridQueue_AddJob, "AddJob" }, // 4030832976
		{ &Z_Construct_UFunction_URenderGridQueue_Cancel, "Cancel" }, // 1619699572
		{ &Z_Construct_UFunction_URenderGridQueue_CloseEditorOnCompletion, "CloseEditorOnCompletion" }, // 1844133117
		{ &Z_Construct_UFunction_URenderGridQueue_GetJobs, "GetJobs" }, // 1584590021
		{ &Z_Construct_UFunction_URenderGridQueue_GetJobsCompletedCount, "GetJobsCompletedCount" }, // 860099296
		{ &Z_Construct_UFunction_URenderGridQueue_GetJobsCount, "GetJobsCount" }, // 1638164734
		{ &Z_Construct_UFunction_URenderGridQueue_GetJobsRemainingCount, "GetJobsRemainingCount" }, // 125628556
		{ &Z_Construct_UFunction_URenderGridQueue_GetJobStatus, "GetJobStatus" }, // 471200788
		{ &Z_Construct_UFunction_URenderGridQueue_GetRenderGrid, "GetRenderGrid" }, // 2558587050
		{ &Z_Construct_UFunction_URenderGridQueue_GetStatus, "GetStatus" }, // 4076903621
		{ &Z_Construct_UFunction_URenderGridQueue_GetStatusPercentage, "GetStatusPercentage" }, // 376154721
		{ &Z_Construct_UFunction_URenderGridQueue_IsCanceled, "IsCanceled" }, // 207969406
		{ &Z_Construct_UFunction_URenderGridQueue_IsCurrentlyRendering, "IsCurrentlyRendering" }, // 3193316900
		{ &Z_Construct_UFunction_URenderGridQueue_IsFinished, "IsFinished" }, // 2554362797
		{ &Z_Construct_UFunction_URenderGridQueue_IsPaused, "IsPaused" }, // 3387570168
		{ &Z_Construct_UFunction_URenderGridQueue_IsStarted, "IsStarted" }, // 2618492794
		{ &Z_Construct_UFunction_URenderGridQueue_Pause, "Pause" }, // 435132038
		{ &Z_Construct_UFunction_URenderGridQueue_Resume, "Resume" }, // 85996126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class is responsible for rendering the given render grid jobs.\n */" },
		{ "IncludePath", "RenderGrid/RenderGridQueue.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "This class is responsible for rendering the given render grid jobs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs_Inner = { "RemainingJobs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs_MetaData[] = {
		{ "Comment", "/** The render grid jobs that are to be rendered, removed when one is grabbed from it and added to the execution queue. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The render grid jobs that are to be rendered, removed when one is grabbed from it and added to the execution queue." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs = { "RemainingJobs", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridQueue, RemainingJobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URenderGridMoviePipelineRenderJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_MetaData[] = {
		{ "Comment", "/** The render grid jobs that are to be rendered, mapped to the movie pipeline render job of each specific render grid job. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The render grid jobs that are to be rendered, mapped to the movie pipeline render job of each specific render grid job." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridQueue, Entries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RenderGrid_MetaData[] = {
		{ "Comment", "/** The render grid of the given render grid job that will be rendered. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The render grid of the given render grid job that will be rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RenderGrid = { "RenderGrid", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridQueue, RenderGrid), Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RenderGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RenderGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted_MetaData[] = {
		{ "Comment", "/** Whether the queue has been started yet. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the queue has been started yet." },
	};
#endif
	void Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted_SetBit(void* Obj)
	{
		((URenderGridQueue*)Obj)->bStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted = { "bStarted", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridQueue), &Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused_MetaData[] = {
		{ "Comment", "/** Whether the queue has been paused. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the queue has been paused." },
	};
#endif
	void Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused_SetBit(void* Obj)
	{
		((URenderGridQueue*)Obj)->bPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused = { "bPaused", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridQueue), &Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled_MetaData[] = {
		{ "Comment", "/** Whether the queue has been canceled. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the queue has been canceled." },
	};
#endif
	void Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled_SetBit(void* Obj)
	{
		((URenderGridQueue*)Obj)->bCanceled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled = { "bCanceled", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridQueue), &Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished_MetaData[] = {
		{ "Comment", "/** Whether the queue has been finished. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "Whether the queue has been finished." },
	};
#endif
	void Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished_SetBit(void* Obj)
	{
		((URenderGridQueue*)Obj)->bFinished = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished = { "bFinished", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridQueue), &Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousProps_MetaData[] = {
		{ "Comment", "/** The property values that have been overwritten by the currently applied render grid job property values. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The property values that have been overwritten by the currently applied render grid job property values." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousProps = { "PreviousProps", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridQueue, PreviousProps), Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousProps_MetaData)) }; // 2026890833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousFrameLimitSettings_MetaData[] = {
		{ "Comment", "/** The engine framerate settings values that have been overwritten by the currently applied engine framerate settings values. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridQueue.h" },
		{ "ToolTip", "The engine framerate settings values that have been overwritten by the currently applied engine framerate settings values." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousFrameLimitSettings = { "PreviousFrameLimitSettings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridQueue, PreviousFrameLimitSettings), Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings, METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousFrameLimitSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousFrameLimitSettings_MetaData)) }; // 1687475708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RemainingJobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_RenderGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bCanceled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_bFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridQueue_Statics::NewProp_PreviousFrameLimitSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridQueue_Statics::ClassParams = {
		&URenderGridQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenderGridQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridQueue()
	{
		if (!Z_Registration_Info_UClass_URenderGridQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridQueue.OuterSingleton, Z_Construct_UClass_URenderGridQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridQueue.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridQueue>()
	{
		return URenderGridQueue::StaticClass();
	}
	URenderGridQueue::URenderGridQueue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridQueue);
	URenderGridQueue::~URenderGridQueue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridMoviePipelineRenderJob, URenderGridMoviePipelineRenderJob::StaticClass, TEXT("URenderGridMoviePipelineRenderJob"), &Z_Registration_Info_UClass_URenderGridMoviePipelineRenderJob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridMoviePipelineRenderJob), 4293428412U) },
		{ Z_Construct_UClass_URenderGridQueue, URenderGridQueue::StaticClass, TEXT("URenderGridQueue"), &Z_Registration_Info_UClass_URenderGridQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridQueue), 3843568836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_2141006683(TEXT("/Script/RenderGrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridQueue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
