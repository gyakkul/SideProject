// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTaskState;
	static UEnum* EGameplayTaskState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState, (UObject*)Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskState"));
		}
		return Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskState>()
	{
		return EGameplayTaskState_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enumerators[] = {
		{ "EGameplayTaskState::Uninitialized", (int64)EGameplayTaskState::Uninitialized },
		{ "EGameplayTaskState::AwaitingActivation", (int64)EGameplayTaskState::AwaitingActivation },
		{ "EGameplayTaskState::Paused", (int64)EGameplayTaskState::Paused },
		{ "EGameplayTaskState::Active", (int64)EGameplayTaskState::Active },
		{ "EGameplayTaskState::Finished", (int64)EGameplayTaskState::Finished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EGameplayTaskState::Active" },
		{ "AwaitingActivation.Name", "EGameplayTaskState::AwaitingActivation" },
		{ "Finished.Name", "EGameplayTaskState::Finished" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "Paused.Name", "EGameplayTaskState::Paused" },
		{ "Uninitialized.Name", "EGameplayTaskState::Uninitialized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
		nullptr,
		"EGameplayTaskState",
		"EGameplayTaskState",
		Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton, Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTaskState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy;
	static UEnum* ETaskResourceOverlapPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayTasks(), TEXT("ETaskResourceOverlapPolicy"));
		}
		return Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UEnum* StaticEnum<ETaskResourceOverlapPolicy>()
	{
		return ETaskResourceOverlapPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enumerators[] = {
		{ "ETaskResourceOverlapPolicy::StartOnTop", (int64)ETaskResourceOverlapPolicy::StartOnTop },
		{ "ETaskResourceOverlapPolicy::StartAtEnd", (int64)ETaskResourceOverlapPolicy::StartAtEnd },
		{ "ETaskResourceOverlapPolicy::RequestCancelAndStartOnTop", (int64)ETaskResourceOverlapPolicy::RequestCancelAndStartOnTop },
		{ "ETaskResourceOverlapPolicy::RequestCancelAndStartAtEnd", (int64)ETaskResourceOverlapPolicy::RequestCancelAndStartAtEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "RequestCancelAndStartAtEnd.Comment", "/** Request to cancel same or lower priority tasks, wait for any remaining overlapping same-priority tasks to finish. */" },
		{ "RequestCancelAndStartAtEnd.Name", "ETaskResourceOverlapPolicy::RequestCancelAndStartAtEnd" },
		{ "RequestCancelAndStartAtEnd.ToolTip", "Request to cancel same or lower priority tasks, wait for any remaining overlapping same-priority tasks to finish." },
		{ "RequestCancelAndStartOnTop.Comment", "/** Request to cancel same or lower priority tasks, if tasks not ended pause overlapping same-priority tasks. */" },
		{ "RequestCancelAndStartOnTop.Name", "ETaskResourceOverlapPolicy::RequestCancelAndStartOnTop" },
		{ "RequestCancelAndStartOnTop.ToolTip", "Request to cancel same or lower priority tasks, if tasks not ended pause overlapping same-priority tasks." },
		{ "StartAtEnd.Comment", "/** Wait for other same-priority tasks to finish. */" },
		{ "StartAtEnd.Name", "ETaskResourceOverlapPolicy::StartAtEnd" },
		{ "StartAtEnd.ToolTip", "Wait for other same-priority tasks to finish." },
		{ "StartOnTop.Comment", "/** Pause overlapping same-priority tasks. */" },
		{ "StartOnTop.Name", "ETaskResourceOverlapPolicy::StartOnTop" },
		{ "StartOnTop.ToolTip", "Pause overlapping same-priority tasks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
		nullptr,
		"ETaskResourceOverlapPolicy",
		"ETaskResourceOverlapPolicy",
		Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy()
	{
		if (!Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton, Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayResourceSet;
class UScriptStruct* FGameplayResourceSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayResourceSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayResourceSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayResourceSet, (UObject*)Z_Construct_UPackage__Script_GameplayTasks(), TEXT("GameplayResourceSet"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayResourceSet.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UScriptStruct* StaticStruct<FGameplayResourceSet>()
{
	return FGameplayResourceSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayResourceSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayResourceSet>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
		nullptr,
		&NewStructOps,
		"GameplayResourceSet",
		sizeof(FGameplayResourceSet),
		alignof(FGameplayResourceSet),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayResourceSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayResourceSet.InnerSingleton, Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayResourceSet.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "GenericGameplayTaskDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGameplayTask::FGenericGameplayTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& GenericGameplayTaskDelegate)
{
	GenericGameplayTaskDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGameplayTask::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask::execReadyForActivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadyForActivation();
		P_NATIVE_END;
	}
	void UGameplayTask::StaticRegisterNativesUGameplayTask()
	{
		UClass* Class = UGameplayTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &UGameplayTask::execEndTask },
			{ "ReadyForActivation", &UGameplayTask::execReadyForActivation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_EndTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTasks" },
		{ "Comment", "/** Called explicitly to end the task (usually by the task itself). Calls OnDestroy. \n\x09 *\x09@NOTE: you need to call EndTask before sending out any \"on completed\" delegates. \n\x09 *\x09If you don't the task will still be in an \"active\" state while the event receivers may\n\x09 *\x09""assume it's already \"finished\" */" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "Called explicitly to end the task (usually by the task itself). Calls OnDestroy.\n    @NOTE: you need to call EndTask before sending out any \"on completed\" delegates.\n    If you don't the task will still be in an \"active\" state while the event receivers may\n    assume it's already \"finished\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "EndTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Gameplay Tasks" },
		{ "Comment", "/** Called to trigger the actual task once the delegates have been set up */" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "Called to trigger the actual task once the delegates have been set up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "ReadyForActivation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ReadyForActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask);
	UClass* Z_Construct_UClass_UGameplayTask_NoRegister()
	{
		return UGameplayTask::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceOverlapPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceOverlapPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceOverlapPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_EndTask, "EndTask" }, // 595595078
		{ &Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, "GenericGameplayTaskDelegate__DelegateSignature" }, // 2832075636
		{ &Z_Construct_UFunction_UGameplayTask_ReadyForActivation, "ReadyForActivation" }, // 969691167
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "GameplayTask.h" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Comment", "/** This name allows us to find the task later so that we can end it. */" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "This name allows us to find the task later so that we can end it." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask, InstanceName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy = { "ResourceOverlapPolicy", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask, ResourceOverlapPolicy), Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData)) }; // 417361591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData[] = {
		{ "Comment", "/** child task instance */" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "child task instance" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask, ChildTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTask_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask, IGameplayTaskOwnerInterface), false },  // 2384509100
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_Statics::ClassParams = {
		&UGameplayTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask.OuterSingleton, Z_Construct_UClass_UGameplayTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask>()
	{
		return UGameplayTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask);
	UGameplayTask::~UGameplayTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::EnumInfo[] = {
		{ EGameplayTaskState_StaticEnum, TEXT("EGameplayTaskState"), &Z_Registration_Info_UEnum_EGameplayTaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 399772840U) },
		{ ETaskResourceOverlapPolicy_StaticEnum, TEXT("ETaskResourceOverlapPolicy"), &Z_Registration_Info_UEnum_ETaskResourceOverlapPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 417361591U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ScriptStructInfo[] = {
		{ FGameplayResourceSet::StaticStruct, Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::NewStructOps, TEXT("GameplayResourceSet"), &Z_Registration_Info_UScriptStruct_GameplayResourceSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayResourceSet), 3324787803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask, UGameplayTask::StaticClass, TEXT("UGameplayTask"), &Z_Registration_Info_UClass_UGameplayTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask), 2751038254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_1409983856(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
