// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActionWidget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActionWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics
	{
		struct CommonActionWidget_eventOnInputMethodChanged_Parms
		{
			bool bUsingGamepad;
		};
		static void NewProp_bUsingGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit(void* Obj)
	{
		((CommonActionWidget_eventOnInputMethodChanged_Parms*)Obj)->bUsingGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad = { "bUsingGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonActionWidget_eventOnInputMethodChanged_Parms), &Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "OnInputMethodChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::CommonActionWidget_eventOnInputMethodChanged_Parms), Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonActionWidget::FOnInputMethodChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputMethodChanged, bool bUsingGamepad)
{
	struct CommonActionWidget_eventOnInputMethodChanged_Parms
	{
		bool bUsingGamepad;
	};
	CommonActionWidget_eventOnInputMethodChanged_Parms Parms;
	Parms.bUsingGamepad=bUsingGamepad ? true : false;
	OnInputMethodChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonActionWidget::execIsHeldAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeldAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execSetIconRimBrush)
	{
		P_GET_STRUCT(FSlateBrush,Z_Param_InIconRimBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIconRimBrush(Z_Param_InIconRimBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execSetInputActions)
	{
		P_GET_TARRAY(FDataTableRowHandle,Z_Param_NewInputActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputActions(Z_Param_NewInputActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execSetInputAction)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputAction(Z_Param_InputActionRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execSetEnhancedInputAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InInputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnhancedInputAction(Z_Param_InInputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execGetDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonActionWidget::execGetIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetIcon();
		P_NATIVE_END;
	}
	void UCommonActionWidget::StaticRegisterNativesUCommonActionWidget()
	{
		UClass* Class = UCommonActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &UCommonActionWidget::execGetDisplayText },
			{ "GetIcon", &UCommonActionWidget::execGetIcon },
			{ "IsHeldAction", &UCommonActionWidget::execIsHeldAction },
			{ "SetEnhancedInputAction", &UCommonActionWidget::execSetEnhancedInputAction },
			{ "SetIconRimBrush", &UCommonActionWidget::execSetIconRimBrush },
			{ "SetInputAction", &UCommonActionWidget::execSetInputAction },
			{ "SetInputActions", &UCommonActionWidget::execSetInputActions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics
	{
		struct CommonActionWidget_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::CommonActionWidget_eventGetDisplayText_Parms), Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics
	{
		struct CommonActionWidget_eventGetIcon_Parms
		{
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventGetIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "Comment", "/** End UWidet */" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "ToolTip", "End UWidet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "GetIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::CommonActionWidget_eventGetIcon_Parms), Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_GetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics
	{
		struct CommonActionWidget_eventIsHeldAction_Parms
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
	void Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonActionWidget_eventIsHeldAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonActionWidget_eventIsHeldAction_Parms), &Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "IsHeldAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::CommonActionWidget_eventIsHeldAction_Parms), Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_IsHeldAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics
	{
		struct CommonActionWidget_eventSetEnhancedInputAction_Parms
		{
			UInputAction* InInputAction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::NewProp_InInputAction = { "InInputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetEnhancedInputAction_Parms, InInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::NewProp_InInputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "SetEnhancedInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::CommonActionWidget_eventSetEnhancedInputAction_Parms), Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics
	{
		struct CommonActionWidget_eventSetIconRimBrush_Parms
		{
			FSlateBrush InIconRimBrush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InIconRimBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::NewProp_InIconRimBrush = { "InIconRimBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetIconRimBrush_Parms, InIconRimBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::NewProp_InIconRimBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "SetIconRimBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::CommonActionWidget_eventSetIconRimBrush_Parms), Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics
	{
		struct CommonActionWidget_eventSetInputAction_Parms
		{
			FDataTableRowHandle InputActionRow;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::NewProp_InputActionRow = { "InputActionRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetInputAction_Parms, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::NewProp_InputActionRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "SetInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::CommonActionWidget_eventSetInputAction_Parms), Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics
	{
		struct CommonActionWidget_eventSetInputActions_Parms
		{
			TArray<FDataTableRowHandle> NewInputActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputActions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::NewProp_NewInputActions_Inner = { "NewInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::NewProp_NewInputActions = { "NewInputActions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetInputActions_Parms, NewInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::NewProp_NewInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::NewProp_NewInputActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, nullptr, "SetInputActions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::CommonActionWidget_eventSetInputActions_Parms), Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetInputActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetInputActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActionWidget);
	UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister()
	{
		return UCommonActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInputMethodChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputMethodChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressMaterialBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressMaterialBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressMaterialParam_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProgressMaterialParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconRimBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconRimBrush;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnhancedInputAction;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDataRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionDataRow;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressDynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProgressDynamicMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonActionWidget_GetDisplayText, "GetDisplayText" }, // 341867390
		{ &Z_Construct_UFunction_UCommonActionWidget_GetIcon, "GetIcon" }, // 1606163807
		{ &Z_Construct_UFunction_UCommonActionWidget_IsHeldAction, "IsHeldAction" }, // 2777087697
		{ &Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature, "OnInputMethodChanged__DelegateSignature" }, // 2108582982
		{ &Z_Construct_UFunction_UCommonActionWidget_SetEnhancedInputAction, "SetEnhancedInputAction" }, // 2355447298
		{ &Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush, "SetIconRimBrush" }, // 2860670038
		{ &Z_Construct_UFunction_UCommonActionWidget_SetInputAction, "SetInputAction" }, // 4239104356
		{ &Z_Construct_UFunction_UCommonActionWidget_SetInputActions, "SetInputActions" }, // 3436640141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A widget that shows a platform-specific icon for the given input action.\n */" },
		{ "IncludePath", "CommonActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "ToolTip", "A widget that shows a platform-specific icon for the given input action." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged = { "OnInputMethodChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, OnInputMethodChanged), Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData)) }; // 2108582982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "Comment", "/**\n\x09 * The material to use when showing held progress, the progress will be sent using the material parameter\n\x09 * defined by ProgressMaterialParam and the value will range from 0..1.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "ToolTip", "The material to use when showing held progress, the progress will be sent using the material parameter\ndefined by ProgressMaterialParam and the value will range from 0..1." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush = { "ProgressMaterialBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressMaterialBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "Comment", "/** The material parameter on ProgressMaterialBrush to update the held percentage.  This value will be 0..1. */" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "ToolTip", "The material parameter on ProgressMaterialBrush to update the held percentage.  This value will be 0..1." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam = { "ProgressMaterialParam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressMaterialParam), METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush = { "IconRimBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, IconRimBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "Comment", "/**\n\x09 * List all the input actions that this common action widget is intended to represent.  In some cases you might have multiple actions\n\x09 * that you need to represent as a single entry in the UI.  For example - zoom, might be mouse wheel up or down, but you just need to\n\x09 * show a single icon for Up & Down on the mouse, this solves that problem.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
		{ "TitleProperty", "RowName" },
		{ "ToolTip", "List all the input actions that this common action widget is intended to represent.  In some cases you might have multiple actions\nthat you need to represent as a single entry in the UI.  For example - zoom, might be mouse wheel up or down, but you just need to\nshow a single icon for Up & Down on the mouse, this solves that problem." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_EnhancedInputAction_MetaData[] = {
		{ "Category", "CommonActionWidget" },
		{ "Comment", "/**\n\x09 * Input Action this common action widget is intended to represent. Optional if using EnhancedInputs\n\x09 */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
		{ "ToolTip", "Input Action this common action widget is intended to represent. Optional if using EnhancedInputs" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_EnhancedInputAction = { "EnhancedInputAction", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, EnhancedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_EnhancedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_EnhancedInputAction_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow = { "InputActionDataRow", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, InputActionDataRow_DEPRECATED), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData)) }; // 2710926200
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial = { "ProgressDynamicMaterial", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_EnhancedInputAction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActionWidget_Statics::ClassParams = {
		&UCommonActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActionWidget()
	{
		if (!Z_Registration_Info_UClass_UCommonActionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActionWidget.OuterSingleton, Z_Construct_UClass_UCommonActionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActionWidget.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActionWidget>()
	{
		return UCommonActionWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActionWidget);
	UCommonActionWidget::~UCommonActionWidget() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonActionWidget)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonActionWidget, UCommonActionWidget::StaticClass, TEXT("UCommonActionWidget"), &Z_Registration_Info_UClass_UCommonActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActionWidget), 1029352844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_2666709475(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
