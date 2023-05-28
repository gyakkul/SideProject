// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/StateTreeComponent.h"
#include "StateTreeEvents.h"
#include "StateTreeInstanceData.h"
#include "StateTreeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponent();
	GAMEPLAYSTATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeComponent_NoRegister();
	GAMEPLAYSTATETREEMODULE_API UFunction* Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
	UPackage* Z_Construct_UPackage__Script_GameplayStateTreeModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics
	{
		struct _Script_GameplayStateTreeModule_eventStateTreeRunStatusChanged_Parms
		{
			EStateTreeRunStatus StateTreeRunStatus;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateTreeRunStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateTreeRunStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::NewProp_StateTreeRunStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::NewProp_StateTreeRunStatus = { "StateTreeRunStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayStateTreeModule_eventStateTreeRunStatusChanged_Parms, StateTreeRunStatus), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(nullptr, 0) }; // 2388265834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::NewProp_StateTreeRunStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::NewProp_StateTreeRunStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayStateTreeModule, nullptr, "StateTreeRunStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::_Script_GameplayStateTreeModule_eventStateTreeRunStatusChanged_Parms), Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStateTreeRunStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTreeRunStatusChanged, EStateTreeRunStatus StateTreeRunStatus)
{
	struct _Script_GameplayStateTreeModule_eventStateTreeRunStatusChanged_Parms
	{
		EStateTreeRunStatus StateTreeRunStatus;
	};
	_Script_GameplayStateTreeModule_eventStateTreeRunStatusChanged_Parms Parms;
	Parms.StateTreeRunStatus=StateTreeRunStatus;
	StateTreeRunStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UStateTreeComponent::execGetStateTreeRunStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EStateTreeRunStatus*)Z_Param__Result=P_THIS->GetStateTreeRunStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTreeComponent::execSendStateTreeEvent)
	{
		P_GET_STRUCT_REF(FStateTreeEvent,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendStateTreeEvent(Z_Param_Out_Event);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTreeComponent::execSetStartLogicAutomatically)
	{
		P_GET_UBOOL(Z_Param_bInStartLogicAutomatically);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartLogicAutomatically(Z_Param_bInStartLogicAutomatically);
		P_NATIVE_END;
	}
	void UStateTreeComponent::StaticRegisterNativesUStateTreeComponent()
	{
		UClass* Class = UStateTreeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStateTreeRunStatus", &UStateTreeComponent::execGetStateTreeRunStatus },
			{ "SendStateTreeEvent", &UStateTreeComponent::execSendStateTreeEvent },
			{ "SetStartLogicAutomatically", &UStateTreeComponent::execSetStartLogicAutomatically },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics
	{
		struct StateTreeComponent_eventGetStateTreeRunStatus_Parms
		{
			EStateTreeRunStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateTreeComponent_eventGetStateTreeRunStatus_Parms, ReturnValue), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(nullptr, 0) }; // 2388265834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay|StateTree" },
		{ "Comment", "/** Returns the current run status of the StateTree. */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ToolTip", "Returns the current run status of the StateTree." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeComponent, nullptr, "GetStateTreeRunStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::StateTreeComponent_eventGetStateTreeRunStatus_Parms), Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics
	{
		struct StateTreeComponent_eventSendStateTreeEvent_Parms
		{
			FStateTreeEvent Event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateTreeComponent_eventSendStateTreeEvent_Parms, Event), Z_Construct_UScriptStruct_FStateTreeEvent, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::NewProp_Event_MetaData)) }; // 2095952963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay|StateTree" },
		{ "Comment", "/** Sends event to the running StateTree. */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ToolTip", "Sends event to the running StateTree." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeComponent, nullptr, "SendStateTreeEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::StateTreeComponent_eventSendStateTreeEvent_Parms), Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics
	{
		struct StateTreeComponent_eventSetStartLogicAutomatically_Parms
		{
			bool bInStartLogicAutomatically;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInStartLogicAutomatically_MetaData[];
#endif
		static void NewProp_bInStartLogicAutomatically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInStartLogicAutomatically;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically_SetBit(void* Obj)
	{
		((StateTreeComponent_eventSetStartLogicAutomatically_Parms*)Obj)->bInStartLogicAutomatically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically = { "bInStartLogicAutomatically", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StateTreeComponent_eventSetStartLogicAutomatically_Parms), &Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::NewProp_bInStartLogicAutomatically,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay|StateTree" },
		{ "Comment", "/** Sets whether the State Tree is started automatically on being play. */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ToolTip", "Sets whether the State Tree is started automatically on being play." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeComponent, nullptr, "SetStartLogicAutomatically", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::StateTreeComponent_eventSetStartLogicAutomatically_Parms), Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeComponent);
	UClass* Z_Construct_UClass_UStateTreeComponent_NoRegister()
	{
		return UStateTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateTreeRunStatusChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateTreeRunStatusChanged;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTree;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateTreeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartLogicAutomatically_MetaData[];
#endif
		static void NewProp_bStartLogicAutomatically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartLogicAutomatically;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrainComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayStateTreeModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTreeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeComponent_GetStateTreeRunStatus, "GetStateTreeRunStatus" }, // 908957972
		{ &Z_Construct_UFunction_UStateTreeComponent_SendStateTreeEvent, "SendStateTreeEvent" }, // 2224937657
		{ &Z_Construct_UFunction_UStateTreeComponent_SetStartLogicAutomatically, "SetStartLogicAutomatically" }, // 4261810308
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Activation Collision Sockets Collision" },
		{ "IncludePath", "Components/StateTreeComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_OnStateTreeRunStatusChanged_MetaData[] = {
		{ "Category", "Gameplay|StateTree" },
		{ "Comment", "/** Called when the run status of the StateTree has changed */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ToolTip", "Called when the run status of the StateTree has changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_OnStateTreeRunStatusChanged = { "OnStateTreeRunStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponent, OnStateTreeRunStatusChanged), Z_Construct_UDelegateFunction_GameplayStateTreeModule_StateTreeRunStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_OnStateTreeRunStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_OnStateTreeRunStatusChanged_MetaData)) }; // 3070054348
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponent, StateTree_DEPRECATED), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTree_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTreeRef_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "Schema", "/Script/GameplayStateTreeModule.StateTreeComponentSchema" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTreeRef = { "StateTreeRef", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponent, StateTreeRef), Z_Construct_UScriptStruct_FStateTreeReference, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTreeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTreeRef_MetaData)) }; // 323372279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, the StateTree logic is started on begin play. Otherwise StartLogic() needs to be called. */" },
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
		{ "ToolTip", "If true, the StateTree logic is started on begin play. Otherwise StartLogic() needs to be called." },
	};
