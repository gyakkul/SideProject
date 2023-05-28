// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActivatableWidget() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomain_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnWidgetActivationChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWidgetActivationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetActivationChanged)
{
	OnWidgetActivationChanged.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCommonActivatableWidget::execGetDesiredFocusTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetDesiredFocusTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidget::execBindVisibilityToActivation)
	{
		P_GET_OBJECT(UCommonActivatableWidget,Z_Param_ActivatableWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindVisibilityToActivation(Z_Param_ActivatableWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidget::execSetBindVisibilities)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_OnActivatedVisibility);
		P_GET_ENUM(ESlateVisibility,Z_Param_OnDeactivatedVisibility);
		P_GET_UBOOL(Z_Param_bInAllActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBindVisibilities(ESlateVisibility(Z_Param_OnActivatedVisibility),ESlateVisibility(Z_Param_OnDeactivatedVisibility),Z_Param_bInAllActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidget::execDeactivateWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidget::execActivateWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActivatableWidget::execIsActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivated();
		P_NATIVE_END;
	}
	struct CommonActivatableWidget_eventBP_GetDesiredFocusTarget_Parms
	{
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		CommonActivatableWidget_eventBP_GetDesiredFocusTarget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CommonActivatableWidget_eventBP_OnHandleBackAction_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		CommonActivatableWidget_eventBP_OnHandleBackAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UCommonActivatableWidget_BP_GetDesiredFocusTarget = FName(TEXT("BP_GetDesiredFocusTarget"));
	UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget() const
	{
		CommonActivatableWidget_eventBP_GetDesiredFocusTarget_Parms Parms;
		const_cast<UCommonActivatableWidget*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCommonActivatableWidget_BP_GetDesiredFocusTarget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCommonActivatableWidget_BP_OnActivated = FName(TEXT("BP_OnActivated"));
	void UCommonActivatableWidget::BP_OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonActivatableWidget_BP_OnActivated),NULL);
	}
	static FName NAME_UCommonActivatableWidget_BP_OnDeactivated = FName(TEXT("BP_OnDeactivated"));
	void UCommonActivatableWidget::BP_OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonActivatableWidget_BP_OnDeactivated),NULL);
	}
	static FName NAME_UCommonActivatableWidget_BP_OnHandleBackAction = FName(TEXT("BP_OnHandleBackAction"));
	bool UCommonActivatableWidget::BP_OnHandleBackAction()
	{
		CommonActivatableWidget_eventBP_OnHandleBackAction_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCommonActivatableWidget_BP_OnHandleBackAction),&Parms);
		return !!Parms.ReturnValue;
	}
	void UCommonActivatableWidget::StaticRegisterNativesUCommonActivatableWidget()
	{
		UClass* Class = UCommonActivatableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateWidget", &UCommonActivatableWidget::execActivateWidget },
			{ "BindVisibilityToActivation", &UCommonActivatableWidget::execBindVisibilityToActivation },
			{ "DeactivateWidget", &UCommonActivatableWidget::execDeactivateWidget },
			{ "GetDesiredFocusTarget", &UCommonActivatableWidget::execGetDesiredFocusTarget },
			{ "IsActivated", &UCommonActivatableWidget::execIsActivated },
			{ "SetBindVisibilities", &UCommonActivatableWidget::execSetBindVisibilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "ActivateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics
	{
		struct CommonActivatableWidget_eventBindVisibilityToActivation_Parms
		{
			UCommonActivatableWidget* ActivatableWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatableWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatableWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::NewProp_ActivatableWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::NewProp_ActivatableWidget = { "ActivatableWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidget_eventBindVisibilityToActivation_Parms, ActivatableWidget), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::NewProp_ActivatableWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::NewProp_ActivatableWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::NewProp_ActivatableWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "Comment", "/**\n\x09 * Bind our visibility to the activation of another widget, useful for making mouse collisions behave similiar to console navigation w.r.t activation\n\x09 * Will immediately update visibility based on the bound widget activation & visibilites set by SetBindVisibilities.\n\x09 *\n\x09 * @param\x09""ActivatableWidget\x09\x09- The widget whose activation / deactivation will modify our visibility \n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Bind our visibility to the activation of another widget, useful for making mouse collisions behave similiar to console navigation w.r.t activation\nWill immediately update visibility based on the bound widget activation & visibilites set by SetBindVisibilities.\n\n@param       ActivatableWidget               - The widget whose activation / deactivation will modify our visibility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "BindVisibilityToActivation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::CommonActivatableWidget_eventBindVisibilityToActivation_Parms), Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidget_eventBP_GetDesiredFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "Comment", "/** \n\x09 * Implement to provide the desired widget to focus if/when this activatable becomes the primary active widget.\n\x09 * Note: This is a fallback used only if the native class parentage does not provide a target.\n\x09 */" },
		{ "DisplayName", "Get Desired Focus Target" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Implement to provide the desired widget to focus if/when this activatable becomes the primary active widget.\nNote: This is a fallback used only if the native class parentage does not provide a target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "BP_GetDesiredFocusTarget", nullptr, nullptr, sizeof(CommonActivatableWidget_eventBP_GetDesiredFocusTarget_Parms), Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "DisplayName", "On Activated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "BP_OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "DisplayName", "On Deactivated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "BP_OnDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonActivatableWidget_eventBP_OnHandleBackAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonActivatableWidget_eventBP_OnHandleBackAction_Parms), &Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "Comment", "/** \n\x09 * Override in BP implementations to provide custom behavior when receiving a back action \n\x09 * Note: Only called if native code in the base class hasn't handled it in NativeOnHandleBackAction \n\x09 */" },
		{ "DisplayName", "On Handle Back Action" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Override in BP implementations to provide custom behavior when receiving a back action\nNote: Only called if native code in the base class hasn't handled it in NativeOnHandleBackAction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "BP_OnHandleBackAction", nullptr, nullptr, sizeof(CommonActivatableWidget_eventBP_OnHandleBackAction_Parms), Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "DeactivateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics
	{
		struct CommonActivatableWidget_eventGetDesiredFocusTarget_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidget_eventGetDesiredFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "Comment", "/** Returns the desired widget to focus when this Widget Activates. */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Returns the desired widget to focus when this Widget Activates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "GetDesiredFocusTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::CommonActivatableWidget_eventGetDesiredFocusTarget_Parms), Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics
	{
		struct CommonActivatableWidget_eventIsActivated_Parms
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
	void Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonActivatableWidget_eventIsActivated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonActivatableWidget_eventIsActivated_Parms), &Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "IsActivated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::CommonActivatableWidget_eventIsActivated_Parms), Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_IsActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_IsActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics
	{
		struct CommonActivatableWidget_eventSetBindVisibilities_Parms
		{
			ESlateVisibility OnActivatedVisibility;
			ESlateVisibility OnDeactivatedVisibility;
			bool bInAllActive;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnActivatedVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnActivatedVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnDeactivatedVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnDeactivatedVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInAllActive_MetaData[];
#endif
		static void NewProp_bInAllActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnActivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnActivatedVisibility = { "OnActivatedVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidget_eventSetBindVisibilities_Parms, OnActivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnDeactivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnDeactivatedVisibility = { "OnDeactivatedVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActivatableWidget_eventSetBindVisibilities_Parms, OnDeactivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive_MetaData[] = {
		{ "DisplayName", "All Active" },
	};
#endif
	void Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive_SetBit(void* Obj)
	{
		((CommonActivatableWidget_eventSetBindVisibilities_Parms*)Obj)->bInAllActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive = { "bInAllActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonActivatableWidget_eventSetBindVisibilities_Parms), &Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnActivatedVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnActivatedVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnDeactivatedVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_OnDeactivatedVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::NewProp_bInAllActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "ActivatableWidget" },
		{ "Comment", "/**\n\x09 * Visibilities to use for when bound widgets in BindVisibilityToActivation are activated.\n\x09 *\n\x09 * @param\x09OnActivatedVisibility\x09- Visibility for when bound widgets are active\n\x09 * @param\x09OnDeactivatedVisibility - Visibility for when bound widgets are not active, not used if this widget has activation / deactivation visibilities\n\x09 * @param\x09""bInAllActive\x09\x09\x09- True if we should switch to activated visibility only when all bound widgets are active\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Visibilities to use for when bound widgets in BindVisibilityToActivation are activated.\n\n@param       OnActivatedVisibility   - Visibility for when bound widgets are active\n@param       OnDeactivatedVisibility - Visibility for when bound widgets are not active, not used if this widget has activation / deactivation visibilities\n@param       bInAllActive                    - True if we should switch to activated visibility only when all bound widgets are active" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActivatableWidget, nullptr, "SetBindVisibilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::CommonActivatableWidget_eventSetBindVisibilities_Parms), Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActivatableWidget);
	UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister()
	{
		return UCommonActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBackHandler_MetaData[];
#endif
		static void NewProp_bIsBackHandler_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBackHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBackActionDisplayedInActionBar_MetaData[];
#endif
		static void NewProp_bIsBackActionDisplayedInActionBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBackActionDisplayedInActionBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsActivationFocus_MetaData[];
#endif
		static void NewProp_bSupportsActivationFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsActivationFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsModal_MetaData[];
#endif
		static void NewProp_bIsModal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRestoreFocus_MetaData[];
#endif
		static void NewProp_bAutoRestoreFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRestoreFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideActionDomain_MetaData[];
#endif
		static void NewProp_bOverrideActionDomain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideActionDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDomainOverride_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActionDomainOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnWidgetActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnWidgetActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnWidgetDeactivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnWidgetDeactivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_VisibilityBoundWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityBoundWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibilityBoundWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetVisibilityOnActivated_MetaData[];
#endif
		static void NewProp_bSetVisibilityOnActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetVisibilityOnActivated;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivatedVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivatedVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetVisibilityOnDeactivated_MetaData[];
#endif
		static void NewProp_bSetVisibilityOnDeactivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetVisibilityOnDeactivated;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeactivatedVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivatedVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeactivatedVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonActivatableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonActivatableWidget_ActivateWidget, "ActivateWidget" }, // 3115451834
		{ &Z_Construct_UFunction_UCommonActivatableWidget_BindVisibilityToActivation, "BindVisibilityToActivation" }, // 3236980918
		{ &Z_Construct_UFunction_UCommonActivatableWidget_BP_GetDesiredFocusTarget, "BP_GetDesiredFocusTarget" }, // 742259152
		{ &Z_Construct_UFunction_UCommonActivatableWidget_BP_OnActivated, "BP_OnActivated" }, // 1763727612
		{ &Z_Construct_UFunction_UCommonActivatableWidget_BP_OnDeactivated, "BP_OnDeactivated" }, // 869127780
		{ &Z_Construct_UFunction_UCommonActivatableWidget_BP_OnHandleBackAction, "BP_OnHandleBackAction" }, // 1925676216
		{ &Z_Construct_UFunction_UCommonActivatableWidget_DeactivateWidget, "DeactivateWidget" }, // 4219820652
		{ &Z_Construct_UFunction_UCommonActivatableWidget_GetDesiredFocusTarget, "GetDesiredFocusTarget" }, // 297493038
		{ &Z_Construct_UFunction_UCommonActivatableWidget_IsActivated, "IsActivated" }, // 3739439707
		{ &Z_Construct_UFunction_UCommonActivatableWidget_SetBindVisibilities, "SetBindVisibilities" }, // 2509531737
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The base for widgets that are capable of being \"activated\" and \"deactivated\" during their lifetime without being otherwise modified or destroyed. \n *\n * This is generally desired for one or more of the following purposes:\n *\x09- This widget can turn on/off without being removed from the hierarchy (or otherwise reconstructing the underlying SWidgets), so Construct/Destruct are insufficient\n *\x09- You'd like to be able to \"go back\" from this widget, whether that means back a breadcrumb, closing a modal, or something else. This is built-in here.\n *\x09- This widget's place in the hierarchy is such that it defines a meaningful node-point in the tree of activatable widgets through which input is routed to all widgets.\n *\n * By default, an activatable widget:\n *\x09- Is not automatically activated upon construction\n *\x09- Does not register to receive back actions (or any other actions, for that matter)\n *\x09- If classified as a back handler, is automatically deactivated (but not destroyed) when it receives a back action\n * \n * Note that removing an activatable widget from the UI (i.e. triggering Destruct()) will always deactivate it, even if the UWidget is not destroyed.\n * Re-constructing the underlying SWidget will only result in re-activation if auto-activate is enabled.\n *\n * TODO: ADD MORE INFO ON INPUTS\n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "The base for widgets that are capable of being \"activated\" and \"deactivated\" during their lifetime without being otherwise modified or destroyed.\n\nThis is generally desired for one or more of the following purposes:\n    - This widget can turn on/off without being removed from the hierarchy (or otherwise reconstructing the underlying SWidgets), so Construct/Destruct are insufficient\n    - You'd like to be able to \"go back\" from this widget, whether that means back a breadcrumb, closing a modal, or something else. This is built-in here.\n    - This widget's place in the hierarchy is such that it defines a meaningful node-point in the tree of activatable widgets through which input is routed to all widgets.\n\nBy default, an activatable widget:\n    - Is not automatically activated upon construction\n    - Does not register to receive back actions (or any other actions, for that matter)\n    - If classified as a back handler, is automatically deactivated (but not destroyed) when it receives a back action\n\nNote that removing an activatable widget from the UI (i.e. triggering Destruct()) will always deactivate it, even if the UWidget is not destroyed.\nRe-constructing the underlying SWidget will only result in re-activation if auto-activate is enabled.\n\nTODO: ADD MORE INFO ON INPUTS" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler_MetaData[] = {
		{ "Category", "Back" },
		{ "Comment", "/** True to receive \"Back\" actions automatically. Custom back handler behavior can be provided, default is to deactivate. */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True to receive \"Back\" actions automatically. Custom back handler behavior can be provided, default is to deactivate." },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bIsBackHandler = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler = { "bIsBackHandler", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar_MetaData[] = {
		{ "Category", "Back" },
		{ "Comment", "/** True to receive \"Back\" actions automatically. Custom back handler behavior can be provided, default is to deactivate. */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True to receive \"Back\" actions automatically. Custom back handler behavior can be provided, default is to deactivate." },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bIsBackActionDisplayedInActionBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar = { "bIsBackActionDisplayedInActionBar", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** True to automatically activate upon construction */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True to automatically activate upon construction" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/**\n\x09 * True if this widget is a candidate to receive/route focus or specify a desired UIInputConfig when active.\n\x09 * Primary reason for disabling is for utility sub-widgets within a larger screen that possess actions, but are never\n\x09 * intended to be involved in navigation or dictate changes to the active UI input config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True if this widget is a candidate to receive/route focus or specify a desired UIInputConfig when active.\nPrimary reason for disabling is for utility sub-widgets within a larger screen that possess actions, but are never\nintended to be involved in navigation or dictate changes to the active UI input config." },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bSupportsActivationFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus = { "bSupportsActivationFocus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** \n\x09 * True to have this widget be treated as a root node for input routing, regardless of its actual parentage.\n\x09 * Should seldom be needed, but useful in cases where a child widget should prevent all action processing by parents, even though they remain active (ex: modal popup menu).\n\x09 */" },
		{ "EditCondition", "bSupportsActivationFocus" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True to have this widget be treated as a root node for input routing, regardless of its actual parentage.\nShould seldom be needed, but useful in cases where a child widget should prevent all action processing by parents, even though they remain active (ex: modal popup menu)." },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bIsModal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal = { "bIsModal", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** \n\x09 * True to prefer automatically restoring focus to the widget that was focused when this widget last became the non-leafmost-active-widget.\n\x09 * If true and a valid restoration candidate exists, we'll use that. If it doesn't, we rely on GetDesiredFocusTarget()\n\x09 * If false, we simply always rely on GetDesiredFocusTarget()\n\x09 */" },
		{ "EditCondition", "bSupportsActivationFocus" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "True to prefer automatically restoring focus to the widget that was focused when this widget last became the non-leafmost-active-widget.\nIf true and a valid restoration candidate exists, we'll use that. If it doesn't, we rely on GetDesiredFocusTarget()\nIf false, we simply always rely on GetDesiredFocusTarget()" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bAutoRestoreFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus = { "bAutoRestoreFocus", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain_MetaData[] = {
		{ "Category", "Input" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bOverrideActionDomain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain = { "bOverrideActionDomain", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Optional mapping context to be applied & removed on activation & deactivation respectfully. */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Optional mapping context to be applied & removed on activation & deactivation respectfully." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Enhanced Input priority. Higher priority input mappings will be prioritized over mappings with a lower priority. */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Enhanced Input priority. Higher priority input mappings will be prioritized over mappings with a lower priority." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, InputMappingPriority), METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMappingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMappingPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActionDomainOverride_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Enable to override the inherited ActionDomain from owning CommonActivatableWidget.\n\x09 */" },
		{ "EditCondition", "bOverrideActionDomain" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Enable to override the inherited ActionDomain from owning CommonActivatableWidget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActionDomainOverride = { "ActionDomainOverride", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, ActionDomainOverride), Z_Construct_UClass_UCommonInputActionDomain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActionDomainOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActionDomainOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "Comment", "/** Fires when the widget is activated. */" },
		{ "DisplayName", "On Widget Activated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Fires when the widget is activated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetActivated = { "BP_OnWidgetActivated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, BP_OnWidgetActivated), Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetActivated_MetaData)) }; // 1737669308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "Comment", "/** Fires when the widget is deactivated. */" },
		{ "DisplayName", "On Widget Deactivated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "Fires when the widget is deactivated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated = { "BP_OnWidgetDeactivated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, BP_OnWidgetDeactivated), Z_Construct_UDelegateFunction_CommonUI_OnWidgetActivationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated_MetaData)) }; // 1737669308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivatableWidget" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets_Inner = { "VisibilityBoundWidgets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets_MetaData[] = {
		{ "Comment", "/** List of widgets whose collective activation controls our visibility. */" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
		{ "ToolTip", "List of widgets whose collective activation controls our visibility." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets = { "VisibilityBoundWidgets", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, VisibilityBoundWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData[] = {
		{ "Category", "Activation" },
		{ "InlineEditConditionToggle", "ActivatedVisibility" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bSetVisibilityOnActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated = { "bSetVisibilityOnActivated", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData[] = {
		{ "Category", "Activation" },
		{ "EditCondition", "bSetVisibilityOnActivated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility = { "ActivatedVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, ActivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility_MetaData)) }; // 2244982430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData[] = {
		{ "Category", "Activation" },
		{ "InlineEditConditionToggle", "DeactivatedVisibility" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_SetBit(void* Obj)
	{
		((UCommonActivatableWidget*)Obj)->bSetVisibilityOnDeactivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated = { "bSetVisibilityOnDeactivated", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonActivatableWidget), &Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData[] = {
		{ "Category", "Activation" },
		{ "EditCondition", "bSetVisibilityOnDeactivated" },
		{ "ModuleRelativePath", "Public/CommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility = { "DeactivatedVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActivatableWidget, DeactivatedVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility_MetaData)) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonActivatableWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsBackActionDisplayedInActionBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSupportsActivationFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsModal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bAutoRestoreFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bOverrideActionDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_InputMappingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActionDomainOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_BP_OnWidgetDeactivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_VisibilityBoundWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_ActivatedVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_bSetVisibilityOnDeactivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActivatableWidget_Statics::NewProp_DeactivatedVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActivatableWidget_Statics::ClassParams = {
		&UCommonActivatableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonActivatableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActivatableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActivatableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_UCommonActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActivatableWidget.OuterSingleton, Z_Construct_UClass_UCommonActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActivatableWidget.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActivatableWidget>()
	{
		return UCommonActivatableWidget::StaticClass();
	}
	UCommonActivatableWidget::UCommonActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActivatableWidget);
	UCommonActivatableWidget::~UCommonActivatableWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonActivatableWidget, UCommonActivatableWidget::StaticClass, TEXT("UCommonActivatableWidget"), &Z_Registration_Info_UClass_UCommonActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActivatableWidget), 747806149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_2963660497(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActivatableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
