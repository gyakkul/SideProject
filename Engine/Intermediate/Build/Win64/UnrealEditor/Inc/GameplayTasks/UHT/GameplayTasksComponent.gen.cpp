// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasksComponent.h"
#include "GameplayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTaskRunResult;
	static UEnum* EGameplayTaskRunResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, (UObject*)Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskRunResult"));
		}
		return Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskRunResult>()
	{
		return EGameplayTaskRunResult_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enumerators[] = {
		{ "EGameplayTaskRunResult::Error", (int64)EGameplayTaskRunResult::Error },
		{ "EGameplayTaskRunResult::Failed", (int64)EGameplayTaskRunResult::Failed },
		{ "EGameplayTaskRunResult::Success_Paused", (int64)EGameplayTaskRunResult::Success_Paused },
		{ "EGameplayTaskRunResult::Success_Active", (int64)EGameplayTaskRunResult::Success_Active },
		{ "EGameplayTaskRunResult::Success_Finished", (int64)EGameplayTaskRunResult::Success_Finished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enum_MetaDataParams[] = {
		{ "Error.Comment", "/** When tried running a null-task*/" },
		{ "Error.Name", "EGameplayTaskRunResult::Error" },
		{ "Error.ToolTip", "When tried running a null-task" },
		{ "Failed.Name", "EGameplayTaskRunResult::Failed" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "Success_Active.Comment", "/** Successfully activated */" },
		{ "Success_Active.Name", "EGameplayTaskRunResult::Success_Active" },
		{ "Success_Active.ToolTip", "Successfully activated" },
		{ "Success_Finished.Comment", "/** Successfully activated, but finished instantly */" },
		{ "Success_Finished.Name", "EGameplayTaskRunResult::Success_Finished" },
		{ "Success_Finished.ToolTip", "Successfully activated, but finished instantly" },
		{ "Success_Paused.Comment", "/** Successfully registered for running, but currently paused due to higher priority tasks running */" },
		{ "Success_Paused.Name", "EGameplayTaskRunResult::Success_Paused" },
		{ "Success_Paused.ToolTip", "Successfully registered for running, but currently paused due to higher priority tasks running" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
		nullptr,
		"EGameplayTaskRunResult",
		"EGameplayTaskRunResult",
		Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton, Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics
	{
		struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
		{
			FGameplayResourceSet NewlyClaimed;
			FGameplayResourceSet FreshlyReleased;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed = { "NewlyClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) }; // 3324787803
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased = { "FreshlyReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) }; // 3324787803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, nullptr, "OnClaimedResourcesChangeSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClaimedResourcesChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClaimedResourcesChangeSignature, FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased)
{
	struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
	{
		FGameplayResourceSet NewlyClaimed;
		FGameplayResourceSet FreshlyReleased;
	};
	_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms Parms;
	Parms.NewlyClaimed=NewlyClaimed;
	Parms.FreshlyReleased=FreshlyReleased;
	OnClaimedResourcesChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGameplayTasksComponent::execK2_RunGameplayTask)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
		P_GET_OBJECT(UGameplayTask,Z_Param_Task);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_GET_TARRAY(TSubclassOf<UGameplayTaskResource> ,Z_Param_AdditionalRequiredResources);
		P_GET_TARRAY(TSubclassOf<UGameplayTaskResource> ,Z_Param_AdditionalClaimedResources);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameplayTaskRunResult*)Z_Param__Result=UGameplayTasksComponent::K2_RunGameplayTask(Z_Param_TaskOwner,Z_Param_Task,Z_Param_Priority,Z_Param_AdditionalRequiredResources,Z_Param_AdditionalClaimedResources);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTasksComponent::execOnRep_SimulatedTasks)
	{
		P_GET_TARRAY_REF(UGameplayTask*,Z_Param_Out_PreviousSimulatedTasks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SimulatedTasks(Z_Param_Out_PreviousSimulatedTasks);
		P_NATIVE_END;
	}
	void UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent()
	{
		UClass* Class = UGameplayTasksComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_RunGameplayTask", &UGameplayTasksComponent::execK2_RunGameplayTask },
			{ "OnRep_SimulatedTasks", &UGameplayTasksComponent::execOnRep_SimulatedTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics
	{
		struct GameplayTasksComponent_eventK2_RunGameplayTask_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			UGameplayTask* Task;
			uint8 Priority;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalRequiredResources;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalClaimedResources;
			EGameplayTaskRunResult ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalRequiredResources_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRequiredResources;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalClaimedResources_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalClaimedResources;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Task), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Priority), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner = { "AdditionalRequiredResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources = { "AdditionalRequiredResources", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalRequiredResources), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner = { "AdditionalClaimedResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources = { "AdditionalClaimedResources", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalClaimedResources), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, ReturnValue), Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, METADATA_PARAMS(nullptr, 0) }; // 1888919400
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "AutoCreateRefTerm", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "Category", "Gameplay Tasks" },
		{ "DisplayName", "Run Gameplay Task" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ScriptName", "RunGameplayTask" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, nullptr, "K2_RunGameplayTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::GameplayTasksComponent_eventK2_RunGameplayTask_Parms), Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics
	{
		struct GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms
		{
			TArray<UGameplayTask*> PreviousSimulatedTasks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousSimulatedTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSimulatedTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousSimulatedTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_Inner = { "PreviousSimulatedTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks = { "PreviousSimulatedTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms, PreviousSimulatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, nullptr, "OnRep_SimulatedTasks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms), Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTasksComponent);
	UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister()
	{
		return UGameplayTasksComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTasksComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNetDirty_MetaData[];
#endif
		static void NewProp_bIsNetDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNetDirty;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TaskPriorityQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskPriorityQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskPriorityQueue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TickingTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickingTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TickingTasks;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KnownTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnownTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KnownTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClaimedResourcesChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClaimedResourcesChange;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulatedTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulatedTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTasksComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTasksComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask, "K2_RunGameplayTask" }, // 3886655603
		{ &Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks, "OnRep_SimulatedTasks" }, // 472976839
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameplayTasks" },
		{ "Comment", "/**\n*\x09The core ActorComponent for interfacing with the GameplayAbilities System\n*/" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayTasksComponent.h" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The core ActorComponent for interfacing with the GameplayAbilities System" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData[] = {
		{ "Comment", "/** Set to indicate that GameplayTasksComponent needs immediate replication. @TODO could just use ForceReplication(), but this allows initial implementation to be game specific. */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Set to indicate that GameplayTasksComponent needs immediate replication. @TODO could just use ForceReplication(), but this allows initial implementation to be game specific." },
	};
#endif
	void Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_SetBit(void* Obj)
	{
		((UGameplayTasksComponent*)Obj)->bIsNetDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty = { "bIsNetDirty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameplayTasksComponent), &Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner = { "TaskPriorityQueue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue = { "TaskPriorityQueue", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TaskPriorityQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner = { "TickingTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData[] = {
		{ "Comment", "/** Array of currently active UGameplayTask that require ticking */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Array of currently active UGameplayTask that require ticking" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks = { "TickingTasks", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TickingTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner = { "KnownTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData[] = {
		{ "Comment", "/** All known tasks (processed by this component) referenced for GC */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "All known tasks (processed by this component) referenced for GC" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks = { "KnownTasks", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, KnownTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData[] = {
		{ "Category", "Gameplay Tasks" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange = { "OnClaimedResourcesChange", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, OnClaimedResourcesChange), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData)) }; // 2209643818
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner = { "SimulatedTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData[] = {
		{ "Comment", "/** Tasks that run on simulated proxies */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Tasks that run on simulated proxies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks = { "SimulatedTasks", "OnRep_SimulatedTasks", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, SimulatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTasksComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IGameplayTaskOwnerInterface), false },  // 2384509100
			{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IVisualLoggerDebugSnapshotInterface), false },  // 224036737
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTasksComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTasksComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams = {
		&UGameplayTasksComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTasksComponent()
	{
		if (!Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton, Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTasksComponent>()
	{
		return UGameplayTasksComponent::StaticClass();
	}

	void UGameplayTasksComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SimulatedTasks(TEXT("SimulatedTasks"));

		const bool bIsValid = true
			&& Name_SimulatedTasks == ClassReps[(int32)ENetFields_Private::SimulatedTasks].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameplayTasksComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTasksComponent);
	UGameplayTasksComponent::~UGameplayTasksComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::EnumInfo[] = {
		{ EGameplayTaskRunResult_StaticEnum, TEXT("EGameplayTaskRunResult"), &Z_Registration_Info_UEnum_EGameplayTaskRunResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888919400U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTasksComponent, UGameplayTasksComponent::StaticClass, TEXT("UGameplayTasksComponent"), &Z_Registration_Info_UClass_UGameplayTasksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTasksComponent), 726451880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_2226899142(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
