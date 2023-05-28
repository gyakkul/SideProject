// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/Switcher/VCamStateSwitcherWidget.h"
#include "UI/Switcher/VCamWidgetConnectionState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamStateSwitcherWidget() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamStateSwitcherWidget();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamWidgetConnectionState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics
	{
		struct _Script_VCamCore_eventChangeConnectionStateEvent_Parms
		{
			UVCamStateSwitcherWidget* Widget;
			FName OldState;
			FName NewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldState;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamCore_eventChangeConnectionStateEvent_Parms, Widget), Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamCore_eventChangeConnectionStateEvent_Parms, OldState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamCore_eventChangeConnectionStateEvent_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_OldState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamCore, nullptr, "ChangeConnectionStateEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::_Script_VCamCore_eventChangeConnectionStateEvent_Parms), Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FChangeConnectionStateEvent_DelegateWrapper(const FMulticastScriptDelegate& ChangeConnectionStateEvent, UVCamStateSwitcherWidget* Widget, FName OldState, FName NewState)
{
	struct _Script_VCamCore_eventChangeConnectionStateEvent_Parms
	{
		UVCamStateSwitcherWidget* Widget;
		FName OldState;
		FName NewState;
	};
	_Script_VCamCore_eventChangeConnectionStateEvent_Parms Parms;
	Parms.Widget=Widget;
	Parms.OldState=OldState;
	Parms.NewState=NewState;
	ChangeConnectionStateEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVCamStateSwitcherWidget::execGetStateInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_State);
		P_GET_STRUCT_REF(FVCamWidgetConnectionState,Z_Param_Out_OutStateInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStateInfo(Z_Param_State,Z_Param_Out_OutStateInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamStateSwitcherWidget::execGetStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamStateSwitcherWidget::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamStateSwitcherWidget::execSetCurrentState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_GET_UBOOL(Z_Param_bReinitializeConnections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentState(Z_Param_NewState,Z_Param_bForceUpdate,Z_Param_bReinitializeConnections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamStateSwitcherWidget::execK2_SetCurrentState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetCurrentState(Z_Param_NewState);
		P_NATIVE_END;
	}
	void UVCamStateSwitcherWidget::StaticRegisterNativesUVCamStateSwitcherWidget()
	{
		UClass* Class = UVCamStateSwitcherWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &UVCamStateSwitcherWidget::execGetCurrentState },
			{ "GetStateInfo", &UVCamStateSwitcherWidget::execGetStateInfo },
			{ "GetStates", &UVCamStateSwitcherWidget::execGetStates },
			{ "K2_SetCurrentState", &UVCamStateSwitcherWidget::execK2_SetCurrentState },
			{ "SetCurrentState", &UVCamStateSwitcherWidget::execSetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics
	{
		struct VCamStateSwitcherWidget_eventGetCurrentState_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventGetCurrentState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamStateSwitcherWidget, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::VCamStateSwitcherWidget_eventGetCurrentState_Parms), Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics
	{
		struct VCamStateSwitcherWidget_eventGetStateInfo_Parms
		{
			FName State;
			FVCamWidgetConnectionState OutStateInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_State;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutStateInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventGetStateInfo_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_OutStateInfo = { "OutStateInfo", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventGetStateInfo_Parms, OutStateInfo), Z_Construct_UScriptStruct_FVCamWidgetConnectionState, METADATA_PARAMS(nullptr, 0) }; // 1131637468
	void Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamStateSwitcherWidget_eventGetStateInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamStateSwitcherWidget_eventGetStateInfo_Parms), &Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_OutStateInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamStateSwitcherWidget, nullptr, "GetStateInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::VCamStateSwitcherWidget_eventGetStateInfo_Parms), Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics
	{
		struct VCamStateSwitcherWidget_eventGetStates_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventGetStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamStateSwitcherWidget, nullptr, "GetStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::VCamStateSwitcherWidget_eventGetStates_Parms), Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics
	{
		struct VCamStateSwitcherWidget_eventK2_SetCurrentState_Parms
		{
			FName NewState;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventK2_SetCurrentState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamStateSwitcherWidget, nullptr, "K2_SetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::VCamStateSwitcherWidget_eventK2_SetCurrentState_Parms), Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics
	{
		struct VCamStateSwitcherWidget_eventSetCurrentState_Parms
		{
			FName NewState;
			bool bForceUpdate;
			bool bReinitializeConnections;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewState;
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static void NewProp_bReinitializeConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitializeConnections;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamStateSwitcherWidget_eventSetCurrentState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((VCamStateSwitcherWidget_eventSetCurrentState_Parms*)Obj)->bForceUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamStateSwitcherWidget_eventSetCurrentState_Parms), &Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bReinitializeConnections_SetBit(void* Obj)
	{
		((VCamStateSwitcherWidget_eventSetCurrentState_Parms*)Obj)->bReinitializeConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bReinitializeConnections = { "bReinitializeConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamStateSwitcherWidget_eventSetCurrentState_Parms), &Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bReinitializeConnections_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamStateSwitcherWidget_eventSetCurrentState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamStateSwitcherWidget_eventSetCurrentState_Parms), &Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bForceUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_bReinitializeConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Connections" },
		{ "Comment", "/**\n\x09 * Switches to given state - if the state transition is valid, UpdateConnectionTargets will be called.\n\x09 * If CurrentState == NewState, then this call will be ignored (unless bForceUpdate == true).\n\x09 * \n\x09 * @param NewState The new state to switch to\n\x09 * @param bForceUpdate Call UpdateConnectionTargets even if the CurrentState == NewState\n\x09 * @param bReinitializeConnections Parameter to pass to UpdateConnectionTargets. If true, ReinitializeConnections will be called.\n\x09 */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "CPP_Default_bReinitializeConnections", "true" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ToolTip", "Switches to given state - if the state transition is valid, UpdateConnectionTargets will be called.\nIf CurrentState == NewState, then this call will be ignored (unless bForceUpdate == true).\n\n@param NewState The new state to switch to\n@param bForceUpdate Call UpdateConnectionTargets even if the CurrentState == NewState\n@param bReinitializeConnections Parameter to pass to UpdateConnectionTargets. If true, ReinitializeConnections will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamStateSwitcherWidget, nullptr, "SetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::VCamStateSwitcherWidget_eventSetCurrentState_Parms), Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamStateSwitcherWidget);
	UClass* Z_Construct_UClass_UVCamStateSwitcherWidget_NoRegister()
	{
		return UVCamStateSwitcherWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVCamStateSwitcherWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostStateChanged;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_States_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_States;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamStateSwitcherWidget_GetCurrentState, "GetCurrentState" }, // 1904995357
		{ &Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStateInfo, "GetStateInfo" }, // 1354560822
		{ &Z_Construct_UFunction_UVCamStateSwitcherWidget_GetStates, "GetStates" }, // 1766504587
		{ &Z_Construct_UFunction_UVCamStateSwitcherWidget_K2_SetCurrentState, "K2_SetCurrentState" }, // 1956191430
		{ &Z_Construct_UFunction_UVCamStateSwitcherWidget_SetCurrentState, "SetCurrentState" }, // 1588216191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget that has a set of states you can switch between using SetCurrentState.\n * A state is a collection of VCamWidgets whose connections should be rebound to new connection points.\n */" },
		{ "IncludePath", "UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ToolTip", "A widget that has a set of states you can switch between using SetCurrentState.\nA state is a collection of VCamWidgets whose connections should be rebound to new connection points." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPreStateChanged_MetaData[] = {
		{ "Category", "Connections" },
		{ "Comment", "/** Executes when the state is about to be changed */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ToolTip", "Executes when the state is about to be changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPreStateChanged = { "OnPreStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamStateSwitcherWidget, OnPreStateChanged), Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPreStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPreStateChanged_MetaData)) }; // 3160449155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPostStateChanged_MetaData[] = {
		{ "Category", "Connections" },
		{ "Comment", "/** Executes when after the state has been changed */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ToolTip", "Executes when after the state has been changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPostStateChanged = { "OnPostStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamStateSwitcherWidget, OnPostStateChanged), Z_Construct_UDelegateFunction_VCamCore_ChangeConnectionStateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPostStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPostStateChanged_MetaData)) }; // 3160449155
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVCamWidgetConnectionState, METADATA_PARAMS(nullptr, 0) }; // 1131637468
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Connections" },
		{ "Comment", "/** The states */" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
		{ "ToolTip", "The states" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0040008000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamStateSwitcherWidget, States), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_MetaData)) }; // 1131637468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_CurrentState_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentState" },
		{ "BlueprintSetter", "K2_SetCurrentState" },
		{ "Category", "Connections" },
		{ "ModuleRelativePath", "Public/UI/Switcher/VCamStateSwitcherWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamStateSwitcherWidget, CurrentState), METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_CurrentState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPreStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_OnPostStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamStateSwitcherWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::ClassParams = {
		&UVCamStateSwitcherWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamStateSwitcherWidget()
	{
		if (!Z_Registration_Info_UClass_UVCamStateSwitcherWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamStateSwitcherWidget.OuterSingleton, Z_Construct_UClass_UVCamStateSwitcherWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamStateSwitcherWidget.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamStateSwitcherWidget>()
	{
		return UVCamStateSwitcherWidget::StaticClass();
	}
	UVCamStateSwitcherWidget::UVCamStateSwitcherWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamStateSwitcherWidget);
	UVCamStateSwitcherWidget::~UVCamStateSwitcherWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamStateSwitcherWidget, UVCamStateSwitcherWidget::StaticClass, TEXT("UVCamStateSwitcherWidget"), &Z_Registration_Info_UClass_UVCamStateSwitcherWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamStateSwitcherWidget), 2740084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_3756109567(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_Switcher_VCamStateSwitcherWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
