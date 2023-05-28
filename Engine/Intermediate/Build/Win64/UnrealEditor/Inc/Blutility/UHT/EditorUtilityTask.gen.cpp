// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityTask() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilitySubsystem_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityTask();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityTask_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventOnEditorUtilityTaskDynamicDelegate_Parms
		{
			UEditorUtilityTask* Task;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventOnEditorUtilityTaskDynamicDelegate_Parms, Task), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "OnEditorUtilityTaskDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::_Script_Blutility_eventOnEditorUtilityTaskDynamicDelegate_Parms), Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityTaskDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEditorUtilityTaskDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityTaskDynamicDelegate, UEditorUtilityTask* Task)
{
	struct _Script_Blutility_eventOnEditorUtilityTaskDynamicDelegate_Parms
	{
		UEditorUtilityTask* Task;
	};
	_Script_Blutility_eventOnEditorUtilityTaskDynamicDelegate_Parms Parms;
	Parms.Task=Task;
	OnEditorUtilityTaskDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEditorUtilityTask::execWasCancelRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasCancelRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTask::execSetTaskNotificationText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTaskNotificationText(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTask::execFinishExecutingTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishExecutingTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilityTask::execRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Run();
		P_NATIVE_END;
	}
	static FName NAME_UEditorUtilityTask_ReceiveBeginExecution = FName(TEXT("ReceiveBeginExecution"));
	void UEditorUtilityTask::ReceiveBeginExecution()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityTask_ReceiveBeginExecution),NULL);
	}
	static FName NAME_UEditorUtilityTask_ReceiveCancelRequested = FName(TEXT("ReceiveCancelRequested"));
	void UEditorUtilityTask::ReceiveCancelRequested()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorUtilityTask_ReceiveCancelRequested),NULL);
	}
	void UEditorUtilityTask::StaticRegisterNativesUEditorUtilityTask()
	{
		UClass* Class = UEditorUtilityTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishExecutingTask", &UEditorUtilityTask::execFinishExecutingTask },
			{ "Run", &UEditorUtilityTask::execRun },
			{ "SetTaskNotificationText", &UEditorUtilityTask::execSetTaskNotificationText },
			{ "WasCancelRequested", &UEditorUtilityTask::execWasCancelRequested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "FinishExecutingTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "DisplayName", "BeginExecution" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "ReceiveBeginExecution", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "DisplayName", "CancelRequested" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "ReceiveCancelRequested", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_Run_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_Run_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics
	{
		struct EditorUtilityTask_eventSetTaskNotificationText_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilityTask_eventSetTaskNotificationText_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "SetTaskNotificationText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::EditorUtilityTask_eventSetTaskNotificationText_Parms), Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics
	{
		struct EditorUtilityTask_eventWasCancelRequested_Parms
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
	void Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilityTask_eventWasCancelRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilityTask_eventWasCancelRequested_Parms), &Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilityTask, nullptr, "WasCancelRequested", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::EditorUtilityTask_eventWasCancelRequested_Parms), Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityTask);
	UClass* Z_Construct_UClass_UEditorUtilityTask_NoRegister()
	{
		return UEditorUtilityTask::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTaskManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyTaskManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyParentTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyParentTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCancelRequested_MetaData[];
#endif
		static void NewProp_bCancelRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilityTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilityTask_FinishExecutingTask, "FinishExecutingTask" }, // 3031561318
		{ &Z_Construct_UFunction_UEditorUtilityTask_ReceiveBeginExecution, "ReceiveBeginExecution" }, // 1103191423
		{ &Z_Construct_UFunction_UEditorUtilityTask_ReceiveCancelRequested, "ReceiveCancelRequested" }, // 2246187947
		{ &Z_Construct_UFunction_UEditorUtilityTask_Run, "Run" }, // 3682899078
		{ &Z_Construct_UFunction_UEditorUtilityTask_SetTaskNotificationText, "SetTaskNotificationText" }, // 648905045
		{ &Z_Construct_UFunction_UEditorUtilityTask_WasCancelRequested, "WasCancelRequested" }, // 3256030837
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorUtilityTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyTaskManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyTaskManager = { "MyTaskManager", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTask, MyTaskManager), Z_Construct_UClass_UEditorUtilitySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyTaskManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyTaskManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyParentTask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyParentTask = { "MyParentTask", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityTask, MyParentTask), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyParentTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyParentTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EditorUtilityTask.h" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested_SetBit(void* Obj)
	{
		((UEditorUtilityTask*)Obj)->bCancelRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested = { "bCancelRequested", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorUtilityTask), &Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyTaskManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_MyParentTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityTask_Statics::NewProp_bCancelRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityTask_Statics::ClassParams = {
		&UEditorUtilityTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUtilityTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTask_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityTask()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityTask.OuterSingleton, Z_Construct_UClass_UEditorUtilityTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityTask.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityTask>()
	{
		return UEditorUtilityTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityTask);
	UEditorUtilityTask::~UEditorUtilityTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityTask, UEditorUtilityTask::StaticClass, TEXT("UEditorUtilityTask"), &Z_Registration_Info_UClass_UEditorUtilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityTask), 680929726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_3689231601(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
