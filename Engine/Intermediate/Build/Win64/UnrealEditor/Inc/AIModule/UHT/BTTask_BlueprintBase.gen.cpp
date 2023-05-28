// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "../../AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIntervalCountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execIsTaskAborting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTaskAborting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execIsTaskExecuting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTaskExecuting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execSetFinishOnMessageWithId)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MessageName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RequestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFinishOnMessageWithId(Z_Param_MessageName,Z_Param_RequestID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execSetFinishOnMessage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MessageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFinishOnMessage(Z_Param_MessageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execFinishAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAbort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTTask_BlueprintBase::execFinishExecute)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishExecute(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	struct BTTask_BlueprintBase_eventReceiveAbort_Parms
	{
		AActor* OwnerActor;
	};
	struct BTTask_BlueprintBase_eventReceiveAbortAI_Parms
	{
		AAIController* OwnerController;
		APawn* ControlledPawn;
	};
	struct BTTask_BlueprintBase_eventReceiveExecute_Parms
	{
		AActor* OwnerActor;
	};
	struct BTTask_BlueprintBase_eventReceiveExecuteAI_Parms
	{
		AAIController* OwnerController;
		APawn* ControlledPawn;
	};
	struct BTTask_BlueprintBase_eventReceiveTick_Parms
	{
		AActor* OwnerActor;
		float DeltaSeconds;
	};
	struct BTTask_BlueprintBase_eventReceiveTickAI_Parms
	{
		AAIController* OwnerController;
		APawn* ControlledPawn;
		float DeltaSeconds;
	};
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbort = FName(TEXT("ReceiveAbort"));
	void UBTTask_BlueprintBase::ReceiveAbort(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveAbort_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbort),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbortAI = FName(TEXT("ReceiveAbortAI"));
	void UBTTask_BlueprintBase::ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveAbortAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbortAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecute = FName(TEXT("ReceiveExecute"));
	void UBTTask_BlueprintBase::ReceiveExecute(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveExecute_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecute),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecuteAI = FName(TEXT("ReceiveExecuteAI"));
	void UBTTask_BlueprintBase::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveExecuteAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecuteAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTTask_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTTask_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTTask_BlueprintBase::StaticRegisterNativesUBTTask_BlueprintBase()
	{
		UClass* Class = UBTTask_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAbort", &UBTTask_BlueprintBase::execFinishAbort },
			{ "FinishExecute", &UBTTask_BlueprintBase::execFinishExecute },
			{ "IsTaskAborting", &UBTTask_BlueprintBase::execIsTaskAborting },
			{ "IsTaskExecuting", &UBTTask_BlueprintBase::execIsTaskExecuting },
			{ "SetFinishOnMessage", &UBTTask_BlueprintBase::execSetFinishOnMessage },
			{ "SetFinishOnMessageWithId", &UBTTask_BlueprintBase::execSetFinishOnMessageWithId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** aborts task execution */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "aborts task execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "FinishAbort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics
	{
		struct BTTask_BlueprintBase_eventFinishExecute_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventFinishExecute_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BTTask_BlueprintBase_eventFinishExecute_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** finishes task execution with Success or Fail result */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "finishes task execution with Success or Fail result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "FinishExecute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::BTTask_BlueprintBase_eventFinishExecute_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics
	{
		struct BTTask_BlueprintBase_eventIsTaskAborting_Parms
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
	void Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventIsTaskAborting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BTTask_BlueprintBase_eventIsTaskAborting_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** check if task is currently being aborted */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "check if task is currently being aborted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "IsTaskAborting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::BTTask_BlueprintBase_eventIsTaskAborting_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics
	{
		struct BTTask_BlueprintBase_eventIsTaskExecuting_Parms
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
	void Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventIsTaskExecuting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BTTask_BlueprintBase_eventIsTaskExecuting_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** check if task is currently being executed */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "check if task is currently being executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "IsTaskExecuting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::BTTask_BlueprintBase_eventIsTaskExecuting_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbort_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** if blueprint graph contains this event, task will stay active until FinishAbort is called\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "if blueprint graph contains this event, task will stay active until FinishAbort is called\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveAbort", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveAbort_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_OwnerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveAbort\n\x09 *\x09@see ReceiveAbort for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveAbort\n    @see ReceiveAbort for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveAbortAI", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveAbortAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecute_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** entry point, task will stay active until FinishExecute is called.\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more \n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "entry point, task will stay active until FinishExecute is called.\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveExecute", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveExecute_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_OwnerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of ReceiveExecute\n\x09*\x09@see ReceiveExecute for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveExecute\n     @see ReceiveExecute for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveExecuteAI", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** tick function\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveTick_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Alternative AI version of tick function.\n\x09 *\x09@see ReceiveTick for more details\n\x09 *\x09@Note that if both generic and AI event versions are implemented only the more\n\x09 *\x09suitable one will be called, meaning the AI version if called for AI, generic one otherwise */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of tick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "ReceiveTickAI", nullptr, nullptr, sizeof(BTTask_BlueprintBase_eventReceiveTickAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessage_Parms
		{
			FName MessageName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MessageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::NewProp_MessageName = { "MessageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessage_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::NewProp_MessageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** task execution will be finished (with result 'Success') after receiving specified message */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "SetFinishOnMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::BTTask_BlueprintBase_eventSetFinishOnMessage_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms
		{
			FName MessageName;
			int32 RequestID;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MessageName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_MessageName = { "MessageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_MessageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "Comment", "/** task execution will be finished (with result 'Success') after receiving specified message with indicated ID */" },
		{ "CPP_Default_RequestID", "-1" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message with indicated ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, nullptr, "SetFinishOnMessageWithId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_BlueprintBase);
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister()
	{
		return UBTTask_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickInterval;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomDescription;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[];
#endif
		static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort, "FinishAbort" }, // 3439040156
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute, "FinishExecute" }, // 1585574317
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting, "IsTaskAborting" }, // 2610165543
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting, "IsTaskExecuting" }, // 3001621329
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort, "ReceiveAbort" }, // 1093387850
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI, "ReceiveAbortAI" }, // 1498759149
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute, "ReceiveExecute" }, // 2780907375
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI, "ReceiveExecuteAI" }, // 1103947219
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 332233727
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 434665639
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage, "SetFinishOnMessage" }, // 2881538160
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId, "SetFinishOnMessageWithId" }, // 4220443358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Base class for blueprint based task nodes. Do NOT use it for creating native c++ classes!\n *\n *  When task receives Abort event, all latent actions associated this instance are being removed.\n *  This prevents from resuming activity started by Execute, but does not handle external events.\n *  Please use them safely (unregister at abort) and call IsTaskExecuting() when in doubt.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Base class for blueprint based task nodes. Do NOT use it for creating native c++ classes!\n\nWhen task receives Abort event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Execute, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsTaskExecuting() when in doubt." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData[] = {
		{ "Comment", "/** Cached AIController owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData[] = {
		{ "Comment", "/** Cached actor owner of BehaviorTreeComponent. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** If any of the Tick functions is implemented, how often should they be ticked.\n\x09 *\x09Values < 0 mean 'every tick'. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "If any of the Tick functions is implemented, how often should they be ticked.\n    Values < 0 mean 'every tick'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, TickInterval), Z_Construct_UScriptStruct_FIntervalCountdown, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_TickInterval_MetaData)) }; // 1316774518
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_CustomDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_CustomDescription = { "CustomDescription", nullptr, (EPropertyFlags)0x0020080800010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, CustomDescription), METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_CustomDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_CustomDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** show detailed information about properties */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
	{
		((UBTTask_BlueprintBase*)Obj)->bShowPropertyDetails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails = { "bShowPropertyDetails", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTask_BlueprintBase), &Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_TickInterval,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_CustomDescription,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::ClassParams = {
		&UBTTask_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UBTTask_BlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_BlueprintBase.OuterSingleton, Z_Construct_UClass_UBTTask_BlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_BlueprintBase.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_BlueprintBase>()
	{
		return UBTTask_BlueprintBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BlueprintBase);
	UBTTask_BlueprintBase::~UBTTask_BlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_BlueprintBase, UBTTask_BlueprintBase::StaticClass, TEXT("UBTTask_BlueprintBase"), &Z_Registration_Info_UClass_UBTTask_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_BlueprintBase), 1379345251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_3466029825(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
