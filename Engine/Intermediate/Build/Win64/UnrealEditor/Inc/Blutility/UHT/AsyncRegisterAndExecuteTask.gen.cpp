// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AsyncRegisterAndExecuteTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncRegisterAndExecuteTask() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncRegisterAndExecuteTask();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncRegisterAndExecuteTask_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityTask_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncRegisterAndExecuteTask::execRegisterAndExecuteTask)
	{
		P_GET_OBJECT(UEditorUtilityTask,Z_Param_Task);
		P_GET_OBJECT(UEditorUtilityTask,Z_Param_OptionalParentTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncRegisterAndExecuteTask**)Z_Param__Result=UAsyncRegisterAndExecuteTask::RegisterAndExecuteTask(Z_Param_Task,Z_Param_OptionalParentTask);
		P_NATIVE_END;
	}
	void UAsyncRegisterAndExecuteTask::StaticRegisterNativesUAsyncRegisterAndExecuteTask()
	{
		UClass* Class = UAsyncRegisterAndExecuteTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterAndExecuteTask", &UAsyncRegisterAndExecuteTask::execRegisterAndExecuteTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics
	{
		struct AsyncRegisterAndExecuteTask_eventRegisterAndExecuteTask_Parms
		{
			UEditorUtilityTask* Task;
			UEditorUtilityTask* OptionalParentTask;
			UAsyncRegisterAndExecuteTask* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalParentTask;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncRegisterAndExecuteTask_eventRegisterAndExecuteTask_Parms, Task), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_OptionalParentTask = { "OptionalParentTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncRegisterAndExecuteTask_eventRegisterAndExecuteTask_Parms, OptionalParentTask), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncRegisterAndExecuteTask_eventRegisterAndExecuteTask_Parms, ReturnValue), Z_Construct_UClass_UAsyncRegisterAndExecuteTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_OptionalParentTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_OptionalParentTask", "None" },
		{ "ModuleRelativePath", "Public/AsyncRegisterAndExecuteTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncRegisterAndExecuteTask, nullptr, "RegisterAndExecuteTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::AsyncRegisterAndExecuteTask_eventRegisterAndExecuteTask_Parms), Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncRegisterAndExecuteTask);
	UClass* Z_Construct_UClass_UAsyncRegisterAndExecuteTask_NoRegister()
	{
		return UAsyncRegisterAndExecuteTask::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncRegisterAndExecuteTask_RegisterAndExecuteTask, "RegisterAndExecuteTask" }, // 103368443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncRegisterAndExecuteTask.h" },
		{ "ModuleRelativePath", "Public/AsyncRegisterAndExecuteTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncRegisterAndExecuteTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncRegisterAndExecuteTask, OnFinished), Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::NewProp_OnFinished_MetaData)) }; // 1447515249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncRegisterAndExecuteTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::ClassParams = {
		&UAsyncRegisterAndExecuteTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncRegisterAndExecuteTask()
	{
		if (!Z_Registration_Info_UClass_UAsyncRegisterAndExecuteTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncRegisterAndExecuteTask.OuterSingleton, Z_Construct_UClass_UAsyncRegisterAndExecuteTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncRegisterAndExecuteTask.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncRegisterAndExecuteTask>()
	{
		return UAsyncRegisterAndExecuteTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncRegisterAndExecuteTask);
	UAsyncRegisterAndExecuteTask::~UAsyncRegisterAndExecuteTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncRegisterAndExecuteTask, UAsyncRegisterAndExecuteTask::StaticClass, TEXT("UAsyncRegisterAndExecuteTask"), &Z_Registration_Info_UClass_UAsyncRegisterAndExecuteTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncRegisterAndExecuteTask), 392454147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_3669567174(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncRegisterAndExecuteTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
