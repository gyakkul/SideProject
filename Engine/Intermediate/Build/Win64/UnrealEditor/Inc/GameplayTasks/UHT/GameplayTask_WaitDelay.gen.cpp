// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/GameplayTask_WaitDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay() {}
// Cross Module References
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskDelayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGameplayTask_WaitDelay::FTaskDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelayDelegate)
{
	TaskDelayDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGameplayTask_WaitDelay::execTaskWaitDelay)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time,Z_Param_Priority);
		P_NATIVE_END;
	}
	void UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay()
	{
		UClass* Class = UGameplayTask_WaitDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskWaitDelay", &UGameplayTask_WaitDelay::execTaskWaitDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics
	{
		struct GameplayTask_WaitDelay_eventTaskWaitDelay_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			float Time;
			uint8 Priority;
			UGameplayTask_WaitDelay* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TaskOwner, Priority" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GameplayTasks" },
		{ "Comment", "/** Wait specified time. This is functionally the same as a standard Delay node. */" },
		{ "CPP_Default_Priority", "192" },
		{ "DefaultToSelf", "TaskOwner" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskWaitDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::GameplayTask_WaitDelay_eventTaskWaitDelay_Parms), Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_WaitDelay);
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister()
	{
		return UGameplayTask_WaitDelay::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_WaitDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, "TaskDelayDelegate__DelegateSignature" }, // 3363906893
		{ &Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay, "TaskWaitDelay" }, // 657270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/GameplayTask_WaitDelay.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_WaitDelay, OnFinish), Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish_MetaData)) }; // 3363906893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_WaitDelay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams = {
		&UGameplayTask_WaitDelay::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_WaitDelay()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton, Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_WaitDelay>()
	{
		return UGameplayTask_WaitDelay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_WaitDelay);
	UGameplayTask_WaitDelay::~UGameplayTask_WaitDelay() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_WaitDelay, UGameplayTask_WaitDelay::StaticClass, TEXT("UGameplayTask_WaitDelay"), &Z_Registration_Info_UClass_UGameplayTask_WaitDelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_WaitDelay), 3587406576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_4061690225(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
