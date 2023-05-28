// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Actions/PawnActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnActionsComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnActionEvent;
class UScriptStruct* FPawnActionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionEvent>()
{
	return FPawnActionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPawnActionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPawnActionEvent, Action_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"PawnActionEvent",
		sizeof(FPawnActionEvent),
		alignof(FPawnActionEvent),
		Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton, Z_Construct_UScriptStruct_FPawnActionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnActionStack;
class UScriptStruct* FPawnActionStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionStack, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionStack"));
	}
	return Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionStack>()
{
	return FPawnActionStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPawnActionStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionStack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction = { "TopAction", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPawnActionStack, TopAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"PawnActionStack",
		sizeof(FPawnActionStack),
		alignof(FPawnActionStack),
		Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack()
	{
		if (!Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton, Z_Construct_UScriptStruct_FPawnActionStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_ForceAbortAction)
	{
		P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_ActionToAbort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPawnActionAbortState::Type>*)Z_Param__Result=P_THIS->K2_ForceAbortAction(Z_Param_ActionToAbort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_AbortAction)
	{
		P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_ActionToAbort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPawnActionAbortState::Type>*)Z_Param__Result=P_THIS->K2_AbortAction(Z_Param_ActionToAbort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_PushAction)
	{
		P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_NewAction);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_GET_OBJECT(UObject,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_PushAction(Z_Param_NewAction,EAIRequestPriority::Type(Z_Param_Priority),Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_PerformAction)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_Action);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_PawnActionsComponent::K2_PerformAction(Z_Param_Pawn,Z_Param_Action,EAIRequestPriority::Type(Z_Param_Priority));
		P_NATIVE_END;
	}
	void UDEPRECATED_PawnActionsComponent::StaticRegisterNativesUDEPRECATED_PawnActionsComponent()
	{
		UClass* Class = UDEPRECATED_PawnActionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AbortAction", &UDEPRECATED_PawnActionsComponent::execK2_AbortAction },
			{ "K2_ForceAbortAction", &UDEPRECATED_PawnActionsComponent::execK2_ForceAbortAction },
			{ "K2_PerformAction", &UDEPRECATED_PawnActionsComponent::execK2_PerformAction },
			{ "K2_PushAction", &UDEPRECATED_PawnActionsComponent::execK2_PushAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics
	{
		struct PawnActionsComponent_eventK2_AbortAction_Parms
		{
			UDEPRECATED_PawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ActionToAbort), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) }; // 1433804132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** Aborts given action instance */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "AbortAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "AbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_AbortAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PawnActionsComponent_eventK2_AbortAction_Parms), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics
	{
		struct PawnActionsComponent_eventK2_ForceAbortAction_Parms
		{
			UDEPRECATED_PawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ActionToAbort), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) }; // 1433804132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** Aborts given action instance */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "ForceAbortAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "ForceAbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_ForceAbortAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PawnActionsComponent_eventK2_ForceAbortAction_Parms), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics
	{
		struct PawnActionsComponent_eventK2_PerformAction_Parms
		{
			APawn* Pawn;
			UDEPRECATED_PawnAction* Action;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Action), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) }; // 1603953104
	void Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PawnActionsComponent_eventK2_PerformAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "CPP_Default_Priority", "HardScript" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "PerformAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PerformAction" },
		{ "ToolTip", "blueprint interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_PerformAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PawnActionsComponent_eventK2_PerformAction_Parms), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics
	{
		struct PawnActionsComponent_eventK2_PushAction_Parms
		{
			UDEPRECATED_PawnAction* NewAction;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			UObject* Instigator;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, NewAction), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) }; // 1603953104
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PawnActionsComponent_eventK2_PushAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PushAction_Parms), &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "CPP_Default_Instigator", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "PushAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PushAction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_PushAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PawnActionsComponent_eventK2_PushAction_Parms), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnActionsComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister()
	{
		return UDEPRECATED_PawnActionsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionStacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionStacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionStacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction, "K2_AbortAction" }, // 2353253378
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction, "K2_ForceAbortAction" }, // 561075258
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction, "K2_PerformAction" }, // 722535247
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction, "K2_PushAction" }, // 976306485
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "IncludePath", "Actions/PawnActionsComponent.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "Category", "PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_Inner = { "ActionStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPawnActionStack, METADATA_PARAMS(nullptr, 0) }; // 2905795445
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks = { "ActionStacks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ActionStacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_MetaData)) }; // 2905795445
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_Inner = { "ActionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPawnActionEvent, METADATA_PARAMS(nullptr, 0) }; // 691200159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents = { "ActionEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ActionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_MetaData)) }; // 691200159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0024080020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, CurrentAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnActionsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::ClassParams = {
		&UDEPRECATED_PawnActionsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnActionsComponent>()
	{
		return UDEPRECATED_PawnActionsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnActionsComponent);
	UDEPRECATED_PawnActionsComponent::~UDEPRECATED_PawnActionsComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ScriptStructInfo[] = {
		{ FPawnActionEvent::StaticStruct, Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewStructOps, TEXT("PawnActionEvent"), &Z_Registration_Info_UScriptStruct_PawnActionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnActionEvent), 691200159U) },
		{ FPawnActionStack::StaticStruct, Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewStructOps, TEXT("PawnActionStack"), &Z_Registration_Info_UScriptStruct_PawnActionStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnActionStack), 2905795445U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, UDEPRECATED_PawnActionsComponent::StaticClass, TEXT("UDEPRECATED_PawnActionsComponent"), &Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnActionsComponent), 3570552867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_4205699846(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