#endif
	void Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically_SetBit(void* Obj)
	{
		((UStateTreeComponent*)Obj)->bStartLogicAutomatically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically = { "bStartLogicAutomatically", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStateTreeComponent), &Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_InstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/StateTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeComponent, InstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_InstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_InstanceData_MetaData)) }; // 4128275611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_OnStateTreeRunStatusChanged,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTree,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_StateTreeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_bStartLogicAutomatically,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeComponent_Statics::NewProp_InstanceData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStateTreeComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UStateTreeComponent, IGameplayTaskOwnerInterface), false },  // 2384509100
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeComponent_Statics::ClassParams = {
		&UStateTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateTreeComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeComponent()
	{
		if (!Z_Registration_Info_UClass_UStateTreeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeComponent.OuterSingleton, Z_Construct_UClass_UStateTreeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeComponent.OuterSingleton;
	}
	template<> GAMEPLAYSTATETREEMODULE_API UClass* StaticClass<UStateTreeComponent>()
	{
		return UStateTreeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeComponent);
	UStateTreeComponent::~UStateTreeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeComponent, UStateTreeComponent::StaticClass, TEXT("UStateTreeComponent"), &Z_Registration_Info_UClass_UStateTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeComponent), 1598656005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_3939954769(TEXT("/Script/GameplayStateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayStateTree_Source_GameplayStateTreeModule_Public_Components_StateTreeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
